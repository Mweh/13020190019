/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cc.EDIT;

import cc.TABLE.user;
import java.sql.SQLException;
import java.util.List;

/**
 *
 * @author mfahm
 */
public interface userInterface {
    
    user insert(user o) throws SQLException;

    void update(user o) throws SQLException;

    void delete(String nim) throws SQLException;

    List getAll() throws SQLException;
}
