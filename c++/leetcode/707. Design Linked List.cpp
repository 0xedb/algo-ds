struct Node
{
  int val;
  Node *next;
  Node(int val) : val{val} {};
};

class MyLinkedList
{
  int size;
  Node *head;
  Node *tail;

public:
  /** Initialize your data structure here. */
  MyLinkedList()
  {
    size = -1;
    head = new Node(0);
    tail = new Node(0);
  }

  /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
  int get(int index)
  {
    if (size == -1 || index < 0 || index > size)
      return -1;
    if (index == 0)
      return head->next->val;
    if (index == size)
      return tail->next->val;

    Node *nav = head;

    for (int i = 0; i <= index; i++)
    {
      nav = nav->next;
    }

    return nav->val;
  }

  /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
  void addAtHead(int val)
  {
    Node *latest = new Node(val);
    latest->next = head->next;
    head->next = latest;
    size++;

    if (size == 0)
      tail->next = latest;
  }

  /** Append a node of value val to the last element of the linked list. */
  void addAtTail(int val)
  {
    if (size == -1)
      addAtHead(val);
    else
    {
      Node *latest = new Node(val);
      tail->next->next = latest;
      tail->next = latest;
      size++;
    }
  }

  /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
  void addAtIndex(int index, int val)
  {
    if (index > size + 1 || index < 0)
      return;
    if (index == 0)
      addAtHead(val);
    else if (index == size + 1)
      addAtTail(val);
    else
    {
      Node *nav = head;
      Node *latest = new Node(val);
      for (int i = 0; i < index; i++)
      {
        nav = nav->next;
      }
      latest->next = nav->next;
      nav->next = latest;
      size++;
    }
  }

  /** Delete the index-th node in the linked list, if the index is valid. */
  void deleteAtIndex(int index)
  {
    if (index > size || index < 0)
      return;
    if (index == 0)
    {
      Node *to_del = head->next;
      head->next = head->next->next;
      delete to_del;
      to_del = nullptr;
      size--;
      if (size == -1)
      {
        head->next = nullptr;
        tail->next = nullptr;
      }
    }
    else
    {
      Node *nav = head;
      for (int i = 0; i < index; i++)
      {
        nav = nav->next;
      }

      if (index == size)
      {
        nav->next = nullptr;
        tail->next = nav;
      }
      else
      {
        Node *to_del = nav->next;
        nav->next = nav->next->next;
        delete to_del;
        to_del = nullptr;
      }
      size--;
    }
  }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */