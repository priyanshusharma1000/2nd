#include<iostream>
using namespace std;
class node{
public:
int a;
node* next;
node(int a){
    this->a=a;
    this->next=NULL;
}
~node(){
int value=this->a;
//memory free
if(this->next!=NULL){

delete next;
this->next =NULL;
}
cout<<"memory is free for node with data"<<value<<endl;


}
};
void deletenode(int pos,node* &head){
//deleting first node
if(pos==1){
node* temp=head;
head = head->next;
temp->next=NULL;
delete temp;
}
//deleteting middle and last node
else{
node* curr = head;
node* prev = NULL;
int cnt =1;
while(cnt<pos){
prev = curr;
curr=curr->next;
cnt++;
}
prev->next = curr->next;
curr->next = NULL;
delete curr;

}


}

void insertathead(node* &tail,node* &head,int d){
if(head==NULL){
node* temp = new node(10);
tail = temp;
head = temp;
}
else{
node *temp =new node(d);
temp->next=head;
head = temp;}
}
void insertattail(node* &head,node* &tail,int d ){
if(tail==NULL){
    node* temp =new node(d);
    head = temp;
    tail = temp;
}else{
node *temp =new node(d);
tail->next=temp;
tail=temp;
}}
void insertatposition(int p,int d,node* &head,node* &tail ){
if(p==1){
    insertathead(tail,head,d);
    return;
}

node *temp = head;
int cnt = 1;
while(cnt<p-1){
temp =temp->next;
cnt++;
}
if(temp->next == NULL){
    insertattail(head,tail,d);
    return;
}
//creating node for d
node* nodetoinsert=new node(d);
nodetoinsert->next=temp->next;
temp->next = nodetoinsert;

}
void reverse(node*&head,node*&curr,node*&prev)
{

//BASE CASE
if(curr==NULL){
  head = prev;
  return;  
}
node* forward = curr->next;
curr->next =prev;
reverse(head,forward,curr);
}
void iterreverse(node* &head,node*&curr,node* &prev){
while(curr!=NULL){
node * forward = curr->next;
curr->next =prev;
prev=curr;
curr = forward;
}
head = prev;
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
    cout<<temp->a<<" ";
    temp= temp->next;
    }
    cout<<endl;
}
int main(){

node* head =NULL ;
node* tail = NULL;
insertattail(head,tail,3);
insertattail(head,tail,5);
insertattail(head,tail,7);
insertattail(head,tail,9);
print(head);
cout<<endl<<endl;

node* curr =head;
node* prev =NULL;
/*reverse(head,curr,prev);
print(head);*/
iterreverse(head,curr,prev);
print(head);

return 0;
}






































































































































































