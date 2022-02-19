import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int n;
		System.out.println("Enter size : ");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int arr[] = new int[n];
		System.out.println("Enter elements of an array : ");
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		System.out.println("Elements of an array in rev : ");
		for(int i = 0; i < n; i++) {
			System.out.print(arr[n - i - 1] + " ");
		}	
	}
}
