import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter radius : ");
		double r = sc.nextDouble();
		System.out.println("Circum : " + (2 * 3.14 * r));
	}
}
