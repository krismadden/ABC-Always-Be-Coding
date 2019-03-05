var xspacing = 20.10; // Distance between each horizontal location
let w; // Width of entire wave
let theta = 0.0; // Start angle at 0
let amplitude = 60.0; // Height of wave
var period = 500; // How many pixels before the wave repeats
let dx; // Value for incrementing x
let yvalues; // Using an array to store height values for the wave

let wIDTH = 5;
let shapeSkew = 12;
let hEight = 15;

var Color = 0;
var waveDown = false;
var Shadow = 5;
var count = 0;
let colors = ['#3218ee', '#4618e3', '#5918d9', "#7018cd", "#8618c2", "#9d18b5", 
                "#b618a6", "#ca1899", "#dc188c", "#e91881", "#f12374", "#f13068", 
                "#f1425b", "#f1574d", "#f16c41", "#f18232", "#f19627", "#f1a91c", 
                "#f1be0f", "#000000"];

function setup() {
  createCanvas(windowWidth, windowHeight);
  w = width + 16;
  dx = (TWO_PI / period) * xspacing;
  yvalues = new Array(floor(w / xspacing));
}

function draw() {
	
if(waveDown){
	Color = Color - .3;
  Shadow = Shadow - .3;
}else{
	Color = Color + .3;
  Shadow = Shadow + .1;
}
	
	if(Color > 40 || Color < -40){
		waveDown = !waveDown;
	}
	
	
  background(31+Color*0.4,115+Color,181+Color*2);
  calcWave();
  
  count = 0;
  
  for (let i = 0; i < colors.length*30+15; i+=20) {
    count++;
    if(count%2 != 0){
      i += 30;
    }
    renderWave(windowHeight * -0.5 + i + Shadow, "#000000");
  }
  
  count = 0;
  
  for (let i = 0; i < colors.length*30+15; i+=20) {
    count++;
    if(count%2 != 0){
      i += 30;
    }
    renderWave(windowHeight * -0.5 + i, colors[count]);
  }
  
}

function calcWave() {
  // Increment theta (try different values for
  // 'angular velocity' here)
  theta += 0.03;

  // For every x value, calculate a y value with sine function
  let x = theta;
  for (let i = 0; i < yvalues.length; i++) {
    yvalues[i] = sin(x) * amplitude;
    x += dx;
  }
}

function renderWave(verticalOffset, colorz) {
  noStroke();
  fill(colorz);
  // A simple way to draw the wave with an ellipse at each location
  for (let x = 0; x < yvalues.length; x++) {
    quad(x * xspacing + shapeSkew, 
				height / 2 + yvalues[x] + verticalOffset, 
				 x * xspacing + wIDTH + shapeSkew, 
				 height / 2 + yvalues[x] + verticalOffset, 
				 x * xspacing + wIDTH, 
				 height / 2 + yvalues[x] + verticalOffset + hEight, 
				 x * xspacing, 
				 height / 2 + yvalues[x] + verticalOffset + hEight);
  }
}
