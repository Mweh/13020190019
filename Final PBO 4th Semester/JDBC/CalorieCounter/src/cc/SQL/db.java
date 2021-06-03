/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cc.SQL;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author mfahm
 */
public class db {
    private static Connection cct;

    public static Connection getConnection() {
        if (cct == null) {
            try {
                DriverManager.registerDriver(new com.mysql.jdbc.Driver());
                cct = DriverManager.getConnection("jdbc:mysql://localhost:3306/calorie", "root", "");
            } catch (SQLException ex) {
                Logger.getLogger(db.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        return cct;
    }
}
