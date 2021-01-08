// KY3-约数的个数

#include <stdio.h>
#include <malloc.h>

void factorize(int num);
int find_prime_num(int number);


int main()
{

    int num = 12;
    printf("%d",find_prime_num(num));
    return 0;
}


//因式分解算法
//不断整除小因子 直到为1
void factorize(int num)
{
    int x = 0;
    while (num > 1)
    {
        for(int i = 2; i <= num; i++){  
            if(num % i == 0){
                printf("%d ", i);
                num = (int)(num/i);
                break;
            }
        }
    }
}

//约数数量算法有两种
//(1)利用因式分解算法 如 12 = 2 * 2 * 3 ，则12的约数可表示为 2^a + 3^b, a属于{0,1,2}, b属于{0,1}，由乘法原理12的约数共有3*2种
//(2)利用因式分解的规律：若 i 为 num 的约数，且 i<sqrt(num),则 num必还有一个约数大于sqrt(num)

//这里利用第二种方法
int find_prime_num(int number){
    int num = 0;
    
    //1只有自身
    if(number == 1){
        return 1;
    }

    for(int i=2; i*i<number; i++){
        if(number % i == 0){
            num+=2;
        }
        if(i*i==number){
            num++;
        }
    }
    return num + 2;     //加 2是加上 1和本身
}
