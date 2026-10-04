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
 int countTreeNode(TreeNode*root){
     if(root == nullptr){
      return 0 ;
     }
    int left=countTreeNode(root->left);
  int right=countTreeNode(root->right);
  return left+right+1;

 }

 int sumofNode(TreeNode*root){
  if(root == nullptr){
    return 0;
  }
   int sum = root->data;
   sum += sumofNode(root->left);
   sum += sumofNode(root->right);
 
  return sum ;
 }
 

// check the tree is identical of not

bool identicalTree(TreeNode*p,TreeNode*q){
  if(p == nullptr && q == nullptr){
    return true;
  } 
  if(p == nullptr || q == nullptr){
    return false;
  }
  if(p->data != q->data){
    return  false;
  }

 
 return identicalTree(p->left,q->left)&&identicalTree(p->right,q->right);
}
int main(){
    TreeNode*root=new TreeNode(1);
       root->left=new TreeNode(2);
       root->right=new TreeNode(3);
        root->left->left=new TreeNode(4);
        root->left->right=new TreeNode(5);
        root->right->left=new TreeNode(6);
        root->right->right=new TreeNode(7);

         TreeNode*p=new TreeNode(1);
              root->right=new TreeNode(3);
            p->left=new TreeNode(2);
        p->left->left=new TreeNode(4);
        p->left->right=new TreeNode(5);
        p->right->left=new TreeNode(6);
        p->right->right=new TreeNode(7);
        TreeNode*q=new TreeNode(1);
       q->left=new TreeNode(2);
       q->right=new TreeNode(3);
        q->left->left=new TreeNode(4);
        q->left->right=new TreeNode(5);
        q->right->left=new TreeNode(6);
        q->right->right=new TreeNode(7);




        preorder(root);
        inorder(root);
        postorder(root);
        cout<<"height:"<<height(root)<<endl;
        cout<<"countTreeNode:"<<countTreeNode(root)<<endl;
        cout<<"sumofNode:"<<sumofNode(root)<<endl;
        identicalTree(p,q);
      return 0;
    
}
