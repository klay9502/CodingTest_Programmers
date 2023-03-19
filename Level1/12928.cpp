// 약수의 합
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12928
// Notion Link : https://www.notion.so/ff8f4339534a46818de436b70ed594b2?pvs=4

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            answer += i;
    
    return answer;
}
