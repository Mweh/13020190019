<?php
require_once 'app/functions/MY_model.php';
$ruangs = get("SELECT * FROM ruang");

$no = 1;

?>

<!-- User Table -->
<section id="column-selectors">
  <div class="row">
    <div class="col-12">
      <div class="card">
        <div class="card-header">
          <h4 class="card-title">Ruang</h4>
          <a href="?page=tambah-ruang" class="btn btn-primary round waves-effect waves-light">
            Tambah Ruang
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
                    <th>Keterangan</th>
                    <th>Aksi</th>

                  </tr>
                </thead>
                <tbody>
                  <?php foreach ($ruangs as $ruang) : ?>
                    <tr>
                      <td><?= $no++ ?></td>
                      <td><?= $ruang['nama_ruang']; ?></td>
                      <td><?= $ruang['keterangan']; ?></td>
                      <td>
                        <a href="?page=edit-ruang&id=<?= $ruang['id']; ?>"><i class="m-1 feather icon-edit-2"></i></a>
                        <a href="?page=hapus-ruang&id=<?= $ruang['id']; ?>" class="btn-hapus"><i class="feather icon-trash"></i></a>
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
<?php $title = 'ruang'; ?>