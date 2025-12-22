<?php
class HelloWorld {
  public function sayHello() {
    return "Hello, world!\n";
  }
}

$h = new HelloWorld();
echo $h->sayHello();
