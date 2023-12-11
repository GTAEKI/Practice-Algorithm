#include<bits/stdc++.h>
using namespace std;

int N;
char box[64][64];

// 재귀함수
void Check(int size, int y, int x)
{
    char curr = box[y][x];

    for (int i = y; i < y + size; i++)
        for (int j = x; j < x + size; j++)
            if (box[i][j] != curr)
            {
                cout << '(';
                Check(size / 2, y, x);
                Check(size / 2, y, x + size / 2);
                Check(size / 2, y + size / 2, x);
                Check(size / 2, y + size / 2, x + size / 2);
                cout << ')';
                return;
            }

    cout << curr;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> box[i][j];
        }
    }

    Check(N, 0, 0);

    return 0;
}