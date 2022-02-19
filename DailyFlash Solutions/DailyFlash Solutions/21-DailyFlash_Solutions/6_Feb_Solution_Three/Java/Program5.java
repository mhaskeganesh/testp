import java.io.*;



class Program5{

	
	public static void main(String ... args)throws IOException{
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		int temp=0,num;
		int itr =1;
		while(itr <5){
		
	
			 num = Integer.parseInt(br.readLine());

			if(temp>num){
				System.out.printf("Loop is exited with input %d ",num);
				break;
			}	

			temp = num;
			itr++;
		}
	}	
}	
