#include<bits/stdc++.h>
using namespace std;
#define SIZE 10
int search(int a[SIZE],int n)
{
    int c=0;
    for (int i=0; i<=n; i++)
    {
        if(a[i]==n)
        {
            c++;
            cout<<"The number is  in the array "<< endl<< "for " << c << "times";
        }
        else
            cout<< "THere is no such number in the array";
        }

}

int main()
{

    int a[SIZE];
    cout<<"ENTER THE SIZE OF THE ARRAY"<< endl;
    int input,SRC;
    cin>>input;
    for(int i =0 ; i<=input; i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH : ";
        cin>>SRC;
    search(a,SRC);
    return 0;
}
