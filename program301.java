import java.lang.*;
import java.util.*;

class program301
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str = sobj.nextLine();
		
		char arr[] = str.toCharArray();
		int icnt = 0;
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]>='a' && arr[i]<='z')
			{
				icnt++;
			}
		}
		System.out.println("Number of small case letter are: "+icnt);
	}
}