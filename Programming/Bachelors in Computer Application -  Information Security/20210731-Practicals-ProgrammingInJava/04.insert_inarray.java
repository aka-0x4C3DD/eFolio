import java.util.Scanner;
class array 
{
	public static void main(String[] args) 
	{
		int len, p,e;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number from keyboard:");
		len = sc.nextInt();
		int arr[] = new int[len+1];
		System.out.println("Enter "+len+" all the elements:");
		for(int i = 0; i < len; i++)
		{
			arr[i] = sc.nextInt();
		}
		System.out.print("Enter the number where you want to insert an element:");
		p = sc.nextInt();
		System.out.print("Enter the element which you want to insert:");
		e = sc.nextInt();
		for(int i = len-1; i >= (p-1); i--)
		{
			arr[i+1] = arr[i];
		}
		arr[p-1] = e;
		System.out.print("after inserting : ");
		for(int i = 0; i <=len; i++)
		{
			System.out.print(arr[i]+",");
		}
	}
}