<?php

class AgeName {
  public $name;
  public $age;
  public function __construct($name, $age) {
    $this->name = $name;
    $this->age = $age;
  }
  public function print() {
    return "Hello, my name is $this->name. I am $this->age yo.\n";
  }
}

$an = new AgeName("Johan", 22);
echo $an->print();
