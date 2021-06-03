/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cc.TABLE;

import java.util.Objects;

/**
 *
 * @author mfahm
 */
public class user {
    private String name;
    private String calorie;

    public user() {
    }

    public user(String name, String calorie, String weight, String height,String age) {
        this.name = name;
        this.calorie = calorie;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCalorie() {
        return calorie;
    }

    public void setCalorie(String calorie) {
        this.calorie = calorie;
    }
// <editor-fold defaultstate="collapsed" desc="Generated Code">
//    @Override
//    public int hashCode() {
//        int hash = 5;
//        hash = 97 * hash + Objects.hashCode(this.name);
//        hash = 97 * hash + Objects.hashCode(this.calorie);
//        return hash;
//    }
//
//    @Override
//    public boolean equals(Object obj) {
//        if (this == obj) {
//            return true;
//        }
//        if (obj == null) {
//            return false;
//        }
//        if (getClass() != obj.getClass()) {
//            return false;
//        }
//        final user other = (user) obj;
//        if (!Objects.equals(this.name, other.name)) {
//            return false;
//        }
//        if (!Objects.equals(this.calorie, other.calorie)) {
//            return false;
//        }
//        return true;
//    }
//
//    @Override
//    public String toString() {
//        return "user{" + "name=" + name + ", calorie=" + calorie + ", alamat=" + '}';
//    }// </editor-fold>  
}
