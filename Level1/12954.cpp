// 짝수와 홀수
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12954
// Notion Link : https://www.notion.so/x-n-246744e0afbf406dbc88b17e4d50f8d7?pvs=4

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    int temp = x;
    
    for (int i = 0; i < n; ++i)
    {
        answer.push_back(temp);
        temp += x;
    }
    
    return answer;
}
