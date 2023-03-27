// 평균 구하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12919
// Notion Link : https://www.notion.so/30071cad3a5546cb92a5db9cfd73bcd7?pvs=4

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    for (int i = 0; i < seoul.size(); ++i)
        if (seoul[i] == "Kim")
            answer = "김서방은 " + to_string(i) + "에 있다";
    
    return answer;
}
