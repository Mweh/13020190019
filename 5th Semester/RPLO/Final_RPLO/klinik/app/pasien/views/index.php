<?php
require_once 'app/functions/MY_model.php';
$pasiens = get("SELECT * FROM pasien");

$no = 1;

$title = 'pasien';
?>

<!-- User Table -->
<section id="column-selectors">
  <div class="row">
    <div class="col-12">
      <div class="card">
        <div class="card-header">
          <h4 class="card-title">Pasien</h4>
          <a href="?page=tambah-pasien" class="btn btn-primary round waves-effect waves-light">
            Tambah Pasien
          </a>
        </div>
        <div class="card-content">
          <div class="card-body card-dashboard">
            <div class="table-responsive">
              <table class="table table-striped dataex-html5-selectors">
                <thead>
                  <tr>
                    <th></th>
                    <th>Nama</th>
                    <th>Alamat</th>
                    <th>Nomor Telepon</th>
                    <th>Jenis Kelamin</th>
                    <th>Aksi</th>
                  </tr>
                </thead>
                <tbody>
                  <?php foreach ($pasiens as $pasien) : ?>
                    <tr>
                      <td><?= $no++ ?></td>
                      <td><?= $pasien['nama_pasien']; ?></td>
                      <td><?= $pasien['alamat']; ?></td>
                      <td><?= $pasien['telephone']; ?></td>
                      <td><?= ($pasien['jenis_kelamin'] == 'l' ? 'Laki-laki' : 'Perempuan'); ?></td>
                      <td>
                        <a href="?page=edit-pasien&id=<?= $pasien['id']; ?>"><i class="m-1 feather icon-edit-2"></i></a>
                        <a href="?page=hapus-pasien&id=<?= $pasien['id']; ?>" class="btn-hapus">
                          <i class="feather icon-trash"></i>
                        </a>
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
<?php $title = 'pasien'; ?>