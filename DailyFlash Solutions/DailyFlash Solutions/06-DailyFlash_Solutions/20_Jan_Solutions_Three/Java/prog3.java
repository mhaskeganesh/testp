import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Input : ");
		int i = sc.nextInt();
		System.out.println(i % 2 == 0 ? "Output : Even" : "Output : Odd");
	}
}
