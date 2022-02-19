import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		int cnt = 0;
		char ch;
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		for(int i = 0; i < n.length(); i++){
			ch = n.charAt(i);
			if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'u' || ch == 'U'){
				cnt++;
			}
		}
		System.out.println(cnt);
	}
}
