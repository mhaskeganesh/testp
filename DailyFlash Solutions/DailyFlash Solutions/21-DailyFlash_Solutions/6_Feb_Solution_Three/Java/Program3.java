import java.io.*;

class Program3{

	public static void main(String arsg[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num;
		while(true){
			num = Integer.parseInt(br.readLine());
		
			if(num<0)
				break;	
		
		}	
		System.out.printf("Negative number bro/sis");
	}		
}	
