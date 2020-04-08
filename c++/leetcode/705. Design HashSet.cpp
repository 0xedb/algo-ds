class MyHashSet
{
  array<int, 1000001> h_set;

public:
  /** Initialize your data structure here. */
  MyHashSet()
  {
    fill(h_set.begin(), h_set.end(), 0);
  }

  void add(int key)
  {
    if (!h_set[key])
      h_set[key] = 1;
  }

  void remove(int key)
  {
    if (h_set[key])
      h_set[key] = 0;
  }

  /** Returns true if this set contains the specified element */
  bool contains(int key)
  {
    return h_set[key];
  }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */