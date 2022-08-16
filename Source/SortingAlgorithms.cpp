#include <iostream>
#include "SortingAlgorithms.h"

int* SortingAlgorithms::bubbleSort(int *array, int size){
	for(uint8_t i = 0; i < size; i++){
		for(uint8_t j = 0; j < (size - i - 1); j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	return array;
}

void mergeInPlace(int *array, int s, int m, int e){
	int mix[e - s];

	int i = s;
	int j = m;
	int k = 0;

	while(i < m && j < e){
		if(array[i] < array[j]){
			mix[k] = array[i];
			i++;
		} else {
			mix[k] = array[j];
			j++;
		}
		k++;
	}

	// Appending the remaining elements
	while(i < m){
		mix[k] = array[i];
		i++;
		k++;
	}

	while(j < e){
		mix[k] = array[j];
		j++;
		k++;
	}

	// Copy the resultant sorted array - mix, into original array
	for(int itr = 0; itr < (e - s); itr++){
		array[itr + s] = mix[itr];
	}
}

void mergeSortInPlace(int *array, int s, int e){
	if(e - s == 1) {
		return;
	}

	int mid = s + ((e - s)/2);

	mergeSortInPlace(array, s, mid);
	mergeSortInPlace(array, mid, e);

	mergeInPlace(array, s, mid, e);
}

int* SortingAlgorithms::mergeSort(int *array, int size){
	// In place merge sort
	mergeSortInPlace(array, 0, size);
	return array;
}

void quickArraySort(int *array, int low, int high){
	if(low >= high){
		return;
	}

	int s = low;
	int e = high;
	int mid = e + (s - e)/2; // Taking mid as pivot
	int pivot = array[mid];

	while(s <= e){
		while(array[s] < pivot){
			s++;
		}
		while(array[e] > pivot){
			e--;
		}
		if(s <= e){ // To make code more efficient
			int temp = array[s];
			array[s] = array[e];
			array[e] = temp;
			s++;
			e--;
		}
	}

	quickArraySort(array, low, e);
	quickArraySort(array, s, high);
}

int* SortingAlgorithms::quickSort(int *array, int size){
	quickArraySort(array, 0, size - 1);
	return array;
}

int* SortingAlgorithms::cyclicSort(int *array, int size){
	int temp = 0, i = 0;
	while(i < size){
		if(array[i] != (i + 1)){
			temp = array[array[i] - 1];
			array[array[i] - 1] = array[i];
			array[i] = temp;
		} else {
			i++;
		}
	}
	return array;
}

int findMaximum(int *array, int size){
	int maxIndex = 0;
	for(uint8_t i = 0; i <= size; i++){
		if(array[i] >= array[maxIndex]){
			maxIndex = i;
		}
	}
	return maxIndex;
}

int* SortingAlgorithms::selectionSort(int *array, int size){
	int maxIndex = 0, temp = 0;
	for(uint8_t i = 0; i < size; i++){
		maxIndex = findMaximum(array, ((size - 1) - i));
		if(maxIndex != ((size - 1) - i)){
			temp = array[(size - 1) - i];
			array[(size - 1) - i] = array[maxIndex];
			array[maxIndex] = temp;
		}
	}
	return array;
}

int* SortingAlgorithms::insertionSort(int *array, int size){
	int temp = 0;
	for(uint8_t i = 0; i < (size - 2); i++){
		for(uint8_t j = i + 1; j > 0; j--){
			if(array[j] < array[j - 1]){
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}
	return array;
}
