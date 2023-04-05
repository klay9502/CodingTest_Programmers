// 나누어 떨어지는 숫자 배열 
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12917
// Notion Link : https://www.notion.so/70def00161914de38ec88678e62ebcb4?pvs=4

#include <string>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = i; j < s.size(); ++j)
        {
            if (s[i] < s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        
        answer.push_back(s[i]);
    }
    
    return answer;
}
