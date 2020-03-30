class Solution
{
public:
  int numJewelsInStones(string J, string S)
  {
    int count = 0;
    set<char> st(begin(J), end(J));

    for (auto w : S)
    {
      if (st.count(w))
        count++;
    }

    return count;
  }
};