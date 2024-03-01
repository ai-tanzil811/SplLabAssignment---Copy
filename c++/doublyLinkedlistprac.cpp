#include<iostream>
using namespace std;
struct node{
int a;
node *next;
node *previous;
};
node *head=NULL,*tail=NULL;
void printlist()
{
    node *k = head;
    while (k != NULL)
    {
        cout << k->a;
        if (k->next != NULL)
            cout << "<->";
        k = k->next;
    }
}

void insertFirst(int v)
{
 node *add = new node;
 add->a=v;
 if(head==NULL)
 {
     head=add;
     tail=add;
     return;
 }
 add->next=head;
 head->previous=add;
 head=add;
}
void insertLast(int v)
{
    node *k = new node;
    k->a=v;
k->next=NULL;
    if(head==NULL)
{
    head=k;
    tail=k;
    return;
}
tail->next= k;
k->previous =tail;
tail=k;

}
int main()
{
int n;
    int input;
    cout<<"HOw many datas you want to enter : ";
    cin>>n;
    cout<<endl;
    cout<<"ENter datas you want insert "<<endl ;
    for(int i =0; i<n; i++)
    {


        cin>>input;
        insertFirst(input);
    }
   printlist();
}
