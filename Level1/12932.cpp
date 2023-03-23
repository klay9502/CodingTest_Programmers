// 자연수 뒤집어 배열로 만들기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12932
// Notion Link : https://www.notion.so/fad1f64d1a1943a5904a0949db0a9eb3?pvs=4

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string num = to_string(n);
    
    for (int i = num.size() - 1; i >= 0; --i)
        answer.push_back((int)num[i] - '0');
    
    return answer;
}
