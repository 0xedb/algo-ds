

void moveZeroes(int *nums, int numsSize)
{
  int anchor = 0;
  int explorer = 0;

  while (explorer < numsSize)
  {
    if (nums[explorer] != 0)
    {
      if (explorer != anchor)
      {
        int temp = nums[anchor];
        nums[anchor] = nums[explorer];
        nums[explorer] = temp;
      }
      anchor++;
    }
    explorer++;
  }
}
