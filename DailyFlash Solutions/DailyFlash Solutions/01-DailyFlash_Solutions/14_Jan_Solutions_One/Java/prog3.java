import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		char ch = (char)br.read();
		System.out.println(ch>='A' && ch<='Z' || ch>='a' && ch<='z'?"Output : Aplhabet":ch>=48 && ch<=57?"Output : Digit":ch>=33 && ch<=47 || ch>=58 && ch<=64?"Output : Special character":"Output : Other");
	}
}
