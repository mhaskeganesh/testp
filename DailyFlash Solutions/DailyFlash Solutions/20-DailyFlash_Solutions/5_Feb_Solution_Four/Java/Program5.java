class Pattern2{

	public static void main(String ... args){

		for(int i = 4 ; i >= 1 ; i--){

			for(int j = 1 ; j <= 4 ; j++){

				System.out.print((j < i) ? "\t" :  j + "\t"); 
			}
			System.out.println();	
		}
	}
}
