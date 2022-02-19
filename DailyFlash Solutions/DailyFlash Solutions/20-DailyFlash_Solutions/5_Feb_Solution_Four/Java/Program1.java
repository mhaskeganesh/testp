class Fibonacci {
	public static void main(String[] args){

		int num = 0 , num1 = 1 , num2 ;
		System.out.print(num + "\t" + num1 + "\t");
		for(int i = 1 ; i <= 4 ; i++){
			num2 = num1 + num ;
			System.out.print(num2 + "\t");
			num = num1 ;
			num1 = num2 ;
		}
		System.out.println();
	}
}
/*num2	i	printf()	num	num1
  0,1		0	1
  1	1	1		1	1
  2	2	2		1	2
  3	3	3		
  */ 
