
#include <bits/stdc++.h>
using namespace std;

int selectNumber(int low, int high)
{
return (int)(low+high) / 2;
}

int main (){
    int n;
    cin >> n;
    for (int q = 0 ; q < n; q++){
        int e;
        cin >> e;
        int a[e];
        long long sum_all = 0 ;
        for (int i = 0 ;i < e ; i++){
            cin >> a[i];
            sum_all +=a[i];
        }
        bool kiemtra = 0;



int count = 0 , X, low =1 , high = e;
do{
    long long sum_l = 0;
    count  +=1 ;
    X = selectNumber(low , high);
    if (X == 1) {
        sum_l = 0;
        if (sum_l == (sum_all - a[X - 1] - sum_l)){
            kiemtra = 1;
            break ;

        }

    }
    for (int j = 1 ; j < X ; j++){
            sum_l += a[j -1 ];
            }
            if(sum_l == (sum_all - a[X - 1] - sum_l)) {
                kiemtra = 1;
                break;
            }
            else if(sum_l < (sum_all - a[X - 1] - sum_l)) low = X + 1;
            else if(sum_l > (sum_all - a[X - 1] - sum_l)) high = X - 1;
} while (count  < 100);

if (kiemtra == 1) cout << "YES\n";
        else
        cout << "NO\n";
}

}
