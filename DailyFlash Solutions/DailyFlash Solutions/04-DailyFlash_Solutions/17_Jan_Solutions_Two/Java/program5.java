
import java.io.*;

class Memory {

	static public void main(String ... kbd) throws IOException {
		char c;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter Character : ");
		System.out.printf("ASCII : %d\n", br.read());
		br.skip(1);
		return;
	}
}