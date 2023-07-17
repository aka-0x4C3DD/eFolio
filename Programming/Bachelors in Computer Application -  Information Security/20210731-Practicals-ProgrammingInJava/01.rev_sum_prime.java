// reverse a number, sum of number, prime numbers 1 - 100

import java.util.Scanner;
class reverse
{
	public static void main(String agrs[])
	{
		int a;
		Scanner digit=new Scanner(System.in);
		System.out.println("1. Reverse a number");
		System.out.println("2. Sum of number");
		System.out.println("3. Prime number 1 - 100");
		a = digit.nextInt();
		switch(a)
		{
			case 1:
				Scanner num = new Scanner(System.in);
				int n, rem, rev = 0;
				System.out.println("Enter a Number to be reversed: ");
				n = num.nextInt();
				for(;n != 0;)   
				{  
					rem = n % 10;  
					rev = rev * 10 + rem;  
					n = n/10;  
				}	 
				System.out.println("The reverse of the given number is: "+rev);
				break;
			case 2:
				long count,sum=0,digits;
				Scanner scan=new Scanner(System.in);
				System.out.print("Enter the number: ");
				long number=scan.nextInt();
				count=number;
				while(number>0)
				{
					digits=number%10;
					sum=sum+digits;
					number/=10;
				}
				System.out.print("Given number is: "  + count);
				System.out.print("\nSum of the digits: "  + sum);
				break;
			case 3:
				int ct=0,nu=0,i=1,j=1;
				while(nu<25)
				{
					j=1;
					ct=0;
					while(j<=i)
					{
						if(i%j==0)
							ct++;
						j++;
					}
					if(ct==2)
					{
						System.out.printf("%d ",i);
						nu++;
					}
					i++;
				}
				break;
			default: 
				System.out.println("Invalid Input !!");
		}
	}
}