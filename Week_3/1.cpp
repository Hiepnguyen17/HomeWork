#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    getline(cin, a);
    getline (cin , b);
    cout << a.size() << " "<< b.size();
    cout << endl << a + b;
    char c;
    c = a[0];
    a[0]= b[0];
    b[0] = c;
    cout << endl << a << " " << b;
  
    return 0;
}
