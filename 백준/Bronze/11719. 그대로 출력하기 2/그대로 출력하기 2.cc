#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	while (getline(cin,a)) {
		cout << a << "\n";
	}
}