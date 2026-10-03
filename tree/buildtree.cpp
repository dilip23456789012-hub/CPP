#include <iostream>
using namespace std;

class TreeNode {
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
void preorder(TreeNode*root){
  if(root == nullptr){
    return ;
  }
   preorder(root->left);
   cout<<root->data<<endl;
   preorder(root->right);
}

int main(){
    TreeNode*root=new TreeNode(1);
       root->left=new TreeNode(2);
       root->right=new TreeNode(3);
        root->left->left=new TreeNode(4);
        root->left->right=new TreeNode(5);
        root->right->left=new TreeNode(6);
        root->right->right=new TreeNode(7);

        preorder(root);

      return 0;
    
}
