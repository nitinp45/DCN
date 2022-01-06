#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int i,j,k=0;
	int n;
	int d[8];
	int h[12];
	int c[4];
	
	printf("Enter the data: ");
	for(j=0;j<12;j++)
	{
		scanf("%d",&data[i]);

		c[1]=d[1]^d[2]^d[4]^d[5]^d[7];
		c[2]=d[1]^d[3]^d[4]^d[6]^d[7];
		c[4]=d[2]^d[3]^d[4]^d[8];
		c[8]=d[5]^d[6]^d[7]^d[8];
	
		if(pow(2,n)-1==j)
		{
			h[j]=c[n];
			n++;
		}
		else
		{
			h[j]=d[i];
			i++;
		}

	}	
	
	printf("Hamming code: ");
	
	for(int k=0;k<12;k++)
	{
		printf("%d",h[k]);
	}
}
