class Solution {
public:
    bool search(vector<vector<char>>&, int, int, const string&, int, vector<vector<bool>>&);
    bool exist(vector<vector<char>>& board, string word) {
        int board_size = board.size(), col_size = board[0].size();
        vector<vector<bool>> visited(board_size, vector<bool>(col_size));
        
        for(int i = 0; i < board_size; ++i)
            for(int j = 0; j < col_size; ++j)
                if(board[i][j] == word[0] && search(board, i, j, word, 0, visited)) return true;
        
        return false;
    }
};

bool Solution::search(vector<vector<char>>& board, int i, int j, const string& word, int ind, vector<vector<bool>>& visited) {
    if(ind == word.length() - 1) return true;
    visited[i][j] = true;
    
    if(i > 0 && !visited[i - 1][j] && board[i - 1][j] == word[ind + 1] && search(board, i - 1, j, word, ind + 1, visited)) return true;
    if(j > 0 && !visited[i][j - 1] && board[i][j - 1] == word[ind + 1]  && search(board, i, j - 1, word, ind + 1, visited)) return true;
    
    if(i < board.size() - 1 && !visited[i + 1][j] && board[i + 1][j] == word[ind + 1]  && search(board, i + 1, j, word, ind + 1, visited)) return true;
    
    if(j < board[0].size() - 1 && !visited[i][j + 1] && board[i][j + 1] == word[ind + 1]  && search(board, i, j + 1, word, ind + 1, visited)) return true;
    
     
    visited[i][j] = false;
    return false;
}
