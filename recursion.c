#include<stdio.h>
#include<conio.h>
int fun(int n)
{
	int ans=0;
		if(n==0)
		{
			return 0;
		}
		else
		{
			ans=n+fun(n-1);
			return ans;
		}

}

    void main()
	{
		int ans=0;
		int no;
		printf("enter your number");
		scanf("%d",&no);
		ans=fun(no);
		printf("%d",ans);
		getch();
	}



