import java.util.Scanner;
 
class Mahasena{
	public static void main(String[] arg){
		try{
			Scanner sc=new Scanner(System.in);
			byte n=sc.nextByte();
			byte l=0;
			while(n!=0){
				byte a=sc.nextByte();
				if(a%2==0)
					l++;
				else
					l--;
					n--;
			}
			if(l>0)
				System.out.println("READY FOR BATTLE");
			else	
				System.out.println("NOT READY");
		}catch(Exception e){}
	}
}  
