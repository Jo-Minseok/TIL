#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	while (true) {
		getline(cin, a);
		if (a == "") {
			break;
		}
		else {
			cout << a << "\n";
		}
	}
}