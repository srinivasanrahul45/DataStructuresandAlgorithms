#include <iostream>
#include "SearchingAlgorithms.h"

using namespace std;

int SearchingAlgorithms::arrayBinarySearch(int *input_array, int size, int target){
	int start = 0;
	int end = size - 1;
	int mid = end + ((start - end)/2);

	while(start <= end){
		if(input_array[mid] == target){
			return mid;
		} else if(target > input_array[mid]){
			start = mid + 1;
			mid = end + ((start - end)/2);
		} else if(target < input_array[mid]){
			end = mid - 1;
			mid = end + ((start - end)/2);
		}
	}

	return -1;
}

int SearchingAlgorithms::arrayLinearSearch(int *input_array, int size, int target){
	for(uint8_t i = 0; i < size; i++){
		if(input_array[i] == target){
			return i;
		}
	}

	return -1;
}
