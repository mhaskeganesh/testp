import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		System.out.println("Enter num : ");
		Scanner sc = new Scanner(System.in);
		int num;
		num = sc.nextInt();
		if(!(num >= 200 && num <= 600))
			return;
		double sqrt = num / 2;
		double  temp = 0;
		while(sqrt != temp) {
			temp = sqrt;
			sqrt = (num / temp + temp) / 2;
		}
		System.out.println(sqrt);

	}
}
