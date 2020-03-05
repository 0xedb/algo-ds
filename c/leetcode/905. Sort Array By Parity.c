

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortArrayByParity(int *A, int ASize, int *returnSize)
{
  int pos = 0;
  *returnSize = ASize;
  int *aa = malloc(sizeof(int) * ASize);

  for (int i = 0; i < ASize; i++)
  {
    if (A[i] % 2 == 0)
    {
      int temp = A[pos];
      A[pos] = A[i];
      A[i] = temp;
      pos++;
    }
  }

  aa = A;

  return aa;
}
