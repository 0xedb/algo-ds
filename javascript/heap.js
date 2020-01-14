// min heap
class Heap {
  constructor() {
    this._heap = [];
    this._heap.push(null); // don't use 0th index
    this._currentIndex = 0;
  }

  heapifyInsert(index) {
    if (index < 2) return;
    const parent = Math.ceil((index - 1) / 2);
    const ok = this._heap[parent] <= this._heap[index];
    if (!ok) {
      const data = this._heap[parent];
      this._heap[parent] = this._heap[index];
      this._heap[index] = data;
      this.heapifyInsert(parent);
    }
  }

  insert(data) {
    this._heap.push(data);
    this._currentIndex++;
    this.heapifyInsert(this._currentIndex);
    console.log("in\t", this._heap);
  }

  remove() {
    if (this._currentIndex > 0) {
      const removed = this._heap.pop();
      this._currentIndex--;
      if (this._currentIndex !== 0) {
        this._heap[1] = removed;
      }
      this.heapifyRemove(1);
    } else {
      throw Error("Nothing to remove");
    }
    console.log("rem\t", this._heap);
  }

  heapifyRemove(index) {
    // reorder on removal
    if (this._currentIndex > 1) {
      let min;
      let left = 2 * index;
      let right = left + 1;
      let current = this._heap[index];

      // find min of children
      if (left <= this._currentIndex) {
        min = left;
        if (right <= this._currentIndex) {
          min = this._heap[right] < this._heap[left] ? right : left;
        }
      }

      if (current > min) {
        this._heap[index] = this._heap[min];
        this._heap[min] = current;
        this.heapifyRemove(min);
      }
    }
  }

  peek() {
    if (this._currentIndex > 0) {
      return this._heap[1];
    } else throw Error("Nothing to show");
  }
}

const heap = new Heap();
heap.insert(10);
heap.remove();
heap.insert(9);
heap.insert(110);
heap.remove();
heap.insert(-100);
heap.remove();
heap.insert(-3);
heap.insert(-203);
heap.remove();
