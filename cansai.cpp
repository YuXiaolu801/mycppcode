/* 输入：第一行输入参赛队伍个数，剩余行输入每个队伍的单位编号和分数；
输出：输出分数合计最高的编号，不考虑并列；*/
#include <stdio.h>
#include <stdexcept>
//方法一（自己的方法）
#define N 5 //参赛队伍数目
struct info
{
    int sch;
    int sco;
} infos[N];
int main()
{
    int i, sum, big, j, bigs;
    printf("已知参与队伍数N是：%d（可修改）\n请依次输入参赛队伍的所属单位编号和分数：\n", N);
    for (i = 0; i < N; i++) //赋值
    {
        scanf("%d%d", &infos[i].sch, &infos[i].sco);
    }
    for (j = 0; j < N; j++) //同加
    {
        for (i = j + 1; i < N; i++)
        {
            if (infos[j].sch == infos[i].sch)
            {
                infos[j].sco += infos[i].sco;
                infos[i].sco = 0;
            }
        }
    }
    big = infos[0].sco;
    bigs = infos[0].sch;
    for (i = 0; i < N - 1; i++) //比较
    {

        if (big < infos[i].sco)
        {
            big = infos[i].sco;
            bigs = infos[i].sch;
        }
    }

    printf("总分最高的队伍是 %d,总分为 %d！\n恭喜恭喜！\n", bigs, big);
    system("pause");
    return 0;
}
//方法二（参考答案的方法）
// const int maxn = 10010;
// int school[maxn] = {0};
// int main()
// {
//     int n, schID, score;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d%d", &schID, &score);
//         school[schID] += score;//这个方法的绝妙之处！！！
//     }
//     int k = 1, MAX = -1;
//     for (int i = 1; i < n; i++)
//     {
//         if (school[i] > MAX)
//         {
//             MAX = school[i];
//             k = i;
//         }
//     }
//     printf("总分最高的队伍是 %d,总分为 %d！\n恭喜恭喜！\n", k, MAX);
//     system("pause");
//     return 0;
// }
