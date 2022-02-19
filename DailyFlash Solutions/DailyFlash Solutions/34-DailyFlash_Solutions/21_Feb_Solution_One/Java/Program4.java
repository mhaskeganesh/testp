

class Program4{

	
	public static void main(String args[]){

		char ch[]={'C','O','R','E'};

		for(int itr=0;itr<4;itr++){
		
			for(int jtr = 0 ; jtr<4 ;jtr++){
			
				System.out.print(jtr<itr?"\t":ch[jtr]+"\t");

			}	
			System.out.printf("\n");
		}
	}	
}	
