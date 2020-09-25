class Vector {
  #vector = {};
  #capacity = 16;
  #size = 0;

  constructor() {
    // Set initial capacity
    for (let index = 0; index < this.#capacity; index++) {
      this.#vector[index] = null;
    }
  }

  /**
   * Determines the number of items on the vector.
   *
   * @returns {number} - Number of items.
   */
  get size() {
    return this.#size;
  }

  get capacity() {
    return this.#capacity;
  }

  /**
   * Determines if vector is empty.
   * Ω(1) - O(n)
   * 
   */
  get isEmpty() {
    for (let index = 0; index < this.#capacity; index++) {
      if (this.#vector[index] !== null) {
        return false;
      }
    }

    return true;
  }

  /**
   * Get the item at given index.
   * Ω(1) - O(n)
   *
   * @param {number} index
   * @returns {any}
   */
  at = (index) => {
    if (index >= this.#capacity || index < 0) {
      throw Error("Index out of boundaries");
    }

    for (let i = 0; i < this.#capacity; i++) {
      if (i === index) {
        return this.#vector[i];
      }
    }
  };

  /**
   * Add item to the end of the vector.
   * O(1)
   * 
   * @param {any} item 
   */
  push = (item) => {
    this.#vector[size] = item;
    this.#size += 1;
  };

  /**
   * Inserts an item at given index on the vector.
   * 
   * @param {number} index 
   * @param {any} item 
   */
  insert = (index, item) => {
    // Check if there is space on the vector before add the item.    
    if(this.#size === this.#capacity) {
      this.#resize(this.#capacity*2);
    }

    if(this.#vector[index] !== null) {
      //Shift elements
      for (let i = this.#size; i > index; i--) {
        this.#vector[i] = this.#vector[i-1];
      }
    }

    this.#vector[index] = item;
    this.#size += 1;
  };

/**
 * Add a item to the front of the vector.
 * 
 * @param {any} item 
 */
  prepend = (item) => {
    this.insert(0, item)
  };

  /**
   * Deletes last item on the vector.
   * O(1)
   * 
   * @returns {any} - The deleted item.
   */
  pop = () => {
    const deletedItem = this.#vector[this.#size];

    if(deletedItem === null) {
      return null;
    }

    this.#vector[this.#size] = null;;
    this.#size -= 1;

    return deletedItem;
  };

  delete = (index) => {
    // TODO
  };

  remove = (item) => {
    // TODO
  };

  find = (item) => {
    // TODO
    return -1;
  };

  print = () => {
    console.log(this.#vector)
  }

  /**
   * Set a new capacity for the vector.
   * 
   * @param {number} size - new size of the vector.
   */
  #resize = (size) => {
    // Increase capacity
    if(size > this.#capacity) {
      for (let index = this.#capacity; index < size; index++) {
        this.#vector[index] = null;
      }
    }
 
    // Decrease capacity
    if(size < this.#capacity) {
      for (let index = this.#capacity; index > size; index--) {
        delete this.#vector[index-1]
      }
    }
  };
}

const v1 = new Vector();

v1.insert(0, 'hello')
v1.insert(1, 'hello')
v1.insert(2, 'hello')
v1.print()

v1.insert(0, 'foobar');
v1.print()