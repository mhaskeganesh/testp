import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, n, d;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter last term : ");
		l = sc.nextInt();
		System.out.println("Enter common difference : ");
		d = sc.nextInt();
		System.out.print("AP : ");
		while(l > 0) {
			System.out.print(l + " ");
			l = l - d;
		}
	}
}
