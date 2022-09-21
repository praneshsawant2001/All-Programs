import java.io.*;

class Wrapper
{
 public static void main(String a[])throws Exception
 {
  int no=11;

  Integer iobj=new Integer(11);

  int i=iobj;

  Integer iobj2=no;

  System.out.println(no);
  System.out.println(iobj);
  System.out.println(i);
  System.out.println(iobj2);
 }
}