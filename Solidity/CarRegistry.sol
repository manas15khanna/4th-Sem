// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract CarRegistry {

    // Struct definition
    struct Car {
        string brand;
        uint built_year;
        uint value;
    }

    // State variable of type Car
    Car public private_car;

    // Mapping from address to Car
    mapping(address => Car) public cars;
    //0x5B38Da6a701c568545dCfcB03FcB875f56beddC4

    enum State { Running, Stopped, Inactive, Active } //no semicolon
    State public status = State.Active;

    // Constructor to initialize the struct state variable
    constructor(string memory _brand, uint _built_year, uint _value) {
        private_car.brand = _brand;
        private_car.built_year = _built_year;
        private_car.value = _value;

        cars[msg.sender] = private_car;
    }
}
