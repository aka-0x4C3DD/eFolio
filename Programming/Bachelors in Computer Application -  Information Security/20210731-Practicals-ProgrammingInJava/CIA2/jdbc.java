import java.sql.*;
import java.util.*;
public class JdbcTest 
{
    public static void main(String args[])
    {
        try
        {
            Connection conn=null;
            Statement stmt=null;
            ResultSet rs;
            int empid,sal;
            String name;
            Class.forName("oracle.jdbc.driver.OracleDriver");
            conn=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","scott","tiger");
            stmt=conn.createStatement();
            rs=stmt.executeQuery("select * from emp");
            System.out.println("Emp id \tEmp Name \tSalary");
            while(rs.next())
            {
                empid=rs.getInt(1);
                name=rs.getString("ename");
                sal=rs.getInt("sal");
                System.out.println(empid + " \t"+ name + "\t\t"+ sal+"\n");
            }
        }
        catch(Exception e)
        {
            System.out.println("Error"+e);
           
        } 
    }
}