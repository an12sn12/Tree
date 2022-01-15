#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;                                      
    struct Node*left;
    struct Node*right;
};
int maxDepth(struct Node* node)
{
    if (node == NULL)
        return -1;
    else {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
struct Node*newnode(int value)
{
    struct Node*root=(struct Node*)malloc(sizeof(struct Node));
    root->data=value;
    root->left=0;
    root->right=0;
}
void preorderTraversal(struct Node*root)                          
{
      if (root!=0)
    {
      cout << root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void InnorderTraversal(struct Node*root)
{
      if (root!=0)
    {
          InnorderTraversal(root->left);
      cout << root->data<<" ";
        InnorderTraversal(root->right);
    }
}
void postorderTraversal(struct Node*root)
{
      if (root!=0)
    {
     
        postorderTraversal(root->left);
       postorderTraversal(root->right);
        cout << root->data<<" ";
    }
}
int main()
{
   struct Node* p=newnode(4);
   struct Node* p1=newnode(5);
   struct Node* p2=newnode(6);
   struct Node* p3=newnode(7);
   struct Node* p4=newnode(8);
   struct Node* p5=newnode(9);
   struct Node* p6=newnode(10);
   p->left=p1;
   p->right=p2;
      p1->left=p3;
   p1->right=p4;
      p2->left=p5;
   p2->right=p6;
   preorderTraversal(p);
cout<<"\n";
   postorderTraversal(p);
cout<<"\n";
   InnorderTraversal(p);
cout<<"\n";
    std::cout <<  maxDepth(p) << std::endl;
   return 0;
}