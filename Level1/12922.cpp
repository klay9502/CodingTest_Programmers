// 수박수박수박수박수박수?
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12922
// Notion Link : https://www.notion.so/cf6b0eb0c41e4a2584de4c4f1199efcc?pvs=4

#include <string>

using namespace std;

string solution(int n) {
    string answer = "";
    
    for (int i = 0; i < n; ++i)
        answer += i % 2 ? "박" : "수";
    
    return answer;
}
