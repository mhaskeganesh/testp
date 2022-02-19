import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int [] arr = new int[num];
		int mul = 1;
		for(int i = 0; i < num; i++) {
			arr[i] = sc.nextInt();
			if(arr[i] % 2 == 1)
				arr[i] = arr[i] * arr[i] * arr[i];
			else	
				arr[i] = arr[i] * arr[i];
		}

		for(int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}

	}
}
