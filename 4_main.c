//202610115107
//张有生
#include<stdio.h>
int main(){

    float a;
    scanf("%f",&a);
    if(a>100 || a<0){
        printf("输入无效\n");
    }else if(a>=90){
        printf("A\n");
    }else if(a>=80){
        printf("B\n");
    }else if(a>=70){
        printf("C\n");
    }else if(a>=60){
        printf("D\n");
    }else{
        printf("E\n");
    }
    return 0;

}
