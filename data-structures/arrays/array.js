class MyArray {
  constructor() {
    this.length = 0;
    this.data = {};
  }
  get(index) {
    if (index < 0 || index >= this.length) {
      console.error(`${index} is not in range.`);
    } else {
      return this.data[index];
    }
  }

  isEmpty() {
    if (this.length <= 0) {
      return true;
    }
    return false;
  }

  push(item) {
    this.data[this.length] = item;
    this.length++;
    return this.length;
  }
  pop() {
    const lastItem = this.data[this.length - 1];
    delete this.data[this.length - 1];
    this.length--;
    return lastItem;
  }
  insert(index, item) {
    // 0 1 2 3
    // 0 1 5 2 3
    for (let i = this.length - 1; i >= index; i--) {
      this.data[i + 1] = this.data[i];
      console.log(this.data[i + 1]);
    }
    this.data[index] = item;
    this.length++;
    return this.data;
  }

  delete(index) {
    const item = this.data[index];
    this.shiftItems(index);
    delete this.data[index];
    return item;
  }

  remove(item) {
    let deletedCount = 0;
    for (let i = 0; i < this.length; i++) {
      if (this.data[i] === item) {
        delete this.data[i];
        deletedCount++;
      }
    }
    this.length -= deletedCount;
    // for(let i = 0; i < this.)
    return this.data;
  }
  shiftItems(index) {
    for (let i = index; i < this.length - 1; i++) {
      this.data[i] = this.data[i + 1];
    }
    delete this.data[this.length - 1];
    this.length--;
  }
  shift() {
    const item = this.data[0];
    delete this.data[0];
    for (let i = 1; i < this.length; i++) {
      this.data[i - 1] = this.data[i];
      delete this.data[i];
    }
    this.length--;
    return item;
  }
  find(func) {
    if (typeof func == "function") {
      for (let i = 0; i < this.length; i++) {
        if (func(this.data[i])) {
          return this.data[i];
        }
      }
    } else {
      console.error(`Uncaught TypeError: ${func} is not a function`);
    }
  }
}

var arr2 = new MyArray();
arr2.push("furk");
arr2.push("ata");
arr2.push("brek");

//arr2.find((e) => e < 3)

const sumArray = () => {
  const arr = [
    [7, 9, 8, 6, 2],
    [6, 3, 5, 4, 3],
    [5, 8, 7, 4, 5]
  ];
  let sum = 0;
  let minimum = 0;
  arr.forEach(array => {
    minimum = array[0];
    array.forEach((item, i) => {
      if (item < minimum) {
        minimum = item;
      }
    });
    sum += minimum;
  });
  return sum;
};
