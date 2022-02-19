import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num, max = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num: ");
		num = sc.nextInt();
		while(num != 0) {
			if(num % 10 >= max) {
				max = num % 10;
			}
			num /= 10;
		}
		System.out.println("Max : " + max);
	}
}
