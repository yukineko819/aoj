<?php
  $stdin = fopen('php://stdin', "r");

  while(true) {
      fscanf($stdin, "%d %d", $inH, $inW);
      if($inH === 0 && $inW === 0) {
          break;
      }

      for ($i=0; $i<$inH; $i++) {
        for ($j=1; $j<$inW; $j++ ) {
            echo '#';
        }
        echo PHP_EOL;
      }
      echo PHP_EOL;
  }
