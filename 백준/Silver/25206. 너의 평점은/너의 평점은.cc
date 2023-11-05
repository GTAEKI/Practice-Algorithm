#include <stdio.h>

int main() 
{

  char name[51];
  char scoreLevel[3];
  double score;

  double sumScore = 0.0;
  double temp;
  double res = 0.0;
  for(int i = 0; i < 20; i++) 
  {
    scanf("%s %lf %s", name, &score, scoreLevel);
    if(scoreLevel[0] == 'P') continue;
    
    sumScore += score;
    if(scoreLevel[0] == 'F') continue;

    if(scoreLevel[0] == 'A') temp = 4;
    else if (scoreLevel[0] == 'B') temp = 3;
    else if (scoreLevel[0] == 'C') temp = 2;
    else temp = 1;

    if (scoreLevel[1] == '+') temp += 0.5;

    res += score * temp;
  }

  printf("%lf", res / sumScore);

  return 0;
}