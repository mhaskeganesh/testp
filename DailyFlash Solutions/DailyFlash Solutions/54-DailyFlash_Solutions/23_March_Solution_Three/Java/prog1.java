import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l;
		float mul = 0;
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt();
		for(int i = 1; i <= l; i++) {
			mul += i / (Math.sqrt(i) * (i + 1));
		}
		System.out.println(mul);
	}
}
