void insertAtindex(int v,int index)
{
    node *add = new node;
    node *ptr =head;
    add->a = v;
    add->next =NULL;
    if(head== NULL)
    {
        head=add;
        return;
    }
    int c=0;
    while(ptr)
    {
        c++;
        if(c==index)
        {
            ptr=add;
            add->next=ptr->next;
        }
        ptr=ptr->next;
    }
}
