// 나누어 떨어지는 숫자 배열 
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12910
// Notion Link : https://www.notion.so/5eee1c79458747caaf319a9ed2e58fc7?pvs=4

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); ++i)
        if (!(arr[i] % divisor))
            answer.push_back(arr[i]);
    
    if (!answer.size())
        answer.push_back(-1);
    
    sort(answer.begin(), answer.end());
    
    return answer;
}
