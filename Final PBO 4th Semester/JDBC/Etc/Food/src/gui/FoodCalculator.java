package gui;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;

import java.util.Scanner;

import javax.swing.*;
public class FoodCalculator extends JFrame{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	static ArrayList<Food> foodlist;
	static ArrayList<JTextField> fields;
	static JButton button;
	static JButton reset;
	static JButton savebutton;
	static JButton findbutton;
	static JTextArea area;
	static Scanner scan;
	
	
	public FoodCalculator(){
		super("Food Calories Calculator");
	}
	
	public void Start(){
		setLayout(new FlowLayout());
		System.out.println(new File("FoodList.txt").getAbsolutePath());
	
		File file=new File(new File("FoodList.txt").getAbsolutePath());
		foodlist=new ArrayList<Food>();
		
		setSize(1000, 500);
		setResizable(false);
	try{	
		ScanFile(file);
	}catch(IOException e){
		System.out.println("Can't find file");
		
	}
	fields=new ArrayList<JTextField>();
	for (int i=0;i<foodlist.size();i++){
		add(new JLabel(foodlist.get(i).getName()+"("+foodlist.get(i).getCalories()+"cal/oz) x"));
		fields.add(new JTextField());
		fields.get(i).setColumns(3);
		add(fields.get(i));
		add(new JLabel(" "));
	}
	savebutton=new JButton("Save Recipe");
	savebutton.addActionListener(
			new ActionListener(){
				public void actionPerformed(ActionEvent event){
					area.setText("");
					area.append(GetTotalList());
					area.append("Total Calories: "+String.valueOf(GetTotalCalories()));
					SaveRecipe saverecipe=new SaveRecipe();
				}
	}
			);
	findbutton=new JButton("Find recipe");
	findbutton.addActionListener(
			new ActionListener(){

				@Override
				public void actionPerformed(ActionEvent event) {
					// TODO Auto-generated method stub
					FindRecipe findrecipe=new FindRecipe();
				}
				
			}
			);
	area=new JTextArea();
	area.setColumns(10);
	area.setEditable(false);
	button=new JButton("Find Total Calories");
	button.addActionListener(
			new ActionListener(){
				public void actionPerformed(ActionEvent event){
					area.setText("");
					area.append(GetTotalList());
					area.append("Total Calories: "+String.valueOf(GetTotalCalories()));
				}
			}
			);
	
	reset=new JButton("Reset Data");
	reset.addActionListener(
			new ActionListener(){
				public void actionPerformed(ActionEvent event){
					for (int i=0;i<fields.size();i++){
						fields.get(i).setText("");
					}
					area.setText("");
				}
			});
	add(button);
	add(savebutton);
	add(findbutton);
	add(reset);
	add(area);
	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	setVisible(true);
	
	
	
	
	}
	public void ScanFile(File file) throws IOException{
		scan=new Scanner(file);
		while(scan.hasNextLine()){
			String[] FoodTraits=scan.nextLine().split(",");
			foodlist.add(new Food(FoodTraits[0].trim(), Double.parseDouble(FoodTraits[1].trim())));
		}
		
	}
	public static double GetTotalCalories(){
		double TotalCalories=0;
		for (int i=0;i<fields.size();i++){
			if (!fields.get(i).getText().trim().isEmpty()){
				try{
				TotalCalories=foodlist.get(i).getCalories()*Double.parseDouble(fields.get(i).getText().trim())+TotalCalories;
				}catch(Exception e){
					
				}
			}
		}
		
		return TotalCalories;
	}
	public static String GetTotalList(){
		String TotalList="";
		for (int i=0;i<fields.size();i++){
			if (!fields.get(i).getText().trim().isEmpty()){
				TotalList+=foodlist.get(i).getName()+"("+foodlist.get(i).getCalories()+"Calories): "+fields.get(i).getText().trim()+"\n";
			}
		}
		return TotalList;
	}
}
