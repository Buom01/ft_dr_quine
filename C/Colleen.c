#include <stdio.h>

/*
    Outside comment
*/
void colleen()
{
    char *s = "#include <stdio.h>%c%c/*%c    Outside comment%c*/%cvoid colleen()%c{%c    char *s = %c%s%c;%c    printf(s, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint main()%c{%c    /*%c        Main comment%c    */%c    colleen();%c}";
    printf(s, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
}

int main()
{
    /*
        Main comment
    */
    colleen();
}