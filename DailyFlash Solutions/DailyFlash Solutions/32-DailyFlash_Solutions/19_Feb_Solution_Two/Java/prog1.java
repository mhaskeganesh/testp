import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("a : ");
		int a = sc.nextInt();
		System.out.print("n : ");
		int n = sc.nextInt();
		System.out.print("d : ");
		int d = sc.nextInt();
		System.out.println("Sum : " + ((float)n/2)*(2 * a + d * (n - 1)));

	}
}
