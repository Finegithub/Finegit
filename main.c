#include <stdio.h>
#include <stdlib.h>

int main()
{
    double power[] = {40567, 78965, 98632, 18976, 67954};
    int i, j; //定义两个循环变量
    int temp; //定义一个临时变量
    int count = 5; //定义一个变量存储数组的长度
    double powerinset = 0; //定义一个要插入的玩家战力值变量
    double powerdelete = 0; //定义一个要剔除的玩家战力值变量
    for(i = 0; i < count - 1; i++) //冒泡排序战力排行榜
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(power[j] < power[j + 1])
            {
                temp = power[j];
                power[j] = power[j + 1];
                power[j + 1] = temp;
            }
        }
    }
    printf("初始排行榜为：\n"); //打印排序后的战力排行榜
    for(i = 0; i < count; i++)
    {
        printf("%.2lf\n", power[i]);
    }
    printf("请输入要剔除的玩家战力值：");
    scanf("%lf", &powerdelete);
    for(i = 0; i < count; i++) //在战力排行榜中查找要剔除的战力值
    {
        if(powerdelete == power[i]) //如果找到该值
        {
            for(j = i; j < count - 1; j++)
            {
                power[j] = power[j + 1]; //从该值开始，依次将后一位的战力值替换前一位的战力值
            }
            printf("现在的排行榜为：\n");
            for(j = 0; j < count - 1; j++)
            {
                printf("%.2lf\n", power[j]); //打印剔除后的排行榜。注意：数组的最后一位不打印
            }
            break;
        }
    }
    if(i == count)
    {
        printf("很遗憾！该玩家的战力值不再排行榜内。\n"); //如果输入的值不在排行榜中，则退出程序
        return 0;
    }
    printf("请输入要上榜的玩家战力值：");
    scanf("%lf", &powerinset);
    power[count - 1] = powerinset; //将要插入的战力值赋给数组的最后的那个元素
    for(i = 0; i < count - 1; i++) //冒泡排序战力排行榜
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(power[j] < power[j + 1])
            {
                temp = power[j];
                power[j] = power[j + 1];
                power[j + 1] = temp;
            }
        }
    }
    printf("当下的排行榜为：\n");
    for(i = 0; i < count; i++)
    {
        printf("%.2lf\n", power[i]); //打印排序后的战力排行榜
    }

    return 0;
}
