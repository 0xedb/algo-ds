// size
// push
// capacity
// at(index)
// push(item)
// insert(item)
// preprend(item)
// pop
// delete(index)
// remove(item)
// find

class CustomArray {
  constructor() {
    this._capacity = 10;
    this._size = 0;
  }

  get size() {
    return this._size;
  }

  get capacity() {
    return this._capacity;
  }
}


module.exports = CustomArray