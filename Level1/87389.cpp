// 나머지가 1이 되는 수 찾기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/87389
// Notion Link : https://www.notion.so/1-e3ad6dbbf6e2469b968596fe2032a674?pvs=4

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    
    return answer;
}
