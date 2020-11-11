#include<stdio.h>
int main()
{
	int math,science;
	printf("Enter 1 if you pass and 0 if you fail\n");
	printf("Enter pass status for Maths\n");
	scanf("%d",&math);
	printf("Enter pass status for Science\n");
	scanf("%d",&science);
	if(math == 1 && science == 1)
	{
		printf("You have passed in both\n");
		printf("Congrats!!!You win Rs. 45\n");
	}
	else if(math == 0 && science == 0)
	printf("You have failed in both subjects\nSorry, You win Nothing");
	else if(math != 0 || science != 0)
	printf("Input is Invalid.Please read the instructions carefully and Try again!");
	else if(math== 1)
	{
		printf("You have passed only in Maths\nYou win Rs. 15\n");
	}
	else if(science == 1)
	printf("You have passed only in Science\nYou win Rs. 15");
	
}