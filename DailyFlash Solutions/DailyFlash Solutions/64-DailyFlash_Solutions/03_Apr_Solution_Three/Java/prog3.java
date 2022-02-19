import java.util.*;
class Demo {
	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		int [] arr1 = new int[num];
		int [] arr2 = new int[num];
		int [] arr = new int[num];
		System.out.println("Array 1:");
		for(int i = 0; i < num; i++) {
			arr1[i] = sc.nextInt();
		}
		System.out.println("Array 2:");
		for(int i = 0; i < num; i++) {
			arr2[i] = sc.nextInt();
			arr[i] = arr1[i] * arr2[i];
		}
		for(int i = 0; i < num; i++) {
			System.out.print(arr[i] + " ");
		}

	}
}
