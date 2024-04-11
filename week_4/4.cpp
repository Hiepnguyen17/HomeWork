#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int line ,query;
    cin >> line >> query ;
    vector <vector<int>> v(line);
    for (int i = 0 ; i < line ; i++){
        int a;
        cin >> a;
        for (int j = 0 ; j < a; j++){
            int b; 
            cin >> b;
            v[i].push_back(b);
        }
        
    }
    int arr[query][2];
        for(int i = 0 ; i < query ; i++){
            
            cin >> arr[i][0] >> arr[i][1];
            
        }
        for (int i = 0 ; i < line; i ++){
            cout << v[arr[i][0]][arr[i][1]] << endl;
        }
    return 0;
}
