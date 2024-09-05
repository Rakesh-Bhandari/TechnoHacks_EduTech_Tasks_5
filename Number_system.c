#include<stdio.h>
#include<string.h>
int decimal_to_binary(int decimal)
{
	int binary[30];
	int i=0,j;
	while (decimal>0)
	{
		binary[i]=decimal%2;
		decimal/=2;
		i++;
	}
	printf("Binary:");
	for(j=i-1;j>=0;j--)
	printf("%d",binary[j]);
	
	printf("\n");
}
int decimal_to_octal(int decimal)
{
	int octal[30];
	int i=0,j;
	while (decimal>0)
	{
		octal[i]=decimal%8;
		decimal/=8;
		i++;
	}
	printf("Octal:");
	for(j=i-1;j>=0;j--)
	printf("%d",octal[j]);
	
	printf("\n");
}
int decimal_to_hex(int decimal)
{
	char hexstr[30];
	int i=0,j,temp;
	while (decimal!=0)
	{
	    temp=decimal%16;
		if (temp<10)
		{
			hexstr[i]=temp+'0';
		}
		else
		    hexstr[i]=temp+'A'-10;
		    
		decimal/=16;       
		i++;
	}
	hexstr[i]='\0';
	int len=strlen(hexstr);
	for (j=0;j<len/2;j++)
	{
		char temp = hexstr[j];
		hexstr[j]=hexstr[len-j-1];
		hexstr[len-j-1]=temp;
	}
	printf("hexadecimal:%s\n",hexstr);
	
}

int main()
{
	int num,ch;
		printf("Number system converter\n");
	while(1)
	{
		
		printf("\nEnter a decimal number: ");
		scanf("%d",&num);
	    printf("\nEnter your choice:\n1.Decimal To Binary\n2.Decimal To Octal\n3.Decimal To Hexadecimal\n4.All\n5.Exit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		    case 1:
		        decimal_to_binary(num);
		        break;
		        
		    case 2:
		        decimal_to_octal(num);
		        break;
		        
		    case 3:
		        decimal_to_hex(num);
		        break;
		        
		    case 4:
		    	decimal_to_binary(num);
		    	decimal_to_octal(num);
		        decimal_to_hex(num);
		        break;
		
		    case 5:
			    printf("ThankYou...");
			    return 0;
			    
		    default:
		    	printf("Invalid choice...");
			    break;
	    }
    }
    return 0;
}
