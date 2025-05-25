#include <stdio.h>

void Hello(int i)
{

    if (i == 0) // Condition
    {
       return;  
    }
    printf("%d\n", i);
    Hello(i - 1);
    
}
int main()
{
    int i = 10;
    Hello(i); // initialization
    return 0;
}