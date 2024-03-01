#include<bits/stdc++.h>
using namespace std;

struct node
{
    int a;
    node *next ;
};
node *head =NULL;

void InsertAtFirst(int v)
{
    node *t = new node;
    t->a=v;
    t->next=NULL;
    if(head == NULL)
    {
        head =t;
        return;
    }
    t->next=head;
    head=t;
}
void reversePrint() {
    if (head == NULL) {
        return;
    }
    reversePrint();
    cout << head->a << " ";
    head = head->next;
}

void printList()
{

    node *k =head;
if(k==NULL) return;
    while(k)
    {
        cout<<k->a<<" ";
        if(k->next==NULL)
            cout<<"end";
        else
            cout<<" -> ";
        k=k->next;
    }
    cout<<endl;

}
void countList()
{
    int c =0;
    node *k =head;
    while(k)
    {
        if(head ==NULL)
        {
            cout<<"Empty list";
            return;
        }
        else
        {
            c++;
            k=k->next;
        }


    }
    cout<<endl<<"THe number of elment is "<< c;
}
void insertAt(int v,int index)
{
   if(index<=1)
   {
       InsertAtFirst(v);
       return;
   }
   node *add = new node;
   add->a=v;
   add->next=NULL;
   node *ptr= head;


   if(head==NULL)
   {
       head=add;
       return;
   }
   int c=0;
   while(ptr)
   {
       c++;
       if(c+1==index) break;
       ptr=ptr->next;
   }
   add->next=ptr->next;
   ptr->next=add;
}
void insertAtLast(int v)
{
    node *key =head;
    node *add = new node;
    add->a=v;
    add->next=NULL;
    if(head!=NULL)
    {
  while(key)
        {
            if(key->next==NULL)
            {
                key->next=add;
                key=add;
                return;
            }
            key=key->next;
        }
    }
    else
    {
        InsertAtFirst(v);
    }
}
void deleteFromFirst()
{
     if(head==NULL){
        cout<<"There is no element in list"<<endl;

    }
    node *temp = head;
    head=temp->next;
    free(temp);


}
void deleteFromLast()
{
     if(head==NULL){
        cout<<"There is no element in list"<<endl;
          return;

    }
    if(head->next==NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    node *current = head;
    node *previous=NULL;
    while(current->next)
    {
        previous=current;
        current=current->next;
    }

previous->next=NULL;
delete current;


}
void deletefromAny(int i)
{
    if(head==NULL)
    {
        cout<<"THere is no data";
    }
    node *ptr =head;
    int c=0;
    while(ptr)
    {
        c++;
        if(c+1==i) break;
        ptr=ptr->next;
    }
    node *temp =ptr->next;
    ptr->next= temp->next;
    free(temp);
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
        InsertAtFirst(input);
    }
//deleteFromFirst();
//deleteFromLast();
//deletefromAny(3);
  //  insertAtLast(50);
  //  insertAtLast(60);
  //  insertAtLast(70);
 //   insertAt(100,2);
    cout<<"The list id : " <<endl ;
   cout<<head->next->next->a<<endl;
   cout<<endl;
    printList();
    reversePrint();
    countList();

    return 0;
}
