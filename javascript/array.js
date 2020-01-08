
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

  find(item) {
    for (let i = 0; i < this.size; i++) {
      if (this._array[i] === item) {
        return i;
      }
    }
    return -1;
  }

  remove(item) {
    let found = find(item);
    if (found === -1) return false;
    else {
      for(let i = 0; i < this.size; i++) {
        // remove 
        delete this._array[found]
        // move over item
        // reduce size
        // decrease capacity as needed
      }
    }
  }

  checkAdjust() {
    if (this.loadfactor >= 0.7) {
      console.log("resizing...");
      const newArray = { ...this._array };
      const newCapacity = this._capacity * 2;
      for (let i = this._capacity; i < newArray; i++) {
        newArray[i] = null;
      }
      this._capacity = newCapacity;
      this._array = newArray;
    }
  }

  insert(item, index) {
    // see if its at end
    // insert and move over other items
    // increase size
    // call check capacity method
  }

  prepend(item) {
    
  }

  delete(index) {

  }

  pop() {
    // reduce size
    // slash capacity
    let deletedItem;

    if (this.size > 0) {
      deletedItem = delete this._array[this._size-- - 1];
    } else throw Error("nothing to remove");
    if (this.loadfactor < 0.7) {
      const newCapacity = this.capacity / 2;
      for (let i = newCapacity; i < this.capacity; i++) {
        delete this._array[i];
      }
      this._capacity = newCapacity;
    }
    return deletedItem;
  }

  push(data) {
    if (this.loadfactor >= 0.7) {
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
    if (index < this.capacity) {
      return this._array[index];
    } else {
      throw Error("index out of bounds");
    }
  }
}

module.exports = CustomArray;
