#include <iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string name;
  cin >> name;
  if (name == "NLCS")
  {
    cout << "North London Collegiate School";
  }
  else if (name == "BHA")
  {
    cout << "Branksome Hall Asia";
  }
  else if (name == "KIS")
  {
    cout << "Korea International School";
  }
  else if (name == "SJA")
  {
    cout << "St. Johnsbury Academy";
  }
}