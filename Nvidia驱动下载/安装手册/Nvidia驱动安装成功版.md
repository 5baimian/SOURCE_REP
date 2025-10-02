

# nvidia驱动下载与安装

```
去Nvidai官网下载这个驱动
Linux x64 (AMD64/EM64T) Display Driver 580.95.05 | Linux 64-bit

//安装依赖组件
sudo apt install -y dkms gcc g++

//禁用nouveau驱动
sudo nano /etc/modprobe.d/blacklist.conf
//最后添加
blacklist nouveau
blacklist lbm-nouveau
options nouveau modeset=0
alias nouveau off
alias lbm-nouveau off


//重建 initramfs image
echo options nouveau modeset=0|sudo tee -a /etc/modprobe.d/nouveau-kms.conf 
sudo update-initramfs -u

//安装依赖
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt install -y gcc-12 g++-12
//以下两句并未执行
sudo update-alternatives-install/usr/bin/gcc gcc/usr/bin/gcc-12 120 --slave/usr/bin/g++ g++/usr/bin/g++-12              //
sudo update-alternatives--config gcc //
//重启
reboot

//安装刚刚下载的驱动
cd Download
sudo bash ./NVIDIA-Linux-x86_64-580.95.05.run
//安装过程中的选项，除此之外选ok即可
mit/
continue installation

```

# 重装记录：
```
1、开始外接显示屏发现不显示，查找到是驱动的问题，要安装nvidia驱动

2、默认安装的是开源的nouveau驱动，更换成580专有之后出现黑屏现象，网上说黑屏时按住ctrl+alt f1-f6进入tty，我照做发现没有反映，第一次重装ubuntu,第二次重装时发现进入bios将独显设置为混显可以进入ubuntu,黑屏现象消失，但此时的驱动变成集显，还是没有加载出5060
3、使用自动安装，安装的是580版的驱动，但是装后不显示显卡，nvidia-smi显示无设备，独显模式下会出现黑屏现象
4、换成570--open那一版可以显示显卡，但是安装之后就不显示有线连接，无法上网
5、linux的内和版本使用的是40版本，也安装过80版本，做过多内核启动顺序的调整，但没有成功，现在选择在默认的内核版本进行安装nvidia驱动


```
