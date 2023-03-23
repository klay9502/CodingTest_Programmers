// 문자열 내 p와 y의 개수
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12916
// Notion Link : https://www.notion.so/p-y-a4530d8b8c814bc4bc6c649fdf7c832d?pvs=4

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int count_p = 0;
    int count_y = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'p' || s[i] == 'P')
        {
            count_p++;
            continue;
        }
        
        if (s[i] == 'y' || s[i] == 'Y')
        {
            count_y++;
            continue;
        }
    }
    
    if (count_p == count_y)
        return true;
    else return false;
}
