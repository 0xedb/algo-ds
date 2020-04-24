class LRUCache
{
public:
  LRUCache(int capacity) : capacity{capacity}
  {
  }

  int get(int key)
  {
    auto item = cache.find(key);
    if (item == cache.end())
      return -1;

    lru.splice(lru.begin(), lru, item->second.second);
    // lru.erase(item -> second.second);
    // lru.push_front(item -> first);
    // item -> second.second = lru.begin();
    return item->second.first;
  }

  void put(int key, int value)
  {
    if (!capacity)
      return;

    auto item = cache.find(key);

    // if exist
    if (item != cache.end())
    {
      // update value
      item->second.first = value;

      // move to front
      // lru.erase(item -> second.second);
      // lru.push_front(item -> first);
      // item -> second.second = lru.begin();
      lru.splice(lru.begin(), lru, item->second.second);
      return;
    }

    if (capacity == cache.size())
    {
      cache.erase(lru.back());
      lru.pop_back();
    }

    lru.push_front(key);
    cache[key] = make_pair(value, lru.begin());
  }

private:
  const int capacity;
  list<int> lru;
  unordered_map<int, pair<int, list<int>::iterator>> cache;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */