#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* slo(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int i = 0;
    int j = 0;
    char temp;
    while (s[i] != '\0')
        i++;
    char* a = (char*)malloc(i);
    while (s[j] != '\0')
     {
         a[j] = s[j];
         j++;
     }
     a[j] = '\0';
    char* answer = (char*)malloc(i);
    i = i -1;
    while (i > 0)
    {
        j = 0;
        while (j < i)
        {
            if (a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            j++;
        }
        i--;
    }
    while (a[i] != '\0')
    {
        answer[i] = a[i];
        i++;
    }
    printf("%s\n",a);
    answer[i] = '\0';
    printf("%s",answer);
    return answer;
}
int main()
{
    // char testString[] = {'Z', 'b', 'c', 'd' , 'e', 'f', 'g'};
    // char testString[] = "Zbcdefg";
    char* testString = "Zbcdefg";
    slo(testString);
}