import java.io.*;
class Program1 {
	public static void main(String[] args)throws IOException {
		int num, sum, n, lb, ub;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter lb: ");
		lb = Integer.parseInt(br.readLine());
		System.out.println("Enter ub: ");
		ub = Integer.parseInt(br.readLine());
		for(int i = lb; i <= ub; i++) {
			num = i;
			sum = 0;
			while(num != 0) {
				sum = sum + num % 10;
				num /= 10;
			}
			if(i % sum == 0) {
			       System.out.print(i + " ");
			} 
		}
	}
}
