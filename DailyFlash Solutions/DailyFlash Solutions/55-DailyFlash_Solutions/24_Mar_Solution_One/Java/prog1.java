import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l;
		float mul = 0;
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt();
		for(int i = 1; i <= l; i++) {
			mul += (i - 1) * (3.14 / 6);
		}
		System.out.println(mul);
	}
}
