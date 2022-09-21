import java.lang.*;

class Employee implements Cloneable
{
	public int EID;
	public String Ename;
	public int Esalary;
	
	public Employee(int id,String str,int no)
	{
		this.EID=id;
		this.Ename=str;
		this.Esalary=no;
	}
	
	public Object clone() throws CloneNotSupportedException
	{
		return super.clone();
	}
}
class Copy
{
  public static void main(String arg[]) throws Exception
  {
	Employee eobj=new Employee(17,"Pranesh",50000);
	System.out.println("EID :"+eobj.EID+"Name :"+eobj.Ename+ "Salary :"+eobj.Esalary);
	
	Employee eobjX=(Employee)eobj.clone();
	System.out.println("EID :"+eobjX.EID+"Name :"+eobjX.Ename+ "Salary :"+eobjX.Esalary);
	
	eobj.Ename="Samruddhi";
	System.out.println("EID :"+eobjX.EID+"Name :"+eobjX.Ename+ "Salary :"+eobjX.Esalary);
  }
}