#include <stdio.h>
struct customer
{
	int acc;
	char name[20];
	int bal;
} c1[200] = {1, "Amaan", 50,
			 2, "Shahnawaz", 300,
			 3, "Huzair", 400,
			 4, "Zeeshan", 500};
void below100()
{
	int i;
	for (i = 0; i < 200; i++)
	{
		if (c1[i].bal < 100 && c1[i].bal > 0)
		{
			printf("Account no = %d\n", c1[i].acc);
			printf("Name =  %s\n", c1[i].name);
		}
	}
}
void action(int acc, int amo, int code)
{
	for (int i = 0; i < 200; i++)
	{
		if (c1[i].acc == acc)
		{
			break;
		}
		if (!code)
		{
			if (c1[i].bal - amo < 100)
			{
				printf("The balance is insufficient for the specified withdrawal");
			}
			else
			{
				c1[i].bal -= amo;
				printf("Your new balance is %d", c1[i].bal);
			}
		}
		else
		{
			c1[i].bal += amo;
			printf("Your new balance is %d", c1[i].bal);
		}
	}
}
int main()
{
	int accc, code, amount;
	printf("Enter you Account Number: ");
	scanf("%d", &accc);

	printf("Enter 1 for Deposits And 0 for Withdrawal");
	scanf("%d", &code);

	if (code == 1)
	{
		printf("Enter Amount to be deposits:");
		scanf("%d", &amount);
	}
	else
	{
		printf("Enter Amount to be withdrawal:");
		scanf("%d", &amount);
	}
	action(accc,amount,code);
	printf("All account having balance below 100 are:\n");
	below100();
	return 0;
}