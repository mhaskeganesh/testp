import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		int n;
		float mul = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		float factor = pie / 6;
		int cnt = 0;
		while(cnt != n){
			mul = mul + factor;
			cnt++;
		}
		System.out.printf("%f\n",mul);
	}
}