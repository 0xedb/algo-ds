class Solution
{
public:
  vector<int> sortArrayByParity(vector<int> &A)
  {
    int pos = 0;

    for (int i = 0; i < A.size(); i++)
    {
      if (A[i] % 2 == 0)
      {
        int temp = A[pos];
        A[pos] = A[i];
        A[i] = temp;
        pos++;
      }
    }

    return A;
  }
};