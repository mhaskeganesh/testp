import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num = sc.nextInt();
		int sqrt = num / 2;
		int temp = 0;
		while(sqrt != temp) {
			temp = sqrt;
			sqrt = (num / temp + temp) / 2;
		}
		System.out.println("Sqrt of " + num + " is " + sqrt);
	}
}
