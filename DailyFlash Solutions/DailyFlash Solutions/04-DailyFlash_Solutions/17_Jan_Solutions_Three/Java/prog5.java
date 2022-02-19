import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter char : ");
			char ch = sc.next().charAt(0);
			System.out.println("ASCII : " + (int)ch);
	}
}
