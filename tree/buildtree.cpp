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
void inorder(TreeNode*root){
  if(root == nullptr){
    return ;
  }
   inorder(root->left);
   cout<<root->data<<" ";
   cout<<endl;
   inorder(root->right);
}

void preorder(TreeNode*root){
  if(root  == nullptr){
    return ;
  }
   cout<<root->data<<" ";
   cout<<endl;
   preorder(root->left);
   preorder(root->right);
}
void postorder(TreeNode*root){
  if(root == nullptr){
    return ;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
  cout<<endl;
}
int height(TreeNode*root){
  if(root == nullptr){
    return 0;
  }
  int left=height(root->left);
  int right=height(root->right);
  return max(left+1,right+1);
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
        inorder(root);
        postorder(root);
        cout<<"height:"<<height(root)<<endl;
      return 0;
    
}
