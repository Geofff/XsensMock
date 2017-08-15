#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include "proto/xsens_message.pb.h"

using boost::asio::ip::udp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButton(){
    try {
        boost::asio::io_service io_service;
        udp::resolver resolver(io_service);
        // First form our protobuf object
        xsens_proto::Xsens_message current_state;
        current_state.set_pitch(ui->pitch->value());
        current_state.set_roll(ui->roll->value());
        current_state.set_yaw(ui->heading->value());
        std::string data;
        current_state.SerializeToString(&data);
        QByteArray arr = ui->lineEdit->text().toLocal8Bit();
        udp::resolver::query query(udp::v4(), arr.data(), "1111");
        udp::endpoint receiver_endpoint = *resolver.resolve(query);
        udp::socket socket(io_service);
        socket.open(udp::v4());
        socket.send_to(boost::asio::buffer(data, current_state.ByteSize()), receiver_endpoint);
    } catch (std::exception& e) {
        QMessageBox::information(this, tr("XsensMock"), ("Failed to connect to " + ui->lineEdit->text()));
        std::cerr << e.what() << std::endl;
    }
}
