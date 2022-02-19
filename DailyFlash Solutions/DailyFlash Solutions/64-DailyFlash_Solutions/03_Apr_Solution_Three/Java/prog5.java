import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		float F;
		Scanner sc = new Scanner(System.in);
		F = sc.nextFloat();
		System.out.print("l: ");
		System.out.println((4 * 3.14 * 3.14 * F * F) / 9.18);
	}
}
