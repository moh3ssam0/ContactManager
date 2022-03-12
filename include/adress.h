#ifndef ADRESS_H
#define ADRESS_H


class adress
{

    public:
        adress();
        adress(string, string, string);
        virtual ~adress();

        void setPhone(string);
        void setType(string);
        void setDescription(string);

        bool isMatched(string) const;

        void print()const;

    protected:

    private:
        string m_phone;
        string m_type;
        string m_description;
};

#endif // ADRESS_H
