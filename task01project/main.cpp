#include "util.h"

int main() {
	int length = 100'000;
	int array[DEFAULT_SIZE];
	init(array, length);

	long long start = time(0);

	sort_insert(array, length);

	long long end = time(0);

	
	
	string s = convert(array, length);
	print(s);
	cout << "\nYour time of sort select is: " << end - start << " seconds.";
	return 0;
}