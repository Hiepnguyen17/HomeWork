#include <iostream>

using namespace std;
int ucln (int a, int b){
    if (b == 0) return a;
    else return ucln(b,a%b);
}
int bcnn (int a , int b){
    int tich = a* b;
    int uc = ucln(a, b);
    return tich / uc;
}


int main(){
    int na, nb;
    cin >> na >> nb;

    int b[nb], a[na];

    for (int i = 0 ; i < na ;i++){
        cin >> a[i];

    }for (int i = 0 ; i < nb ;i++){
        cin >> b[i];
    }
    int bcnn_a = a[0];
    int ucln_b = b[0];
    int between ;



    for (int i = 1 ; i < na ;i++){
            bcnn_a = bcnn(a[i], bcnn_a);

    }


    
    ucln_b = b[0];
    for (int i = 1 ; i < nb ;i++){
            ucln_b = ucln(ucln_b, b[i]);

    }
    between = 0;
    int count = 0 ;
    while (bcnn_a * between <= ucln_b){
        if (ucln_b % (bcnn_a *(++between)) == 0 ) count ++;
    }
    cout << count;
}
