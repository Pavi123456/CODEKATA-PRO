
import java.util.*;

public class Main {
	public static void main (String[] args) 
	{
	    Scanner in=new Scanner(System.in);
	    int n=in.nextInt();
	    int k=2*n;
	    int ct=0;
	    for(int i=0,j=1;i<k && j<k;i+=2,j+=2)
	    {
	        ct++;
	    }
		System.out.println(ct);
	}
}
