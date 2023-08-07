#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int k = 0;
    int q = 0;
    int i = total;
    
    // for(int i = 0; i < total; i++)
    // {
    while(true)
    {
        answer.clear();
        k = 0;
        int j = 0;
        q = num;
        while(j < num)
        {
            k += i+j;
            answer.push_back(i+j);
            q -= 1;
            if(k == total && q == 0)
            {
                return answer;
            }
            j++;
        }
        i--;
        // for(int j = 0; j < num; j++)
        // {
        //     k += i+j;
        //     answer.push_back(i+j);
        //     if(k == total)
        //     {
        //         return answer;
        //     }
        // }
    // }
    }
    
    return answer;
}