import java.io.*;
class Program {
	static float pie = 3.142f;
	public static void main(String[] args) throws IOException{
		System.out.printf("Enter Any String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		char []arr = n.toCharArray();
		int k = arr.length;
		char c;
		int max = 0;
		for(int i = 0; i < k; i++){
			if(max < arr[i]){
				max = arr[i];
			}
		}
		int cnt = 0;
		for(int i = 1; i < k; i++){
			if((arr[i-1] == ' ' || arr[i - 1] == '\t') && arr[i] != ' '){
				cnt++;
			}	
		}
		System.out.println(cnt + 1);
	}
}
