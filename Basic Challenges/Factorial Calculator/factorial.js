function factorialize(num) {
    (num === 0) ?
    num = 1: num = num * factorialize(num - 1);
    return num;
}

factorialize(5);