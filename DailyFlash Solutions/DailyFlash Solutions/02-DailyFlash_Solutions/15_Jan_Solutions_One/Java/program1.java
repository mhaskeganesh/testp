
import java.io.*;

class Program {
	public static void main(String ... kbd) throws IOException {
	
		char c;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Character  : ");
		
		c = (char)br.read();
		br.skip(1);

		if(c >= 65 && c <= 90) {
			System.out.printf("%c is in UpperCase \n", c);
		}
		
		else if(c >= 97 && c <= 122){
			System.out.printf("%c is in LowerCase \n", c);
		}
		else{
			System.out.printf("%c is not alphabet \n", c);
		}
	}
}
