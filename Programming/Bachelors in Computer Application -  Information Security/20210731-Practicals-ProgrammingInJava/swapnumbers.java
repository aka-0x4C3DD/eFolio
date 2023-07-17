import java.util.*;  
class Swap   
{  
    public static void main(String a[])   
    {   
        System.out.println("Enter the value of x and y");  
        Scanner sc = new Scanner(System.in);  
        /*Define variables*/  
        int x = sc.nextInt();  
        int y = sc.nextInt();   
       /*Swapping*/  
        x = x + y;   
        y = x - y;   
        x = x - y;   
        System.out.println("After swapping without temp. variables: "+x +"  " + y); 
		System.out.println( );	
		System.out.println("Enter the value of x and y");  
        Scanner s = new Scanner(System.in);  
        /*Define variables*/  
        int d = s.nextInt();  
        int b = s.nextInt();
		int c;
		/*swapping */  
		c = d;  
		d = b;  
		b = c;  
		System.out.println("After swapping with temp variables: "+d +"   " + b);  
		System.out.println( );  
    }   
}  