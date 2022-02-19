import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, sum, mul = 1;
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		for(int i = 0; i < str.length(); i++) {
			System.out.print(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u' ? (int)str.charAt(i) : "");
		}
	}
}
