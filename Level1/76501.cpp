// 음양 더하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/76501
// Notion Link : https://www.notion.so/720fae96f8874d41a8db75d4b0dca689?pvs=4

#include <string>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for (int i = 0; i < absolutes.size(); ++i)
        answer += signs[i] ? absolutes[i] : -absolutes[i];
    
    return answer;
}
