import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Input : ");
		int num = sc.nextInt();
		for(int i = 1; i <= 10; i++)
			System.out.println( num * i);
	}
}
