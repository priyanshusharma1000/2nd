#include<iostream>
using namespace std;
class node
{public:
int data;
node* prev;
node* next;
public:
node(int d)
{
    data =d;
    prev =NULL;
    next =NULL;
}
};

void insertathead(int d,node* &head,node* &tail){
if(head==NULL){
    node* temp = new node(d);
    head = temp;
    tail=temp;
}
else{
     node* temp = new node(d);
      head->prev=temp->next;
      temp->next = head;
      head = temp;

}


}
void insertattail(int d,node* &head,node* &tail){
if(tail==NULL){
    node* temp = new node(d);
    head = temp;
    tail = temp;
}
else{
     node* temp = new node(d);
     tail->next= temp;
     temp->prev=tail->next;
     tail=temp;
}
}
void insertatpostion(int d,node* &head,node* &tail,int p){
    if(p==1){
       insertathead(d,head,tail);
       return;
    }
    else{
        int cnt =1;
        node* temp=head;
        while(cnt<p-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
         insertattail(d,head,tail);
         return;
        }
        else{

     node* nodetoinsert = new node(d);
nodetoinsert->next = temp->next;
temp->next->prev=nodetoinsert;
temp->next = nodetoinsert;
nodetoinsert->prev=temp;
    }
    }
}
void print(node* &head){
node* temp =head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp =temp->next;
}
cout<<endl;
}
void deletenode(int p,node* &head,node* &tail){
if(p==1){
node* temp=head;
head = temp->next;
temp->next=NULL;
head->prev=NULL;
delete temp;
}else{
node* curr=head;
node* pre = NULL;
int cnt =1;
while(cnt<p){
    pre =curr;
    curr=curr->next;
    cnt++;
}
if(curr->next==NULL){
    tail =pre;
    pre->next=NULL;
    curr->prev=NULL;
}
else{
pre->next=curr->next;
curr->next->prev=pre;
curr->prev=NULL;
curr->next=NULL;
delete curr;
}
}}
int main(){
node* head =NULL;
node* tail =NULL;
insertathead(10,head,tail);
print(head);
insertattail(20,head,tail);
print(head);
insertatpostion(15,head,tail,2);
print(head);
insertathead(5,head,tail);
print(head);
deletenode(1,head,tail);
print(head);
deletenode(3,head,tail);
print(head);
insertattail(19,head,tail);
print(head);




return 0;
}