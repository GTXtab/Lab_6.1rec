#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void genArray(int arr[], const int size, int i = 0)
{
	const int HIGH = 53;
	const int LOW = -17;

	if (i >= size) {
		return;
	}

	arr[i] = rand() % (HIGH - LOW + 1) + LOW;
	genArray(arr, size, i + 1);
}

void Print(const int arr[], const int size, int i = 0)
{
	if (i >= size) {
		return;
	}
	cout << setw(4) << arr[i];

	Print(arr, size, i + 1);


}


int Count(const int arr[], const int size, int i = 0) {
	if (i >= size) {
		return 0;
	}

	int count = 0;

	if (arr[i] < 0 && arr[i] % 3 != 0) {
		count = 1;
	}

	return count + Count(arr, size, i + 1);
}

int Sum(const int arr[], const int n, int i = 0)
{

	if (i >= n) {
		return 0;
	}

	int s = 0;

	if (arr[i] < 0 && arr[i] % 3 != 0) {
		s += arr[i];
	}

	return s + Sum(arr, n, i+1);
}

void Replace(int arr[], const int size, int i = 0) {
	if (i >= size) {
		return;
	}

	if (arr[i] < 0 && arr[i] % 3 != 0) {
		arr[i] = 0;
	}
	
	return Replace(arr, size, i + 1);
}

int main() {
	srand(time(0));
	int arr[24]; // 24 - array size

	genArray(arr, 24);
	cout << "Array: " << endl;
	Print(arr, 24);
	cout << endl;

	int count = Count(arr, 24);
	int sum = Sum(arr, 24);

	Replace(arr, 24);

	cout << "Count:" << endl;
	cout << count << endl;
	cout << "Sum:" << endl;
	cout << sum << endl;

	cout << "New Array:" << endl;
	Print(arr, 24);

	return 0;
}
