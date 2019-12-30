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
    this._capacity = 5;
    this._size = 0;
    this._array = {};

    for (let i = 0; i < this._capacity; i++) {
      this._array[i] = null;
    }
  }

  get size() {
    return this._size;
  }

  get capacity() {
    return this._capacity;
  }

  get loadfactor() {
    return this.size / this.capacity;
  }

  push(data) {
    if (this.loadfactor > 0.7) {
      console.log("resizing...");
      const newArray = { ...this._array };
      const newCapacity = this._capacity * 2;
      for (let i = this._capacity; i < newArray; i++) {
        newArray[i] = null;
      }
      this._capacity = newCapacity;
      this._array = newArray;
    }

    // else just add to the end
    this._array[this._size++] = data;
  }

  at(index) {
    if(index < this.capacity) {
      return this._array[index]
    } else {
      throw Error("index out of bounds")
    }
  }

}

module.exports = CustomArray;
