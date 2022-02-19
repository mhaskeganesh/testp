
import java.io.*;
class Program{

	public static void main(String[] args) throws IOException{
		
		String p;
		System.out.printf("Enter String : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		p = br.readLine();

		int len = p.length();
		int num = 0,ct = 0,j = 0, i = len % 3;
		if(i != 0){
			while(j < len % 3){
				num = num*2 + (p.charAt(j)-'0');
				j++;	
			}
			System.out.printf("%d", num);
		}
		num = 0;
		while(i < len){
			num = num*2 + (p.charAt(i)-'0');
			i++;
			ct++;
			if(ct == 3){
				ct = 0;
				System.out.printf("%d",num);
				num = 0;
			}
		}	
		System.out.printf("\n");
	}

}