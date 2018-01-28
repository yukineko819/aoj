<?php
  $stdin = fopen('php://stdin', "r");

  fscanf($stdin, "%d", $n);
  $i = 1;
  while($i <= $n) {
    $_i = $i;
    if ($_i % 3 == 0) {
      echo " $i";
    } else {
      while ($_i != 0) {
        if ($_i % 10 == 3) {
          echo " $i";
          break;
        }
        $_i /= 10;
      }
    }
    $i++;
  }
  echo PHP_EOL;
