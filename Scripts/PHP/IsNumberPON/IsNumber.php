<?php

$num = readline("Write your number: ");

if($num > 0) {
    echo "Your number positive." . PHP_EOL;
} elseif($num < 0) {
    echo "Your number is negative." . PHP_EOL;
} else {
    echo "Your number is zero!" . PHP_EOL;
}

?>
