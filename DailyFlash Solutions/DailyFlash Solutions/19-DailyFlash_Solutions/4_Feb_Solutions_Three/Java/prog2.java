import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		int rem, dec = 0, i = 0;
		System.out.println("Enter binary : ");
		Scanner sc = new Scanner(System.in);
		int bin = sc.nextInt();
		while(bin != 0) {
			rem = bin % 10;
			if(!(rem == 0 || rem == 1)) {
				System.out.println("Enter valid bin.");
				System.exit(1);
			}
			dec = dec + rem * (int)Math.pow(2, i);
			bin /= 10;
			i++;
		}
		System.out.println("Decimal : " + dec);
	}
}
