<?php

$fp = finfo_open(FILEINFO_MIME_TYPE);
$results = array();

$zip = __DIR__ . "/resources/dir.zip";
$stream = "zip://" . __DIR__ . "/resources/dir.zip";
$dir = $stream . "#dir/";
$png = $stream . "#dir/test.png";

var_dump(
         finfo_file($fp, $zip),
         finfo_file($fp, $dir),
         finfo_file($fp, $png)
);
?>