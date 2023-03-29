// 제일 작은 수 제거하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12935
// Notion Link : https://www.notion.so/b5b29421be2c4c54a29310590c1e6bcf?pvs=4

#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() < 2)
        answer.push_back(-1);
    else
    {
        int minIndex = 0;
        
        for (int i = 1; i < arr.size(); ++i)
            if (arr[minIndex] > arr[i])
                minIndex = i;
        
        arr.erase(arr.begin() + minIndex);
        
        answer = arr;
    }
        
    return answer;
}
