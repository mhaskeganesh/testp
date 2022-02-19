import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int temp = num, n = 0;
		while(temp != 0) {
		
			temp /= 10;
			n++;
		}
		int [] arr = new int[n];
		int i = 0;
		while(num != 0) {
			arr[i] = num % 10;
			num /= 10;
			i++;
		}
		int sum = 0;
		int max = arr[0];
		for(int j = 1; j < n; j++) {
			if(arr[j] > max)
				max = arr[j];
		}
		System.out.print("max : " + max);

	}
}
