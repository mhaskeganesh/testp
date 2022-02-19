import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		System.out.print("Enter num : ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int i = 0, rem;
		double sum = 0;
		while(num != 0) {
			rem = num % 10;
			sum += rem;
			num = num / 10;
			i++;
		}
		System.out.println("Sum : " + sum + "\nAvg : " + sum / i);
	}
}
