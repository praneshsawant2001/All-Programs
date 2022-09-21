import java.io.*;

class Input3
{
 public static void main(String a[])
 {
  InputStreamReader iboj=new InputStreamReader(System.in);
  BufferedReader bobj=new BufferedReader(iboj);
  
  System.out.println("Enter string");
  String str=bobj.readLine();

  System.out.println("Enter integer");
  int no=Integer.parseInt(bobj.readLine());

  System.out.println("Enter float");
  float f=Float.parseFloat(bobj.readLine());

  System.out.println("Enter double");
  double d=Double.parseDouble(bobj.readLine());
 
  System.out.println("Entered string is :")

 }

}