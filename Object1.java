import java.lang.*;

class Employee
{
	public String name;
	public int salary;
	
	public Employee(String str,int no)
	{
		this.name=str;
		this.salary=no;
	}
	
	public String toString()
	{
		return "Employee name is "+name+" having salary "+salary;
	}
}

class Object1
{
  public static void main(String arg[])
  {
     Employee eobj=new Employee("Pranesh",50000);
	 System.out.println(eobj.toString());
  }
}