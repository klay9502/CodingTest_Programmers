// 내적
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/70128
// Notion Link : https://www.notion.so/09f1655f4ab045cca832465b2dbd3aa0?pvs=4

#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    for (int i = 0; i < a.size(); ++i)
        answer += a[i] * b[i];
    
    return answer;
}
