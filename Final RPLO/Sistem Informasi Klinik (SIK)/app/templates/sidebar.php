<!-- BEGIN: Main Menu-->
<div class="main-menu menu-fixed menu-dark menu-accordion menu-shadow" data-scroll-to-active="true">
  <div class="navbar-header">
    <ul class="nav navbar-nav flex-row">
      <li class="nav-item mr-auto"><a class="navbar-brand">
          <div class="brand-logo"></div>
          <h2 class="brand-text mb-0">Klinik</h2>
        </a></li>
    </ul>
  </div>
  <div class="shadow-bottom"></div>
  <div class="main-menu-content">
    <ul class="navigation navigation-main" id="main-menu-navigation" data-menu="menu-navigation">
      <li class="<?php echo is_active(''); ?> nav-item">
        <a href="index.php"><i class="feather icon-home"></i><span class="menu-title" data-i18n="Dashboard">Dashboard</span></a>
      </li>

      <li class="<?php echo is_active('dokter'); ?> nav-item">
        <a href="?page=dokter">
          <i class="feather icon-user"></i><span class="menu-title" data-i18n="Dokter">Dokter</span>
        </a>
      </li>

      <li class="<?php echo is_active('pasien'); ?> nav-item"><a href="?page=pasien"><i class="feather icon-user"></i><span class="menu-title" data-i18n="Pasien">Pasien</span></a>
      </li>

      <li class="<?php echo is_active('ruang'); ?> nav-item"><a href="?page=ruang"><i class="feather icon-check-square"></i><span class="menu-title" data-i18n="Ruang">Ruang</span></a>
      </li>

      <li class="<?php echo is_active('obat'); ?> nav-item"><a href="?page=obat"><i class="feather icon-calendar"></i><span class="menu-title" data-i18n="Obat">Obat</span></a>
      </li>

      <li class="<?php echo is_active('rekam-medis'); ?> nav-item"><a href="?page=rekam-medis"><i class="feather icon-bar-chart"></i><span class="menu-title" data-i18n="Rekam Medis">Rekam Medis</span></a>

      <li class="nav-item"><a href="javascript:;"><i class="feather icon-pie-chart"></i><span class="menu-title" data-i18n="Laporan">Laporan</span></a>
        <ul class="menu-content">
          <li class="<?php echo is_active('lap-rekam-medis'); ?>"><a href="?page=lap-rekam-medis"><i class="feather icon-circle"></i><span class="menu-item" data-i18n="Rekam Medis">Rekam Medis</span></a>
          </li>
        </ul>
      </li>

    </ul>
  </div>
</div>
<!-- END: Main Menu-->