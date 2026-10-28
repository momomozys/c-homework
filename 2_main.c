//202610115107
//张有生
#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<0){
        printf("负数\n");
    }else if(a==0){
        printf("零\n");
    }else{
        printf("正数\n");
    }
    return 0;

}
