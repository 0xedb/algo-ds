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

  insert(data) {
    this._heap.push(data);
    this._currentIndex++;
    this.heapifyInsert(this._currentIndex);
    console.log(this._heap);
  }

  remove() {
    if (this._currentIndex > 0) {
      const removed = this._heap.pop();
      this._heap[1] = removed;
      this._currentIndex--;
      this.heapifyRemove(1);
    } else {
      throw Error("Nothing to remove");
    }
    console.log(this._heap);
  }

  peek() {
    if (this._currentIndex > 0) {
      return this._heap[1];
    } else throw Error("Nothing to show");
  }
}

const pQueue = new Heap();
pQueue.insert(10);
pQueue.insert(9);
pQueue.insert(10);
pQueue.remove(); 
console.log("least:\t", pQueue.peek());
pQueue.insert(-100);
pQueue.remove();
pQueue.insert(-3);
pQueue.insert(-203);
pQueue.remove();
console.log("least:\t", pQueue.peek());
