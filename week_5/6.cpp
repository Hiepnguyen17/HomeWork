#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    map<string, int> ma;
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        int a;
        string b;
        cin >> a >> b;
        switch(a){
            case 1:
            {
                
            int c;
            cin >> c;
                if (ma.find(b)== ma.end()) ma[b] = c;
                
                else ma[b] += c;
                break;
                
            }
            case 2:
            {
                
                
                ma[b] = 0 ;
                break;
            }
            case 3:
            {
                
                
                cout << ma[b] << endl;
               
            }
        }
    }
    return 0;
}



