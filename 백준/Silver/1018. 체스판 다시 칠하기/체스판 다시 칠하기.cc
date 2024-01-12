#include <iostream>
using namespace std;

const int MAX = 51;
char map[MAX][MAX];
int n, m, minA= 64;

void checkBoard(char c, int sy, int sx) 
{
    int cnt = 0;
    for (int y = sy; y < sy + 8; y++) 
    {
        for (int x = sx; x < sx + 8; x++) 
        {
            if ((y + x) % 2 == 0) 
            {
                if (map[y][x] != c) ++cnt;
            }
            else 
            {
                if (map[y][x] == c) ++cnt;
            }
        }
    }
    if (cnt < minA) minA = cnt;
}

int main() 
{
    cin >> n >> m;
    for (int y = 0; y < n; y++) cin >> map[y];

    for (int y = 0; y < n - 7; y++) 
    {
        for (int x = 0; x < m - 7; x++) 
        {
            checkBoard('B', y, x);
            checkBoard('W', y, x);
        }
    }

    cout << minA << "\n";
    return 0;
}
