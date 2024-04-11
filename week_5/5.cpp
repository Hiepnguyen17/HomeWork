#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       set <int>se;
       int n;
       cin >> n;
       for (int i = 0 ; i < n; i ++){
           int a, b;
           cin >> a >> b;
           switch(a){
               case 1:
               {
                   se.insert(b);
                   break;
               }
               case 2:
               {
                   se.erase(b);
                   break;
               }
               case 3: 
               {
                   if(se.find(b) != se.end()) cout << "Yes\n";
                   else cout << "No\n";
                   break;
               }
           }
       }
    return 0;
}



