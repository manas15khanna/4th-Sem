// SPDX-License-Identifier: GPL-3.0

pragma solidity ^0.4.24;

contract Array {
    int[3] public arr = [10, 20, 30];

    function get_element(uint i) public view returns (int) {
        return arr[i];
    }

    function set_element(uint i, int value) public {
        arr[i] = value;
    }

    function get_arr_length() public view returns (uint) {
        return arr.length;
    }
}

