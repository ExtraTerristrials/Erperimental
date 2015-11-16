package prince;
import java.util.Scanner;
import java.util.ArrayList;
public class Euclid {
	ArrayList<Integer> numbers;
	void LoadNumbers(int n)
	{
		numbers=new ArrayList<>();
		for(int i=0;i<n;i++){
			//numbers.add(new Scanner(System.in).nextBigInteger());
		}
	}
	int GCD(int a, int b){
		if(a%b!=0){
			return GCD(b,a%b);
		}
		else{
			return b;
		}
	}
	public static void main(String[] args) {
		int a=new Scanner(System.in).nextInt();
		int b=new Scanner(System.in).nextInt();
		System.out.println(new Euclid().GCD(a,b));
		//The Imortant note is that HCF and GCD are same
	}
}
