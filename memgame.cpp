#include<stdio.h>
// program for Memory Gaame written By AP
int main()
{
	 int num,num2,min;
	 printf("\n Enter any two digit num\n");
	 scanf("%d",&num);
	 do
	 {
	 	xxx:
	 	 printf("\n Enter any num in  1...5\n");
	 	 scanf("%d",&num2);
	 	 if(num2>=6)
	 	  { 
	 	   printf("\n  Enter valid Number");
	 	   goto xxx;
		  }
	 	  num=num-num2;
	 	  min = num%6;
	 	  if(min==0)
	 	    {
	 	  	   printf("\n you won \n");
	 	  	   break;
		    }
	 	  num= num-min;
	 	  printf("\n balance num %d",num);
	 	  if (num<=5)
	 	   {
	 	   	printf("\n computer won \n");
	 	  	break;
		   }
	 }
	 while(1);
	 return 0;
}
