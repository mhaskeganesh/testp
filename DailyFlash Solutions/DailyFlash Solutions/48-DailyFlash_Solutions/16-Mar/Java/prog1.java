import java.util.Scanner;
class Demo {
	static boolean isPrime(int num) {
		int cnt = 0;
		if(num <= 1) {
			return false;
		}
		for(int i = 2; i <= Math.sqrt(num); i++) {
			if(num % i == 0)
				return false;
		}
		return true;
	}

	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num = sc.nextInt();
		for(int i = 1; i <= Math.sqrt(num); i++) {
			if(num % i == 0) {
				if(isPrime(i)) {
					System.out.println(i + " ");
				}
				if(isPrime(num / i) && i != num / i) {
					System.out.println(num / i + " ");
				}
			}
		}
	}
}
