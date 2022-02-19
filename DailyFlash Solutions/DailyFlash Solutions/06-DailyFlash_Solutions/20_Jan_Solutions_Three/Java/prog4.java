import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Input : ");
		int n0 = sc.nextInt();
		int n1 = sc.nextInt();
		int n2 = sc.nextInt();
		int n3 = sc.nextInt();
		int n4 = sc.nextInt();
		int n5 = sc.nextInt();
		int n6 = sc.nextInt();
		int n7 = sc.nextInt();
		int n8 = sc.nextInt();
		int n9 = sc.nextInt();
		int sum = n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
		System.out.println("Sum  : " + sum + "\nAvg : " + ((float)sum / 10));
	}
}
