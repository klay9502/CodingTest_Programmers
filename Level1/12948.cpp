// 핸드폰 번호 가리기 
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12948
// Notion Link : https://www.notion.so/c44edba0993c47efb0ade2e6a900bfd7?pvs=4

#include <string>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    for (int i = 0; i < phone_number.size(); ++i)
        answer += i < phone_number.size() - 4 ? '*' : phone_number[i];
    
    return answer;
}
