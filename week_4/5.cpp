#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> a, b;
    for (int  i = 0 ; i < n; i++){
        int c;
        cin >> c;
        a.push_back(c);


    }
    for (int i = 0 ; i < n+ 1; i++){
        int c;
        cin >> c;
        b.push_back(c);
    }

    sort (b.begin(), b.end());
    sort (a.begin(), a.end());


    for (int i = 0 ; i < n + 1; i++){
        vector <int > c = b;
        bool kiemtra = 1;

        c.erase(c.begin() + i, c.begin() + i + 1);

        for (int j = 0 ; j < n; j++){
            if (a[j] != c[j]){
                kiemtra = 0 ;
                break;
            }

            }

        if (kiemtra == 1){
            cout << b[i];
            break;
        }


        }



}

