#ifndef MENU_HPP
#define MENU_HPP

#include<iostream>
#include<string>
#include<fstream>

class menu{
  private:
    // Some colours
    std::string Yellow = "\033[93m";
    std::string Def = "\033[0m";
    std::string Blue = "\033[34m";
    std::string Green = "\033[32m";
    std::string Red = "\033[30m";
    std::string Orange = "\033[33m";

  public:
    
    // method to display logo
    void DisplayLogo();
    
    // method to display main menu options
    void DisplayMainMenuOptions();

    // method to display operations menu
    void DisplayOperationsMenuOptions();

    // method to scrub image
    void ScrubImage();
    
    // method to scrub audio
    void ScrubAudio();

    // method to scrub video
    void ScrubVideo();

    // method to scrub pdf
    void ScrubPdf();

    // method to scrub docx
    void ScrubDocx();

    // method to scrub directory
    void ScrubDirectory();

};

#endif
