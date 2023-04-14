// 최대공약수와 최소공배수
// Programmers Link : https://school.programmers.co.kr/learn/courses/30/lessons/12940
// Notion Link : https://www.notion.so/253d4f11367e4fa7a1835acc3f6db463?pvs=4

#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    vector<int> temp;
    int gcd, lcm = -1;
    
    // 최대공약수
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            temp.push_back(i);
    }
    
    for (int i = 1; i <= m; ++i)
    {
        if (m % i == 0)
        {
            for (int j = 0; j < temp.size(); ++j)
            {
                if (i == temp[j])
                {
                    gcd = i;
                }
            }
        }
    }
    
    answer.push_back(gcd);
    
    // 최소공배수
    int cn, cm = 1;
    
    while(lcm == -1)
    {
        cn = 1;
        
        for (int i = 0; i < cm; ++i)
        {
            while(n * cn <= m * i)
            {
                if (n * cn == m * i)
                {
                    lcm = n * cn;
                    answer.push_back(lcm);
                    break;
                }
                else
                {
                    cn++;
                }
            }
        }
        
        cm++;
    }
    
    return answer;
}
