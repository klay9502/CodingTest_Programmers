// 콜라츠 추측
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12943
// Notion Link : https://www.notion.so/bf1c1075eafc476fa68523c2ed2dffc5?pvs=4

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    
    while (answer <= 500 && n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        
        answer++;
    }
    
    return n == 1 ? answer : -1;
}
