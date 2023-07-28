#include<iostream>
#include<queue>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
node(int data){
    this->data = data;
    left = NULL;
    right = NULL;
}
};
node* buildtree(node*& root){
cout<<"ENTER THE DATA"<<endl;
int data;
cin>>data;
if(data==-1){
    return NULL;
}
root = new node(data);

cout<<"insert data in left of "<<data<<endl;
root->left = buildtree(root->left);
cout<<"insert data in right of "<<data<<endl;
root->right = buildtree(root->right);

return root;

}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

int main(){
    node* root = NULL;
   root = buildtree(root);
   levelOrderTraversal(root);
   return 0;
}