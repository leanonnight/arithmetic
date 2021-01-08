// KY3-约数的个数

#include<stdio.h>
#include<math.h>

int findnum(int);

int main(){
    int num;    //数的个数
    int number;
    while(scanf("%d", &num) != EOF){
        for(int i=0; i<num; i++){
            scanf("%d", &number);
            printf("%d\n", findnum(number));    //找到约数输入并输出
        }
    }
    
    return 0;
}

int findnum(int num){
    int i=0;
    
    return i;
}