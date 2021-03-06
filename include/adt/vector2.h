#ifndef VECTOR2_H_
#define VECTOR2_H_

//Structure Definitions//
struct _vector2i{
	int x;
	int y;
};

struct _vector2u{
	unsigned int x;
	unsigned int y;
};
struct _vector2f{
	float x;
	float y;
};

struct _vector2c{
	char x;
	char y;
};

struct _vector2g{
	void *x;
	void *y;
};
//Typedef structures for show//
typedef struct _vector2i Clim_vector2i;
typedef struct _vector2u Clim_vector2u;
typedef struct _vector2f Clim_vector2f;
typedef struct _vector2c Clim_vector2c;
typedef struct _vector2g Clim_vector2g;

//MallocFunctions//
Clim_vector2i *mallocVec2i(int ox, int oy);
Clim_vector2u *mallocVec2u(unsigned int ox, unsigned int oy);
Clim_vector2f *mallocVec2f(float ox,float oy);
Clim_vector2c *mallocVec2c(char ox,char oy);
Clim_vector2g *mallocVec2g(void *ox, void *oy);

//Addition functions//
Clim_vector2i *addVec2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *addVec2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *addVec2f(Clim_vector2f *a,Clim_vector2f *b);

//Subtractive functions//
Clim_vector2i *addVec2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *addVec2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *addVec2f(Clim_vector2f *a,Clim_vector2f *b);

//Multiplicative functions//
Clim_vector2i *multiplyVec2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *multiplyVec2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *multiplyVec2f(Clim_vector2f *a,Clim_vector2f *b);

//Division functions//
//Caution, all disolve into a Vector2f, since dividing usually turns into decimal places.//
Clim_vector2f *divideVec2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2f *divideVec2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *divideVec2f(Clim_vector2f *a,Clim_vector2f *b);

//length functions//
//All disolve into a float//
float magnitude2i(Clim_vector2i a);
float magnitude2u(Clim_vector2u a);
float magnitude2f(Clim_vector2f a);

//lerp functions//
Clim_vector2i *lerp2i(Clim_vector2i *a, Clim_vector2i *b, float percent);
Clim_vector2f *lerp2f(Clim_vector2f *a, Clim_vector2f *b, float percent);


//Min/Max Functions//

Clim_vector2i *Max2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *Max2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *Max2f(Clim_vector2f *a,Clim_vector2f *b);
Clim_vector2i *Min2i(Clim_vector2i *a,Clim_vector2i *b);
Clim_vector2u *Min2u(Clim_vector2u *a,Clim_vector2u *b);
Clim_vector2f *Min2f(Clim_vector2f *a,Clim_vector2f *b);



#endif
