#include <iostream>

using namespace std;

int  nhiphan(int a[], int n, int x){
    
    int l = 0, r = n - 1;
    while(l <= r){
        
        int m = (l + r) / 2;
        if(a[m] == x){
            return a[m]; 
        }
        else if(a[m] < x){
           
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return -1; 
}

int main(){
    int n = 3;
    int a[3] = {1, 2, 3};
    cout << nhiphan(a, n, 1);
    return 0;
}
