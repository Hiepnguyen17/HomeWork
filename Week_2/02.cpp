#include <iostream>

using namespace std;

int main (){


        int x1 , v1 , x2 , v2;
        cin >> x1 >> v1 >> x2 >> v2;
        if ((double)(x1- x2)/(v2 - v1) > 0 && ((double)(x1- x2)/(v2 - v1) == (int)(x1- x2)/(v2 - v1)) ) cout << "YES\n";
        else cout << "NO\n";
        return 0;

}

