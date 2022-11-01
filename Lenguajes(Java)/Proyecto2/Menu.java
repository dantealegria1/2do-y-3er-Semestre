/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package menu;

/**
 *
 * @author dante
 */


import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

public class Menu extends JFrame implements ActionListener {

    /**
     * @param args the command line arguments
     */
    private JMenuBar mBar = new JMenuBar(); // Create the menu bar
	private JMenu fileMenu, editMenu; // Top level Menu references
	private JMenuItem addItem, modifyItem;
	private JMenuItem saveItem, saveAsItem, quitItem, openItem; // File items
	private JMenu helpMenu;
	private JMenuItem aboutItem, authorItem;

	private JPanel panel = new JPanel();
	private JTextArea display = new JTextArea(10, 30);

	private String authorInfo = "tus datos";
	private String aboutInfo = "tus datos.\n" +
                                                             "otros datos \n";
	
public Menu()
	{
		setTitle("Menu Demo");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		createFileMenu();
		createEditMenu();
		createHelpMenu();
		setJMenuBar(mBar);

		display.setEditable(false);
		display.setLineWrap(true);
		JScrollPane scroller = new JScrollPane(display,
				JScrollPane.VERTICAL_SCROLLBAR_ALWAYS,
				JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
		panel.add(scroller);

		Container c = getContentPane();
		c.add(panel);

	}

	/**
	 * Create the file menu
	 */
	private void createFileMenu()
	{
		fileMenu = new JMenu("File"); // Create the file menu
		mBar.add(fileMenu); // and add it to the menu bar

		openItem = new JMenuItem("Open"); // Open item
		openItem.addActionListener(this);
		openItem.setEnabled(false); // to show it is not implemented
		fileMenu.add(openItem);

		saveItem = new JMenuItem("Save"); // Save item
		saveItem.addActionListener(this);
		fileMenu.add(saveItem);

		saveAsItem = new JMenuItem("Save As"); // Save As item
		saveAsItem.addActionListener(this);
		fileMenu.add(saveAsItem);

		fileMenu.addSeparator(); // Logical separator

		quitItem = new JMenuItem("Quit"); // Quit item
		quitItem.addActionListener(this);
		fileMenu.add(quitItem);

	}

	/**
	 * Create the edit menu
	 */
	public void createEditMenu()
	{
		editMenu = new JMenu("Edit"); // Create the file menu
		mBar.add(editMenu); // and add it to the menu bar

		addItem = new JMenuItem("Add");
		addItem.addActionListener(this);
		editMenu.add(addItem);

		modifyItem = new JMenuItem("Modify"); // Save item
		modifyItem.addActionListener(this);
		modifyItem.setEnabled(false); // to show it is not implemented
		editMenu.add(modifyItem);
	}

	/**
	 * Create the help menu
	 */
	public void createHelpMenu()
	{
		helpMenu = new JMenu("Help"); // Create the file menu
		mBar.add(helpMenu); // and add it to the menu bar

		aboutItem = new JMenuItem("About...");
		aboutItem.addActionListener(this);
		helpMenu.add(aboutItem);

		authorItem = new JMenuItem("Author"); // Save item
		authorItem.addActionListener(this);
		helpMenu.add(authorItem);
	}


	public void actionPerformed(ActionEvent event)
	{
		Object source = event.getSource();

		if (source == openItem)
			display.append("Open was selected\n");
		else if (source == saveItem)
			display.append("Save was selected\n");
		else if (source == saveAsItem)
			display.append("Save As was selected\n");
		else if (source == quitItem) {
			display.append("Quit was selected\n");
			System.exit(0);
		} else if (source == addItem)
			display.append("Add was selected\n");
		else if (source == modifyItem)
			display.append("Modify was selected\n");
		else if (source == aboutItem) {
			display.append("About was selected\n");
			showAbout();
		} else if (source == authorItem) {
			display.append("Author was selected\n");
			showAuthor();
		}

	}

	/**
	 * Display the author information in a popup message
	 */
	public void showAuthor()
	{
		JOptionPane.showMessageDialog(this, authorInfo, "Author",
				JOptionPane.INFORMATION_MESSAGE);
	}


	public void showAbout()
	{
		JOptionPane.showMessageDialog(this, aboutInfo, "About MenuDemo...",
				JOptionPane.INFORMATION_MESSAGE);
	}


    public static void main(String[] args) {
        // TODO code application logic here
        Menu frame = new Menu();
		frame.setSize(400, 300);
		frame.setVisible(true);

    }
    
}
 