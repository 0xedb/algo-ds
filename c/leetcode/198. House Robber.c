

int rob(int *nums, int numsSize)
{
  if (numsSize == 0)
    return 0;
  int max = nums[0];

  for (int i = 0; i < numsSize; i++)
  {
    if (i < 2)
    {
      max = nums[i] > max ? nums[i] : max;
      nums[i] = max;
    }
    else
    {
      max = max >= nums[i] + nums[i - 2] ? max : nums[i] + nums[i - 2];
      nums[i] = max;
    }
  }

  return max;
}