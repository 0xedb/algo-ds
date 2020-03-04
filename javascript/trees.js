class Node {
  constructor(data) {
    this.data = data;
    this.right = null;
    this.left = null;
  }

  toString() {
    return `\n${this.data} \t${this.left} \t ${this.right}\n`;
  }

  static height(root) {
    if (!root) return -1;
    if (!root.right && !root.left) return 0;

    let leftHeight = 0;
    let rightHeight = 0;

    if (root.left) leftHeight = 1 + Node.height(root.left);
    if (root.right) rightHeight = 1 + Node.height(root.right);

    return Math.max(leftHeight, rightHeight);
  }

  static height2(root) {
    if (!root) return -1;
    return 1 + Math.max(Node.height2(root.left), Node.height2(root.right));
  }

  static delete(root, num) {
    let parent;
    // find
    while (root) {
      if (root.data === num) {
        // no child
        if (!root.left && !root.right) {  
          root.data = null
        }

        // 1 child
        else if (!root.left || !root.right) {
          let child = root.left || root.right;
          root.data = child.data;
          child.data = null 

          console.log('this')
        } else {
          // 2 children
          // find minimum in right 
          let cur = root
          let min = cur.right
          while(cur) {
            if(cur.left) {
              min = cur
              cur = cur.left
            }
          }
          // duplicate value to current node
          // root.data = min.data
          // root.right = min.right
          // remove duplicate
          // min.data = null
          // min.right = null
          root.data = min.data
          root.right = min
          min.data = null
          
        }
        return true;
      }
      parent = root;
      if (num > root.data) {
        root = root.right;
      } else {
        root = root.left;
      }
    }

    return false;
  }
}

let sll = new Node(10);
// sll.left = new Node(2);
// sll.left.left = new Node(4);
// sll.left.right = new Node(5);
// sll.right = new Node(3);
sll.left = new Node(-1);
sll.right = new Node(21);
sll.left.left = new Node(-10);
sll.left.right = new Node(4);
sll.right.left = new Node(15);
sll.right.right = new Node(30);
sll.right.right.right = new Node(45);
sll.right.right.right.left = new Node(42);
sll.right.right.right.right = new Node(60);
// console.log(Node.height(sll));
// console.log(Node.height2(sll));
console.log(Node.delete(sll, 21));

console.log(sll.toString()); 
