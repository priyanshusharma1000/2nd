#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int d){
    this->data=d;
    this->next=NULL;
}
};
void insertathead(node* &head,int d){
if(head==NULL){
    node* temp = new node(d);
    head = temp;
}
else{
node* nodetoinsert= new node(d);
nodetoinsert->next=head;
head = nodetoinsert;
}
}
void print(node* &head){
    if(head==NULL){
        cout<<"list empty he bhaisahab  kya print karne aa rhe ho"<<endl;
        return;
    }
    else{
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
}
void reverseiterative(node* &head){
node* curr = head;
node* prev = NULL;
node* forward = NULL;
while(curr!=NULL){
forward = curr->next;
curr->next = prev;
prev = curr;
curr=forward;
}
head = prev;
}
void reverse(node* &curr,node* &prev,node* &head){
if(curr==NULL){
    head = prev;
    return;
}
node* forward = curr->next;
curr->next=prev;
reverse(forward,curr,head);
}
void reverserecursion(node* &head){
node* curr = head;
node* prev = NULL;
reverse(curr,prev,head);

}
int main(){
node* head =NULL;
print(head);
insertathead(head,10);
print(head);
insertathead(head,5);
print(head);
insertathead(head,1);
print(head);
cout<<endl<<"after reverseiterative function is called LL become like this ----->"<<endl;
reverseiterative(head);
print(head);
cout<<endl<<"iterative ke baad ka data        :"<<head->data<<endl;
cout<<endl;
reverserecursion(head);
print(head);
cout<<endl<<"recursive ke baad ka data       :"<<head->data<<endl;



}