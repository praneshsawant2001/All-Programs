import java.lang.*;
import java.util.*;

class Student
{
	public int RID;
	public String Name;
	public int Salary;
	
	private static int Generator;
	
	static
	{
		Generator = 0;
	}
	
	public Student(String str,int value)
	{
		this.RID = ++Generator;
		this.Name = str;
		this.Salary = value;
	}
	
	public void DisplayData()
	{
		System.out.println(this.RID+"\t"+this.Name+"\t"+this.Salary);
	}
}

class DBMS
{
	public LinkedList<Student> lobj; 
	
	public DBMS()
	{
		lobj = new LinkedList<>();
	}
	
	public void StartDBMS()
	{
		Scanner scanobj = new Scanner(System.in);
		
		System.out.println("Marvellous customised DBMS startred succesfully....");
		
		String Query = "";
		
		while(true)
		{
			System.out.print("Marvellous DBMS console>");
			
			Query = scanobj.nextLine();
			
			String tokens[] = Query.split(" ");
			int QuerySize = tokens.length;
			
			if(QuerySize == 1)
			{
				if("Help".equals(tokens[0]))
				{
					System.out.println("This application is used to demonstrate the customised DBMS");
					System.out.println("Exit : Terminate DBMS");
					System.out.println("Display all data : select * from student");
					System.out.println("Insert data : Insert into student Name Salary");
				}
				else if("Exit".equals(tokens[0]))
				{
					System.out.println("Thank you for using marvellous DBMS");
					break;
				}
			}
			else if(QuerySize == 2)
			{
				
			}
			else if(QuerySize == 4)
			{
				if("Select".equals(tokens[0]))
				{
					if("*".equals(tokens[1]))
					{
						DisplayAll();
					}
				}
			}
			else if(QuerySize == 5)
			{
				if("Insert".equals(tokens[0]))
				{
					InsertData(tokens[3],Integer.parseInt(tokens[4]));
				}
			}
		}
		
	}
	
	public void InsertData(String str, int value)
	{
		Student sobj = new Student(str,value);
		lobj.add(sobj);
	}
	
	public void DisplayAll()
	{
		for(Student sref : lobj)
		{
			sref.DisplayData();
		}
	}
	
	public void DisplaySpecific(int rid)
	{
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				sref.DisplayData();
				break;
			}
		}
	}
	
	public void DisplaySpecific(String str)
	{
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				sref.DisplayData();
			}
		}
	}
	
	public void DeleteSpecific(int rid)
	{
		int index = 0;
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
	public void DeleteSpecific(String str)
	{
		int index = 0;
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				lobj.remove(index);
				break;
			}
			index++;
		}
	}
	
	public void AggregateMax()
	{
		int iMax = 0;
		Student temp = null;
		
		for(Student sref : lobj)
		{
			if(sref.Salary > iMax)
			{
				iMax = sref.Salary;
				temp = sref;
			}
		}
		System.out.println("information of student having Maximum salary :");
		temp.DisplayData();
	}
	
	public void AggregateMin()
	{
		int iMin = (lobj.getFirst()).Salary;
		Student temp = lobj.getFirst();
		
		for(Student sref : lobj)
		{
			if(sref.Salary < iMin)
			{
				iMin = sref.Salary;
				temp = sref;
			}
		}
		System.out.println("information of student having Minimum salary :");
		temp.DisplayData();
	}
	
	public void AggregateSum()
	{
		long iSum = 0;
		
		for(Student sref : lobj)
		{
			iSum = iSum+sref.Salary;
		}
		System.out.println("Summation of salaries is :"+iSum);
	}
	
	public void AggregateAvg()
	{
		long iSum = 0;
		
		for(Student sref : lobj)
		{
			iSum = iSum+sref.Salary;
		}
		System.out.println("Summation of salaries is :"+iSum/(lobj.size()));
	}
	
	public void AggregateCount()
	{
		System.out.println("Count is :"+lobj.size());
	}
}

class program364
{
	public static void main(String arg[])
	{
		DBMS dobj = new DBMS();
		
		dobj.StartDBMS();
		/*dobj.InsertData("Piyush",1000);
		dobj.InsertData("Sakshi",3000);
		dobj.InsertData("Sachin",2000);
		dobj.InsertData("Pranesh",10000);
		dobj.InsertData("Yogesh",8000);
		dobj.InsertData("Samruddhi",9000);
		
		dobj.DisplaySpecific(2);
		dobj.DisplaySpecific("Piyush");
		
		//dobj.DeleteSpecific(2);
		//dobj.DeleteSpecific("Piyush");
		dobj.DisplayAll();
		
	    dobj.AggregateMax();
		dobj.AggregateMin();
		dobj.AggregateSum();
		dobj.AggregateAvg();
		dobj.AggregateCount();
		*/
	}
}