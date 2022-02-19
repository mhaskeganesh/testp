
import java.io.*;

class Program {

	public static void main (String ... kbd) throws IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Character \n");
		
		char c = (char)br.read();
		br.skip(1);
			
		if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
			if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
					c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
				System.out.printf("%c is Vowel \n", c);
			}
			else {
				System.out.printf("%c is Consonant\n", c);
			}
		}
		else {
			System.out.printf("%c is not alphabet \n", c);
		}	
	}
}
