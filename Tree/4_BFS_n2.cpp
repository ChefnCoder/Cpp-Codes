#include<bits/stdc++.h>
using namespace std;
# define int long long

void code4_on9()
{
    #ifndef ONLINE_JUDGE
    freopen("0_input.txt","r",stdin); // for getting input file
    freopen("0_output.txt","w",stdout); // for getting output file
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
    cout<< data << " ";
}

void PrintCurrentLevel(node* root, int level)
{
    if(root==NULL)
        return;

    if(level==1)
    {
        print(root->data);
    }

    else if(level>1)
    {
        PrintCurrentLevel(root->left, level-1);
        PrintCurrentLevel(root->right, level-1);
    }
}


int height(node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return 1 + std::max(leftHeight, rightHeight);
    }
}
//------------------------------------------------------------------------//

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

    cout<<"Level Order: ";
    for(int i=0;i<=height(root);i++)
    {
        PrintCurrentLevel(root,i);
        cout<<endl;
    }
    /*but this code is of O(n)2, we can write better code in O(n)*/



    return 0;
}

