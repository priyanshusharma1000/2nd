 #include<iostream>
using namespace std;
class node{
public:
int data;
node* prev;
node* next;
node(int d){
data = d;
prev =NULL;
next = NULL;
}
};
void insertattail(node* &head,node* &tail,int d){
if(tail==NULL){
    node* temp = new node(d);
    tail = temp;
    head = temp;
}
else{
node* temp = head;
while(temp->next!=NULL){
    temp =temp->next;
}
node* nodetoinsert = new node(d);
temp->next=nodetoinsert;
nodetoinsert->prev=temp->next;
tail =nodetoinsert;

}}
void insertathead(node* &head,node* &tail,int d){
    if(head==NULL){
    node* temp = new node(d);
    tail=  temp;
    head = temp;
}else{
    node* temp = new node(d);
    temp->next=head;
    head->prev=temp->next;
    head = temp;
}}
void insertatposition(node* &head,node* &tail,int p,int d){
if(p==1){
    insertathead(head,tail,d);
    return;
}
else{
node* temp = head;
int cnt =1;
while(cnt<p-1){
 temp = temp->next;
 cnt++;
}                              
if(temp->next==NULL){
    insertattail(head,tail,d);
    return;
}
else{
node* nodetoinsert = new node(d);
nodetoinsert->next = temp->next;
temp->next->prev=nodetoinsert;
temp->next = nodetoinsert;
nodetoinsert->prev=temp;
}}
}
void print(node* &head){
node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
cout<<endl;
}
void deletenode(node* &head,int p){
if(p==1){
    node* temp = head;
    temp->next->prev=NULL;
    head = temp->next;
    temp->next=NULL;
    delete temp;
}
else{
node* curr =head;
node* prev =NULL;
int cnt =1;
while(cnt<p){
    prev=curr;
    curr=curr->next;
    cnt++;
}
curr->prev=NULL;
prev->next=curr->next;
curr->next=NULL;
delete curr;
}
}
int getlength(node* &head){
node* temp = head;
int cnt =0;
while(temp!=NULL){
    temp=temp->next;
    cnt++;
}
return cnt;

}

int main(){
    
    node* head = NULL;
    node* tail = NULL;
    insertathead(head,tail,8);
    print(head);
    insertattail(head,tail,9);
    print(head);
    insertatposition(head,tail,2,11);
    print(head);
    insertatposition(head,tail,4,12);
    print(head);
    deletenode(head,4);
    print(head);
    deletenode(head,1);
    print(head);
    deletenode(head,2);
    print(head);
    cout<<endl<<getlength(head);





}