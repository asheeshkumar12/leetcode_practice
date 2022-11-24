//import java library all required
import java.util.*;
public class Main
{
    // main function 
	public static void main(String[] args) 
	{
	    //Scanner bufferreader take for input
	    Scanner scn = new Scanner(System.in);
	    System.out.print("Enter the number of runners......:");
	    
	    // take input total no. of runner in a group
	    int runner=scn.nextInt();
	    
	    // take input target distance to run (in miles)
	   System.out.print("Enter target distance (miles)......:");
	    
	    int tDistance=scn.nextInt();
	    
	    // print to new line 
	    System.out.println();
	   
	    // declare dynamic array to input all runner 
	    int arr[]=new int[runner];
	    
	    for(int i=0;i<runner;i++)
	    {    
	        // print string text first
	      System.out.print("Enter distance run by Runner"+(i+1)+"  (in KM) : ");
	           //ith input store in array
	       arr[i]=scn.nextInt();
	    }
	    
	    // print new line
	    System.out.println();
	    //print string text
	     System.out.println("Runner"+"                "+"Distance (MI)");
	   
	    //print text
	    System.out.println("-----------"+"            "+"-------------");
	    
	    //declare  sum as double type sore all distance coverd by all runner
	    double sum=0;
	    
	    for(int i=0;i<runner;i++){
	        
	        // declare r store a particular distance in miles
	        double r=arr[i]*0.621;   // use formula miles=0.621*Kilometer as given in question
	       
	        // add all cover distance in miles 
	        sum=sum+r;
	        
	        // print a particuler Runner cover distance in mmiles
	        System.out.println("Runner"+(i+1)+"                        "+String.format("%.2f",r));
	    }
	   
	    // print total distance covered by all runner which paricipate in group
	    //   String.format("%.2f",sum) it is used to 2 decimal point fix 
	    System.out.println("You run "+String.format("%.2f",sum)+" (MI) all together.");
	    
	    // remaining distance to cover target 
	    System.out.println("You have to run  " +String.format("%.2f",(tDistance-sum))+" miles to reach your target.");
	    
		
	}
}
