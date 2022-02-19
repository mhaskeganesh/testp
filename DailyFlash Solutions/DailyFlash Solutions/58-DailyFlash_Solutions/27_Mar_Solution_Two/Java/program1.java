import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		int n, x, y;
		float mul = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter length : ");
		n = Integer.parseInt(br.readLine());
		System.out.printf("Enter x and y : ");
		x = Integer.parseInt(br.readLine());
		y = Integer.parseInt(br.readLine());
		float factor = (float)3.142 / 6;
		int cnt = 1;
		while(cnt <= n){
			mul = mul + (float)(cnt)/(float)Math.pow((x + y), (cnt % 2 == 0 ? y : x));
			cnt++;
		}
		System.out.printf("%f\n",mul);
	}
}