#include <bits/stdc++.h>
using namespace std;

struct node
{
    int a;
    node *next;
    node *prev; // New 'prev' pointer for doubly linked list
};

node *head = NULL;

void InsertAtFirst(int v)
{
    node *t = new node;
    t->a = v;
    t->next = NULL;
    t->prev = NULL;

    if (head == NULL)
    {
        head = t;
        return;
    }

    t->next = head;
    head->prev = t;
    head = t;
}

void reversePrint()
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << "Reverse Print: ";
    while (temp != NULL)
    {
        cout << temp->a << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void printList()
{
    node *k = head;

    if (k == NULL)
        return;

    while (k)
    {
        cout << k->a << " ";
        if (k->next == NULL)
            cout << "end";
        else
            cout << " <-> ";
        k = k->next;
    }
    cout << endl;
}

void countList()
{
    int c = 0;
    node *k = head;
    while (k)
    {
        c++;
        k = k->next;
    }
    cout << endl
         << "The number of elements is " << c;
}

void insertAt(int v, int index)
{
    if (index <= 1)
    {
        InsertAtFirst(v);
        return;
    }
    node *add = new node;
    add->a = v;
    add->next = NULL;
    add->prev = NULL;

    node *ptr = head;

    if (head == NULL)
    {
        head = add;
        return;
    }

    int c = 0;
    while (ptr)
    {
        c++;
        if (c + 1 == index)
            break;
        ptr = ptr->next;
    }

    add->next = ptr->next;
    add->prev = ptr;
    if (ptr->next != NULL)
    {
        ptr->next->prev = add;
    }
    ptr->next = add;
}

void insertAtLast(int v)
{
    node *key = head;
    node *add = new node;
    add->a = v;
    add->next = NULL;
    add->prev = NULL;

    if (head != NULL)
    {
        while (key->next != NULL)
        {
            key = key->next;
        }

        key->next = add;
        add->prev = key;
    }
    else
    {
        InsertAtFirst(v);
    }
}

void deleteFromFirst()
{
    if (head == NULL)
    {
        cout << "There is no element in the list" << endl;
        return;
    }
    node *temp = head;
    head = temp->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    delete temp;
}

void deleteFromLast()
{
    if (head == NULL)
    {
        cout << "There is no element in the list" << endl;
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    node *current = head;
    node *previous = NULL;
    while (current->next)
    {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    delete current;
}

void deletefromAny(int i)
{
    if (head == NULL)
    {
        cout << "There is no data";
    }
    node *ptr = head;
    int c = 0;
    while (ptr)
    {
        c++;
        if (c + 1 == i)
            break;
        ptr = ptr->next;
    }
    node *temp = ptr->next;
    ptr->next = temp->next;

    if (temp->next != NULL)
    {
        temp->next->prev = ptr;
    }

    delete temp;
}

int main()
{
    int n;
    int input;
    cout << "How many datas you want to enter: ";
    cin >> n;
    cout << endl;
    cout << "Enter datas you want to insert" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        InsertAtFirst(input);
    }

    // deleteFromFirst();
    // deleteFromLast();
    // deletefromAny(3);
    // insertAtLast(50);
    // insertAtLast(60);
    // insertAtLast(70);
    // insertAt(100, 2);

    cout << "The list is: " << endl;
    printList();
    reversePrint();
    countList();

    return 0;
}

