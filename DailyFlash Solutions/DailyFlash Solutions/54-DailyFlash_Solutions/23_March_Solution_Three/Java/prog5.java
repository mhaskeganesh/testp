import java.util.Scanner;
class Demo {
	public static void main(String[] args) {
		int n, sum = 0, num;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int [] arr = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
			sum += arr[i];
		}
		float avg = (float)sum / (float)n;
		sum = 0;
		for(int i = 0; i < n; i++) {
			sum += (avg - arr[i]) * (avg - arr[i]);
		}
		int ch;
		while(true) {
			System.out.println("1.avg\n2.var\n3.SD\nch:");
			ch = sc.nextInt();
			switch(ch) {
				case 1:
					System.out.println(avg);
					break;
				case 2:
					System.out.println("Var : " + (float)sum / n);
					break;
				case 3:
					System.out.println("Std dev : " + Math.sqrt((float)sum / n));
					break;
			}
		}
	}
}
