#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> a;
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        int b;
        cin >> b;
        a.push_back(b);
        
    }
    sort(a.begin(), a.end());
    for (int i = 0 ; i < n; i ++){
        cout << a[i] << " ";
    }
    return 0;
}
