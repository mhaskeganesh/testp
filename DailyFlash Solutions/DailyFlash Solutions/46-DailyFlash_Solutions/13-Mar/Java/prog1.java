import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		System.out.println("Enter a num : ");
		Scanner sc = new Scanner(System.in);
		int num;
		num = sc.nextInt();
		System.out.println(Math.pow(num, 1.0 / 3.0));
	}
}
