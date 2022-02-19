import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int l, u, temp, rev;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter l: ");
		l = sc.nextInt();
		System.out.println("Enter u: ");
		u = sc.nextInt();
		for(int i = l; i <= u; i++) {
			temp = i;
			rev = 0;
			while(temp != 0) {
				rev = rev * 10 + temp % 10;
				temp /= 10;
			}
			if(rev == i) {
				System.out.print(i + " ");
			}

		}
	}
}
