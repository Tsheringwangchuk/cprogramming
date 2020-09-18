public class lab0{
	public static void main(String[] args){
		int[] array = {1,2,3};
		int[] value=Resize(4, array);
		for(int j=0;j<value.length;j++){
			System.out.println(value[j]);
		}
	}
	public static int[] Resize(int n, int[] array){
		int[] temp=new int[n];
		for(int i=0;i<array.length;i++)
		{
			temp[i]=array[i];
		}
		temp[n-1]=4;

		return temp;
	}
}