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


void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
    cout<<temp->a<<" ";
    temp= temp->next;
    }
    cout<<endl;
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

node *removeDuplicates(node *head)
{
     node* curr = head;
    while(curr!=NULL){
        node* temp = curr->next;
        while(temp!=NULL){
            if(temp->a==curr->a){
                node* del = temp;
               node* curre = head;
                node* prev = NULL;
                while(curre!=del){
                    prev=curre;
                    curre = curre->next;
                }
                prev->next = curre->next;
                temp = temp->next;
                del->next=NULL;
                delete(del);
                
            }
            else{
                temp = temp->next;
            }
        }
        curr=curr->next;
     }
   return head; 
}
int main(){

node* head =NULL ;
node* tail = NULL;
insertattail(head,tail,3);
//print(head);
insertattail(head,tail,3);
//print(head);
insertatposition(1,4,head,tail);
//print(head);
insertattail(head,tail,4);
//print(head);
insertatposition(5,6,head,tail);
//print(head);
insertathead(tail,head,5);
print(head);
cout<<endl<<endl;
node* a1 =removeDuplicates(head);
print(a1);
/*cout<<endl<<endl;
deletenode(1,head);
cout<<"HEAD :"<<head->a<<endl<<"TAIL :"<<tail->a<<endl;
cout<<endl<<endl;
print(head);
deletenode(6,head);
print(head);
cout<<"HEAD :"<<head->a<<endl<<"TAIL :"<<tail->a<<endl;*/


return 0;
}






































































































































































