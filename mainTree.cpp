#include<iostream>
#include<bits/stdc++.h>
#include"TreeNode.cpp"
void printTree(TreeNode *root)
{
    cout<<root->data<<endl;
    for (int i = 0; i < root->children.size(); i++)
    {
      printTree(root->children[i]);
    }
    
}
TreeNode* takeinp(int n)
{
    
}
int main()
{

      TreeNode *root = new TreeNode(1);
         TreeNode *n1 = new TreeNode(2);
       TreeNode *n2 = new TreeNode(3);
     TreeNode *n3 = new TreeNode(4);
     root->children.push_back(n1);
     root->children.push_back(n2);
     root->children.push_back(n3);
     printTree(root);
    
    

  return 0;
}