import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int sum = 0;
		System.out.println("Enter num : ");
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		for(int i = 1; i <= Math.sqrt(num); i++) {
			if(num % i == 0) {
				if(num / i == i) {
					System.out.print(i + " ");
					sum += i;
				} else {
					System.out.print(i + " " + num / i + " "); 
					sum += i;
					sum += num / i;
				}
			}
		}

		System.out.println("\nsum : " + sum);
	}
}
