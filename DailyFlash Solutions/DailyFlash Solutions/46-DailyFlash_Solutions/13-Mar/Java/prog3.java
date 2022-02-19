import java.util.Scanner;

class Demo {
	static boolean isPrime(int num) {
		if(num == 2)
			return true;
		if(num <= 1)
			return false;
		int cnt = 0;
		for(int i = 2; i <= Math.sqrt(num); i++) {
			if(num % i == 0)
				cnt++;
		}
		if(cnt == 0)
			return true;
		else
			return false;
	}

	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		do {
			num = sc.nextInt();
			if(isPrime(num))
				System.out.println(num);
		} while(num > 0);
	}
}
