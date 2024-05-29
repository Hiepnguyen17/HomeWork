#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int get_max_power_sum( int target, int next, int n)
{
    //cerr << target << "," << next << "," << n << endl;
    
    int remainder = target - pow(next, n);
   
    if (remainder == 0 ) return 1;
    else if(remainder > 0)
    {
        return get_max_power_sum(remainder, next+1, n) + get_max_power_sum(target, next+1, n);
    }    
    else  
        return 0;      
}

int main() {
    int X, N;
    cin >> X >> N;
    //cerr << "X=" << X << ", N=" << N << endl
    
    cout << get_max_power_sum( X, 1, N ) << endl;
    return 0;
}

