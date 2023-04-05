// 약수의 개수와 덧셈
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/77884
// Notion Link : https://www.notion.so/ef74a71a57904c76b80e1490522d688e?pvs=4

#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; ++i)
        answer += (int)sqrt(i) == sqrt(i) ? -i : i;
    
    return answer;
}
