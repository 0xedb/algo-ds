class Solution
{
public:
  int hammingDistance(int x, int y)
  {
    int ans = 0;
    int _xor = x xor y;

    while (_xor)
    {
      ans += _xor & 1 == 1 ? 1 : 0;
      _xor >>= 1;
    }

    return ans;
  }
};