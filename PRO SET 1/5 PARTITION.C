
import java.util.*;

public class Main {
	public static void main (String[] args)
	{
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int a=sc.nextInt();
	int b=sc.nextInt();
	int sum=0;
	if(n%2==0)
	{
	    sum=a+b;
	    if(n%sum==0)
	    {
	        System.out.print("YES");
	    }
	    else
	    {
	        System.out.print("NO");  
	    }
	}
	else
	{
	    System.out.print("NO");    
	}
	}
}
