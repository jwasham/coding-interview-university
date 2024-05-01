## Linked List(연결 리스트)

**데이터 요소의 선형 집합**, 메모리 내 물리적 배치에 따라 선형 순서가 지정되지 않습니다. 
  (흔히 배열에서 다루는 인덱스 개념이 아닌듯?)
   대신 각 요소는 다음 요소를 가르킵니다. 이는 시퀀스를 함께 나타내는 노드 그룹으로 구성된 데이터 구조입니다.

![linked-list](https://github.com/kwhong95/bot_rps/assets/70752848/b6ae25f7-6cdf-4aeb-a538-75caf176d812)


#### 간단한 코드로 구조 이해하기

```js
// Node 클래스: 각 노드를 나타내는 클래스
class Node {
  constructor(value) {
    this.value = value; // 현재 노드의 값
    this.next = null; // 다음 노드를 가리키는 포인터
  }
}

// Linked List 클래스: Linked List를 나타내는 클래스
class LinkedList {
  constructor() {
    this.head = null; // 맨 처음 노드를 가리키는 포인터
    this.tail = null; // 맨 마지막 노드를 가리키는 포인터
  }

  // 값(value)을 Linked List의 맨 뒤에 추가하는 메서드
  add(value) {
    // Linked List가 비어있으면 새로운 노드를 head와 tail로 지정
    let newNode = new Node(value);

    if (this.head === null) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      // Linked List에 이미 노드가 있을 경우, tail 노드의 next를 새로운 노드로 설정하고 tail을 업데이트
      this.tail.next = newNode;
      this.tail = newNode;
    }
  }
}
```

#### 활용 예시

> 페이지 내 이동을 관리하는 라우팅 시스템

일반적으로 브라우저의 뒤로 가기 및 앞으로 가기 버튼을 관리하고 페이지 이력을 추적하기 위해 **Linked List** 가 사용될 수 있습니다.
예를 들어, 사용자가 앱 또는 웹사이트에서 다양한 페이지를 이동하고 방문할 때 마다 현재 페이지를 **Linked List**에 추가하여 사용자의 이동 기록을 저장할 수 있습니다. 이를 통해 이전 페이지로 돌아가거나 특정 페이지로 이동할 때 **Linked List**를 활용하여 효율적으로 이동을 관리할 수 있습니다. 

또 다른 예시로는 반복적인 동적 요소를 처리할 때 **Linked List**를 사용할 수 있습니다. 예를 들어, 동적으로 추가되는 항목들의 리스트나 트리구조를 관리할 때 **Linked List**를 활용하여 각 항목의 순서를 관리하거나 이동할 수 있습니다.

#### 시간 복잡도

| Access | Search | Insertion | Deletion |
| :---: | :---: | :---: | :---: |
| O(n) | O(n) | O(1) | O(n) |


#### 공간 복잡도

O(n)