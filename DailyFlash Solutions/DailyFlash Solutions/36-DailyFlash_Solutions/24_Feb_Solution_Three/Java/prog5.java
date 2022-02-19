import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num, sum = 0, cnt = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter num : ");
		num = sc.nextInt();
		int temp = num;
		int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		while(num != 0) {
			arr[num % 10] += 1;
			num /= 10;
		}	
		for(int i = 0; i < 10; i++) {
			if(arr[i] != 0) {
				System.out.println("Freqn of " + i + " is " + arr[i]);	
			}
		}
	}
}
