import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num, sum = 0, n;
		System.out.println("Enter num : ");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i = 1; i <= n; i++) {
			num = i;
			sum = 0;
			while(num != 0) {
				sum = sum + num % 10;
				num /= 10;
			}
			if(i % sum == 0) {
				System.out.print(i + " ");
			}
		}
	}
}
