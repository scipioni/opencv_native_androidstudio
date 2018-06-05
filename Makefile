/opt/OpenCV-android-sdk:
	bash -c "wget -qO- -O /tmp/opencv.zip  https://downloads.sourceforge.net/project/opencvlibrary/opencv-android/3.4.1/opencv-3.4.1-android-sdk.zip && unzip -d /opt/ /tmp/opencv.zip"

app/src/main/jniLibs:
	ln -s /opt/OpenCV-android-sdk/sdk/native/libs app/src/main/jniLibs 

bootstrap: /opt/OpenCV-android-sdk app/src/main/jniLibs
