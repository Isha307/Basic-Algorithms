/*  Bubble sort is a sorting algorithm that swaps adjacent values if one is greater than another
    as it iterates through an array or list.

    The algorithm operates as follows:
        1. Begin iteration of an array/list
        2. Compare first element and second element
        3. If first element is greater than second element, swap elements.
        4. Iterate to next element and repeat until iteration is complete
        5. Loop 1-4 until array is sorted

    This algorithm will use the standard library function std::swap; however, a custom swap function can be created if necessary.
*/ 

#include <iostream>

/* 
    Uses bubble sort to sort a passed array of integers with a given size

    Parameters:
        arr: c array[int], array that will be sorted
        arr_size: int, size of the array
*/
void bubble_sort(int arr[], int arr_size){
    for (int i = (arr_size - 1); i > 0; --i){
        for (int j = 0; j < i; ++j){
            if (arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}


// Main to demonstrate the sorting algorithm's functionality
int main() 
{
    const int SIZE = 10;
    int arr[SIZE] = {7, 1, 15, 4, 2, 0, 19, -5, 6, 2};

    bubble_sort(arr, SIZE);

    // Range-based for loop
    for (auto e : arr)
        std::cout << e << " ";

    std::cout << std::endl;

    return 0;
}