// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.8.2 <0.9.0;

contract Transact {
    uint256 public x = 2; 
    string public name = "Player One";

    function getNumber() public view returns (uint256) {
        return x;
    }

    function getName() public view returns (string memory) {
        return name;
    }
}

