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
    for (int i = 0 ; i < n; i++){
        int b;
        cin >> b;
        a.push_back(b);
        
    }
    int re, f, se;
    cin >> re >> f >>se;
    a.erase(a.begin() + re - 1, a.begin() + re );
    a.erase(a.begin() + f - 1, a.begin() + se - 1);
    cout << a.size() << endl;
    for (int i = 0 ; i < (int) a.size(); i++){
        cout << a[i] << " " ;
    }
    return 0;
    
}
