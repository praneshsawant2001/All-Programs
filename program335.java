import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a , int b)
	{
		super(a,b);
	}
	public void SwapCol()
	{
		int itemp = 0;
		
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol-1;j+=2)
			{
				itemp = Arr[i][j];
				Arr[i][j] = Arr[i][j+1];
				Arr[i][j+1] = itemp;
			}
		}
	}
}

class program335
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
		
		mobj.SwapCol();
		System.out.println("Data after swaping is :");
		mobj.Display();
	}
}