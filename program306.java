import java.lang.*;
import java.util.*;

class program306
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");
		String newstr2 = newstr.trim();
		
		String arr[] = newstr2.split(" ");
		
		int imax = 0;
		for(int i = 0;i<arr.length;i++)
		{
			if(arr[i].length()>imax)
			{
				imax = arr[i].length();
			}
		}
		System.out.println("Length of largest word is: "+imax);
	}
}