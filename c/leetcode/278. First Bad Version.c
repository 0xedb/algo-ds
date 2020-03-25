// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n)
{
  if (n == 1)
    return 1;
  int start = 1;

  while (start < n)
  {
    int mid = start + ((n - start) / 2);
    bool bad = isBadVersion(mid);
    if (bad)
      n = mid;
    else
      start = mid + 1;
  }

  return start;
}
