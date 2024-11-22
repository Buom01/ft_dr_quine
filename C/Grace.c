#include <stdio.h>
#define s "#include <stdio.h>%c#define s %c%s%c%c#define GRACE() int main() { FILE *fp = fopen(%cGrace_kid.c%c, %cw%c); if (fp == NULL) return 1; fprintf(fp, s, 10, 34, s, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10); fclose(fp); return 0; }%c/*%c    Nowhere comment%c*/%cGRACE()"
#define GRACE() int main() { FILE *fp = fopen("Grace_kid.c", "w"); if (fp == NULL) return 1; fprintf(fp, s, 10, 34, s, 34, 10, 34, 34, 34, 34, 10, 10, 10, 10); fclose(fp); return 0; }
/*
    Nowhere comment
*/
GRACE()