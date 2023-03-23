// 정수 제곱근 판별
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12934
// Notion Link : https://www.notion.so/8fdccc6404d14bdbbc9071a11c2f307c?pvs=4

#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    for (long long i = 1; i * i <= n; ++i)
    {
        if (i * i == n)
            return (i + 1) * (i + 1);
    }
    
    return -1;
}
