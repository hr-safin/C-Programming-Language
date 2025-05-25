// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = x++;
//     printf("%d\n", y);
//     int z = ++y;
//     printf("%d", z++);
//     return 0;
// }

#include<stdio.h>

int main(){
    int x = 10;
    ++x;
    printf("%d",++x); // 12
    return 0;
}