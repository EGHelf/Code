#include <stdio.h>
void a(void);
void b(void);
int main(void)
{
    printf("How many apples do we have?\n");
    a();
    b();
    return 0;
}
void b(void)
{
    printf("That's great.");
}
void a(void)
{
    int c;
    c=10;
    printf("%d.\n",c);
}