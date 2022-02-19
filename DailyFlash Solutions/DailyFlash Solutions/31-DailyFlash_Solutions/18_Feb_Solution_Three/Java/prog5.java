import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter num : ");
		int num = sc.nextInt();
		int temp = num;
		System.out.print("Divisors : ");
		while(num != 0) {
			if(temp % (num % 10) == 0) {
				System.out.print(num % 10 + " ");
			}
			num /= 10;
		}

	}
}
