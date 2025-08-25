/**
 * @file drawing_geometric.cpp
 * @author Ziad Mohammed Fathy
 * @brief Drawing geometrics (atom, rook) with opencv2
 * @version 0.1
 * @date 2025-08-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

constexpr int w = 400;

void MyEllipse(cv::Mat img, double angle);
void MyFilledCircle(cv::Mat img, cv::Point center);
void MyPolygon(cv::Mat img);
void MyLine(cv::Mat img, cv::Point start, cv::Point end);

int main (void) {
    /* create windows for all geometrics */
    char atom_window[] = "Drawing 1: Atom";
    char rook_window[] = "Drawing 2: Rook";

    /* create Mat for all geometrics */
    cv::Mat atom_img = cv::Mat::zeros(w, w, CV_8UC3);
    cv::Mat rook_img = cv::Mat::zeros(w, w, CV_8UC3);

    /* create atom geometrics */
    MyEllipse(atom_img, 90 );
    MyEllipse(atom_img, 0 );
    MyEllipse(atom_img, 45 );
    MyEllipse(atom_img, -45 );

    MyFilledCircle(atom_img, cv::Point( w/2, w/2));

    /* create rook geometrics */
    MyPolygon(rook_img);

    cv::rectangle(
        rook_img,
        cv::Point(0, 7*w/8),
        cv::Point(w, w),
        cv::Scalar(0, 255, 255),
        cv::FILLED,
        cv::LINE_8 
    );

    MyLine(rook_img, cv::Point(0, 15*w/16), cv::Point(w, 15*w/16));
    MyLine(rook_img, cv::Point(w/4, 7*w/8), cv::Point(w/4, w));
    MyLine(rook_img, cv::Point(w/2, 7*w/8), cv::Point(w/2, w));
    MyLine(rook_img, cv::Point(3*w/4, 7*w/8), cv::Point(3*w/4, w));

    /* show all geometrics in window */
    cv::imshow(atom_window, atom_img);
    cv::moveWindow(atom_window, 0, 200);
    cv::imshow(rook_window, rook_img);
    cv::moveWindow(rook_window, w, 200);
 
    /* waiting to enter any keyboard's key */
    cv::waitKey(0);

    return 0;
}

/**
 * @brief 
 * 
 * @param img 
 * @param angle 
 */
void MyEllipse(cv::Mat img, double angle) {
    int Thickness = 2;
    int LineType = 8;
    cv::ellipse (
        img,
        cv::Point(w/2, w/2),
        cv::Size(w/4, w/16),
        angle,
        0,
        360,
        cv::Scalar(255, 0, 0),
        Thickness,
        LineType
    );
}

/**
 * @brief 
 * 
 * @param img 
 * @param center 
 */
void MyFilledCircle(cv::Mat img, cv::Point center) {
    cv::circle(
        img,
        center,
        w/32,
        cv::Scalar(0, 0, 255),
        cv::FILLED,
        cv::LINE_8
    );
}

/**
 * @brief 
 * 
 * @param img 
 */
void MyPolygon(cv::Mat img){
    int lineType = cv::LINE_8;
    cv::Point rook_points[1][20];

    rook_points[0][0]  = cv::Point(   w/4,   7*w/8);
    rook_points[0][1]  = cv::Point( 3*w/4,   7*w/8);
    rook_points[0][2]  = cv::Point( 3*w/4,  13*w/16);
    rook_points[0][3]  = cv::Point(11*w/16, 13*w/16);
    rook_points[0][4]  = cv::Point(19*w/32,  3*w/8);
    rook_points[0][5]  = cv::Point( 3*w/4,   3*w/8);
    rook_points[0][6]  = cv::Point( 3*w/4,     w/8);
    rook_points[0][7]  = cv::Point(26*w/40,    w/8);
    rook_points[0][8]  = cv::Point(26*w/40,    w/4);
    rook_points[0][9]  = cv::Point(22*w/40,    w/4);
    rook_points[0][10] = cv::Point(22*w/40,    w/8);
    rook_points[0][11] = cv::Point(18*w/40,    w/8);
    rook_points[0][12] = cv::Point(18*w/40,    w/4);
    rook_points[0][13] = cv::Point(14*w/40,    w/4);
    rook_points[0][14] = cv::Point(14*w/40,    w/8);
    rook_points[0][15] = cv::Point(   w/4,     w/8);
    rook_points[0][16] = cv::Point(   w/4,   3*w/8);
    rook_points[0][17] = cv::Point(13*w/32,  3*w/8);
    rook_points[0][18] = cv::Point( 5*w/16, 13*w/16);
    rook_points[0][19] = cv::Point(   w/4,  13*w/16);
    
    const cv::Point* ppt[1] = {rook_points[0]};
    int npt[] = {20};
    
    fillPoly( 
        img,
        ppt,
        npt,
        1,
        cv::Scalar(255, 255, 255),
        lineType 
    );
}

/**
 * @brief 
 * 
 * @param img 
 * @param start 
 * @param end 
 */
void MyLine(cv::Mat img, cv::Point start, cv::Point end) {
    int Thickness = 2;
    int LineType = cv::LINE_8;
    cv::line(
        img,
        start,
        end,
        cv::Scalar(0, 0, 0),
        Thickness,
        LineType
    );
}