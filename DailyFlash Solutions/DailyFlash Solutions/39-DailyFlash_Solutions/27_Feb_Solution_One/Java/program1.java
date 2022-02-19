
import java.io.*;
class Program {
	public static void main(String ... kanif) throws IOException {

		int n, rev = 0, l, u;

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Lower and upper bounds : ");
		l = Integer.parseInt(br.readLine());
		u = Integer.parseInt(br.readLine());
		for(int i = l; i <= u; i++){
			n = i;
			rev = 0;
			while(n != 0){
				rev = rev * 10 + n % 10;
				n = n / 10;
			}
			if(rev == i){
				System.out.printf("%d ", i);
			}	
		}
		System.out.printf("\n");
	}
}
