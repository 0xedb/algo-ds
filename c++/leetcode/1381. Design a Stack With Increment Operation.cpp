class CustomStack
{
  int size;
  int capacity;
  struct Node
  {
    int data;
    Node *next;
    Node(int data) : data{data} {};
  } * head;

public:
  CustomStack(int maxSize)
  {
    capacity = maxSize;
    head = nullptr;
    size = 0;
  }

  void push(int x)
  {
    Node *latest = new Node{x};
    if (size != capacity)
    {
      latest->next = head;
      head = latest;
      size++;
    }
  }

  int pop()
  {
    if (!size)
      return -1;
    Node *to_delete = head;
    int val = to_delete->data;
    head = head->next;
    delete to_delete;
    size--;
    return val;
  }

  void increment(int k, int val)
  {
    vector<int> temp;
    Node *nav = head;
    if (size < k)
    {
      // do it for everything in stack
      while (nav)
      {
        nav->data += val;
        nav = nav->next;
      }
    }
    else
    {

      for (int i = 1; i <= size - k; i++)
      {
        nav = nav->next;
      }

      while (nav)
      {
        nav->data += val;
        nav = nav->next;
      }
    }
  }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */