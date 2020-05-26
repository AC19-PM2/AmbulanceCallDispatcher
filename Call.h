#ifndef CALL_H
#define CALL_H

class Call
{
	public:
		Call();
		~Call();
		void CrewList();
	protected:
		char *adress;
		int WayTimeH;
		int WayTimeM;
		int BackTimeH;
		int BackTimeM;
		int NCrew;
};

#endif
