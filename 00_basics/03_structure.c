#include <stdio.h>
int main(){
    struct students{
        int roll;
        char name[20];
    }; 
    struct students s1;
    s1.roll = 20;
    printf("%d",s1.roll);
}