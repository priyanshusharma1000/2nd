#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int d){
        this->val = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildtree(node* &root){
int data;
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
void levelordertraversal(node* &root){
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
 node* frontnode = q.front();
 q.pop();
 if(frontnode==NULL){
     if(!q.empty()){
        cout<<endl;
        q.push(NULL);
     }
 }
 else{
   cout<<frontnode->val<<" ";
   if(frontnode->left){
    q.push(frontnode->left);
    
   }
    if(frontnode->right){
    q.push(frontnode->right);
    
   }
   }
}
}
int height(node* &root){
    if(root==NULL)
    return 0;

    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}
bool isheightbalanced(node* &root){
 if(root==NULL)
 return true;
 bool left = isheightbalanced(root->left);
 bool right = isheightbalanced(root->right);
 bool ans = abs(height(root->left) - height(root->right)) <=1;
 if(left && right && ans)
 return true;
 else
 return false;
}
 
pair<bool,int> isheightbalancedfaster(node* &root){
    if(root==NULL)
    {
        pair<bool,int>p = make_pair(true,0);
        return p;
    }
  pair<bool,int> left = isheightbalancedfaster(root->left);
  pair<bool,int> right = isheightbalancedfaster(root->right);

  bool op1 = left.first;
  bool op2 = right.first;
  bool op3 = abs(left.second - right.second) <=1;
  pair<bool,int>ans;
  if(op1 && op2 && op3){
    ans.first = true;
  }
  else
  ans.first = false;

  ans.second = max(left.second,right.second)+1;
  return ans;
}
vector<int>zigzagtraversal(node* & root){
vector<int>result;
if(root==NULL)
return result;

queue<node*>q;
q.push(root);

bool lefttoright = true;
while(!q.empty()){
    int size = q.size();
    vector<int>ans(size);
    for(int i=0;i<size;i++){
        node* frontnode = q.front();
        q.pop();
        int index = lefttoright ? i : size-i-1;
        ans[index] = frontnode->val;
        if(frontnode->left){
            q.push(frontnode->left);
        }
        if(frontnode->right){
            q.push(frontnode->right);
        }
    }
    lefttoright = !lefttoright;
    for(auto i: ans)
    result.push_back(i);

}
    
 return result;   
}
int main(){
node* root = NULL;
cout<<"enter the data for root element "<<endl;
root = buildtree(root);
levelordertraversal(root);
cout<<"height of binary tree is "<<height(root)<<endl;
if(isheightbalancedfaster(root).first){
    cout<<"height balanced hai binary tree"<<endl;
}
else{
    cout<<"height balanced nahi h";
}


cout<<"zigzag traversal"<<endl;
vector<int>zig = zigzagtraversal(root);
for(auto i: zig)
cout<<i<<" ";

return 0;
}
