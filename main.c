#include <stdio.h>
#include <stdlib.h>

int main()
{
    double power[] = {40567, 78965, 98632, 18976, 67954};
    int i, j; //��������ѭ������
    int temp; //����һ����ʱ����
    int count = 5; //����һ�������洢����ĳ���
    double powerinset = 0; //����һ��Ҫ��������ս��ֵ����
    double powerdelete = 0; //����һ��Ҫ�޳������ս��ֵ����
    for(i = 0; i < count - 1; i++) //ð������ս�����а�
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
    printf("��ʼ���а�Ϊ��\n"); //��ӡ������ս�����а�
    for(i = 0; i < count; i++)
    {
        printf("%.2lf\n", power[i]);
    }
    printf("������Ҫ�޳������ս��ֵ��");
    scanf("%lf", &powerdelete);
    for(i = 0; i < count; i++) //��ս�����а��в���Ҫ�޳���ս��ֵ
    {
        if(powerdelete == power[i]) //����ҵ���ֵ
        {
            for(j = i; j < count - 1; j++)
            {
                power[j] = power[j + 1]; //�Ӹ�ֵ��ʼ�����ν���һλ��ս��ֵ�滻ǰһλ��ս��ֵ
            }
            printf("���ڵ����а�Ϊ��\n");
            for(j = 0; j < count - 1; j++)
            {
                printf("%.2lf\n", power[j]); //��ӡ�޳�������а�ע�⣺��������һλ����ӡ
            }
            break;
        }
    }
    if(i == count)
    {
        printf("���ź�������ҵ�ս��ֵ�������а��ڡ�\n"); //��������ֵ�������а��У����˳�����
        return 0;
    }
    printf("������Ҫ�ϰ�����ս��ֵ��");
    scanf("%lf", &powerinset);
    power[count - 1] = powerinset; //��Ҫ�����ս��ֵ��������������Ǹ�Ԫ��
    for(i = 0; i < count - 1; i++) //ð������ս�����а�
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
    printf("���µ����а�Ϊ��\n");
    for(i = 0; i < count; i++)
    {
        printf("%.2lf\n", power[i]); //��ӡ������ս�����а�
    }

    return 0;
}
