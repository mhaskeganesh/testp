

class Program4{
	
	public static void main(String args[]){
		
		char ch = 'A';

		for(int itr  = 0 ; itr<4 ; itr++){

			for(int jtr =  0 ; jtr<4 ; jtr++){

				if(jtr<3-itr){
					
					System.out.print(" ");
					

				}else{
					System.out.printf("%c",ch++);
					
				}		
			}
			System.out.printf("\n");
			ch = 'A';
		}
	}	

}	
