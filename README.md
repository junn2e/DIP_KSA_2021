# DIP_KSA_2021
> # MFC를 이용한 영상처리 실습
> > ## DownSampling
> > ![image](https://user-images.githubusercontent.com/82637549/123509967-aa532d80-d6b3-11eb-835d-c618c3140444.png)
> > ## UpSampling
> > ![image](https://user-images.githubusercontent.com/82637549/123510031-28173900-d6b4-11eb-892a-34deb3e83ef4.png)
> > ## Quantization
> > ![image](https://user-images.githubusercontent.com/82637549/123510075-69a7e400-d6b4-11eb-86c2-56f4416201f9.png)
> > ## Constant 연산 (Clapping 기법)
> > ![image](https://user-images.githubusercontent.com/82637549/123510330-ce177300-d6b5-11eb-95cc-d0ce94a3697b.png)
> > 
> > a + 100 , a - 100 , a * 2 , a / 2 (a = 화소값)
> > ## AND, OR, XOR Operate
> > ![image](https://user-images.githubusercontent.com/82637549/123510440-8218fe00-d6b6-11eb-86e8-584117bc1e43.png)
> > 
> > a & 128, a | 128, a ⊕ 128 (a = 화소값)
> > ## Negative Trasnform
> > > Output(q) = 255 - Input(p)
> > > 
> > ![image](https://user-images.githubusercontent.com/82637549/123510518-0bc8cb80-d6b7-11eb-85b0-f83af1e73efb.png)
> > ## Gamma Correction
> > > Output(q) = Input(p)(1/γ)
> > > 감마 값이 1보다 작으면 영상이 밝아지고 1보다 크면 영상이 어두워짐
> > > 
> > ![image](https://user-images.githubusercontent.com/82637549/123510638-a75a3c00-d6b7-11eb-9fef-b9450f40d71d.png)
> > 
> > γ = 0.85

