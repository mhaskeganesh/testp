
import java.io.*;
class Program {
public static void main(String[] args) throws IOException {
	
		int temp, sum = 0, u, l;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Lower : ");
		l = Integer.parseInt(br.readLine());
		System.out.printf("Enter upper : ");
		u = Integer.parseInt(br.readLine());
		for(int i = l; i <= u; i++){
			temp = i;
			sum = 0;
			while(temp != 0){
				sum += temp%10;
				temp = temp / 10;
			}
			if(i % sum == 0){
				System.out.printf("%d ",i);
			}
		}
		System.out.printf("\n");
		
	}
}