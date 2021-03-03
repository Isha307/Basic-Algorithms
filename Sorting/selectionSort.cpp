/*The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.*/

#include <bits/stdc++.h>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int arr[], int len){
    int i,j,min_ind;
    for(int i=0; i<len-1; ++i){
        min_ind = i;
        for(j = i+1; j < len; ++j){
            if(arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[min_ind], arr[i]); 
    }
}
void printArray(int arr[], int size){  
    int i;  
    for (i=0; i < size; i++)  
        std::cout << arr[i] << " ";  
    std::cout << std::endl;  
}  

int main(){
    int arr[] = {12,3,1,3,1,2,3,4,23,100};
    int len = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,len);

    selectionSort(arr,len);

    printArray(arr,len);
    return 0;
}