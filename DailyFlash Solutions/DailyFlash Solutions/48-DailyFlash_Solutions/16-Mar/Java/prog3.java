import java.util.Scanner;

class Demo {
	static int isPalindrome(int num) {
		int rev = 0, temp = num;
		
		while(temp != 0) {
			rev = rev * 10 + temp % 10;
			temp /= 10;
		}
		if(rev == num)
			return 1;
		return 0;
	}	
	public static void main(String[] args) {
		int num = 0, f = 0;
		Scanner sc = new Scanner(System.in);
		do {
			if(f != 0)
				System.out.println(num);	
			num = sc.nextInt();
			f = 1;
		} while(isPalindrome(num) != 1);
	}
}
