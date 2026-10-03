#include <iostream>
using namespace std;
 class TreeNode{
    public:
    int data;
    TreeNode*right;
    TreeNode*left;
    TreeNode(int val){
       data =val;
       right=nullptr;
       left=nullptr;
    }

 };
  TreeNode*buildTree(){
     int x;
     cin>>x;
     if(x== -1){
        return nullptr;
     }
     TreeNode*root= new TreeNode(x);
     root->left=buildTree();
     root->right=buildTree();
     return root;

  }
  void inorder(TreeNode*root){
   if(root == nullptr){
      return ;
   }
   cout<<root->data<<endl;
   inorder(root->left);
   inorder(root->right);
  }

  int main(){
        TreeNode*root = buildTree();
        inorder(root);
        return 0;
  }