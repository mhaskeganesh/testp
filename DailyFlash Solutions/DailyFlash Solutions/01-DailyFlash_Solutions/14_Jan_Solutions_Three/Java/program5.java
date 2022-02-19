
import java.io.*;

class Program {

	public static void main (String ... kbd) throws IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Three Numbers :\n");
		int a = Integer.parseInt(br.readLine());
		int b = Integer.parseInt(br.readLine());
		int c = Integer.parseInt(br.readLine());
		
		if(a > b){
			if(a > c){
				System.out.printf("%d is greater\n", a);
			}
			else {
				System.out.printf("%d is greater\n", c);
			}
		}
		else if (b > c){
			System.out.printf("%d is greater\n", b);
		}
		else{
			System.out.printf("%d is greater\n", c);
		}
	}
}
