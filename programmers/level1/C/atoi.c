#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int minus = 1;
    int answer = 0;
    int i =0;
    while (s[i] == '-' || s[i] == '+' )
    {
        if(s[i] == '-')
            minus = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        answer = answer * 10 + (s[i] -'0');
        i++;
    }
    return (answer* minus);
}
int main()
{
    char *a = "1234";
    printf("%d",solution(a));
}