#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
};
Node *head=NULL;
void insertAtFirst(int v){
    Node *t = new Node;
    t->val = v;
    t->next = NULL;
    if(head==NULL){
        head = t;
        return;
    }
    t->next = head;
    head = t;
}
void insertAtLast(int v){
    Node *t = new Node;
    t->val = v;
    t->next = NULL;
    if(head==NULL){
        head = t;
        return;
    }
    /// Find the last node
    Node *ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = t;
}
void insertAt(int v,int index){
    if(index<=1){
        insertAtFirst(v);
        return;
    }
    Node *t = new Node;
    t->val = v;
    t->next = NULL;
    if(head==NULL){
        head = t;
        return;
    }
    Node *ptr = head;
    int cnt = 0;
    while(ptr->next){
        cnt++;
        if(cnt+1==index)break;
        ptr = ptr->next;
    }
    t->next = ptr->next;
    ptr->next = t;
}
int deleteFromFirst(){
    if(head==NULL){
        cout<<"There is no element in list"<<endl;
        return -1;
    }
    Node *tmp = head;
    head = tmp->next;
    int item = tmp->val;
    delete tmp;
    return item;
}
bool linearSearch(int item){
    if(head==NULL){
        return false;
    }
    Node *ptr = head;
    while(ptr){
        if(ptr->val==item)
            return true;
        ptr = ptr->next;
    }
    return false;
}
void printList(){
    Node *ptr = head;
    cout<<"------------List---------"<<endl;
    while(ptr){
        cout<<ptr->val<<"->";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main(){
    insertAtFirst(10);
    printList();
    insertAtFirst(2);
    printList();
    insertAtFirst(7);
    insertAtLast(15);
    printList();
    insertAtFirst(11);
    insertAt(20,10);
    printList();
    cout<<deleteFromFirst()<<endl;
    printList();
    cout<<linearSearch(25);
    return 0;
}
