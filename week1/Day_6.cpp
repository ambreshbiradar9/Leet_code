#include<iostream>
#include<vector>
struct Node
{
    int val;
    Node *right;
    Node *left;
};

Node *root=NULL;
void insert(int data)
{
    Node *temp1;
    while(temp1!=NULL)
    {
        if(data>temp1->val)
        {
            temp1=temp1->right;
        }
        else
        {
            temp1=temp1->left;
        }
    }
    Node *temp=new Node();
    temp->val=data;
    temp->right=temp->right=NULL;
    temp1=temp;
}

int maxof(int m1,int m2)
{
    if(m1<m2)
    {
        return m2;
    }
    else
    {
        return m1;
    }   
}

int height(Node* temp)
{
if (temp==NULL)
return 0;
else
{
    return  (1+maxof(height(temp->right),height(temp->left)));
}

}

int main()
{
    int n,temp;
    //std::vector <int> c;
    std::cin >>  n;
    for(int i=0;i<n;i++)
    {
        std::cin>>temp;
      //  c.push_back(temp);
        insert(temp);
    }
    std::cout<<height(root);
    return 1;
}

