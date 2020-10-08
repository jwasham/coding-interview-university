class LinkedNode {
  #data;
  #next;

  /**
   * Creates a new node.
   * 
   * @param {any} data 
   */
  constructor(data)  {
    this.#data = data;
    this.#next = null;
  }  

  /**
   * Set/Get node data.
   * 
   * @param {any} - New data value.
   * @returns {any}
   */
  set data(data) {
    this.#data = data;
  }

  /**
   * Set/Get next node.
   * 
   * @param {LinkedNode} - A node.
   * @returns {LinkedNode|null}
   */
  set next(node) {
    this.#next = node;
  }

  get data() {
    return this.#data;
  }

  get next() {
    return this.#next;
  }
}

class LinkedList {
  #head;
  #tail;

  constructor()  {
    this.#head = null;
    this.#tail = null;
  }

  get head() {
    return this.#head;
  }

  get tail() {
    return this.#tail;
  }

  /**
   * Get the number of elements on the list.
   * 
   * @returns {number}
   */
  get size() {
    return 0;
  }

  /**
   * Determines if linked list is empty.
   * 
   * @returns {boolean}
   */
  get empty() {
    return this.#head === null;
  }

  /**
   * Get the value at given index.
   * 
   * @param {number} index
   * @returns {any} 
   */
  valueAt(index) {
    return 0;
  }

  /**
   * Adds an item to the front of the list.
   * 
   * @param {any} value 
   */
  pushFront = (value) => {
    // TODO
  };

  /**
   * Remove front item and return its value.
   * 
   * @returns {any} - Removed item's value.
   */
  popFront = () => {
    // TODO
  };

  /**
   * Add new value at end of the list.
   * 
   * @param {any} value 
   */
  pushBack = (value) => {
    // TODO
  };

  /**
   * Removes last item on the list.
   * 
   * @returns {any} - Removed value.
   */
  popBack = () => {
    // TODO
  };

  /**
   * Get the first value on the list.
   * @returns {any}
   */
  front = () => {
    // TODO
  };

    /**
   * Get the last value on the list.
   * @returns {any}
   */
  back = () => {
    // TODO
  };

  /**
   * Insert a value at given index.
   * 
   * @param {any} value 
   * @param {number} index 
   */
  insert = (value, index) => {
    // TODO
  };

  /**
   * Removes node at given index.
   * 
   * @param {number} index 
   */
  erase = (index) => {
    // TODO
  };

  /**
   * Returns the value of the node at nth position from the end of the list.
   * 
   * @param {any} n 
   */
  valueNFromEnd = (n) => {
    // TODO
  };

  /**
   * Reverses the list.
   * 
   */
  reverse = () => {
    // TODO
  };

  /**
   * Removes the first item in the list with this value.
   * @param {any} value 
   */
  removeValue = (value) => {
    // TODO
  };
}

module.exports = LinkedList
