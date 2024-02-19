#include<bits/stdc++.h>
using namespace std;
void genjamSOrt(int a[], int input)
{
    for (int i = 0; i < input; i++)
    {
        int flag = 0;
        for (int j = 0; j < input - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
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
genjamSOrt(ARRAY,input);

    cout << endl
             << "-------------The array After Bubble sorting is ___________________ : " << endl;
    for (int i = 0; i < input; i++)
    {
        cout << ARRAY[i] << " ";
    }
    cout << endl;

}
