#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
      int c = (int) arr.size();
      double p = 0, n = 0, n_0 = 0;
      for (int i = 0 ; i < c; i ++){
          if (arr[i] > 0) p++;
          else if (arr[i] < 0) n++;
          else n_0 ++;
      }
      cout <<fixed << setprecision(6) << p/c <<endl
           << n/c << endl
           << n_0 / c;
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    plusMinus(arr);
}

