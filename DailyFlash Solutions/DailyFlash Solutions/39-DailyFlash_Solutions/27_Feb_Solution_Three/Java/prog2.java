import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		double a;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter area: ");
		a = sc.nextDouble();
		if(a >= 0) {
			System.out.println("Rad : " + Math.sqrt(a/(3.14)));
		}
	}
}
