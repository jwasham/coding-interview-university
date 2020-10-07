const LinkedList = require("./linked-list");

describe("Linked list", () => {
  describe("size", () => {
    it("should return 0", () => {
      const list = new LinkedList();
      expect(list.size).toBe(0);
    });

    it("should return 1", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.size).toBe(1);
    });

    it("should return 15", () => {
      const list = new LinkedList();
      for (let index = 0; index < 15; index++) {
        list.pushBack(index);
      }
      expect(list.size).toBe(15);
    });
  });

  describe("empty", () => {
    it("should return true when no data on linked list", () => {
      const list = new LinkedList();
      expect(list.empty).toBeTruthy();
    });

    it("should return true when all existing data were deleted on linked list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.popFront();
      expect(list.empty).toBeTruthy();
    });

    it("should return false when data exist on linked list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.empty).toBeFalsy();
    });
  });

  describe("valueAt", () => {
    it("should return null when index less than 0", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.valueAt(-1)).toBeNull();
      expect(list.valueAt(-10)).toBeNull();
      expect(list.valueAt(-50)).toBeNull();
    });

    it("should return null when index is greater than size", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.valueAt(1)).toBeNull();
      expect(list.valueAt(2)).toBeNull();
    });

    it("should return data at index 0", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.valueAt(0)).toBe(1);
    });

    it("should return data at last index", () => {
      const list = new LinkedList();
      for (let index = 0; index < 15; index++) {
        list.pushBack(index);
      }
      expect(list.valueAt(14)).toBe(14);
    });

    it("should return data at the middle index", () => {
      const list = new LinkedList();
      for (let index = 0; index < 15; index++) {
        list.pushBack(index);
      }
      expect(list.valueAt(7)).toBe(7);
    });
  });

  describe("pushFront", () => {
    it("should set head when empty", () => {
      const list = new LinkedList();
      expect(list.head).toBeNull();
      list.pushFront(1);
      expect(list.head).not.toBeNull();
    });

    it("should set tail when empty", () => {
      const list = new LinkedList();
      expect(list.tail).toBeNull();
      list.pushFront(1);
      expect(list.tail).not.toBeNull();
    });

    it("should set tail to last node", () => {
      const list = new LinkedList();
      list.pushFront(1);
      list.pushFront(2);
      list.pushFront(3);
      expect(list.tail.data).toBe(1);
    });

    it("should add node to the front when empty", () => {
      const list = new LinkedList();
      list.pushFront(1);
      expect(list.front()).toBe(1);
    });

    it("should add node to the front when more nodes exist on the list", () => {
      const list = new LinkedList();
      list.pushFront(node1);
      list.pushFront(node2);
      list.pushFront(node3);
      expect(list.front()).toBe(3);
    });

    it("should size be 3", () => {
      const list = new LinkedList(node1);
      list.pushFront(1);
      list.pushFront(2);
      list.pushFront(3);
      expect(list.size).toBe(3);
    });
  });

  describe("popFront", () => {
    it("should set header to null when is the last element on the list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.head).not.toBeNull();
      list.popFront();
      expect(list.head).toBeNull();
    });

    it("should set tail to null when is the last element on the list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.tail).not.toBeNull();
      list.popFront();
      expect(list.tail).toBeNull();
    });

    it("should set header to next element", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.popFront();
      expect(list.head.data).toBe(2);
    });

    it("should return removed node value", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.popFront()).toBe(1);
    });

    it("should size be 0", () => {
      const list = new LinkedList();

      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);

      expect(list.size).toBe(3);

      list.popFront();
      list.popFront();
      list.popFront();

      expect(list.size).toBe(0);
    });

    it("should return null if list is empty", () => {
      const list = new LinkedList();
      expect(list.popFront()).toBeNull();
    });
  });

  describe("pushBack", () => {
    it("should set tail to last given node", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.tail.data).toBe(3);
    });

    it("should head point to first node", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.head.data).toBe(1);
    });

    it("should increase size", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.size).toBe(3);
    });
  });

  describe("popBack", () => {
    it("should set header to null when is the last element on the list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.head).not.toBeNull();
      list.popBack();
      expect(list.head).toBeNull();
    });

    it("should set tail to null when is the last element on the list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      expect(list.tail).not.toBeNull();
      list.popBack();
      expect(list.tail).toBeNull();
    });

    it("should set tail to last element when there are more elements on the list", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.tail.data).toBe(3);
      list.popBack();
      expect(list.tail.data).toBe(2);
      list.popBack();
      expect(list.tail.data).toBe(1);
    });

    it("should return removed value", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.popBack()).toBe(3);
    });

    it("should remove last value", () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      list.popBack()
      expect(list.valueAt(0)).toBe(1);
      expect(list.valueAt(1)).toBe(2);
      expect(list.valueAt(2)).toBeNull();
    });

    it("should return null when empty", () => {
      const list = new LinkedList();
      expect(list.popBack()).toBeNull();
    });
  });

  describe("front", () => {
    it('should return null', () => {
      const list = new LinkedList();
      expect(list.front()).toBeNull();
    })
    
    it('should return first value', () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.front()).toBe(1);
    })
  });

  describe("back", () => {
    it('should return null', () => {
      const list = new LinkedList();
      expect(list.back()).toBeNull();
    })
    
    it('should return last value', () => {
      const list = new LinkedList();
      list.pushBack(1);
      list.pushBack(2);
      list.pushBack(3);
      expect(list.back()).toBe(3);
    })
  });

  describe("insert", () => {});

  describe("erase", () => {});

  describe("valueNFromEnd", () => {});

  describe("reverse", () => {});

  describe("removeValue", () => {});
});
