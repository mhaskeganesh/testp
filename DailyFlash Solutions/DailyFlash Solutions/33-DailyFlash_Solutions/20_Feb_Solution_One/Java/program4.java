
class Program4{
	
	public static void main(String args[]){
		
		for(int itr =0 ; itr <4 ; itr++){

			for(int jtr = 0 ; jtr < 4 ; jtr++){

				System.out.print(jtr<itr?"\t":bin(itr+jtr)+"\t");

			}
			System.out.printf("\n");

	}
		
	}	


	static int bin(int num){
		int bin = 0;
		switch(num){

			case 0:
				bin = 0;
				break;
			case 1:
				bin =  1;
				break;
			case 2:
				bin =  10;
				break;
			case 3:
				bin = 11;
				break;
			case 4:
				bin = 100;
				break;
			case 5:
				bin =  101;
				break;
			case 6:
				bin =  110;
				break;


		}

		return bin;
	
	}	

}	
