var assert = require('assert')
var Singleton = require('singleton').Singleton

describe('Singleton', function() {

  it('should always return a reference to the same instance when constructed', function() {
    var singletonOne = new Singleton();
    var singletonTwo = new Singleton();

    assert.strictEqual(singletonOne, singletonTwo)
  });

  it('should return the same instance whether or not its constructed with the new keyword', function() {
    var singletonOne = new Singleton();
    var singletonTwo = Singleton();

    assert.strictEqual(singletonOne, singletonTwo)
  });

  it('should reflect changes made on one reference in another reference', function() {
    var singletonOne = new Singleton();
    var singletonTwo = new Singleton();

    singletonOne.foo = 'bar'

    assert.strictEqual(singletonOne.foo, singletonTwo.foo);
  });

  it('should override values on one reference when that value changes on another', function() {
    var singletonOne = new Singleton();
    var singletonTwo = new Singleton();

    singletonOne.foo = 'bar'; // this value gets overridden
    singletonTwo.foo = 'baz'; // this is the final value on all instances of the singleton

    assert.strictEqual(singletonOne.foo, singletonTwo.foo);
  });

})
