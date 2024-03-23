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
    while (k)
    {
        cout << k->a;
        if (k->next != NULL)
            cout << "<->";
        k = k->next;
    }
}
void insertAtAny(int v,int i)
{
    node *add =new node;
    add->a = v;
    add->previous=NULL;
    add->next=NULL;
    if(head==NULL)
    {
        head=add;
        tail=add;
        return;
    }
    node *ptr=head;
    int c=0;
    while(ptr->next)
    {
        c++;
        if(c+1==i) break;
        ptr=ptr->next;
    }
     add->previous = ptr;
    add->next = ptr->next;

    if (ptr->next != NULL)
    {
        ptr->next->previous = add;
    }

    ptr->next = add;

    // If the new node is inserted at the end, update the tail
    if (add->next == NULL)
    {
        tail = add;
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
void delFirst()
{
    node *del = head;
    head= head->next;
    head->previous=NULL;

    delete del;
    return;
}
void delLast()
{
    node *del = tail;
    tail=tail->previous;
    tail->next=NULL;
    delete del;
    return;
}
void delany(int i)
{
    int c=0;
    node *ptr = head;
    while(ptr->next)
    {
        c++;
        if(c+1==i) break;
        ptr=ptr->next;
    }
    node *del=ptr->next;
    ptr->next=del->next;
    if(ptr->next!=NULL)
    {
        del->next->previous=ptr;
    }
    delete del;

}
void reversePrint()
{
    if(head==NULL)
    {
        cout<<"EMPTY LIST"<<endl;
        return;
    }
    node *k =tail;
    while(k)
    {
        cout<<k->a<<" ";
        if(k->previous ==NULL)
        {cout<<"End";
        break;}
        else
        cout<<"<->";
        k=k->previous;
    }
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
//insertAtAny(20,2);
//delFirst();
//delLast();
//delany(3);

   printlist();
   cout<<endl;
   reversePrint();

}
