// SPDX-License-Identifier: MIT
pragma solidity ^0.4.24;

contract Autos{
    //introdcing a new variable type 
    struct Car{
        string brand;
        uint built_year;
        uint value;
    }

    //state variable of type car 
    Car public private_car;
    
    //mapping the keys to the cars
    constructor(string _brand, uint _built_year, uint _value) public{
        private_car.brand = _brand;
        private_car.built_year = _built_year;
        private_car.value = _value;
    }
}
