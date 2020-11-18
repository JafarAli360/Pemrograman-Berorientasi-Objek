Game_Character(String inputName, int inputAttackHitpoint, int inputAttackKickpoint)
{
this.name = inputName;
this.attackHitpoint = inputAttackHitpoint;
this.attackKickpoint = inputAttackKickpoint;
int lifepoint;
}
void hit(Game_Character lawan, int inputAttackhitpoint)
{
this.attackHitpoint = inputAttackhitpoint;
System.out.print(this.name + " memukul " + lawan.name + " dengan kekuatan " + inputAttackhitpoint + " maka lifepoint " + lawan.name + " : ");
if(lifepoint >= inputAttackhitpoint)
{
lifepoint -= inputAttackhitpoint;
System.out.println(lifepoint);
}
else
{
lifepoint = 0;
}
}
void kick(Game_Character lawan, int inputAttackkickpoint)
{
this.attackKickpoint = inputAttackkickpoint;
System.out.print(this.name + " menendang " + lawan.name + " dengan kekuatan " + inputAttackkickpoint + " maka lifepoint " + lawan.name + " : ");
if(lifepoint >= inputAttackkickpoint)
{
lifepoint -= inputAttackkickpoint;
System.out.println(lifepoint);
}
else
{
lifepoint = 0;
}
}
void selesai(Game_Character lawan)
{
if(lifepoint == 0)
{
System.out.print("PEMENANG = " + this.name);
}
}
int lifepoint()
{
return lifepoint;
}
String name()
{
return name;
}
}
