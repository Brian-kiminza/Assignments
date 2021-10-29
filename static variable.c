#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 3;
    c += 6;
    printf("%d  ",c);
}
