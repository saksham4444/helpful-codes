#include<bits/sytdc++.h>
using namespace std;

void dfs()
{
TreeNode<int>* root;


queue<TreeNode<int>*> q;
q.push(root);
while(!q.empty())
{   cout<<q.front()->data<<":";
    for(int i=0;i<root->Children.size();i++)
    {

        cout<<q.front()->Children[i]<<",";
        q.push_back(q.front()->Children[i]);
    }
    q.pop();

}
}
int sum(TreeNode<int>* root)
{
    int k;
    for(int i=0;i<root->Children.size();i++)
    {
         k= sum(root->Children[i])+root->data;

    }
    return k;
}

int largest(TreeNode<int>* root)
{
    if(root->Children.size()==0)
    {

        return root->data;
    }int large;
    int k=root->data;
    for(int i=0;i<root->Children.size();i++)
    {

        large=largest(root->Children[i]);

     if(large>k)
    {
        k=large;
        //large=k;

    }
    }
    return k;

}
int countLeaf(TreeNode<int>*root)
{
    if(root->Children.size()==0)
    {

        return 1;
    }
    int sum=0;
    for(int i=0;i<root->Children.size();i++)
    {
        sum+=countLeaf(root->Children[i]);
    }

    return sum;


}

int height(TreeNode<int>* root)
{
    if(root->children().size()==0)
    {

        return 1;
    }
    int k=0;int large;
    for(int i=0;i<root->Children.size();i++)
    {
        large=height(root->Children[i])
        if(k<l)
        {

            k=large;
        }
        return k+1;
    }



}

int main()




}
