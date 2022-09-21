import java.util.*;

class Exception2
{
  public static void main(String arg[])
  {
    int ans=0,no1=0,no2=0;
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter first number");
    no1=sobj.nextInt();

    System.out.println("Enter second number");
    no2=sobj.nextInt();

    try
    {
     ans=no1/no2;
    }
    catch(ArithmeticException obj)
    {
     System.out.println("Exception occured as :"+obj);
    }
    System.out.println("Division is :"+ans);
    sobj.close();
  }
}