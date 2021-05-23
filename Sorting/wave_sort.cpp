#include <bits/stdc++.h>
using namespace std;

// A wave sort is a sorting method where a given Array is sorted in the following manner :
// arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]>=arr[5]<=....
// where arr is a given array


// This function swaps two numbers or elements of an array in this case
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


// This is the main algorithm of wavesort
void wavesort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(&arr[i], &arr[i - 1]); 
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }
}


// This function prints the array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {22, 3, 5, 66, 9, 6, 56, 89, 26, 99};
    int n = sizeof(arr) / sizeof(int);

    cout<<"The array before wave sorting : ";
    display(arr, n);
    wavesort(arr, n);
    cout<<"The array after wave sorting : ";
    display(arr, n);

    return 0;
}