import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num, max = 0, max2 = 0, count = 0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter num: ");
		num = sc.nextInt();
		int temp = num;
		while(num != 0) {
			if(num % 10 >= max) {
				max = num % 10;
			}
			num /= 10;
		}
		while(temp != 0) {
			if(max == temp % 10) {
				count++;
				temp /= 10;
				continue;
			}
			if(count > 1) {
				return;
			}
			if(temp % 10 >= max2) {
				max2 = temp % 10;
			}
			temp /= 10;

		}
		if(count > 1) {
			System.out.println("Sec max : " + max);
		} else {
			System.out.println("Sec max = " + max2);
		}
	}
}
