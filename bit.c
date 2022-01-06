#include<stdio.h>
#include<string.h>

int main()
{
 int i,j,cnt,len;
 char arr[50],src[6],dst[50];
 printf("Enter the bit element: ");
 scanf("%s",arr);
 
 len=strlen(arr);
 cnt=0; j=0;
 for(i=0;i<len;i++)
 {
  
   if(arr[i]=='1')
   {
    cnt++;
   }
   else
  {
   cnt=0;
  }
  src[j]=arr[i];
  j++;
 }
  if(cnt==5 && arr[i+1]=='1')
  {
   src[j]='0';
   j++;
  }
  src[j]='\0';
  printf("%s\n",src);
  return 0;
}
