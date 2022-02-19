import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		float x1, x2, y1, y2, x3, y3;
		double s, ab, bc, ca;
		System.out.println("Enter x1 : ");
		x1 = sc.nextFloat();
		System.out.println("Enter y1 : ");
		y1 = sc.nextFloat();
		System.out.println("Enter x2 : ");
		x2 = sc.nextFloat();
		System.out.println("Enter y2 : ");
		y2 = sc.nextFloat();
		System.out.println("Enter x3 : ");
		x3 = sc.nextFloat();
		System.out.println("Enter y3 : ");
		y3 = sc.nextFloat();
		s = Math.sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)) + Math.sqrt((y2 - y3) * (y2 - y3) + (x2 - x3) * (x2 - x3)) + Math.sqrt((y3 - y1) * (y3 - y1) + (x3 - x1) * (x3 - x1)) / 2;
		ab = Math.sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
		bc = Math.sqrt((y2 - y3) * (y2 - y3) + (x2 - x3) * (x2 - x3));
		ca = Math.sqrt((y3 - y1) * (y3 - y1) + (x3 - x1) * (x3 - x1));
		System.out.println("R = " + Math.sqrt(s * (s - ab) * (s - bc) * (s - ca))/ s);
	}
}
