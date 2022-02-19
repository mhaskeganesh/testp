import java.util.Scanner;

class Demo {

	static int fact(int n) {
		if(n == 1)
			return 1;
		return n * fact(n - 1);
	}
	public static void main(String[] args) {
		float l, mul = 0;
		Scanner sc = new Scanner(System.in);
		l = sc.nextFloat();
		for(int i = 1; i <= l; i++) {
			mul += 1 / (float)fact(i);
		}
		System.out.println(mul);
	}
}
