class MyQueue
{
public:
  /** Initialize your data structure here. */
  stack<int> first;
  stack<int> second;

  MyQueue()
  {
  }

  /** Push element x to the back of queue. */
  void push(int x)
  {
    // copy over from 2
    while (second.size())
    {
      int item = second.top();
      second.pop();
      first.push(item);
    }
    first.push(x);
  }

  /** Removes the element from in front of queue and returns that element. */
  int pop()
  {
    // copy over from 1
    while (first.size())
    {
      int item = first.top();
      first.pop();
      second.push(item);
    }
    int item = second.top();
    second.pop();
    return item;
  }

  /** Get the front element. */
  int peek()
  {
    while (first.size())
    {
      int item = first.top();
      first.pop();
      second.push(item);
    }

    return second.top();
  }

  /** Returns whether the queue is empty. */
  bool empty()
  {
    return (first.size() + second.size()) == 0;
  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */