<?php
require_once 'app/functions/MY_model.php';
$rekam_medis = get("SELECT *, rm.id as rm_id FROM rekam_medis rm
                    INNER JOIN pasien ON rm.pasien_id = pasien.id 
                    INNER JOIN dokter ON rm.dokter_id = dokter.id 
                    INNER JOIN ruang ON rm.ruang_id = ruang.id");

$no = 1;

$title = 'rekam_medis';
?>

<!-- User Table -->
<section id="column-selectors">
  <div class="row">
    <div class="col-12">
      <div class="card">
        <div class="card-header">
          <h4 class="card-title">Rekam Medis</h4>
          <a href="?page=tambah-rekam-medis" class="btn btn-primary round waves-effect waves-light">
            Tambah Rekam Medis
          </a>
        </div>
        <div class="card-content">
          <div class="card-body card-dashboard">
            <div class="table-responsive">
              <table class="table table-striped dataex-html5-selectors">
                <thead>
                  <tr>
                    <th></th>
                    <th>Tanggal Periksa</th>
                    <th>Nama Pasien</th>
                    <th>Keluhan</th>
                    <th>Nama Dokter</th>
                    <th>Diagnosa</th>
                    <th>Nama Obat</th>
                    <th>Ruang</th>
                    <th>
                      <i class="feather icon-settings"></i>
                    </th>
                  </tr>
                </thead>
                <tbody>
                  <?php foreach ($rekam_medis as $rm) : ?>
                    <tr>
                      <td><?= $no++ ?></td>
                      <td><?= $rm['tanggal']; ?></td>
                      <td><?= $rm['nama_pasien']; ?></td>
                      <td><?= $rm['keluhan']; ?></td>
                      <td><?= $rm['nama_dokter']; ?></td>
                      <td><?= $rm['diagnosa']; ?></td>
                      <td>
                        <?php
                        $obats = mysqli_query($conn, "SELECT * FROM rm_obat JOIN obat ON rm_obat.obat_id = obat.id WHERE rm_id = '$rm[rm_id]'") or die(mysqli_error($conn));
                        while ($obat = mysqli_fetch_assoc($obats)) {
                          echo $obat['nama_obat'] . '<br>';
                        }
                        ?>
                      </td>
                      <td><?= $rm['nama_ruang']; ?></td>
                      <td>
                        <a href="?page=hapus-rekam-medis&id=<?= $rm['rm_id']; ?>" class="btn-hapus"><i class="feather icon-trash"></i></a>
                      </td>
                    </tr>
                  <?php endforeach; ?>
                </tbody>
              </table>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
<!-- User Table -->
<?php $title = 'rekam_medis'; ?>