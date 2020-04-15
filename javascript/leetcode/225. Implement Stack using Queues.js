/**
 * Initialize your data structure here.
 */
var MyStack = function () {
  this.one = [];
  this.two = [];
};

/**
 * Push element x onto stack.
 * @param {number} x
 * @return {void}
 */
MyStack.prototype.push = function (x) {
  this.one.push(x);
};

/**
 * Removes the element on top of the stack and returns that element.
 * @return {number}
 */
MyStack.prototype.pop = function () {
  let sz = this.one.length;

  while (--sz) {
    let f = this.one[0];
    this.one.shift();
    this.two.push(f);
  }

  let ans = this.one[0];
  this.one.shift();

  while (this.two.length) {
    let f = this.two[0];
    this.two.shift();
    this.one.push(f);
  }

  return ans;
};

/**
 * Get the top element.
 * @return {number}
 */
MyStack.prototype.top = function () {
  let sz = this.one.length + 1;
  let last = this.one[0];

  while (--sz) {
    last = this.one[0];
    this.one.shift();
    this.two.push(last);
  }

  while (this.two.length) {
    let f = this.two[0];
    this.two.shift();
    this.one.push(f);
  }

  return last;
};

/**
 * Returns whether the stack is empty.
 * @return {boolean}
 */
MyStack.prototype.empty = function () {
  return !this.one.length;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * var obj = new MyStack()
 * obj.push(x)
 * var param_2 = obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.empty()
 */
