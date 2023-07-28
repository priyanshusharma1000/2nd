#include<iostream>
using namespace std;
class node{
public:
int data;
node* prev;
node* next;
node(int d){
    this->data = d;
    this->prev = NULL;
    this->next=NULL;
}

};
void insertathead(node* &head,node* &tail,int d){
    if(tail==NULL){
    node* temp = new node(d);
    tail=  temp;
    head = temp;
}else{
    node* temp = new node(d);
    temp->next=head;
    head->prev=temp->next;
    head = temp;
}}
void print(node* &head){
node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
cout<<endl;
}
int main(){
    node* head =NULL;
    node* tail =NULL;
    insertathead(head,tail,30);
    print(head);
    insertathead(head,tail,20);
    print(head);
    insertathead(head,tail,10);
    print(head);
    return 0;
}
