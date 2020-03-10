

bool isPalindrome(char *s)
{
  if (strlen(s) == 0)
    return true;
  int start = 0;
  int end = strlen(s);

  while (start < end)
  {
    if (isalnum(s[start]) && isalnum(s[end]))
    {
      if (tolower(s[start]) == tolower(s[end]))
      {
        start++;
        end--;
      }
      else
        return false;
    }

    if (!isalnum(s[start]))
      start++;
    if (!isalnum(s[end]))
      end--;
  }

  return true;
}
