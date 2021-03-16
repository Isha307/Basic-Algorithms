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
#include <random>
#include <vector>

/* 
    Uses bubble sort to sort a passed vector of integers with a given size

    Parameters:
        vec: int vector, vector that will be sorted
        arr_size: int, size of the array
*/
void bubble_sort(std::vector<int> &vec){
    for (unsigned int i = (vec.size() - 1); i > 0; --i){
        for (unsigned int j = 0; j < i; ++j){
            if (vec[j] > vec[j+1]){
                std::swap(vec[j], vec[j+1]);
            }
        }
    }
}


/* 
    Uses bubble sort to sort a passed c array of integers with a given size

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

// Random number engine, returns random int from 0 to 200 when dist(engine) is called
std::random_device                        entropy;
std::mt19937                    engine(entropy());
std::uniform_int_distribution<int>    dist(0,200);

// Main to demonstrate the sorting algorithm's functionality
int main() 
{
    int size;
    std::cout << "Enter size of vector: ";
    std::cin >> size;

    std::vector<int> vec;
    std::cout << "Randoming populating vector..." << std::endl;
    for (int i = 0; i < size; ++i)
        vec.push_back(dist(engine));

    std::cout << "Vector: ";
    for (auto e : vec)
        std::cout << e << " ";

    std::cout << std::endl;

    bubble_sort(vec);

    std::cout << "Sorted: ";
    for (auto e : vec)
        std::cout << e << " ";

    std::cout << std::endl;

    return 0;
}