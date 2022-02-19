import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		char ch = (char)br.read();
		System.out.println(ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'?"Output : Vowel":ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'?"Output : Consonent":"Not a vowel or consonent");
	}
}
