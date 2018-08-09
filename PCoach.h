//
// Created by Michael Burzan on 07.08.18.
//

#ifndef PCOACH_PCOACH_H
#define PCOACH_PCOACH_H
#include <vector>
#include <string>



class PCoach {
    public:
        PCoach(std::vector<std::string> argv);
        virtual ~PCoach();
        PCoach(const PCoach & rhs);
        PCoach(PCoach && rhs);
        PCoach & operator=(const PCoach & rhs);
        PCoach & operator=(PCoach && rhs);
    private:
        int pid;
        
};


#endif //PCOACH_PCOACH_H
