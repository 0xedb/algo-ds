

int numJewelsInStones(char *J, char *S)
{
  int count = 0;

  for (int i = 0; i < strlen(S); i++)
  {
    if (strrchr(J, S[i]))
      count++;
  }

  return count;
}
