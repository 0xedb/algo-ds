

int removeElement(int *nums, int numsSize, int val)
{
  int first = 0;
  int last = numsSize - 1;
  int len = 0;

  while (first <= last)
  {
    if (nums[last] == val)
    {
      nums[last--] = val - 1;
      len++;
    }
    else
    {
      if (nums[first] == val)
      {
        nums[first++] = nums[last];
        nums[last--] = val - 1;
        len++;
      }
      else
        first++;
    }
  }

  return numsSize - len;
}
