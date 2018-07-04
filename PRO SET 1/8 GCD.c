
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int a[]=new int[n];
		
		int q=s.nextInt();
		
		int left[]=new int[q];
		int right[]=new int[q];
		
		int gcd=1;
		for(int i=0;i<n;i++)
		{
			a[i]=s.nextInt();
		}
		for(int i=0;i<q;i++)
		{
			left[i]=s.nextInt();
			right[i]=s.nextInt();
		}
		for(int i=0;i<q;i++)
		{
			for(int j=1;j<=left[i] && j<=right[i];j++)
			{
				if(left[i]%j==0 && right[i]%j==0)
				{
					gcd=j;
				}
			}
			System.out.print(gcd);
			System.out.println();
		}
		s.close();
	}
}
