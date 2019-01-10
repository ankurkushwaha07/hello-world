//netsted structures
#include<stdio.h>
struct Employees
{
	long int ID;
	char Name[20];
	float Salary;
	struct Address
	{
		char Address_line1[30];
		long int Pincode;
	}ad;
};
int main()
{
	int n,i;
	struct Employees e[10];
	//struct Address ad[4];
	printf("no. of employees present: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the employee id: ");
		
		scanf("%ld\n",&e[i].ID);
		
		printf("enter employee's name: ");
		
		gets(e[i].Name);
		
		fflush(stdin);
		
		printf("\nenter employee's salary: ");
		
		scanf("%f",&e[i].Salary);

		printf("enter the employee's address");
		
		printf("/n enter address line 1");
		
		gets(e[i].ad.Address_line1);
		
		printf("\nenter pin code: ");
		
		scanf("%ld",&e[i].ad.Pincode);
	}
}
