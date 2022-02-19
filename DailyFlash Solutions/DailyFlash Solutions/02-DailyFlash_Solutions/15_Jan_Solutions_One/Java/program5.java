
import java.io.*;

class Program {
	
	public static void main(String ... kbd) throws IOException {

		int a, b, c;
		System.out.printf("Enter angles of triangle in Degree : \n");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		a = Integer.valueOf(br.readLine());
		b = Integer.valueOf(br.readLine());
		c = Integer.valueOf(br.readLine());

		if(a +  b + c == 180){
			System.out.println("Valid triangle");
		}
		else{
			System.out.println("not Valid triangle");
		}
	
	}
}
