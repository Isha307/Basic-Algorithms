# MergeSort.py

def merge_sort(arr):
	if len(arr) > 1:
		midpoint = len(arr)//2
		left_arr = arr[:midpoint]
		right_arr = arr[midpoint:]
		i,j,k = 0,0,0

		merge_sort(left_arr)
		merge_sort(right_arr)

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
	