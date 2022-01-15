#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
struct Node*left;
struct Node*right;
};
struct Node*newnode(int x)
{
    struct Node*root=(struct Node*)malloc(sizeof(struct Node));
    root->data=x;
    root->left=0;
    root->right=0;
}
void levelOrderTra(struct Node*root)
{
    if (root==0)
    {
       return; 
    }
      queue<Node*> q;
    q.push(root);
    while (q.empty() == false)
    {
        struct Node*node=q.front();
     cout << node->data<<" ";
        q.pop();
        if (node->left!=0)
        {
            q.push(node->left);
        }
        if (node->right!=0)
        {
            q.push(node->right);
        }
    }
}
int main()
{
    struct Node*p=newnode(4);
    struct Node*p1=newnode(5);
    struct Node*p2=newnode(6);
     struct Node*p3=newnode(7);
      struct Node*p4=newnode(8);
       struct Node*p5=newnode(9);
        struct Node*p6=newnode(10);
        p->left=p1;
        p->right=p2;
        p1->left=p3;
        p1->right=p4;
        p2->left=p5;
        p2->right=p6;
        levelOrderTra(p);
        return 0;
}