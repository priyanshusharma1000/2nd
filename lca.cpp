#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
class node{
public:
int data;
node* left;
node* right;
node(int d){
    data = d;
    left = NULL;
    right = NULL;
}

};
node* buildtree(node*&root){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    if(data==-1)
    return NULL;
    root = new node(data);
    cout<<"enter the data in left of"<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"enter the data in right of"<<data<<endl;
    root->right = buildtree(root->right);
   return root;

}
void print(node* root){
queue<node*>q;
q.push(root);

while(!q.empty()){
    int n = q.size();
    for(int i=0;i<n;i++){
        node* frontnode = q.front();
        q.pop();
        cout<<frontnode->data<<" ";
        if(frontnode->left){
            q.push(frontnode->left);
        }
        if(frontnode->right){
            q.push(frontnode->right);
        }
    }
    cout<<endl;

}
}
node* findlca(node* root,int n1,int n2){
    if(root==NULL)
    return NULL;
    if(root->data==n1 || root->data==n2){
            return root;
    }
     node* leftans = findlca(root->left,n1,n2);
     node* rightans = findlca(root->right,n1,n2);
     if(leftans!=NULL && rightans!=NULL)
     return root;
     else if(leftans!=NULL && rightans==NULL)
     return leftans;
     else if(leftans==NULL && rightans!=NULL)
     return rightans;
     else
     return NULL;
}

int main(){
    node* root = NULL;
    root = buildtree(root);
    print(root);
    int n1,n2;
    cin>>n1>>n2;
    node* ans = findlca(root,n1,n2);
    if(ans!=NULL)
    cout<<ans->data<<endl;
    else
    cout<<0<<endl;

    return 0;
}