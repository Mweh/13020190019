package gui;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.UnsupportedEncodingException;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class SaveRecipe extends JFrame{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	PrintWriter printwriter;
	JButton button;
	JTextField recipename;
	public SaveRecipe(){
		setLayout(new FlowLayout());
		button=new JButton("Save Recipe");
		recipename=new JTextField();
		recipename.setColumns(15);
		recipename.addActionListener(
				new ActionListener(){
					@Override
					public void actionPerformed(ActionEvent event) {
					try{
						findRecipe();
					}catch(IOException e){
						System.out.println("Something wrong");
						return;
					}
					printwriter.println(FoodCalculator.area.getText());
					
					printwriter.close();
					setVisible(false);
					dispose();
					}
				}
				);
		button.addActionListener(
				new ActionListener(){
					@Override
					public void actionPerformed(ActionEvent event) {
					try{
						findRecipe();
					}catch(IOException e){
						System.out.println("Something wrong");
						return;
					}
					printwriter.println(FoodCalculator.area.getText());
					
					printwriter.close();
					setVisible(false);
					dispose();
					}
				}
				);
		add(new JLabel("Enter Recipe Name"));
		add(recipename);
		add(button);
	//	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(400,100);
		setVisible(true);
		
	}
	
	public void findRecipe() throws FileNotFoundException, UnsupportedEncodingException{
		FoodCalculator.area.setText("");
		FoodCalculator.area.append(FoodCalculator.GetTotalList());
		FoodCalculator.area.append("Total Calories: "+String.valueOf(FoodCalculator.GetTotalCalories()));
		String recipe=recipename.getText().toLowerCase().replaceAll(" ", "_");
		printwriter=new PrintWriter(recipe+".txt", "UTF-8");
	}
}
