/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cc.EDIT;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;
import cc.SQL.db;
import cc.TABLE.user;
/**
 *
 * @author mfahm
 */
public class userImplement implements userInterface{
    
    public user insert(user o) throws SQLException {

        PreparedStatement st = db.getConnection().prepareStatement("insert into user values(?,?)");
        st.setString(1, o.getName());
        st.setString(2, o.getCalorie());
        st.executeUpdate();
        return o;
    }

    public void update(user o) throws SQLException {
        PreparedStatement st = db.getConnection().prepareStatement("update user set calorie=? where name=?");
        st.setString(1, o.getCalorie());
        st.setString(2, o.getName());
        st.executeUpdate();
    }

    public void delete(String name) throws SQLException {
        PreparedStatement st = db.getConnection().prepareStatement("delete from user where name=?");
        st.setString(1, name);
        st.executeUpdate();
    }

    public List getAll() throws SQLException {
        Statement st = db.getConnection().createStatement();
        ResultSet rs = st.executeQuery("select * from user");
        List list = new ArrayList();
        while (rs.next()) {
            user us = new user();
            us.setName(rs.getString("name"));
            us.setCalorie(rs.getString("calorie"));
            list.add(us);
        }
        return list;
    }
}
