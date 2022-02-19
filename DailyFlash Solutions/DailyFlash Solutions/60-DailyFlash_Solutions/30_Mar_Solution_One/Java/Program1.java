import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String s = br.readLine();
		int cnt = 1;

		for(int i = 0; i < s.length(); i++)
			if(s.charAt(i) == ' ')
				cnt++;
		System.out.println("Number of Words is "+cnt);
		
	}
}
