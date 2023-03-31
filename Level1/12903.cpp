// 가운데 글자 가져오기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12903
// Notion Link : https://www.notion.so/9cd8b28b905845179dcf9fe41d13c3ef?pvs=4

#include <string>

using namespace std;

string solution(string s) {
    string answer = "";

    if(s.size() % 2)
    {
        answer = s[s.size() / 2];
    }
    else
    {
        answer.push_back(s[(s.size() / 2 - 1)]);
        answer.push_back(s[s.size() / 2]);
    }

    return answer;
}
