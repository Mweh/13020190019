<form action= "hasil.php" method="POST">
    Nama<br> 
    <input type="text" name="nama"> <br>
    Tanggal Lahir<br> 
    <input type="date" name="tgl"> <br>
    Jenis Kelamin<br> 
    <input type="radio" name="jk" 
        value="Laki-laki"> Laki-laki &nbsp;
    <input type="radio" name="jk" 
        value="Perempuan"> Perempuan <br>
    Agama
    <select name="agama">
        <option value="">--Piih Agama--</option>
        <option>Islam</option>
        <option>Kristen Protestan</option>
        <option value="Katolik">Katolik</option>
        <option value="Hindu">Hindu</option>
        <option value="Buddha">Buddha</option>
    </select><br>
    Alamat <br>
    <textarea name="alamat"></textarea><br>
    E-mail<br>
    <input type name="number" name="hp"><br>
    <input type ="email" name="email"><br>
    <input type ="submit" >
</form>