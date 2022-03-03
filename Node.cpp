class Node
{
private:
    /* data */
public:
  int data;
  Node *next;
    Node(int data);
    ~Node();
};

Node::Node( int data)
{
    this->data=data;
    next=nullptr;
}

Node::~Node()
{
}
