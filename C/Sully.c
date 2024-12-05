#include <stdio.h>
#include <stdlib.h>
#define BUFF_SIZE 64
#define SRC "#include <stdio.h>%c#include <stdlib.h>%c#define BUFF_SIZE 64%c#define SRC %c%s%c%c%cint main()%c{%c    int i = %i;%c    char buff[BUFF_SIZE];%c    FILE *fp;%c%c    snprintf(buff, BUFF_SIZE, %cSully_%cd.c%c, i);%c    if ((fp = fopen(buff, %cw%c)) == NULL)%c        return 1;%c    fprintf(fp, SRC, 10, 10, 10, 34, SRC, 34, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10);%c    fclose(fp);%c%c    if (i <= 0)%c        return 0;%c%c    snprintf(buff, BUFF_SIZE, %cclang -Wall -Werror -Wextra -o Sully_%cd Sully_%cd.c && ./Sully_%cd%c, i, i, i);%c    system(buff);%c}"

int main()
{
    int i = 5;
    char buff[BUFF_SIZE];
    FILE *fp;

    snprintf(buff, BUFF_SIZE, "Sully_%d.c", i);
    if ((fp = fopen(buff, "w")) == NULL)
        return 1;
    fprintf(fp, SRC, 10, 10, 10, 34, SRC, 34, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10);
    fclose(fp);

    if (i <= 0)
        return 0;

    snprintf(buff, BUFF_SIZE, "clang -Wall -Werror -Wextra -o Sully_%d Sully_%d.c && ./Sully_%d", i, i, i);
    system(buff);
}