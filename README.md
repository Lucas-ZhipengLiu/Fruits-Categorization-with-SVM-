# Multi-fruit Categorization with a support vector machine (SVM) classifier

**The classifier is trained by my dataset, which is able to distinguish six different fruits. They are apple, banana, kiwi, cherry, walnut, and orange. Also, an easy to use interactive interface is desgined. The BSc dissertation is available [here](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/%E5%88%98%E5%BF%97%E9%B9%8F-%E6%AF%95%E4%B8%9A%E8%AE%BE%E8%AE%A1%E7%BB%88%E7%A8%BF.pdf). The main dependency is OpenCV 3. Below is an overview of the categorization system.**

![alt text](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/Images/3.png)

## Image Preprocessing

Image Segmentation

![alt text](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/Images/4.png)

Morphological Processing

![alt text](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/Images/5.png)

## Feature extraction
Get object contours with Canny operator and then calculate size and perimeter information. Also, extract color (i.e. BGR) information of objects. 

![alt text](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/Images/6.PNG)

## Build dataset
Took 40 images for each kind of fruit (6*40=240 images in total), and calculated color (RGB), size, perimeter and radian information of fruit in every image.

![alt text](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/Images/7.png)

## Interactive Interface 

![alt text](https://github.com/Lucas-ZhipengLiu/Fruits-Categorization-with-SVM-/blob/master/Images/10.PNG)
