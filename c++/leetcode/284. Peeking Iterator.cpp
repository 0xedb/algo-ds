// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.

class Iterator
{
  struct Data;
  Data *data;

public:
  Iterator(const vector<int> &nums);
  Iterator(const Iterator &iter);
  virtual ~Iterator();
  // Returns the next element in the iteration.
  int next();
  // Returns true if the iteration has more elements.
  bool hasNext() const;
};

class PeekingIterator : public Iterator
{
  int pos;
  vector<int> v;

public:
  PeekingIterator(const vector<int> &nums) : Iterator(nums), v{nums}
  {
    // Initialize any member here.
    // **DO NOT** save a copy of nums and manipulate it directly.
    // You should only use the Iterator interface methods.
    pos = -1;
  }

  // Returns the next element in the iteration without advancing the iterator.
  int peek()
  {
    if (hasNext())
      return v[pos + 1];
    return -1;
  }

  // hasNext() and next() should behave the same as in the Iterator interface.
  // Override them if needed.
  int next()
  {
    if (hasNext())
      return v[++pos];
    return -1;
  }

  bool hasNext() const
  {
    if (v.size() < 1)
      return false;
    return pos + 1 < v.size();
  }
};
