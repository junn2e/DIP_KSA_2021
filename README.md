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
> > ## Binarization
> > ![image](https://user-images.githubusercontent.com/82637549/123510798-6878b600-d6b8-11eb-9a96-04274d28277a.png)
> > ## Stress Transform
> > ![image](https://user-images.githubusercontent.com/82637549/123510837-a4138000-d6b8-11eb-802e-f7f4a3d1896d.png)
> > 
> > ![image](https://user-images.githubusercontent.com/82637549/123510898-0b313480-d6b9-11eb-927c-cf7c0fa34feb.png)
> > ## Histogram Stretching
> > > 기본 명암 대비
> > > new pixel = (old pixel - low) / (high - low) * 255
> > > 
> > ![image](https://user-images.githubusercontent.com/82637549/123792883-159f3880-d91c-11eb-8b52-e89f0972c74b.png)
> > ![image](https://user-images.githubusercontent.com/82637549/123792357-7c702200-d91b-11eb-9903-2b27c9d4d9de.png)
> > ## End-in-search
> > > 일정한 양의 화소를 흰색이나 검정색으로 지정하여 히스토그램의 분포를 좀 더 균일하게 만든다
> > > ![image](https://user-images.githubusercontent.com/82637549/123793610-e0dfb100-d91c-11eb-9b42-b5ab15630fe3.png)

> > ![image](https://user-images.githubusercontent.com/82637549/123793508-bc83d480-d91c-11eb-9f60-8952e64874f6.png)

