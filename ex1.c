//두 개의 문자열 실행인자를 입력받고 포함관계인 문자열인지 확인
//argv[0] == 실행 파일명, argv[1]부터 사용자가 입력한 argument가 저장됨.
//argc == argument의 수. 인자를 하나도 입력하지않으면 agrc == 1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;
    char *s_short, *s_long;

    if (strlen(argv[1]) < strlen(argv[2])) {
        s_short = argv[1];
        s_long = argv[2];
    } else {
        s_short = argv[2];
        s_long = argv[1];
    }

    ptr = strstr(s_long,s_short);
    if (ptr == NULL)
        printf("Non-inclusive");
    else
        printf("%s is part of %s", s_short, s_long);
    return 0;
}