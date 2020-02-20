class Node {
  constructor(data) {
    this.data = data;
    this.right = null;
    this.left = null;
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
}

let sll = new Node(10);
// sll.left = new Node(2);
// sll.left.left = new Node(4);
// sll.left.right = new Node(5);
// sll.right = new Node(3);
sll.left = new Node(-1);
sll.right = new Node(21);
sll.left.left = new Node(-10);
sll.left.right = new Node(4)
sll.right.left = new Node(15);
sll.right.right = new Node(30);
sll.right.right.right = new Node(45);
sll.right.right.right.left = new Node(42);
sll.right.right.right.right = new Node(60);
console.log(Node.height(sll));
console.log(Node.height2(sll));

// console.dir(sll)
