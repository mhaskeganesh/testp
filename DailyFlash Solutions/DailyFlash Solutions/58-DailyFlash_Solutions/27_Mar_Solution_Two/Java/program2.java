import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		char []arr = n.toCharArray();
		System.out.println(n.length());
		int k = arr.length;
		char c;
		for(int i = 0; i < k; i++){
			if(arr[i] == 'A'|| arr[i] == 'a' || arr[i] == 'E' || arr[i] == 'e' || arr[i] == 'I' || arr[i] == 'i' ||arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U'){
				arr[i] = (char)(arr[i] + 1);
			}	
		}
		n = new String(arr);	
		System.out.println(n);
	}
}
