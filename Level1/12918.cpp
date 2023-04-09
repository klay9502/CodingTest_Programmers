// 문자열 다루기 기본
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12918
// Notion Link : https://www.notion.so/bebd59d59e3b4604ac8f1b179ef962e0?pvs=4

#include <string>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.size() != 4 && s.size() != 6)
        return false;
    
    for (int i = 0; i < s.size(); ++i)
    {
        if ((int)s[i] >= 48 && (int)s[i] <= 58)
            continue;
        else { answer = false; break; }
    }
    return answer;
}
