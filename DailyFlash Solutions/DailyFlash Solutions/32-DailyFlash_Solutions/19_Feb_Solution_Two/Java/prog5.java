import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("num : ");
		int num = sc.nextInt();
		int temp = num;
		while(num != 0) {
			System.out.println(temp + " / " + num % 10 + " = " + temp / (num % 10));
			num /= 10;
		}
	}
}
