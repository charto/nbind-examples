var nbind = require('nbind');

var binding = nbind.init();
var lib = binding.lib;

function Coord(x, y) {
  this.x = x;
  this.y = y;
}

Coord.prototype.fromJS = function(output) {
  output(this.x, this.y);
}

Coord.prototype.show = function() {
  console.log('JS value ' + this.x + ', ' + this.y);
}

binding.bind('Coord', Coord);

var value1 = new Coord(123, 456);
var value2 = lib.ObjectExample.getValue();
var ref = lib.ObjectExample.getRef();

lib.ObjectExample.showByValue(value1);
lib.ObjectExample.showByValue(value2);
value1.show();
value2.show();

// lib.ObjectExample.showByRef(value);
lib.ObjectExample.showByRef(ref);
console.log('JS ref ' + ref.x + ', ' + ref.y);
