//single linled list
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a;
    node *next;
};
node *head = NULL;
void insertAtFirst(int v)
{
    node *k = new node;
    k->a=v;
    k->next=NULL;
    if(head==NULL)
    {
        head=k;
        return;
    }
    k->next=head;
    head=k;
}
void insertAtLast(int v)
{
    node *b = new node;
    b->a =v;

    if(head==NULL)
    {

        return;
    }
    node *ptr =head;
    while(ptr)
    {
        if(ptr->next==NULL)
        {
            ptr->next=b;
            break;
        }
        ptr=ptr->next;
    }


}
