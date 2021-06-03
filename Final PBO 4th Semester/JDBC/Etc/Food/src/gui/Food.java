package gui;

public class Food {
	private double calories;
	private String name;
	
	public Food(String name, double calories){
		this.name=name;
		this.calories=calories;
	}
	public double getCalories(){
		return this.calories;
	}
	public String getName(){
		return this.name;
	}
}
