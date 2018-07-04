import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		String a="dhoni";
		String b=sc.nextLine();
		
		char[] ch1=a.toCharArray();
		char[] ch2=b.toCharArray();
		
		
		int n=ch1.length;
		int m=ch2.length;
		if(n==m)
		{
			Arrays.sort(ch1);
			Arrays.sort(ch2);
			if(Arrays.equals(ch1,ch2))
			{
				System.out.print("anagram");
			}
			else
			{
				System.out.print("not possible");
			}
		}
		else
		{
			System.out.print("not possible");
		}
		sc.close();
	}
}
