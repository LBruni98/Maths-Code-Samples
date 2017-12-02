# Math Samples

The following are done in C++.

#### Arithmetic and Geometric Progressions
```cpp
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
```

#### Shape Co-ordinates
```cpp
#include <iostream>

using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int count = 1;
	
	char end;
	cout << "1st Coord = \n";
	cin >> x1;
	cin >> y1;
	cout << "Next? \n";
	cin >> end;
	
	if(end == 'y') {
		cout << "2nd Coord = \n";
		cin >> x2;
		cin >> y2;
		count++;
	}
	
	cout << "Next? \n";
	cin >> end;
	
	if(end == 'y') {
		cout << "3rd Coord = \n";
		cin >> x3;
		cin >> y3;
		count++;
	}
	
	cout << "Next? \n";
	cin >> end;
	
	if(end == 'y') {
		cout << "4th Coord = \n";
		cin >> x4;
		cin >> y4;
		count++;
	}
	
	if(count==3 && (x1 != x2 && x1 != x3 && x2 != x3) || (y1 != y2 && y1 != y3 && y2 != y3)) {
		cout << "TRIANGLE\n";
	}
	
	if(count == 4 && (x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x3 !=x4) || (y1 != y2 && y1 != y3 && y1 != y4 && y2 != x3 && y3 !=y4)) {
		cout << "SQUARE\n";
	}
	
	return 0;
}
```
