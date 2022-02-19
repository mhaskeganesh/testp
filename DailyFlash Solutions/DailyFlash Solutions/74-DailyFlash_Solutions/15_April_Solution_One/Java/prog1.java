import java.util.*;

class Demo {
	public static void main(String[] args) {
		int l;
		System.out.println("Enter len: ");
		Scanner sc = new Scanner(System.in);
		l = sc.nextInt();
		int [] arr1 = new int[l];
		int [] arr2 = new int[l];
		Integer [] arr = new Integer[2 * l];
	
		System.out.println("Enter array 1 :");
		for(int i = 0; i < l; i++) {
			arr1[i] = sc.nextInt();
			arr[i] = arr1[i];
		}
		System.out.println("Enter array 2 :");
		for(int i = 0; i < l; i++) {
			arr2[i] = sc.nextInt();
			arr[l+i] = arr2[i];
		}

		System.out.println("Conc sorted array: ");
		Arrays.sort(arr, Collections.reverseOrder());
		for(int i = 0; i < 2*l; i++) {
			System.out.println(arr[i] + " ");
		}

	}
}
