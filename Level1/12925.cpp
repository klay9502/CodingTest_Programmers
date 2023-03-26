// 문자열을 정수로 바꾸기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12925
// Notion Link : https://www.notion.so/d199da33c8d04a28bb9bb04ca46061bc?pvs=4

#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    int digit = 1;
    
    if (s[0] == '-' || s[0] == '+')
    {
        // 부호가 있을 때
        for (int i = s.size() - 1; i > 0 ; --i)
        {
            answer += ((int)s[i] - '0') * digit;
            digit *= 10;
        }
        
        answer = s[0] == '-' ? -answer : answer;
    }
    else
    {
        // 부호가 없을 때
        for (int i = s.size() - 1; i >= 0 ; --i)
        {
            answer += ((int)s[i] - '0') * digit;
            digit *= 10;
        }
    }
    
    return answer;
}
