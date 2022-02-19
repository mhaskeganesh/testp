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
				mul *= arr[i];
		}
		System.out.println(mul);

	}
}
