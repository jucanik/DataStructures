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
int sum(Node*root){
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return(root->data);
    int lsum=sum(root->left);
    int rsum=sum(root->right);
    return(lsum+rsum+root->data);
}
int sumtree(Node*root){
    if(root==NULL)
    return 1;
    if(root->left==NULL && root->right==NULL )
    return 1;
    if(root->left==NULL){
        if(!(sumtree(root->right)) || (root->data!=sum(root->right))){
            return 0;
        }
    }
    if(root->right==NULL){
        if(!(sumtree(root->left)) || (root->data!=sum(root->left))){
            return 0;
        }
    }
    if(!(sumtree(root->left)) || !(sumtree(root->right)) || (root->data!=sum(root->left)+sum(root->right)))
        return 0;
    return 1;
}
int main(){
    Node*root=new Node(26);
    root->left=new Node(10);
    root->left->left=new Node(6);
    root->left->right=new Node(4);
    root->right=new Node(3);
    root->right->left=new Node(3);
    if(sumtree(root))
        cout<<1;
    else
        cout<<0;
}