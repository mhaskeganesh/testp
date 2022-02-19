import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter num : ");
		num = sc.nextInt();
		int m1 = 9, m2 =  9, rem, cnt = 0;
		while(num != 0) {
			rem = num % 10;
			if(rem <= m1) {
				m2 = m1;
				m1 = rem;
			} else if(rem < m2) {
				m2 = rem;
			}
			num /= 10;
		}
		System.out.println("Sec min : " + m2);
	}
}
