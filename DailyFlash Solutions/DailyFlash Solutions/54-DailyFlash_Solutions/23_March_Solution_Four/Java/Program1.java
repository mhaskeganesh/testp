import java.io.*;

class Program1 {


	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.printf("Enter A String\n");

		String s = br.readLine();
		String v = "AEIOUaeiou";

		System.out.println("The Vowels Are");
		for(int i = 1; i < s.length(); i++){
			for(int j = 1; j < v.length(); j++){
				if(s.charAt(i) == v.charAt(j)){
					System.out.println(s.charAt(i)+"\t"+(int)s.charAt(i)+"\t"); 
				}
			}
		}
	}
}
