
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int num=s.nextInt();
		if(num%2==0)
		{
			System.out.print(0);	
		}
		else
		{
			System.out.print(1);
		}
		s.close();
	}
}
