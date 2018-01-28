<?php
  $stdin = fopen('php://stdin', "r");

  while(true) {
      fscanf($stdin, "%d %d", $inH, $inW);
      if($inH === 0 && $inW === 0) {
          break;
      }

      for ($i=0; $i<$inH; $i++) {
        $flg = $i % 2 == 0 ? 0 : 1;
        for ($j=0; $j<$inW; $j++ ) {
          if ($j % 2 == $flg) {
            echo '#';
          } else {
            echo '.';
          }
        }
        echo PHP_EOL;
      }
      echo PHP_EOL;
  }
