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
node* buildtree(node* &root){
  cout<<"enter the data";
  int data;
  cin>>data;
  if(data==-1)
  return NULL;
  root = new node(data);
  cout<<"enter data in left of "<<data<<endl;
  root->left = buildtree(root->left);
  cout<<"enter data in right of "<<data<<endl;
  root->right = buildtree(root->right);
  return root;

}
void leveloreder(node*& root){
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
node* temp = q.front();
q.pop();
if(temp==NULL){
    cout<<endl;
    if(q.size()){
        q.push(NULL);
    }
}
else{
cout<<temp->data<<" ";
if(temp->left)
q.push(temp->left);
if(temp->right)
q.push(temp->right);
}
}
}
int height(node* &root){
    if(root==NULL)
    return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right) + 1;
}
int diameter(node* &root){
    if(root==NULL)
    return 0;
    
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;
    return max(op1,max(op2,op3));
}
bool isheightbalanced(node* root){
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
pair<bool,int> isbalanced(node* &root){
    if(root==NULL){
        pair<bool,int>p = make_pair(true,0);
        return p;
    }
    pair<bool,int> left = isbalanced(root->left);
    pair<bool,int> right = isbalanced(root->right);
    bool op1 = left.first;
    bool op2 = right.first;
    bool op3 = abs(right.second - left.second) <=1;
    pair<bool,int>ans;
    if(op1 && op2 && op2){
      ans.first = 1;
    }
    else{
    ans.first = 0;
    }
    return ans;

}
vector<int> zigzagtraversal(node*& root){
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
      ans[index] = frontnode->data;
      if(frontnode->left)
      q.push(frontnode->left);
      if(frontnode->right)
      q.push(frontnode->right);
    }
    lefttoright = !lefttoright;
    for(auto i :ans){
        result.push_back(i);
    }
}
return result;
}

int main(){
    node* root = NULL;
    root = buildtree(root);
    cout<<endl<<endl<<"our tree lokk like this "<<endl;
    leveloreder(root);
    cout<<"the height of our tree is"<<height(root)<<endl;
    cout<<"the diameter of our tree is "<<diameter(root)<<endl;
    if(isbalanced(root).first)
    cout<<"hum to bhaisahab heightbalance h";
    else
    cout<<"nhi bhai hum height balance nahi h";

  cout <<endl<<endl;
    vector<int>ans = zigzagtraversal(root);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
