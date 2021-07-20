#include<bits/stdc++.h> 
using namespace std; 

void bucketSort(int arr[], int n, int k) 
{ 
    //Finding the max value out of array 'arr'.
    int max_val=arr[0];
    for(int i=1;i<n;i++)
        max_val=max(max_val,arr[i]);

    //Incrementing the max value so that I could assign every number its corresponding bucket.
     max_val++;   

    //Creating Vector of Integer with size of my bucket.
    vector<int> bkt[k]; 

  //Assigning values in each bucket. 
    for (int i = 0; i < n; i++) { 
        int bi = (k*arr[i])/max_val; 
        bkt[bi].push_back(arr[i]); 
    } 

    //Applying simple sorting algorithm in ascending order to my each bucket.
    for (int i = 0; i < k; i++) 
        sort(bkt[i].begin(), bkt[i].end()); 

   //Adding each element in array by traversing each bucket at a time.
    int index = 0; 
    for (int i = 0; i < k; i++) 
        for (int j = 0; j < bkt[i].size(); j++) 
            arr[index++] = bkt[i][j]; 
} 
int main() 
{ 
    int arr[] = { 3,40,-10,90,-5,12,101 }; //Taking a predefined Array 'arr'.
    int n = sizeof(arr) / sizeof(arr[0]); //Finding the size of my arr[].
    int k=4; //Size of my bucket.
    bucketSort(arr, n, k); //Function call.
   
   //Printing the sorted array using bucket sort.
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 