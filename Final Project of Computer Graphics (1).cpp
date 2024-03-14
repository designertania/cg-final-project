#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

//1: Line

void line () {
    int gd = DETECT, gm;

    initgraph (&gd, &gm, "");

    line (600,150,300,150);


    getch();

    closegraph ();

}

//2-Rectangle

void rectangle() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define rectangle coordinates
    int left = 100, top = 100;
    int right = 300, bottom = 200;

    // Draw rectangle
    rectangle(left, top, right, bottom);

    getch();
    closegraph();
}

//3:Triangle

void triangle () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define triangle vertices
    int x1 = 100, y1 = 300;
    int x2 = 300, y2 = 100;
    int x3 = 500, y3 = 300;

    // Draw triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
}

//4-Square

void square() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define square coordinates
    int left = 100, top = 100;
    int right = 200, bottom = 200;

    // Draw square
    rectangle(left, top, right, bottom);

    getch();
    closegraph();
}

//5: Circle

void circle () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a circle at coordinates (x, y) with radius r
    int x = 200;
    int y = 200;
    int radius = 100;
    circle(x, y, radius);

    getch();
    closegraph();
}

//6: Elips

void elips () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define ellipse parameters
    int x = 300, y = 200;
    int start_angle = 0; // Starting angle of the ellipse
    int end_angle = 360; // Ending angle of the ellipse
    int x_radius = 100; // Horizontal radius of the ellipse
    int y_radius = 50; // Vertical radius of the ellipse

    // Draw ellipse
    ellipse(x, y, start_angle, end_angle, x_radius, y_radius);

    getch();
    closegraph();
}

// 7:Emoji

void emoji () {
    int gd = DETECT, gm;


    initgraph (&gd, &gm, "");


    initwindow(800,800,"eMOJI");

    setcolor(GREEN);
    setfillstyle(1, YELLOW);
    circle(200,160,100);//head
    floodfill(150,150,GREEN);
    setfillstyle(1, RED);
    circle(150,110,10);//left eye
    floodfill(150,110, GREEN);
    setfillstyle(1, RED);
    circle(250,110,10);//right eye
    floodfill(250,110, GREEN);

    setcolor(BLACK);
    ellipse(190,190,180,360,50,30);//leaps


    getch();

    closegraph ();

}

// 8: Sun

void sun () {

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    // Sky
    setcolor(LIGHTBLUE);
    rectangle(0, 0, getmaxx(), getmaxy());
    floodfill(1, 1, LIGHTBLUE);

    // Sun
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(200, 200, 50);
    floodfill(200, 200, YELLOW);

    // Rays
    setcolor(YELLOW);
    line(200, 200, 300, 250);
    line(200, 200, 250, 300);
    line(200, 200, 100, 250);
    line(200, 200, 150, 300);
    line(200, 200, 300, 150);
    line(200, 200, 250, 100);
    line(200, 200, 100, 150);
    line(200, 200, 150, 100);

    getch();
    closegraph();
}

// 9: National Flag

void nationalflag () {

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    rectangle(130,380,170,400);
    rectangle(100,400,200,430);
    floodfill(135,390,WHITE);
    floodfill(135,410,WHITE);

    setcolor(WHITE);
    setfillstyle(1,LIGHTGRAY);
    rectangle(140,100,160,380);
    floodfill(150,105,WHITE);

    setfillstyle(1,GREEN);
    rectangle(160,100,360,200);
    floodfill(165,105,WHITE);

    setfillstyle(1,255);
    circle(245,150,40);
        floodfill(240,150,WHITE);

    getch();
    closegraph();

}

//10: House

void house () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw house body
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle(200, 300, 400, 450);
    floodfill(300, 400, LIGHTBLUE);

    // Draw roof
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    line(200, 300, 300, 200);
    line(300, 200, 400, 300);
    line(400, 300, 200, 300);
    floodfill(300, 250, RED);

    // Draw door
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(270, 380, 330, 450);
    floodfill(280, 400, BROWN);

    // Draw window
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(240, 320, 290, 370);
    floodfill(250, 330, YELLOW);

    // Display text
    setcolor(WHITE);
    outtextxy(250, 470, "My House");

    getch();
    closegraph();

}

//Traffic Light

void tajmahal () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    initwindow(1000,800,"Tajmohol",0,50);

//Field
    setfillstyle(1,GREEN);
    line(50,600,950,600);//Front Line -------
    line(50,600,200,70);//Left Line    /
    line(950,600,750,70);//Right Line   \   /
    line(200,70,750,70);// Back Area ---------
    floodfill(150,500,WHITE);

//Main Building Area
    //Front Wall

//4 Minar
    //Front Left Minner
    setfillstyle(1,YELLOW);
    line(200,400,210,100);
    line(250,400,240,100);

    line(200,400,250,400);
    line(210,100,240,100);

    line(215,100,215,85);
    line(225,100,225,85);
    line(235,100,235,85);

    floodfill(205,395,WHITE);

    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(225,87,0,180,25,45);
    line(195,85,255,85);
    floodfill(224,84,RED);
    setcolor(WHITE);
    line(224,40,224,25);
    line(225,40,225,25);
    line(226,41,226,25);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(225,300,0,360,40,3);
    floodfill(225,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(225,200,0,360,30,3);
    floodfill(225,200,LIGHTGRAY);

//End Front Left Miner


//---------Start Front Right----------
    setcolor(BROWN);
    setfillstyle(1,YELLOW);
    line(800,400,810,100);
    line(850,400,840,100);

    line(800,400,850,400);
    line(810,100,840,100);

    floodfill(805,395,BROWN);

    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(825,87,0,180,25,45);
    line(795,85,855,85);
    floodfill(824,84,RED);
    setcolor(WHITE);

    line(815,100,815,85);
    line(825,100,825,85);
    line(835,100,835,85);

    line(824,40,824,25);
    line(825,40,825,25);
    line(826,40,826,25);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(825,300,0,360,40,3);
    floodfill(825,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(825,200,0,360,30,3);
    floodfill(825,200,LIGHTGRAY);
//----------End Front Right-------------

// ----------Start Left Back---------
    setcolor(RED);
    setfillstyle(1,YELLOW);
    rectangle(300,100,320,250);
    floodfill(305,105,RED);

    setfillstyle(1,RED);
    ellipse(310,90,0,180,15,20);
    line(290,90,330,90);
    floodfill(315,80,RED);
    setcolor(WHITE);

    line(305,100,305,90);
    line(310,100,310,90);
    line(315,100,315,90);

    line(309,70,309,58);
    line(310,70,310,58);


// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(310,200,0,360,20,3);
    floodfill(300,200,LIGHTGRAY);


    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(310,130,0,360,15,3);
    floodfill(310,130,LIGHTGRAY);

//----------End Left Back --------------
//----------Start Right Back--------------
    setcolor(RED);
    setfillstyle(1,YELLOW);
    rectangle(700,100,720,250);
    floodfill(705,105,RED);

    setfillstyle(1,RED);
    ellipse(710,90,0,180,15,20);
    line(690,90,730,90);
    floodfill(715,80,RED);
    setcolor(WHITE);

    line(705,100,705,90);
    line(710,100,710,90);
    line(715,100,715,90);

    line(709,70,709,58);
    line(710,70,710,58);
// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(710,200,0,360,20,3);
    floodfill(710,200,LIGHTGRAY);


    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(710,130,0,360,15,3);
    floodfill(710,130,LIGHTGRAY);

 //------End Right Back------------
//Main Bulding

//------------Start Middle or Main Gombuj-----------------
    setcolor(BROWN);
    setfillstyle(1,LIGHTGRAY);
    circle(500,100,65);
    floodfill(500,80,BROWN);

    setfillstyle(1,WHITE);
    ellipse(500,37,0,180,6,30);//Top line on the Gombuj
    floodfill(500,30,BROWN);

    setcolor(WHITE);
    ellipse(500,100,0,180,45,65);
    ellipse(500,100,0,180,20,65);
//-----------End Middle Gombuj---------


    setcolor(DARKGRAY);
    setfillstyle(1,WHITE);
    rectangle(430,100,570,300);//Middle Part
    floodfill(455,150,DARKGRAY);//-----------------------------------

//----------Start Main door or Middle Part Door-----------
    setfillstyle(1,15130848);
    ellipse(500,300,0,180,50,150);
    floodfill(455,250,DARKGRAY);





//Left Part  beside the Main Door
    setcolor(BLACK);
    setfillstyle(1,180);
    circle(400,120,25);
    floodfill(400,100,BLACK);

    setcolor(WHITE);
    line(400,94,400,80);
    line(399,94,399,80);
    setcolor(DARKGRAY);
    setfillstyle(1,15130848);
    setcolor(DARKGRAY);
    rectangle(370,120,430,300);
    floodfill(375,180,DARKGRAY);


    line(370,120,370,300);//right
    line(370,300,340,280);//bottom
    line(340,280,340,120);//left
    line(340,120,370,120);//top
    floodfill(345,150,DARKGRAY);

    //Window 01
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(380,280,420,280);
    ellipse(400,282,0,180,20,40);
    floodfill(400,275,WHITE);

    //Window 02
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(380,200,420,200);
    ellipse(400,202,0,180,20,40);
    floodfill(400,175,WHITE);

//Start Right Part beside the Main Door

    setcolor(BLACK);
    setfillstyle(1,180);
    circle(600,120,25);
    floodfill(600,100,BLACK);

    setcolor(WHITE);
    line(600,94,600,80);
    line(601,94,601,80);
    setcolor(DARKGRAY);
    rectangle(570,120,630,300);

    //Window 01
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(580,280,620,280);
    ellipse(600,282,0,180,20,40);
    floodfill(600,275,WHITE);

    //Window 02
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(580,200,620,200);
    ellipse(600,202,0,180,20,40);
    floodfill(600,175,WHITE);

    setcolor(DARKGRAY);
    setfillstyle(1,15130848);
    floodfill(575,150,DARKGRAY);
    line(630,120,630,300);//left
    line(630,300,660,280);//bottom
    line(660,280,660,120);//right
    line(660,120,630,120);//top
    floodfill(635,150,DARKGRAY);

//-----------Water Lane-----------
    setcolor(DARKGRAY);
    setfillstyle(1,LIGHTCYAN);
    line(450,300,550,300);
    line(480,300,420,600);
    line(520,300,580,600);
    line(370,600,630,600);
    floodfill(500,400,DARKGRAY);
//Road side, near the water line
    setfillstyle(2,DARKGRAY);
    line(450,300,370,600);
    line(550,300,630,600);
    floodfill(470,310,DARKGRAY);
    floodfill(550,350,DARKGRAY);


    getch();
    closegraph();


}




int main() {
    int choice;
    //Choice List
    cout << "1: Line \n";
    cout << "2: Reatangle \n";
    cout << "3: Triangle \n";
    cout << "4: Square \n";
    cout << "5: Circle \n";
    cout << "6: Elips \n";
    cout << "7: Emoji \n";
    cout << "8: Sun \n";
    cout << "9: National Flag \n";
    cout << "10: House \n";
    cout << "11: Taj Mahal \n";
    cout << "\n";

    cout << "Enter Your Choice Number Form List: ";
    cin >> choice;



    switch(choice) {
        case 1:
            line();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            triangle();
            break;
        case 4:
            square();
            break;
        case 5:
            circle();
            break;
        case 6:
            elips();
            break;
        case 7:
            emoji();
            break;
        case 8:
            sun();
            break;
        case 9:
            nationalflag();
            break;
        case 10:
            house();
            break;
        case 11:
            tajmahal();
            break;
        default:
            std::cout << "Invalid choice!";
            break;
    }

    return 0;
}
