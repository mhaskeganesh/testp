import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num, sum, n, lb, ub;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter lb: ");
		lb = sc.nextInt();
		System.out.println("Enter ub: ");
		ub = sc.nextInt();
		for(int i = lb; i <= ub; i++) {
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
