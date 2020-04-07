class Solution
{
public:
  int subtractProductAndSum(int n)
  {
    int product = 1;
    int sum = 0;
    const int factor = 10;

    while (n)
    {
      product *= n % factor;
      sum += n % factor;
      n = n / factor;
    }

    return product - sum;
  }
};