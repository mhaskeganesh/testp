import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		
		int num, rem, flag = 0, sum;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num = sc.nextInt();
		int temp = num;
		while(num != 0) {
			rem = num % 10;
			sum = 0;
			for(int i = 1; i <= rem / 2; i++) {
				if(rem % i == 0) 
					sum += i;
			}
			if(sum == rem) {
				System.out.print(rem + " ");
				flag++;
			}
			num /= 10;
		}
		if(flag == 0)
			System.out.println("The num " + temp + " not have any digit ehich is perfect in nature.");
	}
}
