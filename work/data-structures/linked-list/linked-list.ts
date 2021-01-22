class LinkedNode {
  #data: any;
  #next: LinkedNode;

  /**
   * Creates a new node.
   *
   * @param {any} data
   */
  constructor(data) {
    this.#data = data;
    this.#next = null;
  }

  /**
   * Set/Get node data.
   *
   * @param {any} - New data value.
   */
  set data(data: any) {
    this.#data = data;
  }

  /**
   * Set/Get next node.
   *
   * @param {LinkedNode} - A node.
   */
  set next(node: LinkedNode) {
    this.#next = node;
  }

  get data(): any {
    return this.#data;
  }

  get next(): LinkedNode {
    return this.#next;
  }
}

class LinkedList {
  #head: LinkedNode;
  #tail: LinkedNode;
  #size: number;

  constructor() {
    this.#head = null;
    this.#tail = null;
    this.#size = 0;
  }

  get head(): LinkedNode {
    return this.#head;
  }

  get tail(): LinkedNode {
    return this.#tail;
  }

  /**
   * Get the number of elements on the list.
   *
   * @returns {number}
   */
  get size(): number {
    return this.#size;
  }

  /**
   * Determines if linked list is empty.
   *
   * @returns {boolean}
   */
  get empty(): boolean {
    return this.#size === 0;
  }

  /**
   * Get the value at given index.
   *
   * @param {number} index
   * @returns {LinkedNode|null}
   */
  valueAt(index: number): LinkedNode {
    if (index >= 0 && index < this.#size && this.#head) {
      let node = this.#head;

      for (let i = 0; i < index; i++) {
        if (node.next) {
          node = node.next;
        }
      }

      return node.data;
    }

    return null;
  }

  /**
   * Adds an item to the front of the list.
   *
   * @param {any} value
   */
  pushFront = (value) => {
    const newNode = new LinkedNode(value);

    if (!this.#tail) {
      this.#tail = newNode;
    }

    newNode.next = this.#head;
    this.#head = newNode;
    this.#size += 1;
  };

  /**
   * Remove front item and return its value.
   *
   * @returns {any} - Removed item's value.
   */
  popFront = (): any => {
    if (!this.empty) {
      const removedNode = this.#head;

      if (this.#size === 1) {
        this.#head = null;
        this.#tail = null;
      } else {
        this.#head = removedNode.next;
      }

      this.#size -= 1;

      return removedNode.data;
    }

    return null;
  };

  /**
   * Add new value at end of the list.
   *
   * @param {any} value
   */
  pushBack = (value) => {
    const node = new LinkedNode(value);

    if (!this.#head) {
      this.#head = node;
    }

    if (this.#tail) {
      const prevNode = this.#tail;
      prevNode.next = node;
    }

    this.#tail = node;
    this.#size += 1;
  };

  /**
   * Removes last item on the list.
   *
   * @returns {any} - Removed value.
   */
  popBack = (): any => {
    if (!this.empty) {
      const removedNode = this.#tail;

      if (this.#size === 1) {
        this.#head = null;
        this.#tail = null;
      } else {
        let nextNode = this.#head;
        let prevNode = null;

        // Find previous node
        while (nextNode) {
          if (nextNode.next && !nextNode.next.next) {
            prevNode = nextNode;
          }

          nextNode = nextNode.next;
        }

        // Remove the node reference
        prevNode.next = null;

        // Update tail to last node
        this.#tail = prevNode;
      }

      this.#size -= 1;
      return removedNode.data;
    }

    return null;
  };

  /**
   * Get the first value on the list.
   * @returns {any}
   */
  front = (): any => {
    return this.#head ? this.#head.data : null;
  };

  /**
   * Get the last value on the list.
   * @returns {any}
   */
  back = (): any => {
    return this.#tail ? this.#tail.data : null;
  };

  /**
   * Insert a value at given index.
   *
   * @param {any} value
   * @param {number} index
   */
  insert = (value, index) : void => {
    if (index < 0 || index > this.size) {
      throw new Error("Index out of boundaries");
    }

    const newNode = new LinkedNode(value);

    if (this.empty) {
      this.#head = newNode;
    } else {
      let node = this.head;
      let prevNode = null;

      if (index === 0) {
        newNode.next = node;
        this.#head = newNode;
      } else {
        for (let i = 0; i < this.size; i++) {
          if (i === index) {
            newNode.next = node;
            prevNode.next = newNode;
            break;
          }

          prevNode = node;
          node = node.next || node;
        }

        if (index === this.size) {
          this.#tail = newNode;
          node.next = newNode;
        }
      }
    }

    this.#size += 1;
  };

  /**
   * Removes node at given index.
   *
   * @param {number} index
   */
  erase = (index) : void => {
    if (index < 0 || index > this.size) {
      throw new Error("Index out of boundaries");
    }

    if (!this.head) {
      return;
    }

    if (index === 0) {
      this.#head = this.head.next;
      this.#tail = this.size === 1 ? this.#head : this.#tail;
    } else {
      let node = this.head;
      let prevNode = null;

      for (let i = 0; i < index; i++) {
        if (node.next) {
          prevNode = node;
          node = node.next;
        }
      }

      if (prevNode) {
        prevNode.next = node ? node.next : null;
      }

      this.#tail = index + 1 === this.size ? prevNode : this.tail;
    }

    this.#size -= 1;
  };

  /**
   * Returns the value of the node at nth position from the end of the list.
   *
   * @param {any} n
   */
  valueNFromEnd = (n) : any => {
    const count = this.#size - n;

    if(count >= 0) {
      let node = this.#head;
  
      for (let index = 0; index < count; index++) {
        node = node.next;
      }
  
      if(node) {
        return node.data;
      }
    }

    return -1;
  };

  /**
   * Reverses the list.
   *
   */
  reverse = () : void => {
    if (this.size > 1) {
      const data = [];
      let node = this.head;

      for (let index = 0; index < this.size; index++) {
        data.push(node.data);
        node = node.next;
      }

      node = this.#head;

      for (let index = data.length - 1; index >= 0; index--) {
        node.data = data[index];
        node = node.next;
      }
    }
  };

  /**
   * Removes the first item in the list with this value.
   * @param {any} value
   */
  removeValue = (value) : void => {
    let node = this.#head;
    let prevNode = null;

      for (let index = 0; index < this.size; index++) {
        // Found
        if(node.data === value) {
          if(!node.next) {
            this.#tail = prevNode;
          }

          if(!prevNode){
            this.#head = node.next;
          } else {
            prevNode.next = node.next;
          }

          this.#size -= 1;

          break;
        }    

        prevNode = node;
        node = node.next;
      }
  };
}

export { LinkedList };
