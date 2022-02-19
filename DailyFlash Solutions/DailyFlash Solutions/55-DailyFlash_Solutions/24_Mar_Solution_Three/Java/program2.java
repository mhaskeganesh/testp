import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		char st[];
		System.out.printf("Enter length : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Any String : ");
		String s = br.readLine();
		st = s.toCharArray();
		for(int i = 0; i < st.length; i++){
			if(st[i] >= 65 && st[i] <= 90){
				st[i] = (char)(st[i] + 32);
			}
		}
		System.out.printf("%s\n", st);
	}

}