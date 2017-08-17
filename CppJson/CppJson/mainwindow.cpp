#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    json j =
      {
          {"pi", 3.141},
          {"happy", true},
          {"name", "Niels"},
          {"nothing", nullptr},
          {
              "answer", {
                  {"everything", 42}
              }
          },
          {"list", {1, 0, 2}},
          {
              "object", {
                  {"currency", "USD"},
                  {"value", 42.99}
              }
          }
      };

      // add new values
      j["new"]["key"]["value"] = {"another", "list"};

      // count elements
      auto s = j.size();
      j["size"] = s;

      // pretty print with indent of 4 spaces
      std::cout << std::setw(4) << j << '\n';


      // create JSON arrays
         json j_no_init_list = json::array();
         json j_empty_init_list = json::array({});
         json j_nonempty_init_list = json::array({1, 2, 3, 4});
         json j_list_of_pairs = json::array({ {"one", 1}, {"two", 2} });

         // serialize the JSON arrays
         std::cout << j_no_init_list << '\n';
         std::cout << j_empty_init_list << '\n';
         std::cout << j_nonempty_init_list << '\n';
         std::cout << j_list_of_pairs << '\n';

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
