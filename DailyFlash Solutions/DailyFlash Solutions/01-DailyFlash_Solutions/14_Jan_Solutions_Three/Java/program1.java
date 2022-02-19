q
import java.io.*;

class Program {

	public static void main (String ... kbd) throws IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Character \n");
		
		char c = (char)br.read();
		br.skip(1);
		
		if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
			System.out.printf("%c is alphabet \n", c);
		}
		else{
			System.out.printf("%c is not alphabet \n", c);
		}		
	}
}
