import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		float x1, x2, y1, y2;
		System.out.println("Enter x1 : ");
		x1 = sc.nextFloat();
		System.out.println("Enter x2 : ");
		x2 = sc.nextFloat();
		System.out.println("Enter y1 : ");
		y1 = sc.nextFloat();
		System.out.println("Enter y2 : ");
		y2 = sc.nextFloat();
		System.out.println("Mid-point : " +  "(" +  (x1 + x2) / 2 +  ", "+ (y1 + y2) / 2 + ")");
	}
}
