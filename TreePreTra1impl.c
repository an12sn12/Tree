#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* createNode(int x)
{
struct Node*p=(struct Node*)malloc(sizeof(struct Node));
p->data=x;
p->left=0;
p->right=0;
return p;
}
void preorderTraversal(struct Node*root)
{
    if (root!=0)
    {
        printf("%d ",root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(struct Node*root)
{
    if (root!=0)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
         printf("%d ",root->data);
    }
}
void IntorderTraversal(struct Node*root)
{
    if (root!=0)
    {
        IntorderTraversal(root->left);
          printf("%d ",root->data);
        IntorderTraversal(root->right);
       
    }
}
int main()
{
struct Node*p=createNode(4); 
struct Node*p1=createNode(1); 
struct Node*p2=createNode(6); 
struct Node*p3=createNode(5); 
struct Node*p4=createNode(2); 
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
preorderTraversal(p);
printf("\n");
postorderTraversal(p);
printf("\n");
IntorderTraversal(p);
return 0;
}