class MinStack
{
  struct Node
  {
    int data;
    Node *next;
    Node(int val) : data{val} {};
  } * head, *min;

public:
  /** initialize your data structure here. */
  MinStack()
  {
    head = nullptr;
    min = nullptr;
  }

  void push(int x)
  {
    Node *latest = new Node(x);
    latest->next = head;
    head = latest;

    Node *late = new Node(x);
    // add to min
    if (!min)
      min = latest;
    else
    {
      if (x <= min->data)
      {
        late->next = min;
        min = late;
      }
    }
  }

  void pop()
  {
    if (head)
    {
      int del = head->data;
      head = head->next;
      if (min->data == del)
      {
        min = min->next;
      }
    }
  }

  int top()
  {
    return head->data;
  }

  int getMin()
  {
    return min->data;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */