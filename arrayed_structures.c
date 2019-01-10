//struct book practice
#include<stdio.h>
struct Books
{
	float Book_id;
	char Book_name[20];
	char Publisher_name[30];
	float Book_price;
};
int main()
{
	int n,i;
	struct Books b[10];//we wanted to make this an array of data from struct not int
	printf("enter the no. of books: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the id: \n");
		scanf("%f",&b[i].Book_id);
		fflush(stdin);
		printf("enter the book's name:\n");
		gets(b[i].Book_name);
		printf("enter the name of the publisher:\n");
		gets(b[i].Publisher_name);
		printf("enter the price of the book:\n");
		scanf("%f",&b[i].Book_price);
	}
	printf("the books that you have entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("id: ");
		printf("%f\n",b[i].Book_id);
		printf("book's name: ");
		puts(b[i].Book_name);
		printf("name of the publisher: ");
		puts(b[i].Publisher_name);
		printf("price of the book: ");
		printf("%f",b[i].Book_price);
	}
}
