
#include <iostream>

using namespace std;

int main (){

    int n;
    cin >> n;
    for (int i = 0 ;i  < n; i++){
        int a, b;
        cin >> a;
        b = a;
        int count = 0 ;
        while (b != 0){
            int c = b % 10;
            b /= 10;
            if (c != 0 && a % c == 0) count ++;
            else continue;

        }
        cout << count << endl;
    }
}
