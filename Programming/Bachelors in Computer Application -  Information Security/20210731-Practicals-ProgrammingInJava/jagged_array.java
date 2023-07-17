import java.util.Scanner;
class jagged
{
    public static void main(String arg[])
    {
        int [][]a=new int[2][];
        a[0]=new int[3];
        a[1]=new int[2];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the elements of Jagged Array : ");
        for (int i=0;i<a.length;i++)
            for (int j=0;j<a[i].length;j++)
                a[i][j]=sc.nextInt();
        System.out.println("Displaying Jagged Array");
        for (int i=0;i<a.length;i++) 
           {
            for (int j=0;j<a[i].length;j++)
                System.out.print(a[i][j]+ "    ");
            System.out.println("\n");
           }
    }
}