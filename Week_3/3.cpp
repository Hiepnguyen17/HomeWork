#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string a = s.substr(0,2);
   
   
    if (s[(int)s.length() - 2] == 'P' && a != "12"){
        int b = stoi(a);
        b += 12;
        s[0] = (b/10) + '0';
        s[1] = (b% 10) + '0';
        
    }
    else if(s[(int)s.length() - 2] == 'A' && a == "12"){
        s[0] = '0';
        s[1] = '0';
    }
    s.pop_back();
    s.pop_back();
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

