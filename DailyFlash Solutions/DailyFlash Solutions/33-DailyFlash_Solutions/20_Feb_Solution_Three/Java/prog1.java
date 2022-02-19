import java.util.Scanner;

class Demo {

	public static void main(String[] args) {

		double r, th;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter radius : ");
		r = sc.nextDouble();
		System.out.println("Enter angle : ");
		th = sc.nextDouble();
		System.out.println("x : " + Math.cos(th) + "\ny : " + r * Math.sin(th));
	}	
}
