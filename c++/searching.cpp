#include <bits/stdc++.h>
using namespace std;

const int size = 100;

int binary_search(int a[], int key, int input);
int Linear_Search(int a[], int k, int input);
void bubbleSort(int a[], int input);
void mergeSort(int a[], int l, int h);
void Merge(int arr[], int l, int m, int h);
void insertionSort(int a[], int n);
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
    cout << endl
         << "-------------The array After Bubble sorting is ___________________ : " << endl;
    bubbleSort(ARRAY, input);
    for (int i = 0; i < input; i++)
    {
        cout << ARRAY[i] << " ";
    }
    cout << endl
         << "-------------The array After Merge sorting is ___________________ : " << endl;
    mergeSort(ARRAY,0,input-1);
    for (int i = 0; i < input; i++)
    {
        cout << ARRAY[i] << " ";
    }
    cout << endl<< "-------------The array After Insertion sorting is ___________________ : " << endl;
    insertionSort(ARRAY,input);
    for (int i = 0; i < input; i++)
    {
        cout << ARRAY[i] << " ";
    }
    cout << endl
         << "Enter the key you want to search in the array : ";
    int k;
    cin >> k;
    cout << endl
         << "--------------Linear Search--------------" << endl;
    int linearResult = Linear_Search(ARRAY, k, input);
    if (linearResult != -1)
        cout << endl
             << "The element has been found in the index of: " << linearResult;
    else
        cout << "Not found";

    cout << endl
         << "--------------Binary Search--------------" << endl;
    int binaryResult = binary_search(ARRAY, k, input);
    if (binaryResult != -1)
        cout << endl
             << "The element has been found in the index of: " << binaryResult;
    else
        cout << "Not found";

    return 0;
}

int binary_search(int a[], int key, int input)
{
    bubbleSort(a, input);
    int low = 0, high = input - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int Linear_Search(int a[], int k, int input)
{
    for (int i = 0; i < input; i++)
    {
        if (a[i] == k)
            return i;
    }
    return -1;
}

void bubbleSort(int a[], int input)
{
    int flag;
    for (int i = 0; i < input; i++)
    {
        flag = 0;
        for (int j = 0; j < input - 1 - i; j++)
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

void mergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        Merge(a, l, mid, h);
    }
}

void Merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void insertionSort(int a[], int n)
{

    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
