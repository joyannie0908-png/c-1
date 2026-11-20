#include <stdio.h>

int main(void)
{
    const char* p = "HelloWorld";
    printf("%s \n", p);

    p = "Welcome to C World!"; 
    printf("%s \n", p);

    p = "Goodbye"; 
    printf("%s \n", p);
    // p[0] = 'a'; // 오류가 발생한다.

    return 0;
}