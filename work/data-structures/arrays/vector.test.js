const Vector = require("./vector");

describe("Vector", () => {
  describe("isEmpty", () => {
    it("should return true when there are no items", () => {
      const vector = new Vector();
      expect(vector.isEmpty).toBeTruthy();
    });

    it("should return false when there are items", () => {
      const vector = new Vector();
      vector.prepend("foobar");
      expect(vector.isEmpty).toBeFalsy();
    });
  });

  describe("push", () => {
    it("should add item", () => {
      const vector = new Vector();
      vector.push("A");
      expect(vector.at(0)).toBe("A");
    });

    it("should resize", () => {
      const vector = new Vector();
      expect(vector.capacity).toBe(16);

      for (let index = 0; index < 20; index++) {
        vector.push(index);
      }

      expect(vector.capacity).toBe(32);
    });

    it("should increase size", () => {
      const vector = new Vector();
      expect(vector.size).toBe(0);
      vector.push("A");
      expect(vector.size).toBe(1);
      vector.push("B");
      expect(vector.size).toBe(2);
    });
  });

  describe("pop", () => {
    it("should resize to half when size is 1/4 of capacity", () => {
      const vector = new Vector();

      for (let index = 0; index < vector.capacity; index++) {
        vector.push(index);
      }

      expect(vector.capacity).toBe(16);

      for (let index = 0; index < 12; index++) {
        vector.pop();
      }

      expect(vector.capacity).toBe(8);
    });

    it("should delete last item on the vector", () => {
      const vector = new Vector();
      vector.push("foobar");
      expect(vector.at(0)).toBe("foobar");
      vector.pop();
      expect(vector.at(0)).toBeNull();
    });

    it("should return null if empty", () => {
      const vector = new Vector();
      expect(vector.size).toBe(0);
      expect(vector.pop()).toBe(undefined);
    });

    it("should return deleted item", () => {
      const vector = new Vector();
      vector.push("foobar");
      expect(vector.pop()).toBe("foobar");
    });
  });

  describe("at", () => {
    it("should return item at 0", () => {
      const vector = new Vector();
      vector.push("foobar");
      expect(vector.at(0)).toBe("foobar");
    });

    it("should throw error at -1", () => {
      const vector = new Vector();
      try {
        vector.at(-1);
      } catch (error) {
        expect(error).toMatchObject(new Error("Index out of boundaries"));
      }
    });

    it("should return item at 10", () => {
      const vector = new Vector();
      vector.insert(10, "foobar");
      expect(vector.at(10)).toBe("foobar");
    });

    it("should return item at 15", () => {
      const vector = new Vector();
      vector.insert(15, "foobar");
      expect(vector.at(15)).toBe("foobar");
    });

    it("should throw error at 16", () => {
      const vector = new Vector();
      try {
        vector.at(16);
      } catch (error) {
        expect(error).toMatchObject(new Error("Index out of boundaries"));
      }
    });
  });

  describe("prepend", () => {
    it("should add item on first position on empty vector", () => {
      const vector = new Vector();
      expect(vector.at(0)).toBeNull();
      vector.prepend("foobar");
      expect(vector.at(0)).toBe("foobar");
    });

    it("should add item on first position when more items previously exist", () => {
      const vector = new Vector();
      vector.prepend("1");
      vector.prepend("2");
      vector.prepend("3");
      vector.prepend("4");
      expect(vector.at(0)).toBe("4");
      expect(vector.at(1)).toBe("3");
      expect(vector.at(2)).toBe("2");
      expect(vector.at(3)).toBe("1");
    });
  });

  describe("insert", () => {
    it("should insert item at index 5", () => {
      const vector = new Vector();
      expect(vector.at(5)).toBeNull();
      vector.insert(5, "foobar");
      expect(vector.at(5)).toBe("foobar");
    });

    it("should shift items to the right", () => {
      const vector = new Vector();
      vector.prepend("5");
      vector.prepend("4");
      vector.prepend("2");
      vector.prepend("1");

      vector.insert(2, "3");

      expect(vector.at(0)).toBe("1");
      expect(vector.at(1)).toBe("2");
      expect(vector.at(2)).toBe("3");
      expect(vector.at(3)).toBe("4");
      expect(vector.at(4)).toBe("5");
    });

    it("should throw error when inserting out of boundaries", () => {
      const vector = new Vector();
      try {
        vector.insert(-1);
      } catch (error) {
        expect(error).toMatchObject(new Error("Index out of boundaries"));
      }

      try {
        vector.insert(100);
      } catch (error) {
        expect(error).toMatchObject(new Error("Index out of boundaries"));
      }
    });
  });

  describe("delete", () => {});

  describe("remove", () => {});

  describe("find", () => {});
});
