/*问题描述

猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个，第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第n天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。n的值由scanf输入，n大于1。

输入形式

输入一行，包括n的值。

输出形式

输出一行，给出第一天摘了多少桃子。

样例输入

2

样例输出

4
*/
#include<stdio.h>
int main(){
    int n,peach = 1,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)peach = (peach + 1) * 2;
    printf("%d\n",peach);
    return 0;
}