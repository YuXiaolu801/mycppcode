
```
/*快速排序 
作者：dashuaige*/ 


#include <stdio.h>
int a[100];

void quick_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int i,j,x;

        i = l;
        j = r;
        x = a[i];
        while (i < j)
        {
            while(i < j && a[j] > x)
                j--; // 从右向左找第一个小于x的数
            if(i < j)
                a[i++] = a[j];
            while(i < j && a[i] < x)
                i++; // 从左向右找第一个大于x的数
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(a, l, i-1); /* 递归调用 */
        quick_sort(a, i+1, r); /* 递归调用 */
    }
}

int main()
{
    int i,N;
    
    printf("请设定N的值\n");
	scanf("%d",&N); 
    printf("请为数组赋值\n");
    for(i=0;i<N;i++)
    {
	scanf("%d",&a[i]);
	}

    printf("未排序的顺序:");
    for (i=0; i<N; i++)
        printf("%d ", a[i]);
    printf("\n");

    quick_sort(a, 0, N-1);

    printf("排序后的顺序:");
    for (i=0; i<N; i++)
        printf("%d ", a[i]);
    printf("\n");
}
```
