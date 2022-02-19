import java.util.Scanner;
class Demo {

	public static void main(String[] args) {

		int num;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num =sc.nextInt();
		while(num != 0) {
			System.out.println("Hex of " + num % 10 + " is " + num % 10 );
			num /= 10;
		}
	}
}
