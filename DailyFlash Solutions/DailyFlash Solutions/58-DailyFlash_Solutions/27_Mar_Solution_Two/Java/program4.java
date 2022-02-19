import java.io.*;
class Program {
	public static void main(String[] args) throws IOException{
		
		int n, k = 0;
		System.out.printf("Enter String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		n = s.length();
		for(int i = 1; i <= n*2 - 1; i++){
			k = 0;
			for(int j = 1; j <= n; j++){
				if(i <= n && j <= i){
					System.out.print(s.charAt(k++) + "\t");
				}
				else if(i > n && j > i - n) {
					System.out.print(s.charAt(k++) + "\t");
				}
			}
			System.out.printf("\n");
		}
	}
}
