import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		char ch = (char)br.read();
		System.out.println(ch>='A' && ch<='Z' || ch>='a' && ch<='z'?"Output : Alphabet":"Output : Not alphabet");
	}
}
