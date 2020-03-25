

int findDuplicate(int *nums, int numsSize)
{
  int *arr = (int *)malloc(sizeof(int) * numsSize + 1);

  for (int i = 0; i < numsSize; i++)
  {
    if (arr[nums[i]] == -1)
      return nums[i];
    else
      arr[nums[i]] = -1;
  }

  return 1;
}
