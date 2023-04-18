// 같은 숫자는 싫어
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12906
// Notion Link : https://www.notion.so/6292167d12c64ffb89a999c6bd4ae8d7?pvs=4

#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    for (int i = 0; i < arr.size(); ++i)
    {
        if (answer.empty())
            answer.push_back(arr[i]);
        else
            if (answer.back() != arr[i])
                answer.push_back(arr[i]);
    }

    return answer;
}
