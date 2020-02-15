// struct inside class


class MyCircularQueue
{
private:
  struct Node
  {
    int val;
    Node *next;
    Node(int val) : val{val} {};
  } * head, *tail;
  int length, capacity;

public:
  /** Initialize your data structure here. Set the size of the queue to be k. */
  MyCircularQueue(int k) : capacity{k}
  {
    head = new Node(0);
    tail = head;
    length = 0;
  }

  /** Insert an element into the circular queue. Return true if the operation is successful. */
  bool enQueue(int value)
  {
    if (isFull())
      return false;

    Node *latest = new Node(value);
    if (isEmpty())
    {
      head = latest;
      tail = latest;
    }
    else
    {
      tail->next = latest;
      tail = latest;
    }
    length++;
    return true;
  }

  /** Delete an element from the circular queue. Return true if the operation is successful. */
  bool deQueue()
  {
    if (isEmpty())
      return false;

    head = head->next;
    length--;
    return true;
  }

  /** Get the front item from the queue. */
  int Front()
  {
    return isEmpty() ? -1 : head->val;
  }

  /** Get the last item from the queue. */
  int Rear()
  {
    return isEmpty() ? -1 : tail->val;
  }

  /** Checks whether the circular queue is empty or not. */
  bool isEmpty()
  {
    return length == 0;
  }

  /** Checks whether the circular queue is full or not. */
  bool isFull()
  {
    return length == capacity;
  }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */