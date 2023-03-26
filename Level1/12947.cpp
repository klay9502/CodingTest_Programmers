// 하샤드 수
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12947
// Notion Link : https://www.notion.so/389067b8381c48cd8cd65b619b155a46?pvs=4

#include <string>

using namespace std;

bool solution(int x) {

    string str = to_string(x);
    int harshad = 0;
    
    for (int i = 0; i < str.size(); ++i)
        harshad += (int)str[i] - '0';
    
    return x % harshad ? false : true;
}
