#include <bits/stdc++.h>
using namespace std;

int N; // 2차원 배열의 행과 열의 개수 2이상 100이하 정수
int ret = 0; // 답 변수

int dx[4] = {0, 1, 0, -1}; // 사방을 탐색하기위한 배열
int dy[4] = {1, 0, -1, 0}; // 사방을 탐색하기위한 배열

int arr[101][101], visited[101][101]; // 정보를 담을 배열 arr과, 방문정보 담을 배열 visited

void dfs(int x, int y, int mx) {
    visited[y][x] = 1; // 방문 표시

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
            if (arr[ny][nx] <= mx) continue; // 현재 높이보다 작거나 같으면 스킵
            if (visited[ny][nx]) continue; // 이미 방문한 곳이면 스킵
            dfs(nx, ny, mx); // DFS 호출
        }
    }
}

int main() {
    cin >> N; // 지역 크기 입력
    int maxA = 0; // 최대 높이를 저장할 변수
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int a;
            cin >> a;
            if (maxA < a) // 최대 높이를 체크
                maxA = a;
            arr[i][j] = a; // 높이 정보 저장
        }
    }

    while (maxA--) { // 최대높이의 수만큼만 체크
        memset(visited, 0, sizeof(visited)); // 방문 배열 초기화
        int temp = 0; // 임시 변수 초기화

        for (int y = 0; y < N; y++) {
            for (int x = 0; x < N; x++) {
                if (arr[y][x] > maxA && !visited[y][x]) { // 현재 높이보다 높고 방문하지 않은 곳이면
                    dfs(x, y, maxA); // DFS 호출
                    temp++; // 임시 변수 증가
                }
            }
        }

        if (temp > ret) // 현재까지 값보다 임시변수 값이 크다면
            ret = temp; // 임시변수값을 정답변수에 저장
    }

    cout << ret; // 출력
    return 0;
}
