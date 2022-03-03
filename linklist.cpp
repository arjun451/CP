#include<iostream>
#include"Node.cpp"
using namespace std;
void printLL(Node *head)
{
while(head!=nullptr)
 {
     cout<<head->data<<" ";
     head = head->next;
 }
}
Node* takein()
{
    Node *head=nullptr;
    int data;
    cin>>data;
    while(data!=-1)
    {
        if(head==nullptr)
        {
            Node *newNode = new Node(data);
            head = newNode;
        }
        else{
                 Node *newNode = new Node(data);
                 Node *ptr;
                 ptr= head;
                 while(ptr!=nullptr)
                 {
                  ptr=ptr->next;
                 }
                 ptr->next = newNode;
                 
            
        }
        cin>>data;
    }
    return head;
}
int main()
{
 /* Node *head;
 Node *n1 = new Node(20); 
 head = n1;
 Node *n2 = new Node(25); 
n1->next=n2;
 Node *n3 = new Node(30);
 n2->next= n3;
  Node *n4 = new Node(40);
  n3->next = n4;
 printLL(head);
   */
Node *head= takein();
 printLL(head);


return 0;
}