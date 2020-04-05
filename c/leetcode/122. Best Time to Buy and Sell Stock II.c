

int maxProfit(int *prices, int pricesSize)
{
  if (!pricesSize)
    return 0;
  int max = 0;
  for (int i = 1; i < pricesSize; i++)
  {
    if (prices[i] > prices[i - 1])
      max += prices[i] - prices[i - 1];
  }

  return max;
}