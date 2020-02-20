class Node {
  constructor(data) {
    this.data = data
    this.right = null
    this.left = null
  }

  function height(root) {
    if(!root) return -1;
    if(!root.right && !root.left) return 0;

    if(root.right) {
      let rightHeight = 1 + height(root.right)
    } if(root.left) {
      let 
    }

    return Math.max(leftHeight, rightHeight);
  }
}


let sll = new Node(10);
sll.left = new Node(-1);
sll.right = new Node(21);
sll.left.left = new Node(-10);
sll.left.right = new Node(4)
sll.right.left = new Node(15);
sll.right.right = new Node(30);
sll.right.right.right = new Node(45);
sll.right.right.right.right = new Node(60);


console.dir(sll)