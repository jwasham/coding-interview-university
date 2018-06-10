package leet_code.medium

import org.scalatest.FlatSpec

class GenerateParenthesisTest extends FlatSpec {

  it must "generate all valid parenthesis permutations" in {
    assertResult(Set("()"))(GenerateParenthesis(1))
    assertResult(Set("(())","()()"))(GenerateParenthesis(2))
    assertResult(Set("((()))", "(()())", "(())()", "()(())", "()()()"))(GenerateParenthesis(3))
    assertResult(Set("(()()())", "(()())()", "((()()))", "(()(()))", "((()))()", "(((())))", "()(()())", "()(())()",
      "()((()))", "()()(())", "()()()()", "(())()()", "(())(())", "((())())"))(GenerateParenthesis(4))
  }
  
  it must "accept zero" in {
    assertResult(Set(""))(GenerateParenthesis(0))
  }

  it must "not accept negative values" in {
    assertThrows[IllegalArgumentException](GenerateParenthesis(-1))
  }

}
