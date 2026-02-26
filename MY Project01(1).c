#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	printf("Enter Number of Players:");
	scanf("%d",&n);
	 char name[n][50];
	int score[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter a player Name :%d:",i+1);
		scanf("%s",name[i]);
		while(1)
		{
			printf("\nEner player score(0-100):%d",i+1);
			scanf("%d",&score[i]);
			if(score[i]>0&&score[i]<=100)
			break;
			else
			printf("Invalid score! please enter between 0 and 100.\n");
		}
	}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(score[i] < score[j]) 
        {
            int tempScore = score[i];
            score[i] = score[j];
            score[j] = tempScore;
            char tempName[50];
            strcpy(tempName, name[i]);
            strcpy(name[i], name[j]);
            strcpy(name[j], tempName);
        }
    }
}
		printf("\nCricket player list\n");
		printf("\n----------------------------------------");
		printf("\nS.No\t Player Name\t Player score");
		printf("\n-----------------------------------------");
		for(i=0;i<n;i++)
		{
			printf("\n%d\t%s\t\t%d",i+1,name[i],score[i]);
		}
	    printf("\n-----------------------------------------");
	    printf("\n");
	return 0;
}
