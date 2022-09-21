import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a , int b)
	{
		super(a,b);
	}
	public void SwapRow()
	{
		int itemp = 0;
		
		for(int i=0;i<iRow-1;i+=2)
		{
			for(int j=0;j<iCol;j++)
			{
				itemp = Arr[i][j];
				Arr[i][j] = Arr[i+1][j];
				Arr[i+1][j] = itemp;
			}
		}
	}
}

class program334
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows :");
		int X = sobj.nextInt();
		
		System.out.println("Enter number of coloumns :");
		int Y = sobj.nextInt();
		
		MyMatrix mobj = new MyMatrix(X,Y);
		mobj.Accept();
		mobj.Display();
		
		mobj.SwapRow();
		System.out.println("Data after swaping is :");
		mobj.Display();
	}
}