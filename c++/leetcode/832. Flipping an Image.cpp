class Solution
{
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
  {
    for (int i = 0; i < A.size(); i++)
    {
      int start = 0;
      int end = A[i].size() - 1;

      while (start <= end)
      {
        A[i][start] = A[i][start] == 1 ? 0 : 1;
        if (start == end)
          break;

        A[i][end] = A[i][end] == 1 ? 0 : 1;

        // swap
        int temp = A[i][start];
        A[i][start++] = A[i][end];
        A[i][end--] = temp;
      }
    }

    return A;
  }
};