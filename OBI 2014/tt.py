import Pyqt5

from Pyqt5.QtWidgets import QApplication, Qlabel
app = QApplication([])
label = Qlabel('hello WOrld!')
label.show()
app.exec_()