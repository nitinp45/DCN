#include<stdio.h>
#include<string.h>
int dectobinary(int num)
{
	int bno=0,mf=1;
	while(num>0)
	{
		bno=bno+(num%2)*mf;
		num=num/2;
		mf=mf*10;
	}
	return bno;
}
int main()
{
	char str[100];
	int i,j,n,bin[100],count=0,temp,bit,bitCount,abit[8],parity=0;
	printf("\nEnter the string you want to convert into binary:");
	scanf("%s",&str);
	printf("%s",str);
	n=strlen(str);
	while(count<n)
	{
		printf("\n%c=%d",str[count],str[count]);
		count++;
	}
	for(i=0;i<n;i++)
	{
		bin[1]=dectobinary(str[i]);
	}
	for(i=0;i<n;i++)
	{
		parity=0;
		temp=bin[i];
		printf("\n");
		bitCount=0;
		while(temp>0)
		{
			bit=temp%10;
			abit[bitCount]=bit;
			if(bit==1)
			{
				parity++;
			}
			temp=temp/10;
			bitCount++;
		}
		for(j=7;j>=0;j--)
		{
			printf("%d\t",abit[j]);
			
		}
		if(parity%2==0)
		{
			printf("Even");
		}
		else
		{
			printf("Odd");
		}
	}
}

