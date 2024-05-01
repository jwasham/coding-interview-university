## Doubly Linked List(이중 연결 리스트)

 순차적으로 링크된 노드라는 레코드 세트로 구성된 링크된 데이터 구조
   각노드에는 링크라고 하는 두 개의 필가 있으며, 노드 순서에서 이전 노드와 다음 노드에 대한 참조를 가집니다.

![doubly-linked-list](https://github.com/kwhong95/bot_rps/assets/70752848/eaff5bdc-c458-4719-a3e3-da805be8cb82)


#### 활용 예시

> 웹 페이지의 이력을 관리하는 '뒤로 가기' 및 '앞으로 가기' 기능

사용자가 여러 페이지를 방문하면서 이전에 방문한 페이지로 쉽게 이동할 수 있는 기능을 구현하는데 **Doubly Linked List**를 사용할 수 있습니다.

예를 들어, 웹 애플리케이션에서 사용자가 각 페이지를 방문할 때마다 해당 페이지에 대한 정보를 **Doubly Linked List**에 추가할 수 있습니다. 각 노드는 방문한 페이지의 URL이나 정보를 저장하며, 이전 페이지와 다음 페이지를 가리키는 포인터를 가지고 있습니다.

사용자가 '뒤로 가기' 버튼을 클릭하면 현재 페이지에서 이전 페이지로 이동할 수 있도록  **Doubly Linked List**의 이전 노드를 참조하고 해당 페이지로 이동합니다. 마찬가지로 '앞으로 가기' 버튼을 클릭하면 다음 페이지로 이동하도록  **Doubly Linked List**의 다음 노드를 참조하고 해당 페이지로 이동할 수 있습니다.

이를 통해 사용자는 웹 애플리케이션 내에서 쉽게 페이지 이동을 관리하고 이전 방문한 페이지로 손쉽게 이동할 수 있게 됩니다. **Doubly Linked List**는 이전 페이지와 다음 페이지의 관계를 더 효율적으로 관리하고 쉽게 탐색할 수 있는 구조를 제공하여 웹 페이지의 이력을 관리하는 데 유용하게 활용될 수 있습니다.


#### 활용 예시 코드로 구현해보기

```ts
// Node 클래스: 각 페이지를 나타내는 클래스
class Node {
  public url: string;
  public prev: Node | null;
  public next: Node | null;

  constructor(url: string) {
    this.url = url; // 페이지의 URL
    this.prev = null; // 이전 페이지를 가리키는 포인터
    this.next = null; // 다음 페이지를 가리키는 포인터
  }
}

// WebHistory 클래스: 웹 페이지 이력을 관리하는 클래스
class WebHistory {
  private current: Node | null;

  constructor() {
    this.current = null; // 현재 페이지를 가리키는 포인터
  }

  // 현재 페이지를 나타내는 노드를 추가하는 메서드
  public addPage(url: string) {
    const newNode = new Node(url);

    if (this.current) {
      this.current.next = newNode;
      newNode.prev = this.current;
    }

    this.current = newNode;
  }

  // 이전 페이지로 이동하는 메서드
  public goBack() {
    if (this.current && this.current.prev) {
      this.current = this.current.prev;
      console.log('이전 페이지로 이동:', this.current.url);
    } else {
      console.log('더 이상 이전 페이지가 존재하지 않음');
    }
  }

  // 다음 페이지로 이동하는 메서드
  public goForward() {
    if (this.current && this.current.next) {
      this.current = this.current.next;
      console.log('다음 페이지로 이동:', this.current.url);
    } else {
      console.log('더 이상 다음 페이지가 존재하지 않음');
    }
  }
}

// 웹 페이지 이력을 관리하는 예시
const webHistory = new WebHistory();
webHistory.addPage('https://www.example.com/page1');
webHistory.addPage('https://www.example.com/page2');
webHistory.goBack(); // 이전 페이지로 이동: https://www.example.com/page1
webHistory.goForward(); // 다음 페이지로 이동: https://www.example.com/page2

```


#### 시간 복잡도

| Access | Search | Insetion | Deletion |
| :---: | :---: | :---: | :---: |
| O(n) | O(n) | O(1) | O(1) |

#### 공간 복잡도

O(n)