// 부족한 금액 계산하기
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/82612
// Notion Link : https://www.notion.so/6bfec100abe74c598abd9d6bd0ebcac5?pvs=4

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    for (int i = 0; i < count; ++i)
        answer += price * (i + 1);
    
    return money - answer > 0 ? 0 : answer - money;
}
