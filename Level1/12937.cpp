// 짝수와 홀수
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12937
// Notion Link : https://www.notion.so/d2847cca0b6746ca9d909e99104ef6bb?pvs=4

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    
    if (num % 2)
        answer = "Odd";
    else
        answer = "Even";
    
    return answer;
}
