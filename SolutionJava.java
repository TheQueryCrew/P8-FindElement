
import java.util.*;

class Main {
	public static void main (String[] args) {
		int[] arr1={1,2,3,4,5,10};
		int[] arr2={2,3,1,0,5};
		
		//Method1 TC-O(N) SC-O(N)
	    List<Integer> list=new ArrayList<>();
	    for(int i=0;i<arr2.length;i++){
	        list.add(arr2[i]);
	    }
		for(int i=0;i<arr1.length;i++){
		    if(!list.contains(arr1[i])){
		        System.out.print(arr1[i]+" ");
		    }
		}
		
		//Method2 TC-O(N^2) SC-O(1)
		for(int i=0;i<arr1.length;i++){
		    int num=arr1[i];
		    boolean flag=false;
		    for(int j=0;j<arr2.length;j++){
		        if(arr2[j]==num){
		            flag=true;
		            break;
		        }
		    }
		    if(flag==false){
		        System.out.print(num+" ");
		    }
		}
	}
}
