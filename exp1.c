#include <stdio.h>
#include <stdint.h>

int main() {
    // 1. 用二进制字面量给一个 uint8_t 赋值
    // 注意：0b 前缀在 C++14 及 C23 标准中正式支持，主流编译器 (如 GCC/Clang) 也早就在 C 语言中作为扩展支持了
    uint8_t num = 0b00001111; 
    
    // 2. 打印它的十进制值
    // uint8_t 在 printf 中会经过整型提升变成 int，所以用 %d 即可
    printf("%d\n", num);
    
    // 3. 用 for 循环打印 8 位二进制位码，高位在前，高位补 0
    int temp = num;       // 使用临时变量进行操作，避免破坏原值
    int weight = 128;     // 对应 2^7，即最高位的权值
    
    // 循环变量 i 必须用 int，如果用 uint8_t，当 i=0 时，i-- 会变成 255，导致死循环
    for (int i = 7; i >= 0; i--) {
        // 按照提示：用 值 / 权值 取当前位
        // 因为前面的高位已经被减掉，此时 temp 一定小于 weight * 2，所以整除结果非 0 即 1
        int bit = temp / weight; 
        
        // 打印当前位
        printf("%d", bit);
        
        // 按照提示：再减掉当前位对应的值
        temp = temp - bit * weight;
        
        // 计算下一个权值（不能用移位，只能用除法）
        weight = weight / 2;
    }
    printf("\n");

    return 0;
}