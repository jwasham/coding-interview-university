class Vector {
  #vector = {};
  #capacity = 15;
  #size = 0;

  /**
   * Creates a vector.
   */
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
    return this.#capacity + 1;
  }

  /**
   * Determines if vector is empty.
   * Ω(1)
   *
   * @returns {boolean}
   */
  get isEmpty() {
    return this.#size <= 0;
  }

  /**
   * Get the item at given index.
   * Ω(1) - O(n)
   *
   * @param {number} index
   * @returns {any}
   */
  at = (index) => {
    if (index >= this.capacity || index < 0) {
      throw Error("Index out of boundaries");
    }

    for (let i = 0; i < this.capacity; i++) {
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
    if (this.#size >= this.capacity) {
      this.#resize(this.capacity * 2);
    }

    this.#vector[this.#size] = item;
    this.#size += 1;
  };

  /**
   * Inserts an item at given index on the vector.
   *
   * @param {number} index
   * @param {any} item
   */
  insert = (index, item) => {
    if (index >= this.capacity || index < 0) {
      throw Error("Index out of boundaries");
    }

    if (this.#vector[index] !== null) {
      // Check if there is space on the vector before add the item.
      if (this.#size >= this.capacity) {
        this.#resize(this.capacity * 2);
      }

      //Shift elements
      for (let i = this.#size; i > index; i--) {
        this.#vector[i] = this.#vector[i - 1];
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
    this.insert(0, item);
  };

  /**
   * Deletes last item on the vector.
   * O(1)
   *
   * @returns {any} - The deleted item.
   */
  pop = () => {
    const deletedItem = this.#vector[this.#size - 1];

    if (deletedItem === undefined) {
      return undefined;
    }

    this.#vector[this.#size - 1] = null;
    this.#size -= 1;

    if (this.#size <= this.capacity / 4) {
      this.#resize(this.capacity / 2);
    }

    return deletedItem;
  };

  /**
   * Delete item at given index.
   *
   * @param {number} index
   */
  delete = (index) => {
    if (index >= this.capacity || index < 0) {
      throw Error("Index out of boundaries");
    }

    if(!this.isEmpty) {
      for (let i = 0; i < this.capacity; i++) {
        if(index === i) {
          this.#vector[index] = null;
        }
      }
    }
  };

  /**
   * Find item, removes the index.
   *
   * @param {any} item
   */
  remove = (item) => {
    if (!this.isEmpty) {
      for (let index = 0; index < this.capacity; index++) {
        if (this.#vector[index] === item) {
          this.#vector[index] = null;
        }
      }
    }
  };

  /**
   * Find first index where item is found.
   *
   * @param {any} item
   * @returns {number} index or -1 if not found.
   */
  find = (item) => {
    if (!this.isEmpty) {
      for (let index = 0; index < this.capacity; index++) {
        if (this.#vector[index] === item) {
          return index;
        }
      }
    }

    return -1;
  };

  print = () => {
    console.log(this.#vector);
  };

  /**
   * Set a new capacity for the vector.
   *
   * @param {number} size - new size of the vector.
   */
  #resize = (size) => {
    debugger;
    // Increase capacity
    if (size > this.capacity) {
      for (let index = this.capacity; index < size; index++) {
        this.#vector[index] = null;
      }
    }

    // Decrease capacity
    if (size < this.capacity) {
      for (let index = this.#capacity; index >= size; index--) {
        delete this.#vector[index];
      }
    }

    this.#capacity = size - 1;
  };
}

module.exports = Vector;
