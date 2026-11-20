#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[100];
    int i;

    for (i = 0; i < 6; i++) {
        sprintf_s(filename, "image%d.jpg", i);
        printf("%s \n", filename);
    }
    return 0;
}
