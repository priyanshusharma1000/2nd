#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertattail(node *&head, int d)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *nodetoinsert = new node(d);
    temp->next = nodetoinsert;
    nodetoinsert->next = NULL;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertatposition(int pos, node *&head, int d)
{
    if (pos == 1)
    {
        insertathead(head, d);
        return;
    }
    int cnt = 1;
    node *temp = head;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(head, d);
        return;
    }

    node *nodetoinsert = new node(d);
    temp->next = nodetoinsert;
    nodetoinsert->next = temp->next;
}
void deletenode(node* &head, int pos)
{
    
    if (pos == 1)
    {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {node *pre = NULL;
    node *curr = head;
        int cnt = 1;
        while (cnt < pos)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    print(head);
    insertathead(head, 9);
    print(head);
    insertattail(head, 11);
    print(head);
    insertatposition(1, head, 8);
    print(head);
    insertatposition(5, head, 12);
    print(head);
    deletenode(head,1);
    print(head);
    
    deletenode(head,2);
    print(head);
    deletenode(head,3);
    print(head);
    deletenode(head,1);
    print(head);
    deletenode(head,1);
    print(head);
    return 0;
}