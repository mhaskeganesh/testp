import java.util.Scanner;
class Program2 {
	public static void main(String[] args) {
		int num1, num2;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num1: ");
		num1 = sc.nextInt();
		System.out.println("Enter num2: ");
		num2 = sc.nextInt();
		double temp, sqrt;
		for(int i = num1; i <= num2; i++) {
			temp = 0;
			sqrt = i / 2;
			while(sqrt != temp) {
				temp = sqrt;
				sqrt = (i / temp + temp) / 2;
			}
			System.out.print(sqrt + " ");
		}
	}
}
