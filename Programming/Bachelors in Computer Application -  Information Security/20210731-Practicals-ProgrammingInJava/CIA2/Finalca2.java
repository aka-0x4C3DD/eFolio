import day5.excep_container;

import java.util.Scanner;

public class Finalca2 {

    public class Allexcep {
        public static void art(){
            try {
                int i=20/0;

            }catch (ArithmeticException e){
                System.out.println("here the expression i=20/0 caught an exception\n" +e);
            }
        }
        public static void arr(){
            try {
                int a[]={1,2,3};
                System.out.println(a[5]);

            }catch (ArrayIndexOutOfBoundsException e){
                System.out.println("here an array of length 3 was asked to output a data at 5th location caught an exception\n" +e);
            }
        }
        public static void nullp(){
            try {
                String str=null;
                System.out.println(str.length());


            }catch (NullPointerException e){
                System.out.println("here a string of null was asked for its length caught an exception\n" +e);
            }


        }
        public static void str() {
            try {
                String s ="this is a try";
                char c=s.charAt(15);
                System.out.println(c);
            }
            catch (StringIndexOutOfBoundsException e){
                System.out.println("here a string was asked for a character out of its length the exception is "+e);
            }

        }
        public static void num() {
            try {
                String str ="dumb";
                int a = Integer.parseInt(str);
                System.out.println(a);
            }catch (NumberFormatException e){
                System.out.println("here tried to assign string to an integer\n "+e);
            }
        }
        public static void main(String[] args) {
            int s;
            int flag=0;
            System.out.println("SELECT THE EXCEPTION YOU WANT TO SEE\n 1.ArthmeticException\n" +
                    "2.ArrayOutofBoundException\n3.StringOutofBoundEXception \n4.NullPointerException\n5.NumberFormatException");
            Scanner in= new Scanner(System.in);
            do{
                s=in.nextInt();
                switch (s) {
                    case 1:
                        art();
                        break;
                    case 2:
                        arr();
                        break;
                    case 3:
                        str();
                        break;
                    case 4:
                        nullp();
                        break;
                    case 5:
                        num();
                        break;
                    case 6 :flag=1;
                        break;
                    default:
                        System.out.println("no valid input");
                }
            }while (flag==0);
        }
    }

}
