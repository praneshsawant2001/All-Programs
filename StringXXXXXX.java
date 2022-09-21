import java.lang.*;

class StringXXXXXX
{
 public static void main(String a[])
 {
  String str1="Hello";
  String str2="Hello";
  String str3=new String("Hello");

  if(str1==str3)
  {
   System.out.println("String is same");
  }
  else
  {
   System.out.println("String are different");
  }
  
  if(str1.equals(str3))
  {
   System.out.println("String is same");
  }
  else
  {
   System.out.println("String are different");
  }
 }
}