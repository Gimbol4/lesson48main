#include "logic.h"

void sort_select(int array[], int length) {
	for (int i = 0; i < length - 1; i++)
	{
		int min_i = i;

		for (int j = i + 1; j < length; j++)
		{
			if (array[j] < array[min_i]) {
				min_i = j;
			}
		}

		if (min_i != i) {
			int temp = array[i];
			array[i] = array[min_i];
			array[min_i] = temp;
		}
	}
}

void sort_insert(int array[], int length) {

	for (int i = 1; i < length; i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}
