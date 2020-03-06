

void reverseString(char *s, int sSize)
{
  int start = 0;
  int end = sSize - 1;

  while (start < end)
  {
    int temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    start++;
    end--;
  }
}