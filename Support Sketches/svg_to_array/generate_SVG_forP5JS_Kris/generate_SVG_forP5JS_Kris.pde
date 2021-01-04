// You need to install geomerative lib from the contribution manager
import geomerative.*;


String name1 = "2020-1";
String name2 = "2020-2";
RShape grp1;
RPoint[][] pointPaths1;
RShape grp2;
RPoint[][] pointPaths2;

Boolean centerSVGs = false;

String[] s = {"", "", ""};

void setup() {
  size(100, 100, P3D);
  RG.init(this);
  RG.ignoreStyles(true);

  RG.setPolygonizer(RG.ADAPTATIVE);

  // put you svg in the data forlder and change its name here
  grp1 = RG.loadShape(name1 + ".svg");
  if(centerSVGs){
    grp1.centerIn(g, 100, 1, 1);
  }

  pointPaths1 = grp1.getPointsInPaths();
  println(pointPaths1);

  // to java arrays 
  s[0] += "p5js : \n";
  for (int i = 0; i<pointPaths1.length; i++) {
    s[0] += "let  xpos"+i+" = [";
    s[2] += "svg1 Points = " + pointPaths1[i].length + "   ---   ";
    if (pointPaths1[i] != null) {

      for (int j = 0; j<pointPaths1[i].length; j++) {
        s[0] += pointPaths1[i][j].x ;

        if (j != pointPaths1[i].length-1) {
          s[0] += "," ;
        }
      }
    }
    s[0] += "];\n";
  }

  for (int i = 0; i<pointPaths1.length; i++) {
    s[0] += "let  ypos"+i+" = [";
    if (pointPaths1[i] != null) {

      for (int j = 0; j<pointPaths1[i].length; j++) {
        s[0] += pointPaths1[i][j].y ;
        if (j != pointPaths1[i].length-1) {
          s[0] += "," ;
        }
      }
    }
    s[0] += "];\n";
  }
  
  //second svg
  // put you svg in the data forlder and change its name here
  grp2 = RG.loadShape(name2 + ".svg");
  if(centerSVGs){
    grp2.centerIn(g, 100, 1, 1);
  }

  pointPaths2 = grp2.getPointsInPaths();
  println(pointPaths2);

  // to java arrays 
  for (int i = 0; i<pointPaths2.length; i++) {
    s[1] += "let  xpos1 = [";
    s[2] += "svg2 Points = " + pointPaths2[i].length + "\n";
    if (pointPaths2[i] != null) {

      for (int j = 0; j<pointPaths2[i].length; j++) {
        s[1] += pointPaths2[i][j].x ;

        if (j != pointPaths2[i].length-1) {
          s[1] += "," ;
        }
      }
    }
    s[1] += "];\n";
  }

  for (int i = 0; i<pointPaths2.length; i++) {
    s[1] += "let  ypos1 = [";
    if (pointPaths2[i] != null) {

      for (int j = 0; j<pointPaths2[i].length; j++) {
        s[1] += pointPaths2[i][j].y ;
        if (j != pointPaths2[i].length-1) {
          s[1] += "," ;
        }
      }
    }
    s[1] += "];\n";
  }

  saveStrings(name1+".txt", s);
}

void draw() {
  for (int i = 0; i<pointPaths1.length; i++) {



    if (pointPaths1[i] != null) {
      noStroke();
      fill(258,1,0);
      beginShape();
      for (int j = 0; j<pointPaths1[i].length; j++) {
        vertex(width/2 + pointPaths1[i][j].x, height/2 + pointPaths1[i][j].y);
       }
      endShape();
    }
  }
}
