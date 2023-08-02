#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int mynum,usernum;
	srand(time(NULL));
	mynum=rand()%10 ;
	
	printf("I have a number in my mind from 0 to 10. Can you guess it..?");
	
	while(1){
	printf("\n\nEnter your guess:");
	scanf("%d",&usernum);
	
	if(mynum==usernum)
	{
		printf("Congratulations!!\n\n***You WIN***");
		break;
	}
	else if(mynum>usernum)
	{
		printf("No, My number is Greater than %d\nTry Again :)",usernum);
	}
	else
	{
		printf("No, My number is Less than %d\nTry Again :)",usernum);
	}}
	return 0;
}
