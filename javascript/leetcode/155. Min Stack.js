/**
 * initialize your data structure here.
 */
function Node(x) {
  this.next = null;
  this.data = x;
}

var MinStack = function() {
  this.head = null;
  this.min = null;
};

/**
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function(x) {
  let latest = new Node(x);
  latest.next = this.head;
  this.head = latest;

  let late = new Node(x);
  if (!this.min) this.min = late;
  else {
    if (x <= this.min.data) {
      late.next = this.min;
      this.min = late;
    }
  }
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function() {
  if (this.head) {
    let del = this.head.data;
    this.head = this.head.next;
    if (this.min.data === del) this.min = this.min.next;
  }
};

/**
 * @return {number}
 */
MinStack.prototype.top = function() {
  return this.head.data;
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function() {
  return this.min.data;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */
