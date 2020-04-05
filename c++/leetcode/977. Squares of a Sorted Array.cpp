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


// better & faster
class Solution
{
public:
  vector<int> sortedSquares(vector<int> &A)
  {
    if (!A.size())
      return A;
    const int sz = A.size();
    vector<int> b(sz, 0);
    int start = 0;
    int end = A.size() - 1;
    int pos = end;

    while (start <= end)
    {
      int sv = A[start] * A[start];
      int ev = A[end] * A[end];

      if (ev >= sv)
      {
        b[pos--] = ev;
        end--;
      }
      else
      {
        b[pos--] = sv;
        start++;
      }
    }
    return b;
  }
};