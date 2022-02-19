import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int words = 0;
		Scanner sc = new Scanner(System.in);
		sc.useDelimiter("\n");
		String [] arr = sc.next().split(" ");
		int max = arr[0].length();
		String mx = "";
		for(String str:arr) {
			if(max < str.length()) {
				mx = str;	
			}
		}
		System.out.print(mx);
	}
}
