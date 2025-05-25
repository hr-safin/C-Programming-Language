#include <stdio.h>

void Hello(int i)
{

    if (i == 6) // Condition
    {
       return;  
    }
    Hello(i + 1);
    printf("%d\n", i);
    
}
int main()
{
    int i = 1;
    Hello(i); // initialization
    return 0;
}