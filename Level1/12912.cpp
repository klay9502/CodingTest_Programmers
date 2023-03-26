// 두 정수 사이의 합
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12912
// Notion Link : https://www.notion.so/9f6f60a4a661477ba47be59efe0d836d?pvs=4

#include <string>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a > b)
        for (long long i = b; i <= a; ++i)
            answer += i;
    else
        for (long long i = a; i <= b; ++i)
            answer += i;
    
    return answer;
}
