#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ffmpegdemo1.h"

class ffmpegdemo1 : public QMainWindow
{
	Q_OBJECT

public:
	ffmpegdemo1(QWidget *parent = Q_NULLPTR);

private:
	Ui::ffmpegdemo1Class ui;
};
