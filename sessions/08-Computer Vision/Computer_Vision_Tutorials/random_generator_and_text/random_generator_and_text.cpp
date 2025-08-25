/**
 * @file random_generator_and_text.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-08-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
#include <stdio.h>


constexpr int NUMBER = 100;
constexpr int DELAY = 5;

constexpr int window_width = 900;
constexpr int window_hight = 600;

constexpr int x_1 = -window_width / 2;
constexpr int y_1 = -window_width / 2;
constexpr int x_2 = window_width * 3 / 2;
constexpr int y_2 = window_width * 3 / 2;


static cv::Scalar random_color(cv::RNG &rng);
int Drawing_Random_Lines(cv::Mat img, char* window_name ,cv::RNG rng);
int Drawing_Random_Rectangles(cv::Mat img, char* window_name ,cv::RNG rng);
int Drawing_Random_Ellipses(cv::Mat img, char* window_name ,cv::RNG rng);
int Drawing_Random_Polylines(cv::Mat img, char* window_name ,cv::RNG rng);
int Drawing_Random_Filled_Polygons(cv::Mat img, char* window_name ,cv::RNG rng);
int Drawing_Random_Circles(cv::Mat img, char* window_name ,cv::RNG rng);
int Displaying_Random_Text(cv::Mat img, char* window_name ,cv::RNG rng);
int Displaying_Big_End(cv::Mat img, char* window_name ,cv::RNG rng);

int main(void) {
    int c;

    /// Start creating a window
    char window_name[] = "Drawing_2 Tutorial";

    /// Also create a random object (RNG)
    cv::RNG rng(0xFFFFFFFF);

    /// Initialize a matrix filled with zeros
    cv::Mat image = cv::Mat::zeros(window_hight, window_width, CV_8UC3);
    /// Show it in a window during DELAY ms
    imshow(window_name, image);
    cv::waitKey(DELAY);

    /// Now, let's draw some lines
    c = Drawing_Random_Lines(image, window_name, rng);
    if(c != 0) return 0;

    /// Go on drawing, this time nice rectangles
    c = Drawing_Random_Rectangles(image, window_name, rng);
    if(c != 0) return 0;

    /// Draw some ellipses
    c = Drawing_Random_Ellipses( image, window_name, rng);
    if(c != 0) return 0;

    /// Now some polylines
    c = Drawing_Random_Polylines( image, window_name, rng);
    if(c != 0) return 0;

    /// Draw filled polygons
    c = Drawing_Random_Filled_Polygons( image, window_name, rng);
    if(c != 0) return 0;

    /// Draw circles
    c = Drawing_Random_Circles( image, window_name, rng);
    if(c != 0) return 0;

    /// Display text in random positions
    c = Displaying_Random_Text( image, window_name, rng);
    if(c != 0) return 0;

    /// Displaying the big end!
    c = Displaying_Big_End(image, window_name, rng);
    if(c != 0) return 0;

    cv::waitKey(0);
    return 0;
}


static cv::Scalar random_color(cv::RNG &rng) {
    int icolor = (unsigned) rng;
    return cv::Scalar(icolor&255, (icolor>>8)&255, (icolor>>16)&255);
}

int Drawing_Random_Lines(cv::Mat img, char* window_name ,cv::RNG rng) {
    cv::Point p1, p2;
    for(int i; i < NUMBER; i++) {
        p1.x = rng.uniform(x_1, x_2);
        p1.y = rng.uniform(y_1, y_2);
        p2.x = rng.uniform(x_1, x_2);
        p2.y = rng.uniform(y_1, y_2);

        cv::line(img, p1, p2, random_color(rng), rng.uniform(1, 10), 8);
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}

int Drawing_Random_Rectangles(cv::Mat img, char* window_name ,cv::RNG rng) {
    cv::Point p1, p2;
    int lineType = 8;
    int thickness = rng.uniform( -3, 10 );
    for(int i; i < NUMBER; i++) {
        p1.x = rng.uniform(x_1, x_2);
        p1.y = rng.uniform(y_1, y_2);
        p2.x = rng.uniform(x_1, x_2);
        p2.y = rng.uniform(y_1, y_2);

        cv::rectangle(img, p1, p2, random_color(rng), MAX(thickness, -1), lineType);
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;  
}

int Drawing_Random_Ellipses(cv::Mat img, char* window_name ,cv::RNG rng) {
    int lineType = 8;
    for (int i = 0; i < NUMBER; i++) {
        cv::Point center;
        center.x = rng.uniform(x_1, x_2);
        center.y = rng.uniform(y_1, y_2);

        cv::Size axes;
        axes.width = rng.uniform(0, 200);
        axes.height = rng.uniform(0, 200);

        double angle = rng.uniform(0, 180);
        cv::ellipse(img, center, axes, angle, angle-100, angle+200, 
                    random_color(rng), rng.uniform(-1, 9), lineType);
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}

int Drawing_Random_Polylines(cv::Mat img, char* window_name ,cv::RNG rng) {
    int lineType = 8;

    for( int i = 0; i< NUMBER; i++ ) {
        cv::Point pt[2][3];
        pt[0][0].x = rng.uniform(x_1, x_2);
        pt[0][0].y = rng.uniform(y_1, y_2);
        pt[0][1].x = rng.uniform(x_1, x_2);
        pt[0][1].y = rng.uniform(y_1, y_2);
        pt[0][2].x = rng.uniform(x_1, x_2);
        pt[0][2].y = rng.uniform(y_1, y_2);
        pt[1][0].x = rng.uniform(x_1, x_2);
        pt[1][0].y = rng.uniform(y_1, y_2);
        pt[1][1].x = rng.uniform(x_1, x_2);
        pt[1][1].y = rng.uniform(y_1, y_2);
        pt[1][2].x = rng.uniform(x_1, x_2);
        pt[1][2].y = rng.uniform(y_1, y_2);

        const cv::Point* ppt[2] = {pt[0], pt[1]};
        int npt[] = {3, 3};

        cv::polylines(img, ppt, npt, 2, true, random_color(rng), rng.uniform(1,10), lineType);

        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}

int Drawing_Random_Filled_Polygons(cv::Mat img, char* window_name ,cv::RNG rng) {
    int lineType = 8;

    for ( int i = 0; i < NUMBER; i++ ) {
        cv::Point pt[2][3];
        pt[0][0].x = rng.uniform(x_1, x_2);
        pt[0][0].y = rng.uniform(y_1, y_2);
        pt[0][1].x = rng.uniform(x_1, x_2);
        pt[0][1].y = rng.uniform(y_1, y_2);
        pt[0][2].x = rng.uniform(x_1, x_2);
        pt[0][2].y = rng.uniform(y_1, y_2);
        pt[1][0].x = rng.uniform(x_1, x_2);
        pt[1][0].y = rng.uniform(y_1, y_2);
        pt[1][1].x = rng.uniform(x_1, x_2);
        pt[1][1].y = rng.uniform(y_1, y_2);
        pt[1][2].x = rng.uniform(x_1, x_2);
        pt[1][2].y = rng.uniform(y_1, y_2);

        const cv::Point* ppt[2] = {pt[0], pt[1]};
        int npt[] = {3, 3};

        fillPoly(img, ppt, npt, 2, random_color(rng), lineType);
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}

int Drawing_Random_Circles(cv::Mat img, char* window_name ,cv::RNG rng) {
    int lineType = 8;

    for (int i = 0; i < NUMBER; i++)
    {
        cv::Point center;
        center.x = rng.uniform(x_1, x_2);
        center.y = rng.uniform(y_1, y_2);

        cv::circle(img, center, rng.uniform(0, 300), random_color(rng),
                rng.uniform(-1, 9), lineType );
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}

int Displaying_Random_Text(cv::Mat img, char* window_name ,cv::RNG rng) {
    int lineType = 8;

    for ( int i = 1; i < NUMBER; i++ )
    {
        cv::Point org;
        org.x = rng.uniform(x_1, x_2);
        org.y = rng.uniform(y_1, y_2);
        
        cv::putText(img, "Testing text rendering", org, rng.uniform(0,8),
                 rng.uniform(0,100)*0.05+0.1, random_color(rng), rng.uniform(1, 10), lineType);
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}

int Displaying_Big_End(cv::Mat img, char* window_name ,cv::RNG rng) {
    cv::Size textsize = cv::getTextSize("OpenCV forever!", cv::FONT_HERSHEY_COMPLEX, 3, 5, 0);
    cv::Point org((window_width - textsize.width)/2, (window_hight - textsize.height)/2);
    int lineType = 8;
    
    cv::Mat image2;
    
    for( int i = 0; i < 255; i += 2 )
    {
        image2 = img - cv::Scalar::all(i);
        putText(image2, "OpenCV forever!", org, cv::FONT_HERSHEY_COMPLEX, 3,
                    cv::Scalar(i, i, 255), 5, lineType );
        cv::imshow(window_name, img);
        if(cv::waitKey(DELAY) >=0) {
            return -1;
        }
    }
    return 0;
}