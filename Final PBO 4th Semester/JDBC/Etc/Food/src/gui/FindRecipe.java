package gui;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class FindRecipe extends JFrame{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	File file;
	JTextField recipename;
	JButton findrecipe;
	
	public FindRecipe(){
		recipename=new JTextField();
		recipename.setColumns(15);
		findrecipe=new JButton("Search for Recipe");
		recipename.addActionListener(
				new ActionListener(){
					@Override
					public void actionPerformed(ActionEvent event) {
						// TODO Auto-generated method stub
						FindFile();
					}
					
				}
				);
		
		findrecipe.addActionListener(
				new ActionListener(){
					@Override
					public void actionPerformed(ActionEvent event) {
						// TODO Auto-generated method stub
						FindFile();
					}
					
				}
				);
		add(new JLabel("Search Recipe Name"));
		add(recipename);
		add(findrecipe);
		setLayout(new FlowLayout());
		setSize(400,100);
		setVisible(true);
		
		
		
		
	}
	
	private String scan(File file) throws FileNotFoundException{
		Scanner scan=new Scanner(file);
		String scanning="";
		while(scan.hasNextLine()){
			scanning=scanning+scan.nextLine()+"\n";
		}
		scan.close();
		return scanning;
	}
	
	private void FindFile(){
		// TODO Auto-generated method stub
		String recipefile=recipename.getText().toLowerCase().replace(" ", "_")+".txt";
		file=new File(new File(recipefile).getAbsolutePath());
		try{
			FoodCalculator.area.setText("");
			FoodCalculator.area.append(scan(file));
		}catch(IOException e){
			FoodCalculator.area.setText("");
			FoodCalculator.area.append("Cannot find recipe");
		}finally{
			setVisible(false);
			dispose();
		}
	}
}
