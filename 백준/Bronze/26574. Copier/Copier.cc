#include <iostream>
using namespace std;
int main() {
	int count,num;
	cin >> count;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < count; i++) {
		cout << arr[i] << " " << arr[i] << "\n";
	}
}