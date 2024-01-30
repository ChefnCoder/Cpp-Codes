/*
Traversal Technique (BFS/DFS)

DFS:- DEPTH first traversal
Inorder: left root right
Preorder: root left right
Postorder: left right root

BFS:- Breadth first traversal

level wise left to right 

*/

#include<bits/stdc++.h>
using namespace std;
# define int long long

void code4_on9()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); // for getting input file
    freopen("output.txt","w",stdout); // for getting output file
    #endif 
} 

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void print(int data)
{
    cout<< data <<endl;
}

void preorder(node * curr)
{
    if(curr==NULL)
        return;

    print(curr->data);
    preorder(curr->left);
    preorder(curr->right);
}

void inorder(node* curr)
{
    if(curr==NULL)
        return;

    preorder(curr->left);
    print(curr->data);
    preorder(curr->right);
}

void postorder(node* curr)
{
    if(curr==NULL)
        return;

    preorder(curr->left);
    preorder(curr->right);
    print(curr->data);
}



signed main()
{
    code4_on9();
    struct node* root = new node(1); 
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(7);

    cout<<"PreOrder series: "<<endl;
    preorder(root);

    cout<<"PostOrder series: "<<endl;
    postorder(root);

    cout<<"InOrder series: "<<endl;
    inorder(root);

    return 0;
}