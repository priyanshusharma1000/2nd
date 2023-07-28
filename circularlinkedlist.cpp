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
void insertnode(node* &tail,int element,int d){
//empty list
if(tail==NULL){
    node* newnode =new node(d);
    tail =newnode;
    newnode->next=newnode;
}
//list is not empty means element is present
else{

node* curr = tail;
while(curr->data!=element){
    curr=curr->next;
}
//element found and current is pointing on it 
node* temp = new node(d);
temp->next = curr->next;
curr->next=temp;

}
}
void print(node* tail){
    if(tail==NULL){
      cout<<"bhaisahab list empty he ye kya kar rhe ho kahli print karwa rahe ho"<<endl;
    }
node* temp =tail;
do{
cout<<tail->data<<" ";
tail=tail->next;

}while(tail!=temp);
cout<<endl;
}
void deletenode(node* &tail,int val){
if(tail==NULL){
    cout<<"empty list he bhaishab fir se dekh lo ek baar"<<endl;
    return;
}
else{
//non empty
//assuming that value is present in list
node* prev = tail;
node* curr = prev->next;
while(curr->data!=val){
prev = curr;
curr =curr->next;

}
prev->next=curr->next;
//ek node wala case jha tail or curr or prev ek he node ko point kar rhe honge
if(prev==curr){
 tail=NULL;
}
else if(tail==curr){
    tail=prev;
}
curr->next=NULL;
delete curr;
}
}
bool iscircularlist(node* head){
    if(head==NULL){
        return true;
    }
    node*temp =head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==NULL){
        return false;
    }
    return true;
}
int main(){
node* tail =NULL;
//empty list ka case he ye
insertnode(tail,5,3);
print(tail);
insertnode(tail,3,5);
print(tail);
insertnode(tail,3,4);
print(tail);
insertnode(tail,5,6);
print(tail);
insertnode(tail,6,7);
print(tail);
if(iscircularlist(tail)){
  cout<<"CIRCULAR HE BHAISAHAB"<<endl;
}
else{
    cout<<"NOTCIRCULAR";
}
}