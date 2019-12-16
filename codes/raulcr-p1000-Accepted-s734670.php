<?php
$stdin = fopen('php://stdin', 'r');
$input = fgets($stdin, 10);
list($a,$b) = split(" ",$input);
echo $a + $b,"\n";
fclose($stdin);
?>