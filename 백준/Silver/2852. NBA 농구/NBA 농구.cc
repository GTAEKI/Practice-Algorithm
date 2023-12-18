#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, team, min, sec, saveS = 0, team1Point = 0, team2Point = 0, team1Time = 0, team2Time = 0;
    string goalTime;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> team >> goalTime;
        min = stoi(goalTime.substr(0, goalTime.find(":")));
        sec = stoi(goalTime.substr(goalTime.find(":") + 1));

        if (team1Point > team2Point) {
            team1Time += (min * 60) + sec - saveS;
        } else if (team2Point > team1Point) {
            team2Time += (min * 60) + sec - saveS;
        }

        if (team == 1) team1Point++;
        else team2Point++;

        saveS = (min * 60) + sec;
    }

    if (team1Point > team2Point) {
        team1Time += (48 * 60) - saveS;
    } else if (team2Point > team1Point) {
        team2Time += (48 * 60) - saveS;
    }

    printf("%02d:%02d\n", team1Time / 60, team1Time % 60);
    printf("%02d:%02d\n", team2Time / 60, team2Time % 60);

    return 0;
}
