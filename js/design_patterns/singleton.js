var Singleton = (function() {

  // create reference to the singleton;
  var singleton;

  return function() {

    // only instantiate the singleton if it's never been instantiated before
    // or it has been undefined somehow
    if (singleton === undefined) {
      singleton = {};
    }

    // the constructor will always return the a reference to the same instance
    return singleton;
  }

})();


module.exports = {
  Singleton: Singleton
}
