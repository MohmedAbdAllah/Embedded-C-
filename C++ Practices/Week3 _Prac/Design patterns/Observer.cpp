#include<iostream>
#include<vector>
#include<algorithm>

class Subject;

class Observer{
    public:
        virtual ~Observer()= default;
        virtual void Update(Subject&) = 0;
};
 class Subject{
    private:
        std::vector<Observer*> observers;
    public:
        virtual ~Subject() = default;
        void Attach (Observer& object){
            observers.push_back(&object);
        }
        void Detch(Observer& object){
            observers.erase(std::remove(observers.begin(),observers.end(),&object));
        }
        void Notify(){
            for(auto* object : observers){
                object->Update(*this);
            }
        }
};
class ClockTimer : public Subject{
    private:
        int hour, minute, second;
    public:
        void SetTime(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
            Notify();
        }
        int GetHour() const {return hour;}
        int GetMinute() const {return minute;}
        int GetSecond() const {return second;}
};
class DigitalClock : public Observer{
    private:
        ClockTimer& subject;
    public:
        explicit DigitalClock(ClockTimer& s) : subject(s){
            subject.Attach(*this);
        }
        ~DigitalClock(){
            subject.Detch(*this);
        }
        void Draw(){
            int hour = subject.GetHour();
            int minute = subject.GetMinute();
            int second = subject.GetSecond();

            std::cout<< "The Digital Time is "<< hour<<":"<<minute<< ":"<< second<<std::endl;

        }
        void Update(Subject& ChangedSubject) override{
            if(&ChangedSubject == &subject){
                Draw();
            }
        }
};
class AnalogClock : public Observer{
    private:
        ClockTimer& subject;
    public:
        explicit AnalogClock(ClockTimer& s) : subject(s){
            subject.Attach(*this);
        }
        ~AnalogClock(){
            subject.Detch(*this);
        }
        void Draw(){
            int hour = subject.GetHour();
            int minute = subject.GetMinute();
            int second = subject.GetSecond();

            std::cout<< "The Analog Time is "<< hour<<":"<<minute<< ":"<< second<<std::endl;

        }
        void Update(Subject& ChangedSubject) override{
            if(&ChangedSubject == &subject){
                Draw();
            }
        }
};

int main(){
    ClockTimer timer;

    DigitalClock digitalClock(timer);
    AnalogClock analogClock(timer);

    timer.SetTime(14, 41, 36);
}