// 없는 숫자 더하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/86051
// Notion Link : https://www.notion.so/b44d585461b14492a6fcf24bb933fd1b?pvs=4

#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for (int i = 0; i < 10; ++i)
    {
        bool check = false;
        for (int j = 0; j < numbers.size(); ++j)
        {
            if (numbers[j] == i)
            {
                check = true;
                break;
            }
        }
        
        if (!check)
            answer += i;
    }
  
//     모범 답안
//     int answer = 45;
//     for (int i = 0 ; i < numbers.size() ; i++)
//         answer -= numbers[i];
  
    return answer;
}
