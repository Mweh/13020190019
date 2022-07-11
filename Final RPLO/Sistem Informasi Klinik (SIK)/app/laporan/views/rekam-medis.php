<?php
require_once 'app/functions/MY_model.php';

$tanggal = date('Y-m-d');
if (isset($_POST['filter'])) {
  $rekam_medis = get("SELECT *, rm.id as rm_id FROM rekam_medis rm
                    INNER JOIN pasien ON rm.pasien_id = pasien.id 
                    INNER JOIN dokter ON rm.dokter_id = dokter.id 
                    INNER JOIN ruang ON rm.ruang_id = ruang.id
                    WHERE rm.tanggal BETWEEN '2020-03-01' AND '2020-03-03' ") or die(mysqli_error($conn));
} else {
  $rekam_medis = get("SELECT *, rm.id as rm_id FROM rekam_medis rm
                    INNER JOIN pasien ON rm.pasien_id = pasien.id 
                    INNER JOIN dokter ON rm.dokter_id = dokter.id 
                    INNER JOIN ruang ON rm.ruang_id = ruang.id
                    WHERE rm.tanggal = '$tanggal' ") or die(mysqli_error($conn));
}


$no = 1;

$title = 'rekam_medis';
?>

<!-- Basic tabs start -->
<section id="basic-tabs-components">
  <div class="card">
    <div class="card-body">
      <form class="form" method="post" action="">
        <div class="form-body">
          <div class="row">
            <div class="col">
                <label for="from">From</label>
                <fieldset class="form-group">
                    <input type="date" name="from" class="form-control" required>
                </fieldset>
            </div>
            <div class="col">
            <label for="to">To</label>
                <fieldset class="form-group">
                    <input type="date" name="to" class="form-control" required>
                </fieldset>
            </div>
            <div class="col rslt-btn">
                <button type="submit" name="filter" class="btn mt-2 btn-outline-primary btn-icon btn-block text-uppercase waves-effect waves-light">Filter</button>
            </div>
          </div>
        </div>
      </form>
    </div>
  </div>
  <div class="row">
    <div class="col-sm-12">
      <div class="card overflow-hidden">
        <div class="card-header">
          <h4 class="card-title">Rekam Medis</h4>
        </div>
        <div class="card-content">
          <div class="card-body">
            <ul class="nav nav-tabs" role="tablist">
              <li class="nav-item">
                <a class="nav-link active" id="list-tab" data-toggle="tab" href="#list" aria-controls="list" role="tab" aria-selected="true">List</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" id="summary-tab" data-toggle="tab" href="#summary" aria-controls="summary" role="tab" aria-selected="false">Summary</a>
              </li>
            </ul>
            <div class="tab-content">
              <div class="tab-pane active" id="list" aria-labelledby="list-tab" role="tabpanel">
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
              <div class="tab-pane" id="profile" aria-labelledby="profile-tab" role="tabpanel">
                <p>Pudding candy canes sugar plum cookie chocolate cake powder croissant. Carrot cake tiramisu danish
                  candy cake muffin croissant tart dessert. Tiramisu caramels candy canes chocolate cake sweet roll
                  liquorice icing cupcake.</p>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
<!-- Basic Tag Input end -->