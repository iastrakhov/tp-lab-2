#pragma once
#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
bool compare(T a, T b) {
	return a < b;
}

bool compare(char* a, char* b) {
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* array, int size) {

	if (size == 1)
		return;

	int middle = size / 2;

	msort(array, middle);
	msort((array + middle), size - middle);

	int iLeft = 0;
	int iRight = middle;
	T* temp = new T[size];

	for (int step = 0; step < size; step++) {
		if ((iRight >= size) || ((iLeft < middle) && (compare(array[iLeft], array[iRight])))) {
			temp[step] = array[iLeft];
			iLeft++;
		}
		else {
			temp[step] = array[iRight];
			iRight++;
		}
	}

	for (int step = 0; step < size; step++) {
		array[step] = temp[step];
	}
	delete[] temp;
}
