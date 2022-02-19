
import java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException{

		int n;
		System.out.printf("Enter Number : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		while(true){
			n = Integer.parseInt(br.readLine());
			if(n%7 == 0) {
				System.out.printf("You entererd Number divisible by 7\n");
				break;
			}
		}
	}
}