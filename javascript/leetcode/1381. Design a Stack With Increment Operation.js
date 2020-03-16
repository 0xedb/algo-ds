/**
 * @param {number} maxSize
 */
var CustomStack = function(maxSize) {
  this.capacity = maxSize;
  this.size = 0;
  this.node = [];
};

/**
 * @param {number} x
 * @return {void}
 */
CustomStack.prototype.push = function(x) {
  if (this.size != this.capacity) {
    this.node.push(x);
    this.size++;
  }
};

/**
 * @return {number}
 */
CustomStack.prototype.pop = function() {
  if (!this.size) return -1;
  this.size--;
  return this.node.pop();
};

/**
 * @param {number} k
 * @param {number} val
 * @return {void}
 */
CustomStack.prototype.increment = function(k, val) {
  let end = this.size;
  if (!(this.size < k)) end = k;
  for (let i = 0; i < end; i++) this.node[i] += val;
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * var obj = new CustomStack(maxSize)
 * obj.push(x)
 * var param_2 = obj.pop()
 * obj.increment(k,val)
 */
