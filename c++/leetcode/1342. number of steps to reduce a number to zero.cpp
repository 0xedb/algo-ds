class Solution
{
public:
  int numberOfSteps(int num)
  {
    int steps{};

    while (num > 0)
    {
      if (num % 2 == 0)
      {
        num /= 2;
        steps++;
        continue;
      }
      num--;
      steps++;
    }
    return steps;
  }
};