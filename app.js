board.analogRead(0, function(value) {
    let velocity = document.getElementById('speed-value');
    let tilt = document.getElementById('tilt-value');
    //
    velocity.innerHTML = value + " m/s";
    tilt.innerHTML = tilt + " degrees";
});
  