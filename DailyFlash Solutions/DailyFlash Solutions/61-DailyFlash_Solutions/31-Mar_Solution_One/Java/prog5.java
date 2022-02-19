import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		float l;
		Scanner sc = new Scanner(System.in);
		l = sc.nextFloat();
		System.out.print("Len: ");
		System.out.println(1 / ((2 * 3.14) / Math.sqrt(l/9.81)));
	}
}
