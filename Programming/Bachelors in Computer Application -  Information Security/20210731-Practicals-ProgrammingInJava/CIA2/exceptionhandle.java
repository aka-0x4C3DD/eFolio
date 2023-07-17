import java.io.*;
public class P1
{
    public static void main(String args[])
    {
        try
        {
            int a=30,b=0;
            int c=a/b;
            System.out.println("Result = "+c);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Can't divide a number by 0");
        }
        try
        {
            String a=null;
            System.out.println(a.charAt(0));
        }
        catch(NullPointerException e)
        {
            System.out.println("NullPointerException..");
        }
        try
        {
            String a="This is like chipping";
            char c=a.charAt(24);
            System.out.println(c);
        }
        catch(StringIndexOutOfBoundsException e)
        {
            System.out.println("StringIndexOutOfBoundsException..");
        }
        try
        {
            File file=new File("E://file.txt");
            FileReader fr=new FileReader(file);
        }
        catch(FileNotFoundException e)
        {
            System.out.println("File does not exist");
        }
        try
        {
            int num=Integer.parseInt("akki");
            System.out.println(num);
        }
        catch(NumberFormatException e)
        {
            System.out.println("NumberFormatException..");
        }
        try
        {
            int a[]=new int[5];
            a[6]=9;
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("ArrayIndexOutOfBounds..");
        }
        finally
        {
            System.out.println("Finally block is always executed");
        }
    }
}