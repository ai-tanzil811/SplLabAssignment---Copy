#include<bits/stdc++.h>
using namespace std;
void osthir_sorting(int a[],int n){
for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n-i-1;j++)
        {
            if(a[j]%2==0)
            {
                 if(a[j]>a[j+1])
            {
                swap(a[j+1],a[j]);
                flag=1;
            }

            }
            else
            {
                 if(a[j]<a[j+1])
            {
                swap(a[j+1],a[j]);
                flag=1;
            }
            }

        }
        if(flag==0) break;
    }
}
#define size 100
int main()
{

    int input;
    int ARRAY[size];

    cout << "Enter array size :";
    cin >> input;

    cout << "Enter array : ";
    for (int i = 0; i < input; i++)
    {
        cin >> ARRAY[i];
    }

    cout << endl
         << "-------------The array before sorting is ___________________ : " << endl;
    for (int i = 0; i < input; i++)
    {
        cout << ARRAY[i] << " ";
    }
    osthir_sorting(ARRAY,input);
          cout<<endl << "-------------The array after sorting is ___________________ : " << endl;
    for (int i = 0; i < input; i++)
    {
        cout << ARRAY[i] << " ";
    }

}
