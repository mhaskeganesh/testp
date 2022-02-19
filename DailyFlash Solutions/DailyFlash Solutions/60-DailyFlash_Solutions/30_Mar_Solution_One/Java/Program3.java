class Program3 {


	public static void main(String[] args) {

		int col = 4;
		int row=(2*col)-1;

		for(int i=0; i<row; i++){	
			for(int j=0; j<col; j++){

				if(i+j>=row/2 && i-j<=row/2)
					System.out.printf("%c\t",'0');
				else
					System.out.printf("\t");

			}
			System.out.printf("\n");
		}


	}
}
