import java.io.*;
class Program {

	static int fact(int n ) {
		if(n == 0){
			return 1;
		}
		return n*fact(n-1);
	}
	public static void main(String[] args) throws IOException{
		int n;
		float mul = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter length : ");
		n = Integer.parseInt(br.readLine());
		System.out.printf("Enter length : ");
		int x = Integer.parseInt(br.readLine());
		int y = Integer.parseInt(br.readLine());
		int cnt = 1;
		while(cnt <= n){
			mul = mul + 1/(float)(Math.pow((x+y),cnt)*fact(cnt));
			cnt++;
		}
		System.out.printf("%f\n",mul);
	}
}
