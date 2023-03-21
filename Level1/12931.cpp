// 자릿수 더하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12931
// Notion Link : https://www.notion.so/59bf28b7f12b44de99a47fbc0669de65?pvs=4

#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    for (int i = 0; n != 0; ++i)
    {
        answer += n % 10;
        n -= n % 10;
        n /= 10;
    }

    return answer;
}
