// 정수 내림차순으로 배치하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12933
// Notion Link : https://www.notion.so/0b56849eead14248830cc8139b010c35?pvs=4

#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<char> vec;
    string str = to_string(n);
    
    for (int i = 9; i >= 0; --i)
        for (int j = 0; j < str.size(); ++j)
            if ((int)str[j] - '0' == i)
                vec.push_back(str[j]);
    
    int count = 1;
    
    for (int i = vec.size() - 1; i >= 0; --i)
    {
        answer += ((int)vec[i] - '0') * count;
        count *= 10;
    }
    
    return answer;
}
