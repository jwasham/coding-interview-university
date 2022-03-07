"use strict"

class QueueArray {
  #queue: Array<number>;
  #start: number;
  #end: number;
  #size: number;

  constructor() {
    this.#queue = [null, null, null, null, null, null];
    this.#start = 0;
    this.#end = 0;
    this.#size = 0;
  }


  get queue(): Array<any> {
    return this.#queue;
  }


  /**
   * Determines if queue is empty.
   *
   * @returns {boolean}
   */
  get empty(): boolean {
    return this.#size === 0;
  }

  /**
   * Determines if queue is full.
   *
   * @returns {boolean}
   */
  get full(): boolean {
    return this.#size === this.#queue.length;
  }

  /**
   * Add a value to the queue.
   *
   * @param {any} value
   */
  enqueue(value: any): void {
    if(this.full) return;
    
    this.#queue[this.#start] = value;

    if(this.#start+1 >= this.#queue.length) {
      this.#start = 0;  
    } else {
      this.#start += 1;
    }

    this.#size += 1;
  }

  /**
   * Returns value and removes least recently added element.
   *
   * @returns {any} value
   */
  dequeue = (): any => {
    this.#size -= 1;
    return null;
  };
}

export { QueueArray };
