

int maxSubArray(int *nums, int numsSize)
{
  if (!numsSize)
    return 0;
  int max = nums[0];
  int sum = max;

  for (int i = 1; i < numsSize; i++)
  {
    sum = nums[i] > nums[i] + sum ? nums[i] : nums[i] + sum;
    max = max > sum ? max : sum;
  }

  return max;
}
