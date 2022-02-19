import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter dist(ft): ");
		float dist = sc.nextFloat();
		if(dist >= 0) {
			System.out.println("Dist(cm) : " + dist * 30);
		} else {
			System.out.println("Enter valid det.");
		}
	}
}
