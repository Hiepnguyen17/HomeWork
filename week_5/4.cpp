#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector <int> v, s;
    for (int i = 0 ; i < n; i++){
        int b;
        cin >> b;
        v.push_back(b);
    }
    int a;
    cin >> a;
    for (int i = 0 ; i < a; i++){
        int b;
        cin >> b;
        s.push_back(b);
    }
    int lo ;
    for(int i = 0 ; i < a; i++){
        int  hi = n - 1;
        lo = 0;
        while (lo < hi){
            int m = (hi + lo) /2;
            if (s[i] > v[m]) lo = m + 1;
            else hi = m;
        }
        if (v[lo] == s[i] ) cout << "Yes " << lo + 1 << endl;
        else cout << "No " << lo + 1 << endl;
    }
    return 0;
}
    
