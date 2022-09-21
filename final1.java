import java.lang.*;

class Demo
{
   public int i;
   public final int j = 20;
   public final int k;

   public Demo()
   {
     this.i = 10;
     this.k = 30;
   }

   public Demo(int a, int b)
   {
     this.i = a;
     this.k = b;
   }

   public void fun()
   {
     i++;
     //j++;
     //k++;
   }
}

class Final1
{
   public static void main(String arg[])
  {
     Demo obj = new Demo();
     obj1.fun();
     Demo obj2 = new Demo(11,21);
     obj2.fun();
  }
}