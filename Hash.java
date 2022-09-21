import java.lang.*;

class Dem
{}

class Hash
{
  public static void main(String arg[]) throws Exception
  {
   String str1="Marvellous";
   String str2="Marvellous";
   String str3="Infosystem";
   Demo dobj=new Demo();
   
   System.out.println("Hascode of str1 :"+str1.hashCode());
   System.out.println("Hascode of str2 :"+str2.hashCode());
   System.out.println("Hascode of str3 :"+str3.hashCode());
   System.out.println("Hascode of dobj:"+dobj.hashCode());
  }
}