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


signed main()
{
    code4_on9();
    struct node* root = new node(1); 
    root->left = new node(2);
    struct node* right = new node(3);
    root->right = right;

    cout<<"root: "<<root->data<<endl;
    cout<<"left: "<<root->left->data<<endl;
    cout<<"right: "<<root->right->data<<endl;

    return 0;
}