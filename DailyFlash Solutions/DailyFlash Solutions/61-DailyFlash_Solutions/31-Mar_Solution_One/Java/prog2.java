import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int words = 0;
		Scanner sc = new Scanner(System.in);
		sc.useDelimiter("\n");
		String str = sc.next();
		System.out.println(str.length());
	}
}
