<?php

$user_input = readline("Write your number: ");
$sum = 0;

for ($i = 0; $i <= $user_input; $i++) {
  $sum += $i;
}

echo "sum = $sum" . PHP_EOL;

?>
