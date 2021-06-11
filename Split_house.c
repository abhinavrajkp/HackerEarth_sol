#include<stdio.h> 
check(char* ch,int n)
{
	int i,flag=1;
	for(i=0;i<n;i++)
	{
		if(ch[i]=='H'&&ch[i+1]=='H')
		{flag=0;}
	}
	return flag;
}
main()
{
    int n,i;
	scanf("%d",&n);
    char ch[n];
	scanf("%s",ch);
	if(check(ch,n)==0)
	{printf("NO");}
	else
	{
		for(i=0;i<n;i++)
		{
			if(ch[i]=='.')
			{ch[i] ='B';}
		}
		printf("YES\n");
		printf("%s",ch);
	}
}