import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		double c;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter cir : ");
		c = sc.nextDouble();
		if(c >= 0) {
			System.out.println("Dia : " + c / 3.142);
		}
	}
}
