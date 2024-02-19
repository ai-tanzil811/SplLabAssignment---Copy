#include<iostream>
using namespace std;



void zora(int ar[],int l,int m,int h)
{
    int n1=m-l+1;
    int n2= h-m;
    int a[n1], b[n2];
    for(int i=0; i<n1; i++)
    {
        a[i]=ar[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=ar[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            ar[k]=a[i];
            i++;
            k++;
        }
        else
        {
            ar[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {

        ar[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        ar[k]=b[j];
        j++;
        k++;

    }
}
void mergeSort(int arr[],int l,int h)
{

    int m;
    if(l>=h) arr[l];
    else
    {
        m=(l+h)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        zora(arr,l,m,h);
    }
}
int main()
{
    int input;
    cin>>input;
    cout<<endl;
    int a[input];
    cout<<"enter array =" <<endl;
    for(int i=0; i<input; i++)
    {
        cin>>a[i];
    }

    cout<<"-----------------Before Sorting----------------"<<endl;
    for(int i=0; i<input; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"-----------------After Sorting----------------"<<endl;
    mergeSort(a,0,input-1);

    for(int i=0; i<input; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
