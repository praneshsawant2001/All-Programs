import java.lang.*;
import java.util.*;

class Array2
{
 public static void main(String arg[])
 {
  int icnt=0;
  Scanner sobj=new Scanner(System.in);
  System.out.println("enter number of elements");
  int size=sobj.nextInt();

  int Arr[]=new int[size];

  System.out.println("enter the elements of array");
  for(icnt=0;icnt<Arr.length;icnt++)
   {
    Arr[icnt]=sobj.nextInt();
   }

  System.out.println("elements if array are");
  for(icnt=0;icnt<Arr.length;icnt++)
   {
    System.out.println(Arr[icnt]);
   }
 }
}