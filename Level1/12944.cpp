// 평균 구하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12944
// Notion Link : https://www.notion.so/0d64e5503cd6405ca9f32b15f61748ed?pvs=4

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for (int i = 0; i < arr.size(); ++i)
    {
        answer += arr[i];
    }
    
    return answer / arr.size();
}
