#include <stdio.h>
#define s "#include <stdio.h>%c#define s %c%s%c%c#define FT() int main() { FILE *fp = fopen(%cGrace_kid.c%c, %cw%c); if (fp == NULL) return 1; fprintf(fp, s, 10, 34, s, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10); fclose(fp); }%c/*%c    Nowhere comment%c*/%cFT()"
#define FT() int main() { FILE *fp = fopen("Grace_kid.c", "w"); if (fp == NULL) return 1; fprintf(fp, s, 10, 34, s, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10); fclose(fp); }
/*
    Nowhere comment
*/
FT()