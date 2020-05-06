class Trie
{
  struct TrieNode
  {
    bool is_word;
    unordered_map<char, TrieNode *> letters;
    char val;

    TrieNode(const char v) : val{v}
    {
      is_word = false;
    }
  };

  TrieNode *root;

public:
  /** Initialize your data structure here. */
  Trie()
  {
    root = new TrieNode(0);
  }

  /** Inserts a word into the trie. */
  void insert(string word)
  {
    auto nav = root;

    for (auto i : word)
    {
      if (nav->letters.find(i) == nav->letters.end())
      {
        nav->letters[i] = new TrieNode(i);
      }

      nav = nav->letters[i];
    }

    nav->is_word = true;
  }

  /** Returns if the word is in the trie. */
  bool search(string word)
  {
    auto nav = root;

    for (auto i : word)
    {
      if (nav->letters.find(i) == nav->letters.end())
        return false;

      nav = nav->letters[i];
    }

    return nav->is_word;
  }

  /** Returns if there is any word in the trie that starts with the given prefix. */
  bool startsWith(string prefix)
  {
    auto nav = root;

    for (auto i : prefix)
    {
      if (nav->letters.find(i) == nav->letters.end())
        return false;

      nav = nav->letters[i];
    }

    return true;
  }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */