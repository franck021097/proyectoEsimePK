/*
este programa es un juego de pokemones creado en c++ con programacion orientada a objetos
     ***********************************
     *castro alcantar francisco javier *
     *Instituto Politecnico Nacional   *
     *ESIME Zacatenco                  *
     *ICE                              *
     *Programacion Orientada a Objetos *
     ***********************************
*/

#include <iostream>
#include <allegro.h>

//clase inicio
class inicio
{
  protected:
            bool salir=false;
            bool Me=false;
            bool A;
            bool fin=false;
            int El;
            bool W=false;
            bool sal=false;
            bool d=false;
            int g=0;
            int hh;
            int SA=0;
            SAMPLE *sonido1;
            SAMPLE *com;
            SAMPLE *pr;
            SAMPLE *Go;
            SAMPLE *Grr;
            SAMPLE *musica1;
            SAMPLE *ele;
            SAMPLE *men;
            SAMPLE *boss;
            SAMPLE *Ch;
            BITMAP *ban;
            BITMAP *Pp;
            BITMAP *CooN;
            BITMAP *Bb;
            BITMAP *Rr;
            BITMAP *Tt;
            BITMAP *PEv;
            BITMAP *REv;
            BITMAP *BEv;
            BITMAP *TEv;
            BITMAP *signo;
            BITMAP *torti;
            BITMAP *Roo;
            BITMAP *bulbar;
            BITMAP *J1;
            BITMAP *J2;
            BITMAP *N1;
            BITMAP *N1E;
            BITMAP *N2;
            BITMAP *N2E;
            BITMAP *N3;
            BITMAP *N3E;
            BITMAP *picap;
            BITMAP *fc;
            BITMAP *zona;
            BITMAP *p;
            BITMAP *galeria;
            BITMAP *salud;
            BITMAP *Dent;
            BITMAP *Dcont;
            BITMAP *P1;
            BITMAP *P2;
            BITMAP *P3;
            BITMAP *G1;
            BITMAP *G2;
            BITMAP *G3;
            BITMAP *D1;
            BITMAP *D2;
            BITMAP *D3;
            BITMAP *D4;
            BITMAP *D5;
            BITMAP *D6;
            BITMAP *D7;
            BITMAP *D8;
            BITMAP *D9;
            BITMAP *D10;
            BITMAP *D11;
            BITMAP *Coo;
            BITMAP *jubeta;
            BITMAP *contbeta;
            BITMAP *brocoli;
            BITMAP *poder;
            BITMAP *pelos;
            BITMAP *bur;
            BITMAP *aj;
            BITMAP *ni;
            BITMAP *Es;
            BITMAP *contrincante;
            BITMAP *buffer;
            BITMAP *entrenador;
            BITMAP *entrenadorf;
            BITMAP *entrenador2;
            BITMAP *E;
            BITMAP *E1;
            BITMAP *E2;
            BITMAP *E3;
            BITMAP *E4;
            BITMAP *cv;
            BITMAP *c1;
            BITMAP *fondo1;
            BITMAP *Ver;
            BITMAP *b1;
            BITMAP *fondo2;
            BITMAP *fondo3;
            BITMAP *cursor;
            BITMAP *t;
            BITMAP *rojo;
            BITMAP *e;
            BITMAP *fondo;
            BITMAP *h;
            BITMAP *dos;
            BITMAP *B;
            BITMAP *IPN;
            BITMAP *P;
            BITMAP *C;
            BITMAP *z1;
            BITMAP *z2;
            BITMAP *z3;

    public:
            void iniciar();
            void cargar_imagenes();
            void audio();
            int pausa();
};

//funciones de inicio

void inicio::audio()
{
// ajustamos el volumen
	set_volume(200, 200);
// definimos el audio del programa
// es para reproducir archivos MIDI play_midi(musica1,0);
//es para reproducir archivos WAV play_sample(sonido1,200,150,1000,0);
	musica1  = load_wav("musica2.wav");
	boss = load_wav("este.wav");
	com = load_wav("comenzar.wav");
	pr=load_wav("pok.wav");
	Ch = load_wav("ch.wav");
	Grr = load_wav("pelea.wav");
	men = load_wav("iniciar.wav");
	ele=load_wav("selec.wav");
	Go=load_wav("eligent.wav");
	sonido1=load_wav("tam.wav");
}

void inicio::iniciar()
{
      allegro_init();//INICIA ALLEGRO
      install_mouse();//inicia funciones del mouse
      install_keyboard();//INICIA FUNCION DE TECLAS
      install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL);//inicializa la funcion de el audio
      set_color_depth(32);
      set_gfx_mode(GFX_AUTODETECT_WINDOWED,500,500,0,0);//DIMENCIONES DE LA PANTALLA DE ALLEGRO
      set_window_title("POKEMON");//le pone titulo a la ventana de allergo
      cargar_imagenes();//llama a la funcion que carga las imagenes
      audio();//llama a la funcion que carga los audios
}

void inicio::cargar_imagenes()
{
    buffer= create_bitmap(500,500);//CREA UN MAPA DE BIT (PIXELES) DE LAS DIMENCIONES DE LA PANTALLA
    entrenadorf= load_bmp("1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    entrenador2= load_bitmap("G.bmp",NULL);//carga la imagen que se ocupara en esta variable
    pelos=load_bitmap("pelos.bmp",NULL);//carga la imagen que se ocupara en esta variable
    PEv=load_bitmap("PEv.bmp",NULL);//carga la imagen que se ocupara en esta variable
    REv=load_bitmap("REv.bmp",NULL);//carga la imagen que se ocupara en esta variable
    BEv=load_bitmap("BEv.bmp",NULL);//carga la imagen que se ocupara en esta variable
    TEv=load_bitmap("TEv.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Pp=load_bitmap("Pp.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Bb=load_bitmap("Bb.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Rr=load_bitmap("Rr.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Tt=load_bitmap("Tt.bmp",NULL);//carga la imagen que se ocupara en esta variable
    fondo1 = load_bitmap("fondo1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    fondo2 = load_bitmap("fondo2.bmp",NULL);//carga la imagen que se ocupara en esta variable
    fondo3 = load_bitmap("fondo3.bmp",NULL);//carga la imagen que se ocupara en esta variable
    salud=load_bitmap("Vid.bmp",NULL);//carga la imagen que se ocupara en esta variable
    picap=load_bitmap("picap.bmp",NULL);//carga la imagen que se ocupara en esta variable
    signo=load_bitmap("signo.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Roo=load_bitmap("R.bmp",NULL);//carga la imagen que se ocupara en esta variable
    CooN=load_bitmap("CooN.bmp",NULL);//carga la imagen que se ocupara en esta variable
    torti=load_bitmap("torti.bmp",NULL);//carga la imagen que se ocupara en esta variable
    bulbar=load_bitmap("pulpi.bmp",NULL);//carga la imagen que se ocupara en esta variable
    P1=load_bitmap("P1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    P2=load_bitmap("P2.bmp",NULL);//carga la imagen que se ocupara en esta variable
    P3=load_bitmap("P3.bmp",NULL);//carga la imagen que se ocupara en esta variable
    G1=load_bitmap("G1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    G2=load_bitmap("G2.bmp",NULL);//carga la imagen que se ocupara en esta variable
    G3=load_bitmap("G3.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D1=load_bitmap("d1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D2=load_bitmap("d2.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D3=load_bitmap("d3.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D4=load_bitmap("d4.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D5=load_bitmap("d5.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D6=load_bitmap("d6.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D7=load_bitmap("d7.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D8=load_bitmap("d8.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D9=load_bitmap("d9.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D10=load_bitmap("d10.bmp",NULL);//carga la imagen que se ocupara en esta variable
    D11=load_bitmap("d11.bmp",NULL);//carga la imagen que se ocupara en esta variable
    ban=load_bitmap("baño.bmp",NULL);//carga la imagen que se ocupara en esta variable
    ni = load_bitmap("chica.bmp",NULL);//carga la imagen que se ocupara en esta variable
    brocoli = load_bitmap("brocoli.bmp",NULL);//carga la imagen que se ocupara en esta variable
    poder = load_bitmap("poder.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Ver = load_bitmap("verde.bmp",NULL);//carga la imagen que se ocupara en esta variable
    cv = load_bitmap("cv.bmp",NULL);//carga la imagen que se ocupara en esta variable
    Es = load_bitmap("Es.bmp",NULL);//carga la imagen que se ocupara en esta variable
    p = load_bitmap("Pica.bmp",NULL);//carga la imagen que se ocupara en esta variable
    aj = load_bitmap("ajustes.bmp",NULL);//carga la imagen que se ocupara en esta variable
    rojo = load_bitmap("rojo.bmp",NULL);//carga la imagen que se ocupara en esta variable
    bur = load_bitmap("burba.bmp",NULL);//carga la imagen que se ocupara en esta variable
    cursor = load_bitmap("cur.bmp",NULL);//carga la imagen que se ocupara en esta variable
    c1 = load_bitmap("casa1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    t=load_bitmap("t.bmp",NULL);//carga la imagen que se ocupara en esta variable
    e=load_bitmap("e.bmp",NULL);//carga la imagen que se ocupara en esta variable
    E=load_bitmap("Et.bmp",NULL);//carga la imagen que se ocupara en esta variable
    E1=load_bitmap("11.bmp",NULL);//carga la imagen que se ocupara en esta variable
    E2=load_bitmap("12.bmp",NULL);//carga la imagen que se ocupara en esta variable
    E3=load_bitmap("13.bmp",NULL);//carga la imagen que se ocupara en esta variable
    E4=load_bitmap("14.bmp",NULL);//carga la imagen que se ocupara en esta variable
    h=load_bitmap("h.bmp",NULL);//carga la imagen que se ocupara en esta variable
    jubeta=load_bitmap("jubeta.bmp",NULL);//carga la imagen que se ocupara en esta variable
    contbeta=load_bitmap("contbeta.bmp",NULL);//carga la imagen que se ocupara en esta variable
    dos=load_bitmap("22.bmp",NULL);//carga la imagen que se ocupara en esta variable
    B=load_bitmap("blanco.bmp",NULL);//carga la imagen que se ocupara en esta variable
    IPN=load_bitmap("ipn.bmp",NULL);//carga la imagen que se ocupara en esta variable
    P=load_bitmap("portada.bmp",NULL);//carga la imagen que se ocupara en esta variable
    C=load_bitmap("casa.bmp",NULL);//carga la imagen que se ocupara en esta variable
    fc=load_bitmap("fcasa.bmp",NULL);//carga la imagen que se ocupara en esta variable
    fondo=load_bitmap("bosq.bmp",NULL);//carga la imagen que se ocupara en esta variable
    b1=load_bitmap("bosq1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    zona=load_bitmap("Es1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    contrincante=load_bitmap("Coo.bmp",NULL);//carga la imagen que se ocupara en esta variable
    galeria=load_bitmap("galeria.bmp",NULL);//carga la imagen que se ocupara en esta variable
    z1=load_bitmap("z1.bmp",NULL);//carga la imagen que se ocupara en esta variable
    z2=load_bitmap("z2.bmp",NULL);//carga la imagen que se ocupara en esta variable
    z3=load_bitmap("z3.bmp",NULL);//carga la imagen que se ocupara en esta variable
}

int inicio::pausa()
{
 A=false;
    while(!A)
   {

blit(aj,screen,0,0,80,80,380,380);

    if (key[KEY_1])
   {
     A=true;
   }

   if(key[KEY_2])
   {
       A=true;
       g=1;
   }


   if(key[KEY_3])
   {
       A=true;
       salir=true;
       W=true;
       SA=1;
   }

   if(key[KEY_4])
   {
       A=true;
       salir=true;
       Me=true;
       W=true;
       SA=1;
   }

}
}

//fin de funciones de la clase de inicio

//clases escenarios

class entrenadores :public inicio
{
protected:


public:
       int selecionar_entrenador();
       int todos();


};

int entrenadores::selecionar_entrenador()
{

if(El==1)
{
    entrenador=ni;
}

else if(El==2)
{
    entrenador=pelos;
}

else if(El==3)
{
    entrenador=entrenador2;
}

else if(El==4)
{
    entrenador=entrenadorf;
}

}

int entrenadores::todos()
{
     while(!sal)
    {
         if(mouse_x >120 && mouse_x < 200 && mouse_y > 200 && mouse_y < 320 )
              {
                  blit(E1,buffer,0,0,0,0,500,500);
                  if(mouse_b &1){
                        play_sample(Go,200,150,1000,0);
                        El=1;
                        sal = true;
                        rest(500);

                                }
                }
         else if(mouse_x >191 && mouse_x < 270 && mouse_y > 200 && mouse_y < 320 )
              {
                  blit(E2,buffer,0,0,0,0,500,500);
                  if(mouse_b &1){
                        play_sample(Go,200,150,1000,0);
                        El=2;
                        sal = true;
                        rest(500);
                  }
              }
        else if(mouse_x >271 && mouse_x < 340 && mouse_y > 200 && mouse_y < 320 )
              {
                  blit(E3,buffer,0,0,0,0,500,500);
                  if(mouse_b &1){
                        play_sample(Go,200,150,1000,0);
                        El=3;
                        sal = true;
                        rest(500);
                  }
              }

         else if(mouse_x >345 && mouse_x < 420 && mouse_y > 200 && mouse_y < 320 )
              {
                  blit(E4,buffer,0,0,0,0,500,500);
                  if(mouse_b &1){
                        play_sample(Go,200,150,1000,0);
                        El=4;
                        sal = true;
                        rest(500);

                  }
              }
                          else blit(E,buffer,0,0,0,0,500,500);
                          masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,50,50);
                          blit(buffer,screen,0,0,0,0,500,500);
                          rest(50);

          if ( key[KEY_ESC] ) salir = true;

            }

}

//fin de  funciones clase entrenadores

class pokemon: public entrenadores
{
protected:
    bool U=false;
    bool Fol=false;
    int turno;
    int Vt=20;
    int dx;
    int dy;
    int Ep;
    int Ev=0;
    int ex;
    int ey;
    int x=0;
    int y=0;
    int xx=130;
    int yy=170;
    int dan=20;
    int cx;
    int cy;
    int des=4;
    int dir;
    int Dient;
    bool Gex=false;
    bool Gcont=false;
    int Dc;
    int kx;
    int ky;
    int anim;
public:
    int todo_los_pokemones();
    int ganador();
    int pelea();
    int vida();
    int m();
    int pl(int x1, int y1);
    int cr();
    int evolucion;
    int poderes();

};

//funciones de la clase pokemones
int pokemon::todo_los_pokemones()
{
    bool G=false;
    masked_blit(galeria,screen,0,0,100,100,500,500);
    while(!G)
    {
        if(El==1)N1=bulbar;
        if(El==2)N1=torti;
        if(El==3)N1=picap;
        if(El==4)N1=Roo;
N1E=signo;
if(Ev>1)
N2=CooN;
else
{
N2=signo;
}
N2E=signo;
N3=signo;
N3E=signo;

    masked_blit(N1,screen,0,0,140,190,50,50);
    masked_blit(N1E,screen,0,0,310,190,50,50);
    masked_blit(N2,screen,0,0,140,250,50,50);
    masked_blit(N2E,screen,0,0,310,250,50,50);
    masked_blit(N3,screen,0,0,140,310,50,50);
    masked_blit(N3E,screen,0,0,310,310,50,50);



     /*if(mouse_x >60 && mouse_x < 430 && mouse_y > 239 && mouse_y < 295 )
              {
                      blit(galeria,screen,0,0,100,100,500,500);
                          if(mouse_b &1){
                                       stop_sample( men );
                                       play_sample(com,200,150,1000,0);
                                        mcasa();
                                        }
              }
    */



    if(key[KEY_Z])
    {
        G=true;
        g=0;
    }
    }
}

int pokemon::ganador()
{


    if(Ep==2)
    {
        while(!fin)
        {
        masked_blit(P1, screen ,0,0,100,100, 250,250);
        masked_blit(P2, screen ,0,0,100,100, 250,250);
        masked_blit(P3, screen ,0,0,100,100, 250,250);
        if(key[KEY_SPACE])
        {
            A=true;
       salir=true;
       Me=true;
            fin=true;
        }
        }
    }
    if(Ep==1)
    {
        while(!fin)
        {
        masked_blit(G1, screen ,0,0,100,100, 250,250);
        masked_blit(G2, screen ,0,0,100,100, 250,250);
        masked_blit(G3, screen ,0,0,100,100, 250,250);
        if(key[KEY_SPACE])
        {
           // A=true;

            fin=true;
        }
        }
    }

}

int pokemon::m()
{

          if ( key[KEY_E] )
          {
               yy-=des;
               dir=3;
               Dc=1;
          }
          if ( key[KEY_C] )
          {
               yy+=des;
               dir=0;
               Dc=3;
          }
          if ( key[KEY_S] )
          {
               xx-=des;
               dir=1;
               Dc=4;
          }
          if ( key[KEY_F] )
          {
               xx+=des;
               dir=2;
               Dc=2;
          }
           if ( cx != xx || cy != cy )
         {
              // entra si a cambiado alguna de las variables x,y
              anim++;
              if ( anim > 2 ) anim = 0;
         }
          // limites
          if ( xx < 0 ) xx = 0;
          if ( xx > 450 ) xx = 450;
          if ( yy < 0 ) yy = 0;
          if ( yy > 450 ) yy = 450;
           cx=xx;
           cy=yy;
           blit(buffer, screen, 0, 0, 0, 0, 500, 500);//pinta el color que hay en el buffer en la pantalla

}

int pokemon::pl(int x2, int y2)
{
    xx=x2;
    yy=y2;
}

int pokemon::cr()
{
    dx=xx;
    dy=yy;
         // teclas control usuario
    m();
    int ox=xx;
    int oy=yy;


    // comprobar si colisiona con el mapa
    for ( int cl=0; cl  < 50; cl++)
    {
        for (int cn=0; cn < 50; cn++)
        {
            if ( getpixel( Es, ox+cl, oy+cn) == 0xff0000 )
                {
                 // play_sample(Ch,200,150,1000,0);

                    Fol = true;
                    cl = 50;
                    cn = 50;
            if(!Fol)pl(cx,cy);
            if (Fol)pl(dx,dy);
                }
                if ( getpixel( Es, ox+cl, oy+cn) == 0x66ff00)
                {

                    rectfill( Es, dx, dy, dx+20, dy+20, 0x000000);
                    rectfill( Es, ex, ey, ex+20, ey+20, 0x000000);
                    play_sample(Ch,200,150,1000,0);
                    pl(dx,dy);

                }

            }
         }

          if ( xx < 0 ) xx = 0;
          if ( xx > 450 ) xx = 450;
          if ( yy < 0 ) yy = 0;
          if ( yy > 450 ) yy = 450;

}

int pokemon::pelea()
{

//masked_blit(contrincante, buffer, anim*50 ,dir*50,xx,yy, 50,50);
cr();
    }


int pokemon::vida()
{

if(dan==19)
{
    Dent=D1;
}
if(dan==17)
{
    Dent=D2;
}
if(dan==15)
{
    Dent=D3;
}
if(dan==13)
{
    Dent=D4;
}
if(dan==11)
{
    Dent=D5;
}
if(dan==9)
{
    Dent=D6;
}
if(dan==7)
{
    Dent=D7;
}
  if(dan==5)
{
    Dent=D8;
}
if(dan==3)
{
    Dent=D9;
}
if(dan==2)
{
    Dent=D10;
}
if(dan==1)
{
    Dent=D11;
    ganador();
}
    if(Vt==19)
    {
    Dcont=D1;
    }
    if(Vt==17)
   {
    Dcont=D2;
   }
    if(Vt==15)
    {
    Dcont=D3;
    }
    if(Vt==13)
    {
    Dcont=D4;
    }
    if(Vt==11)
    {
    Dcont=D5;
    }
    if(Vt==9)
    {
    Dcont=D6;
    }
    if(Vt==7)
    {
    Dcont=D7;
    }
    if(Vt==5)
    {
    Dcont=D8;
    }
    if(Vt==3)
    {
    Dcont=D9;
    }
  if(Vt==2)
    {
    Dcont=D10;
    }
    if(Vt==1)
    {
    Dcont=D11;
    SA=1;
    fin=false;
    Ev++;
    ganador();
    }
   }


int pokemon::poderes()
{

if(Ep==1)
    {
        kx=x;
        ky=y;
    }

    if(Ep==2)
    {
    kx=xx;
    ky=yy;
    }
        bool pod=false;
        Gex=false;
        Gcont=false;
    masked_blit(poder, screen ,0,0,kx,ky, 50,50);
  //  blit(buffer, screen, 0, 0, 0,0, 500, 500);
    while(!pod)
    {

if(Ep==1)
{
if(Dient==1)
{
        for(int b=0; b<200; b++)
        {
            ky--;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);
            //blit(buffer, screen, 0, 0, 0, 0, 25,25 );
                            //blit(B,screen,0,0,0,0,500,500);
                            //blit(dos,screen,0,0,x,200,500,500);
for ( int cl=0; cl  < 50; cl++)
    {
        for (int cn=0; cn < 50; cn++)
        {
        if(ky<0 ||  (getpixel( Es, kx+cl, ky+cn) == 0x00CC99) || (getpixel( Es, kx+cl, ky+cn) == 0xff0000) )
            {
             if((getpixel( Es, kx+cl, ky+cn) == 0x00CC99))Gex=true;
                b=200;
                pod=true;
            }
        }
}
}
}
if(Dient==2)
{
       for(int b=0; b<200; b++)
        {
            kx++;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);
            //blit(buffer, screen, 0, 0, 0, 0, 25,25 );
                            //blit(B,screen,0,0,0,0,500,500);
                            //blit(dos,screen,0,0,x,200,500,500);

            for ( int cl=0; cl  < 50; cl++)
    {
        for (int cn=0; cn < 50; cn++)
        {
            if(kx>500 ||  (getpixel( Es, kx+cl, ky+cn) == 0x00CC99)|| ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
            {
               if((getpixel( Es, kx+cl, ky+cn) == 0x00CC99))Gex=true;
                b=200;
                pod=true;
            }
        }
}
        }
        }

if(Dient==3)
{
        for(int b=0; b<200; b++)
        {
            ky++;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);
            //blit(buffer, screen, 0, 0, 0, 0, 25,25 );
                            //blit(B,screen,0,0,0,0,500,500);
                            //blit(dos,screen,0,0,x,200,500,500);

            for ( int cl=0; cl  < 50; cl++)
    {
        for (int cn=0; cn < 50; cn++)
        {
            if(ky>500 ||  getpixel( Es, kx+cl, ky+cn) == 0x00CC99 || ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
            {
                if((getpixel( Es, kx+cl, ky+cn) == 0x00CC99))Gex=true;
                b=200;
                pod=true;
            }
        }
}
        }
}
if(Dient==4)
{
        for(int b=0; b<200; b++)
        {
            kx--;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);
            //blit(buffer, screen, 0, 0, 0, 0, 25,25 );
                            //blit(B,screen,0,0,0,0,500,500);
                            //blit(dos,screen,0,0,x,200,500,500);

for ( int cl=0; cl  < 50; cl++)
    {
        for (int cn=0; cn < 50; cn++)
        {
            if(kx<0 ||  getpixel( Es, kx+cl, ky+cn) == 0x00CC99 || ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
            {
               if((getpixel( Es, kx+cl, ky+cn) == 0x00CC99))Gex=true;
                b=200;
                pod=true;
            }
         }
     }
}
}
}



if(Ep==2)
{
if(Dc==1)
{
        for(int b=0; b<200; b++)
        {
            ky--;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);

           for ( int cl=0; cl  < 50; cl++)
          {
                for (int cn=0; cn < 50; cn++)
                {
                  if(ky<0 ||  (getpixel( Es, kx+cl, ky+cn) == 0x66ff00) || ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
                  {
                   if((getpixel( Es, kx+cl, ky+cn) == 0x66ff00))Gcont=true;
                    b=200;
                    pod=true;
                    }
                }
           }
        }
}

if(Dc==2)
{
       for(int b=0; b<200; b++)
        {
            kx++;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);

            for ( int cl=0; cl  < 50; cl++)
              {
               for (int cn=0; cn < 50; cn++)
                {
                if(kx>500 ||  (getpixel( Es, kx+cl, ky+cn) == 0x66ff00)|| ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
                 {
               if((getpixel( Es, kx+cl, ky+cn) == 0x66ff00))Gcont=true;
                b=200;
                pod=true;
                     }
                   }
              }
        }
}

if(Dc==3)
{
        for(int b=0; b<200; b++)
        {
            ky++;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);
            //blit(buffer, screen, 0, 0, 0, 0, 25,25 );
                            //blit(B,screen,0,0,0,0,500,500);
                            //blit(dos,screen,0,0,x,200,500,500);

            for ( int cl=0; cl  < 50; cl++)
              {
        for (int cn=0; cn < 50; cn++)
        {
            if(ky>500 ||  getpixel( Es, kx+cl, ky+cn) == 0x66ff00 || ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
            {
                if((getpixel( Es, kx+cl, ky+cn) == 0x66ff00))Gcont=true;
                b=200;
                pod=true;
            }
        }
}
        }
}
if(Dc==4)
{
        for(int b=0; b<200; b++)
        {
            kx--;
            blit(poder, screen, 0 ,0,kx,ky, 50,50);
            //blit(buffer, screen, 0, 0, 0, 0, 25,25 );
                            //blit(B,screen,0,0,0,0,500,500);
                            //blit(dos,screen,0,0,x,200,500,500);

for ( int cl=0; cl  < 50; cl++)
    {
        for (int cn=0; cn < 50; cn++)
        {
            if(kx<0 ||  getpixel( Es, kx+cl, ky+cn) == 0x66ff00|| ((getpixel( Es, kx+cl, ky+cn) == 0xff0000)))
            {
               if((getpixel( Es, kx+cl, ky+cn) == 0x66ff00))Gcont=true;
                b=200;
                pod=true;
            }
         }
     }
}
}

}
pod=true;
}

if(Gex)
{
Vt--;
}
else if(Gcont)
{
dan--;
}
}


////////////////////////////
class entrenador1:public pokemon
{
protected:
    int px,py;
    int ax=10;
    int ay=10;
    int desplazamiento_map_x=0;
    int desplazamiento_map_y=0;
    bool desplaza = false;
    int direccion=0;
    int animacion=0;
    int desplazamiento=4;
    bool choca = false;

public:
    void introduccion();
    void menu1();
    void mov();
    void mcasa();
    void mapa();
    void bosque();
    void ciudad();
    void chocar();
    void escenario();
    void midi_pause();
    int getx(){return x;};
    int gety(){return y;};
    int selector();
    int posicion(int x1, int y1);
    int ajustes();
    };

//funciones de la clase entrenador
void entrenador1::escenario()
{


  //if(hh==1)W=false;
    stop_sample(boss);
x=400;
y=300;
SA=0;
    Dcont=salud;
    Dent=salud;
    clear_to_color(buffer, 0x000000);//LIMPIA EL COLOR DEL BUFFER Y DA NUEVO COLOR
   Vt=20;
   dan=20;
    while(!salir)
    {
        J2=CooN;
        if(El==1)
        {
        entrenador=brocoli;
        J1=bulbar;

        if(Ev>1)
        {
           entrenador=BEv;
           J1=Bb;
        }
        }
         else if(El==2)
         {
             entrenador=bur;
             J1=torti;
        if(Ev>1)
        {
           entrenador=TEv;
           J1=Tt;
        }
         }
       else if(El==3)
        {
        entrenador=p;
        J1=picap;
        if(Ev>1)
        {
          entrenador=PEv;
          J1=Pp;
        }
         }
         else if (El==4)
         {
             entrenador=rojo;
             J1=Roo;
         if(Ev>1)
        {
            entrenador=REv;
        }
            J1=Rr;
         }

hh=0;
if(key[KEY_SPACE]) pausa();
if(g==1)todo_los_pokemones();

if(key[KEY_D])
{
    Ep=2;
    poderes();
}

if(key[KEY_M])
{
    Ep=1;
    poderes();
}

  //if ( ax == x && ay == y )
//         {


     blit( Es, buffer, 0,0, 0, 0, 500,500);
      blit( zona, buffer, 0,0, 0, 0, 500,500);
     vida();
     blit( Dcont, buffer, 0,0, 0, 0, 200,25);
     blit( Dent, buffer, 0,0, 300, 0, 200,25);


    rectfill( Es, dx, dy, dx+30, dy+30, 0x000000);
    rectfill( Es, ex, ey, ex+50, ey+50, 0x000000);

    rectfill( Es, x, y, x+50, y+50, 0x66ff00);
    rectfill( Es, xx, yy, xx+30, yy+30, 0x00CC99);

    masked_blit(J1, buffer, 0 ,0,450,30, 50,50);
    masked_blit(J2, buffer, 0 ,0,0,30, 50,50);

    masked_blit(contrincante, buffer, anim*50 ,dir*50,xx,yy, 50,50);
    masked_blit(entrenador, buffer, animacion*50 ,direccion*50,x,y, 50,50);



    ex=x;
    ey=y;

         // teclas control usuario
mov();
pelea();
    int px=x;
    int py=y;

    // comprobar si colisiona con el mapa
    for ( int ci=0; ci  < 50; ci++)
    {
        for (int cj=0; cj < 50; cj++)
        {
            if ( getpixel( Es, px+ci, py+cj) == 0xff0000 )
                {
                 // play_sample(Ch,200,150,1000,0);

                    choca = true;
                    ci = 50;
                    cj = 50;
            if(!choca) posicion(ax,ay);
            if (choca)posicion(ex,ey);

                }
                if ( getpixel( Es,px+ci, py+cj) == 0x00CC99 )
                {
                    posicion(ex,ey);
                    play_sample(Ch,200,150,1000,0);
                }

        }
    }



          // limites
          if ( x < 0 ) x = 0;
          if ( x > 450 ) x = 450;
          if ( y < 0 ) y = 0;
          if ( y > 450 ) y = 450;
            ax=x;
            ay=y;

     if ( key[KEY_N] || SA==1)
     {
//        selector();
stop_sample(Grr);
x=50;
y=380;
bosque();
        }
    }
    }

void entrenador1::mapa()
{

         int d = desplazamiento / 2;
         // controla el desplazamiento del mapa si esta en los bordes
         if ( ax < 60 && desplazamiento_map_x > 0 )
         {
              desplazamiento_map_x-=d;
              ax = getx();
              ay = gety();
              posicion(ax+d,ay);
         }
         if ( ay < 60 && desplazamiento_map_y > 0 )
         {
              desplazamiento_map_y-=d;
              ax = getx();
              ay = gety();
              posicion(ax,ay+d);

         }

         if ( ax >400  && desplazamiento_map_x < 300)
         {
              desplazamiento_map_x+=d;
              ax = getx();
              ay = gety();
             posicion(ax-d,ay);
              }
         if ( ay > 400 && desplazamiento_map_y < 100)
         {
              desplazamiento_map_y+=d;
              ax = getx();
              ay = gety();
              posicion(ax,ay-d);

         }


   }

void entrenador1::ciudad()
{
x=100;
y=230;
    desplazamiento_map_x=0;
    desplazamiento_map_y=0;
 selecionar_entrenador();

 while ( !salir )
 {
         mapa();
if(key[KEY_SPACE]) pausa();
    blit( cv, buffer, desplazamiento_map_x, desplazamiento_map_y,0,0,800,800);
    blit( Ver, buffer, desplazamiento_map_x, desplazamiento_map_y,0,0,800,800);
    masked_blit(entrenador, buffer, animacion*50 ,direccion*50,x,y, 50,50);
    int ex;
    int ey;
    ex=x;
    ey=y;
         // teclas control usuario
    mov();
    px=getx();
    px+=desplazamiento_map_x;
    py=gety();
    py+=desplazamiento_map_y;
    // comprobar si colisiona con el mapa

     for ( int ci=0; ci  < 50; ci++)
    {
              for (int cj=0; cj < 50; cj++)
             {
                    if ( getpixel( cv, px+ci, py+cj) == 0xff0000 )
                    {

                     // play_sample(Ch,200,150,1000,0);
                      choca = true;
                      ci = 50;
                      cj = 50;
                      if(!choca) posicion(ax,ay);
                      if (choca)posicion(ex,ey);
                    }

                     if ( getpixel( cv, px+ci, py+cj) == 0x66cc00 )
                     {
                         x=400;
                         y=250;
                        desplazamiento_map_x=300;
                        desplazamiento_map_y=0;
                         bosque();
                     }

                     if ( getpixel( cv, px+ci, py+cj) == 0x00ff00 )
                     {

                        stop_sample( boss );
                        mcasa();
                     }
                     if ( getpixel( cv, px+ci, py+cj) == 0x0000ff )
                     ciudad();



                }
      }


          if ( x < 0 ) x = 0;
          if ( x > 450 ) x=450 ;
          if ( y < 0 ) y = 0;
          if ( y > 450 ) y = 450;

          if ( key[KEY_ESC] ) salir = true;

    }
}

void entrenador1::bosque()
{

//selector();

play_sample(boss,200,150,1000,1);
selecionar_entrenador();

 while ( !salir )
 {

if(key[KEY_SPACE]) pausa();
    blit( fondo, buffer, desplazamiento_map_x, desplazamiento_map_y,0,0,800,800);
    masked_blit( b1, buffer, desplazamiento_map_x, desplazamiento_map_y,0,0,800,800);
    masked_blit(entrenador, buffer, animacion*50 ,direccion*50,x,y, 50,50);
    mapa();
    int ex;
    int ey;
    ex=x;
    ey=y;
         // teclas control usuario
    mov();

    px=getx();
    px+=desplazamiento_map_x;
    py=gety();
    py+=desplazamiento_map_y;
    // comprobar si colisiona con el mapa

     for ( int ci=0; ci  < 50; ci++)
    {
              for (int cj=0; cj < 50; cj++)
             {
                    if ( getpixel( fondo, px+ci, py+cj) == 0xff0000 )
                    {

                      //play_sample(Ch,200,150,1000,0);
                      choca = true;
                      ci = 50;
                      cj = 50;
                      if(!choca) posicion(ax,ay);
                      if (choca)posicion(ex,ey);
                    }

                     if ( getpixel( fondo, px+ci, py+cj) == 0x0099ff )
                     {

                        stop_sample( boss );
                            x=250;
                            y=250;
                        mcasa();
                     }
                     if ( getpixel( fondo, px+ci, py+cj) == 0x0033ff )
                     {

                     stop_sample( boss );
                     x=250;
                     y=250;

                     ciudad();
                     }
                     if ( getpixel( fondo, px+ci, py+cj) == 0x000066 )
                     {
                         play_sample(Grr,200,150,1000,1);

                         escenario();
                     }
                }
      }
          if ( x < 0 ) x = 0;
          if ( x > 450 ) x=450 ;
          if ( y < 0 ) y = 0;
          if ( y > 450 ) y = 450;

          if ( key[KEY_ESC] ) salir = true;

    }
}

void entrenador1::mov()
{

          if ( key[KEY_UP] )
          {
               y-=desplazamiento;
               direccion=3;
               Dient=1;
          }
          if ( key[KEY_DOWN] )
          {
               y+=desplazamiento;
               direccion=0;
               Dient=3;
          }
          if ( key[KEY_LEFT] )
          {
               x-=desplazamiento;
               direccion=1;
               Dient=4;
          }
          if ( key[KEY_RIGHT] )
          {
               x+=desplazamiento;
               direccion=2;
               Dient=2;
          }
           if ( ax != x || ay != y )
         {
              // entra si a cambiado alguna de las variables x,y
              animacion++;
              if ( animacion > 2 ) animacion = 0;
         }
          // limites
          /*if ( x < 0 ) x = 0;
          if ( x > 450 ) x = 450;
          if ( y < 0 ) y = 0;
          if ( y > 450 ) y = 450;
          */
//            masked_blit(entrenador, buffer, animacion*50 ,direccion*50,x,y, 50,50);
            blit(buffer, screen, 0, 0, 0, 0, 500, 500);//pinta el color que hay en el buffer en la pantalla

            ax=x;
            ay=y;
           rest(20);
}

int entrenador1::posicion(int x1, int y1)
{
    x=x1;
    y=y1;
}

void entrenador1::chocar()
{

    int ex;
    int ey;
    ex=x;
    ey=y;
         // teclas control usuario
mov();
    int px=x;
    int py=y;

    // comprobar si colisiona con el mapa
    for ( int ci=0; ci  < 50; ci++)
    {
        for (int cj=0; cj < 50; cj++)
        {
            if ( getpixel( C, px+ci, py+cj) == 0xff0000 )
                {
                 // play_sample(Ch,200,150,1000,0);

                    choca = true;
                    ci = 50;
                    cj = 50;
            if(!choca) posicion(ax,ay);
            if (choca)posicion(ex,ey);
                }

            if ( getpixel( C, px+ci, py+cj) == 0x00ff00 )
            {


stop_sample( musica1 );

                x=330;
                y=180;
    desplazamiento_map_x=0;
    desplazamiento_map_y=0;

     bosque();

            }
            if ( getpixel( C, px+ci, py+cj) == 0x99ffff )
            {
masked_blit( z1, screen, 0,0, 0, 0, 100,90);
masked_blit( z2, screen, 0,0, 0, 0, 100,90);
masked_blit( z3, screen, 0,0, 0, 0, 100,90);
            }
         }
     }
  }

void entrenador1::introduccion()
{
    bool Ee=false;
    while(!Ee)
    {
                      if(key[KEY_SPACE])Ee=true;

                      if(Ee==false)
                      {
                      play_sample(sonido1,200,150,1000,0);
                      blit(B,screen,0,0,0,0,500,500);

                     for(int ff=0; ff<1000; ff++)
                     {
                      blit(t,screen,0,0,0,100,500,500);
                     ff;
                     if(key[KEY_SPACE])
                     {
                        Ee=true;
                        ff=999;
                     }
                     }
                      }

                      if(key[KEY_SPACE])Ee=true;
                      if(Ee==false)
                      {
                      blit(B,screen,0,0,0,0,500,500);
                     for(int tt=0; tt<1000; tt++)
                     {
                      blit(e,screen,0,0,100,100,500,500);
                     tt;
                    if(key[KEY_SPACE])
                    {Ee=true;
                    tt=999;
                    }
                     }
                     // rest(3000);
                      }

                      if(key[KEY_SPACE])Ee=true;
                      if(Ee==false)
                      {
                      blit(B,screen,0,0,0,0,500,500);
                      for(int oo=0; oo<1000; oo++)
                      {
                      blit(IPN,screen,0,0,150,100,500,500);
                     // rest(4000);
                     oo;
                        if(key[KEY_SPACE])
                        {Ee=true;
                        oo=999;
                        }
                      }
                      }

                      if(key[KEY_SPACE])Ee=true;
                      if(Ee==false)
                      {
                      for(int x=0; x<100; x++)
                      {

                            blit(B,screen,0,0,0,0,500,500);
                            blit(dos,screen,0,0,x,200,500,500);
                            if(key[KEY_SPACE])
                            {
                                x=99;
                                Ee==true;
                            }
                            rest(50);

                        }
                      }


                      if(key[KEY_SPACE])Ee=true;
                      if(Ee==false)
                      {
                      for(int ii=0; ii<1000; ii++)
                      {
                      blit(h,screen,0,0,100,100,500,500);
                      ii;
                      if(key[KEY_SPACE])
                      {Ee=true;
                      ii=999;
                      }
                      }
                      }
                      //rest(3000);

                      if(key[KEY_SPACE])Ee=true;
                      if(Ee==false)
                      {
                      for(int ll=0; ll<2500; ll++)
                      {
                      blit(P,screen,0,0,0,0,500,500);
                      ll;
                        if(key[KEY_SPACE])
                        {Ee=true;
                        ll=2499;
                        }
                      }
                      }
                      //rest(3000);
                   Ee=true;
                   stop_sample(sonido1);
                   }
}


void entrenador1::mcasa( )
{

 clear_to_color(buffer, 0x000000);//LIMPIA EL COLOR DEL BUFFER Y DA NUEVO COLOR

play_sample(musica1,200,150,1000,1);
selecionar_entrenador();
   while ( !salir )
 {
masked_blit( c1, buffer, 0,0, 0, 0, 500,500);
masked_blit(entrenador, buffer, animacion*50 ,direccion*50,x,y, 50,50);
masked_blit( fc, buffer, 0,0, 0, 0, 500,500);

if(key[KEY_SPACE]) pausa();
    chocar();
          if ( x < 0 ) x = 0;
          if ( x > 450 ) x = 450;
          if ( y < 0 ) y = 0;
          if ( y > 450 ) y = 450;

if ( key[KEY_ESC] ) salir = true;
    }
}

void entrenador1::menu1()
{


     iniciar();
introduccion();

while(!Me)
{
    sal=false;
stop_sample(Grr);
stop_sample( men );
stop_sample( boss );
stop_sample( musica1 );
play_sample(men,200,150,1000,0);
todos();
//selector();
salir=false;
    x=100;
    y=100;

   //  introduccion();
    while(!salir)
    {

               if(mouse_x >60 && mouse_x < 430 && mouse_y > 239 && mouse_y < 295 )
              {
                      blit(fondo2,buffer,0,0,0,0,500,500);
                          if(mouse_b &1){
                                       stop_sample( men );
                                       play_sample(com,200,150,1000,0);
                                       SA=0;
                                       Ev=0;
                                        mcasa();
                                        }
              }
              else if(mouse_x >165 && mouse_x < 330 && mouse_y > 334 && mouse_y < 400  )
                    {
                      blit(fondo3,buffer,0,0,0,0,500,500);
                        if(mouse_b &1){
                                       salir=true;
                                       Me=true;
                                        }
                          }
                          else blit(fondo1,buffer,0,0,0,0,500,500);
                          masked_blit(cursor,buffer,0,0,mouse_x,mouse_y,50,50);
                          blit(buffer,screen,0,0,0,0,500,500);
                          rest(10);

    }
}
}

//funcion principal
int main()
{
    entrenador1 obj;
    obj.menu1();

return 0;
}
END_OF_MAIN();//LE DICE A ALLEGRO QUE EL MAIN TERMINA
