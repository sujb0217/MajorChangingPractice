/*
【问题描述】假如我国国民生产总值的年增长率为r，计算n年后我国国民生产总值与现在相比增长多少百分比。计算公式为p = (1+r)n

r为年增长率，n为年数，p为与现在相比的倍数。

提示：pow(x,y)计算x的y次方，这是数学函数，在math.h中。

【输入形式】输入一行，包括年增长率r和年数n。

【输出形式】输出一行，给出国民生产总值增长倍数，结果保留两位小数。

【样例输入】0.09 10

【样例输出】2.37

注意：本题目中的浮点数据类型设置为float。
*/
#include<stdio.h>
#include<math.h>
int main(){
    float r,p;
    int n;
    scanf("%f%d",&r,&n);
    p = pow(1 + r,n);
    printf("%.2f\n",p);
    return 0;
}