#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    node *link;
};
node *head=NULL;
void Head_Delete()
{
    head=head->link;
    return ;
}
void last()
{
    node *ptr,*t;
    ptr=head;
    while(true)
    {
        if(ptr->link!=NULL)
        {
            t=ptr;
            ptr=ptr->link;
            continue;
        }
        free(t->link);
        t->link=NULL;
        break;
    }
    return ;
}
void Insert_After(int item, int x)
{
    node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->info!=x)
        {
            ptr=ptr->link;
        }
        else
        {
            node *newnode;
            newnode->info=item;
            newnode->link=ptr->link;
            ptr->link=newnode;
            break;
        }
    }
}
void display()
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<""<<endl;
}
void Insert_Value(int item)
{
    node *newnode;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    newnode->info=item;
    newnode->link=head;
    head=newnode;
    return;
}
int main()
{
    int i,n,item,x;
    cin>>n;
    while(n--)
    {
        cin>>item;
        Insert_Value(item);
    }
    display();
    //Head_Delete();
    last();
    display();
    //cin>>item>>x;
    //Insert_After(item,x);
    //display();
    return 0;
}
