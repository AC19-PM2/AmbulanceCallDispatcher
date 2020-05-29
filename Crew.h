#ifndef CREW_H
#define CREW_H

class Crew
{
	public:
		Crew();
		~Crew();
		int CrewList();//
	
	protected:
		char *doctor;
		char *paramedic;
		char *driver;
		int TimeShiftH;
		int TimeShiftM;
	
		
};

#endif
