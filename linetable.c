/*线性表的建立、插入和删除 
作者：A Genius*/ 
#include <stdio.h>
static int array[100];
int j,i,n,p;
int ch;
void du()
{
	printf("please tell me which number do you operate: ");
	scanf("%d",&i);
	while(i>n)
	{
		printf("error,please input again");
		scanf("%d",&i);
	}
}
void da()
{
	printf("the list is");
	for(j=0;j<n;j++)
		printf("%4d",array[j]);
	printf("\n");
}
void show()
{
	printf("----------------------------- \n");
	printf(" the function of the list\n");
	printf("1: insert\n");
	printf("2: delete\n");
	printf("3: save new element\n");
	printf("4: read list\n");
	printf("5: check\n");
	printf("6: the length of the list\n");
	printf("0: end\n");
	printf("----------------------------- \n");
}
int main()
{
	printf("please input the length of list:");
	scanf("%d",&n);
	printf("\n");
	printf("please enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	p=1;
	while(p!=0)
	{
		show();
		printf("enter p: ");
		scanf("%d",&p);
		if(p>=0&&p<=6)
		{
			switch(p)
			{
			case 1:
				printf("the inserted number places the front of the operation: \n");
				du();
				for(j=n-1;j>=i-1;j--)
					array[j+1]=array[j];
				printf("please enter number: ");
				scanf("%d",&ch);
				array[i-1]=ch;
				n++;
				da();
				break;
			case 2:
				du();
				for(j=i-1;j<=n;j++)
					array[j]=array[j+1];
				n--;
				da();
				break;
			case 3:
				du();
				printf("please enter new element: \n");
				scanf("%d",&ch);
				printf("\n");
				array[i-1]=ch;
				da();
				break;
			case 4:
				da();
				break;
			case 5:
				du();
				printf("what is the %d number: ",i);
				printf("%3d\n",array[i-1]);
				break;
			case 6:
				printf("the length of the list is: ");
				printf("%3d\n",n);
				break;
			case 0:
				p=0;
				break;

			}

			
		}
	}
	printf("error,please enter new number");
}
