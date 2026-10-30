//202610115107
//张有生
#include<stdio.h>
int main(){

    float a,b;
    char m;
    scanf("%f %c %f",&a,&m,&b);
    if(m=='+' || m=='-' || m=='*' || m=='/'){
        if(m=='+'){
            printf("%.2f\n",a+b);
        }else if(m=='-'){
            printf("%.2f\n",a-b);
        }else if(m=='*'){
            printf("%.2f\n",a*b);
        }else if(m=='/'){
            if(b==0){
                printf("错误：除数不能为 0\n");
            }else{
                printf("%.2f\n",a/b);
            }
        }
    
        }else{
            printf("错误：不支持的运算符\n");
        }
    
    return 0;
}
