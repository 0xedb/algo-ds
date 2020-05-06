/**
 * Initialize your data structure here.
 */

const TrieNode = function (letter) {
  this.letters = new Map();
  this.val = letter;
  this.is_word = false;
};

var Trie = function () {
  this.root = new TrieNode("");
};

/**
 * Inserts a word into the trie.
 * @param {string} word
 * @return {void}
 */
Trie.prototype.insert = function (word) {
  let nav = this.root;

  for (let i of word) {
    if (!nav.letters.has(i)) nav.letters.set(i, new TrieNode(i));

    nav = nav.letters.get(i);
  }

  nav.is_word = true;
};

/**
 * Returns if the word is in the trie.
 * @param {string} word
 * @return {boolean}
 */
Trie.prototype.search = function (word) {
  let nav = this.root;

  for (let i of word) {
    if (!nav.letters.has(i)) return false;

    nav = nav.letters.get(i);
  }

  return nav.is_word;
};

/**
 * Returns if there is any word in the trie that starts with the given prefix.
 * @param {string} prefix
 * @return {boolean}
 */
Trie.prototype.startsWith = function (prefix) {
  let nav = this.root;

  for (let i of prefix) {
    if (!nav.letters.has(i)) return false;

    nav = nav.letters.get(i);
  }

  return true;
};

/**
 * Your Trie object will be instantiated and called as such:
 * var obj = new Trie()
 * obj.insert(word)
 * var param_2 = obj.search(word)
 * var param_3 = obj.startsWith(prefix)
 */
