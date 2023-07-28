#include<vector>
#include<map>
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int d){
    data = d;
    next =NULL;
}
};
void insertattail(node* &tail,node* &head,int d){
if(tail==NULL){
    node* temp = new node(d);
    tail = temp;
    head = temp;
}
node* temp = new node(d);
tail->next = temp;
tail = temp;
}
void print(node* &head){
node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
}
node* removeduplicates(node* &head){
if(head==NULL){
    return NULL;
}
node* temp = head;
while(temp!=NULL){
    if( (temp->next!=NULL) &&(temp->data==temp->next->data) ){
        node* next_next = temp->next->next;
        node* nodetodelete = temp->next;
        delete(nodetodelete);
        temp->next =next_next;
    }
    else{
        temp=temp->next;
    }
}

return head;

}
node* unsoertremovedup(node* &head){
    map<int,bool>visited;
    node* temp = head;
    while(temp!=NULL){
        if(visited[temp->data]==true){
          node* curr = head;
          node* prev = NULL;
          while(curr!=temp){
          prev = curr;
          curr = curr->next;
            }
            prev->next = curr->next;
            temp = temp->next;
            curr->next = NULL;
            delete curr;

        }
        else{
            visited[temp->data]=true;
            temp =temp->next;
        }
    }
    return head;
}
bool ispalindrome(node* &head){
    if(head->next==NULL){
         return true;
    }
    node* temp = head;
    vector<int>ans;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp = temp->next;
    }
int s = 0;
int e = ans.size()-1;
while(s<=e){
if(ans[s]!=ans[e]){
    return false;
}
else{
    s++;
    e--;
}
}
return true;
}
int main(){
    node* head =NULL;
    node* tail =NULL;
    insertattail(tail,head,1);
    insertattail(tail,head,3);
    insertattail(tail,head,3);
    insertattail(tail,head,3);
    insertattail(tail,head,3);
    insertattail(tail,head,1);
    insertattail(tail,head,3);
    print(head);
    cout<<endl<<endl;
    if(ispalindrome(head)){
        cout<<"palindrome he number aapka"<<endl;
    }
    else{
        cout<<"not palindrome";
    }
    
    //node* ans = removeduplicates(head);
    //print(ans);
    //cout<<endl;
    //node*ans1 = unsoertremovedup(head);
    //print(ans1);
  return 0;
}
