//Bubble sort using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,a;
	printf("what size of array you want?\n");
	scanf("%d",&a);
	printf("now enter the elements of the array");
	p=(int*)malloc(a*sizeof(int));
	for(int i=0;i<a;i++)
	{
		scanf("%d",p+i);
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				int temp = *(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
	printf("this is the sorted array:\n");
	for(int i=0;i<a;i++)
	{
		printf("%d\n",*(p+i));
	}
	free(p);
}
