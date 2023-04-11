// 행렬의 덧셈
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12950
// Notion Link : https://www.notion.so/b6041377759047eb94620ee4a5a82c69?pvs=4

#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for (int i = 0; i < arr1.size(); ++i)
    {
        vector<int> temp;
        
        for (int j = 0; j < arr1[i].size(); j++)
            temp.push_back(arr1[i][j] + arr2[i][j]);
        
        answer.push_back(temp);
    }
    
    return answer;
}
