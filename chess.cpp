#include<iostream>
using namespace std;
public abstract class Piece { 
  
    private boolean killed = false; 
    private boolean white = false; 
  
    public Piece(boolean white) 
    { 
        this.setWhite(white); 
    } 
  
    public boolean isWhite() 
    { 
        return this.white == true; 
    } 
  
    public void setWhite(boolean white) 
    { 
        this.white = white; 
    } 
  
    public boolean isKilled() 
    { 
        return this.killed == true; 
    } 
  
    public void setKilled(boolean killed) 
    { 
        this.killed = killed; 
    } 
  
    public abstract boolean canMove(Board board,  
                                 Spot start, Spot end); 
} 
class Spot{
    private Piece piece;
    private int x;
    private int y;
    public:
    Spot(int x,int y,Piece piece) {
        this.setPiece(piece);
        this.setx(x);
        this.sety(y);
    }
    public Piece getPiece(){
        return this.piece;
    }
    public void setPiece(Piece p){
        this.piece=p;
    }
    public int getx(){
        return this.x;
    }
    public void setx(int x){
        this.x=x;
    }
    public int gety{
        return this.y;
    }
    public void sety(int y){
        this.y=y;
    }
}