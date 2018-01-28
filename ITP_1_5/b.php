<?php
  $stdin = fopen('php://stdin', "r");

  while(true) {
      fscanf($stdin, "%d %d", $inH, $inW);
      if($inH === 0 && $inW === 0) {
          break;
      }

      for ($i=0; $i<$inH; $i++) {
        echo '#';
        for ($j=1; $j<$inW-1; $j++ ) {
          if ($i == 0 || $i == $inH-1) {
            echo '#';
          } else {
            echo '.';
          }
        }
        echo '#'.PHP_EOL;
      }
      echo PHP_EOL;
  }
