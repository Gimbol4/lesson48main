#include "util.h"

void print(string s) {
	cout << s;
}

string convert(int array[], int length) {
	string s = "";
	for (int i = 0; i < length; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

void init(int array[], int length) {
	for (int i = 0; i < length; i++)
	{
		array[i] = rand();
	}
}