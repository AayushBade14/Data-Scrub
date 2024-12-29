#include "menu.hpp"

using namespace std;

void menu::DisplayLogo(){
  ifstream logoFile; 
  string line; // string for each line

  logoFile.open("./data/logo.txt");
  // checking if the file is open or not
  if(logoFile.is_open()){
    cout<<Yellow; // set the colour to yellow
    while(getline(logoFile,line)){
      cout<<line<<endl;
    }
    cout<<Def<<endl<<endl<<endl; // set the colour back to default
    logoFile.close();
  }
  else{
    cout<<"Error Displaying Logo !"<<endl<<endl<<endl;
  }

  return;
}

void menu::DisplayMainMenuOptions(){
  
  cout<<Blue<<"----------[SCRUB-MENU]----------"<<Def<<endl<<endl;
  cout<<Green<<"1. Scrub Image (JPEG/PNG)"<<endl;
  cout<<"2. Scrub Audio (MP3)"<<endl;
  cout<<"3. Scrub Video (MP4/MKV/MOV)"<<endl;
  cout<<"4. Scrub PDF-File"<<endl;
  cout<<"5. Scrub DOCX-File (PPT/EXCEL/WORD)"<<endl;
  cout<<"6. Scrub Directory"<<endl;
  cout<<Red<<"7. [Exit Data-Scrub]"<<Def<<endl;

  cout<<endl;
}

void menu::DisplayOperationsMenuOptions(){

  cout<<Blue<<"----------[SCRUB-OPERATIONS]----------"<<Def<<endl<<endl;
  cout<<Green<<"1. Remove MetaData Completely"<<endl;
  cout<<"2. Edit MetaData"<<endl;
  cout<<"3. View MetaData"<<endl;
  cout<<"4. Save MetaData As PDF"<<endl;
  cout<<Red<<"5. [Back]"<<Def<<endl;
  
}

void menu::ScrubDirectory(){

  string dir_path;
  cout<<Orange<<"Enter Absolute Path To Directory: "<<Green;
  cin>>dir_path;
  
  cout<<Def<<endl;
  DisplayOperationsMenuOptions();
  // process
}

void menu::ScrubImage(){

  string img_path;
  cout<<Orange<<"Enter Absolute Path To Image(JPEG/PNG): "<<Green;
  cin>>img_path;
  
  cout<<Def<<endl;
  DisplayOperationsMenuOptions();
  //process
}

void menu::ScrubAudio(){

  string aud_path;
  cout<<Orange<<"Enter Absolute Path To Audio(MP3): "<<Green;
  cin>>aud_path;
  
  cout<<Def<<endl;
  DisplayOperationsMenuOptions();
  //process
}

void menu::ScrubVideo(){

  string vid_path;
  cout<<Orange<<"Enter Absolute Path To Video(MP4/MKV/MOV): "<<Green;
  cin>>vid_path;

  cout<<Def<<endl;
  DisplayOperationsMenuOptions();
  //process
}

void menu::ScrubPdf(){
  
  string pdf_path;
  cout<<Orange<<"Enter Absolute Path To PDF: "<<Green<<endl;
  cin>>pdf_path;
  
  cout<<Def<<endl;
  DisplayOperationsMenuOptions();
  //process
}

void menu::ScrubDocx(){

  string dox_path;
  cout<<Orange<<"Enter Absolute Path To DOCX(PPT/EXCEL/WORD): "<<endl;
  cin>>dox_path;
  
  cout<<Def<<endl;
  DisplayOperationsMenuOptions();
  //process
}
