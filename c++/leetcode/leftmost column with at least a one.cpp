/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution
{
public:
  int leftMostColumnWithOne(BinaryMatrix &binaryMatrix)
  {
    const auto dim = binaryMatrix.dimensions();
    const int row = dim[0];
    const int col = dim[1];

    int ans = col;

    for (int i = 0; i < row; ++i)
    {
      int start = ans == col ? col - 1 : ans;
      int end = 0;

      if (binaryMatrix.get(i, start) == 1)
      {
        while (start >= end)
        {
          auto mid = end + ((start - end) / 2);
          auto val = binaryMatrix.get(i, mid);

          if (start == end && val == 1)
          {
            ans = start;
            break;
          }

          if (val == 1)
            start = mid;
          else
            end = ++mid;
        }
      }
    }

    return ans == col ? -1 : ans;
  }
};