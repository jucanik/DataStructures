#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left,*right;
    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};
int isbst(Node*root,int min,int max){
    if(root==NULL)
        return 1;
    if(root->data<min || root->data>max)
        return 0;
    if(!(isbst(root->left,min,root->data-1)) || !(isbst(root->right,root->data+1,max)))
        return 0;
    return 1;
}
int bst(Node*root){
    int min=0;
    int max=30;
    if(isbst(root,min,max))
    return 1;
    else
    {
        return 0;
    } 
}
int main(){
    Node*root=new Node(26);
    root->left=new Node(10);
    root->left->left=new Node(6);
    root->left->right=new Node(4);
    root->right=new Node(3);
    root->right->left=new Node(3);
    if(bst(root))
        cout<<1;
    else
        cout<<0;
}