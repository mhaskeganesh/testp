import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		float x, y, l, mul = 0;
		Scanner sc = new Scanner(System.in);
		l = sc.nextFloat();
		x = sc.nextFloat();
		y = sc.nextFloat();
		for(int i = 1; i <= l; i++) {
			if(i % 2 == 1)
			mul += (i) / Math.pow(x + y, x);
			else
			mul += (i) / Math.pow(x + y, y);
		}
		System.out.println(mul);
	}
}
