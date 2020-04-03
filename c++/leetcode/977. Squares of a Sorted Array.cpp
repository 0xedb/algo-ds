class Solution
{
public:
  vector<int> sortedSquares(vector<int> &A)
  {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto i : A)
    {
      i = std::abs(i);
      pq.push(i * i);
    }

    for (int i = 0; i < A.size(); i++)
    {
      A[i] = pq.top();
      pq.pop();
    }

    return A;
  }
};