#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
int data;
struct Node*right;
struct Node*left;
Node(int value){
    data=value;
    left=0;
    right=0;
}
};

struct Node*InsertBST(struct Node*root,int value)
{
    if (root==NULL)
    {
      return new Node(value);
    }
    if (value<root->data)
    {
        root->left=InsertBST(root->left,value);
    }
    else
    {
        root->right=InsertBST(root->right,value);
    }
    return root;
}
void preorderTraversal(struct Node*root)                          
{
      if (root!=NULL)
    {
      
        preorderTraversal(root->left);
        cout << root->data<<" ";
        preorderTraversal(root->right);
    }
}
int main()
{;
struct Node*root=NULL;
root=InsertBST(root,5);
InsertBST(root,1);
InsertBST(root,3);
InsertBST(root,4);
InsertBST(root,2);
InsertBST(root,7);
preorderTraversal(root);
return 0;
}