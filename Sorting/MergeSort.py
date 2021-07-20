# MergeSort.py

def user_input():
	user_data = input("Enter the elements in the array to be sorted (separated by spaces): ")
	arr = [int(x) for x in user_data.split()]
	print(f"The input array was: {arr}\nThe sorted array is: {merge_sort(arr)}")
	

def merge_sort(arr):
	if len(arr) > 1:
		midpoint = len(arr)//2
		left_arr = arr[:midpoint]
		right_arr = arr[midpoint:]

		merge_sort(left_arr)
		merge_sort(right_arr)

		i,j,k = 0,0,0

		while i < len(left_arr) and j < len(right_arr):
			if left_arr[i] < right_arr[j]:
				arr[k] = left_arr[i]
				i += 1
			else:
				arr[k] = right_arr[j]
				j += 1
			k += 1

		while i < len(left_arr):
			arr[k] = left_arr[i]
			i += 1
			k += 1

		while j < len(right_arr):
			arr[k] = right_arr[j]
			j += 1
			k += 1
	return arr


if __name__ == "__main__":
	user_input()

	