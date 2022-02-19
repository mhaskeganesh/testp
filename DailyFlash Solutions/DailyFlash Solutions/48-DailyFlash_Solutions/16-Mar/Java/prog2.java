import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		int num, n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num = sc.nextInt();
		System.out.println("Enter n : ");
		n = sc.nextInt();
		int temp = num;
		int cnt = 0;
		while(temp != 0) {
			cnt++;
			if(temp % 10 == 1) {
				num += (n - 1) * Math.pow(10, cnt - 1);	
			}
			temp /= 10;
		}
		System.out.println(num);
	}
}
