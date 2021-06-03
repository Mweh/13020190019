package gui;


import javax.swing.SwingUtilities;
public class Main {

	public static void main(String[] args){
		FoodCalculator foodcalculator=new FoodCalculator();
		SwingUtilities.invokeLater(new Runnable(){
		public void run() {
			foodcalculator.Start();
			// TODO Auto-generated method stub
			
		}
		
	});	
		
		
	}
}
