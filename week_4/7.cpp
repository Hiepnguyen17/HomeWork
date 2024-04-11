#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    char fr[h][w + 1];
    
    
    for (int i = 0; i < h; ++ i) {
        scanf("%s", fr[i]);
        
    }
    

    int sx = -1, sy;
    for (int i = 0; i < h; ++ i) {
        for (int j = 0; j < w; ++ j) {
            if (fr[i][j] != 'R') {
                if (fr[i][j] == 'Y') {
                    
                    sx = i;
                    sy = j;
                }
            }
        }
    }

    

    

    bool kiemtra1[w];
    memset(kiemtra1, false, sizeof(kiemtra1));
    kiemtra1[sy] = true;
    for (int x = sx; x < h; ++ x) {
        bool kiemtra2[w];
        memset(kiemtra2, false, sizeof(kiemtra2));
        for (int y = 0; y < w; ++ y) {
            kiemtra2[y] |= kiemtra1[y] && (fr[x + 1][y] != 'R');
        }
        for (int y = 1; y < w; ++ y) {
            kiemtra2[y] |= kiemtra1[y - 1] && (fr[x][y] != 'R') && (fr[x + 1][y] != 'R') ;
        }
        for (int y = 0; y + 1 < w; ++ y) {
            kiemtra2[y] |= kiemtra1[y + 1] && (fr[x][y] != 'R') && (fr[x + 1][y] != 'R') ;
        }
        memcpy(kiemtra1, kiemtra2, sizeof(kiemtra1));
    }

    bool kiemtra = 0;
    for (int i = 0; i < w; ++ i) {
        if (kiemtra1[i] == 1) {
        	kiemtra = 1;
        	break;
		}
    }

    cout << (kiemtra ? "YES" : "NO");

    return 0;
}
