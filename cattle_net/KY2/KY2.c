/*
*   KY2-成绩排序
*/

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    char name[10];
    int grade;
} Student, *pStu;

int main()
{
    int seq; //排序顺序
    int num; //人数
    char ch;
    Student temp;
    while (scanf("%d", &num) != EOF)
    { //输入人数
        do
        {
            scanf("%d", &seq); //输入排序方法
            if (seq != 0 && seq != 1)
            {
                printf("非法,请重新输入。排序方法0（降序）或者1（升序）");
            }
            else
            {
                break;
            }
        } while (1);

        pStu stus = (pStu)malloc(sizeof(Student) * num); //按人数创建学生数组
        for (int i = 0; i < num; i++)
        { //录入成绩
            scanf("%s %d", stus[i].name, &stus[i].grade);
        }

        //冒泡
        for (int i = 0; i < num; i++)
        {
            for (int j = num - 1; j > i; j--)
            {
                    if ((seq == 1 && stus[j].grade < stus[j - 1].grade) || (seq == 0 && stus[j].grade > stus[j - 1].grade))
                    {
                        temp = stus[j - 1];
                        stus[j - 1] = stus[j];
                        stus[j] = temp;
                    }
            }
        }
        //输出
        for (int i = 0; i < num; i++)
        {
            printf("%s %d\n", stus[i].name, stus[i].grade);
        }
        free(stus); //释放内存
    }

    return 0;
}