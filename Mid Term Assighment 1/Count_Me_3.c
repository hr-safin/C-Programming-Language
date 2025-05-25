#include<stdio.h>
#include<string.h>
int main(){
    
    int T;
    scanf("%d", &T);

    for(int i =0; i<T; i++){
        char s[100001];
        scanf("%s", s);

        int small = 0;
        int cap = 0;
        int dig = 0;

        int length = strlen(s);

        for(int i =0; i<=length; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                small++;
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                cap++;
            }else if (s[i] >= '0' && s[i] <= '9')
            {
                dig++;
            }
            
        }

        printf("%d %d %d\n", cap, small, dig);
    }
    return 0;
}