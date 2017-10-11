#include <iostream>

using namespace std;

int main () {
  int n, count, arit, geo = 1;
  cout << "Number: ";
  cin >> n;
  
  for(count = 0; count < 10 ; count++) {
    arit += n;
    geo *= n;
  }
  
  cout << arit;
  cout << "\n";
  cout << geo;
  
  return 0;
}
