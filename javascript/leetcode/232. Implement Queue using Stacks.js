/**
 * Initialize your data structure here.
 */
var MyQueue = function() {
  this.first = [];
  this.second = [];
};

/**
 * Push element x to the back of queue.
 * @param {number} x
 * @return {void}
 */
MyQueue.prototype.push = function(x) {
  while (this.second.length) {
    this.first.push(this.second.pop());
  }
  this.first.push(x);
};

/**
 * Removes the element from in front of queue and returns that element.
 * @return {number}
 */
MyQueue.prototype.pop = function() {
  while (this.first.length) {
    this.second.push(this.first.pop());
  }
  return this.second.pop();
};

/**
 * Get the front element.
 * @return {number}
 */
MyQueue.prototype.peek = function() {
  while (this.first.length) {
    this.second.push(this.first.pop());
  }
  return this.second[this.second.length - 1];
};

/**
 * Returns whether the queue is empty.
 * @return {boolean}
 */
MyQueue.prototype.empty = function() {
  return this.first.length + this.second.length == 0;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * var obj = new MyQueue()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.peek()
 * var param_4 = obj.empty()
 */
