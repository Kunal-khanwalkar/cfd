#include<iostream>
#include<fstream>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

int main()
{
    system("color 80");

    int end = 0;
    int inpt,addiction = 50;
    char choice;

    do
    {
    system("cls");

    addiction = 50;
    cout<<"\nArgh, another morning starting with a noise complaint letter on my door. I guess buying this flat was the worst choice in my life.";
    cout<<"\nThe landlord is nothing less than a fiend, I am going to get kicked out any day.";
    cout<<"\nI never bothered to ask his name, I don't want to.\n\n";
    PlaySound(".\\sound\\home.wav", NULL, SND_ASYNC);
    cout<<"\nPress Enter to continue";

    if (cin.get() == '\n')
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\n\nHmmm, its 7 already? I Guess I have to miss breakfast today as well, just gonna take my medicine and leave.";
    cout<<"\nThe only convenience I have in my life is the DownTown Metro Station, which is a couple of blocks down South my home.";
    cout<<"\nHopefully my list will increase in the future...";
    PlaySound(".\\sound\\chime.wav", NULL, SND_ASYNC);
    cout<<"\n\nPress Enter to continue";

    if (cin.get() == '\n')
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\nBack here in my assigned seat. This office, maybe monotonous, but is the only change I get in my miserable life. ";
    cout<<"\nI will count this as my third most hated thing, second being my Landlord and my Life being the winner in this competition. ";
    cout<<"\n*Grunt* this terrible headache is back, time to take my medicine it seems. ";
    cout<<"\nHere comes Ronald, my Boss; Beer Belly, bald, face resembles that of George Bush if only George Bush looked more like a dork.";
    cout<<"\n\'I asked you to compile this file by 4pm yesterday. I didn't receive the file nor the reason for you to skip work, do you have any explanation?";
    cout<<"\nSigh, and here we go again, \'I was sick, boss. Terrible headache. I have been taking my medication regularly.\'";
    cout<<"\n\'You get 15 casual holidays in a year, use them wisely.\' And he left.";
    cout<<"\nGod if only I get a chance, I will definitely kill him.";
    cout<<"\nHis mocking face always gets my temper and his contradictory supposedly \"caring\" talks. That rascal...";
    PlaySound(".\\sound\\office.wav", NULL, SND_ASYNC);
    cout<<"\n\nPress Enter to continue\n\n";

    if (cin.get() == '\n')
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"The sound of the metro is the only pleasant thing in my life, I haven't taken my medication in 3 hours.";
    cout<<"\nI am starting to feel dizzy. Gotta call the chemist.";
    PlaySound(".\\sound\\metro.wav", NULL, SND_ASYNC);
    cout<<"\n\nPress Enter to continue\n\n";

    if (cin.get() == '\n')
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"It's 12am, we are meeting at pharmacy and here he is, providing me with my desired medication.";
    cout<<"\nHis name is Sniff, or that's what he likes to be addressed with.";
    cout<<"\nIt's pretty shady if you ask me. After the payment, I leave for my home. Maybe I should go the bar across the street, haven't had a drink in a few days, or should I?";
    cout<<"\n\n1. The bar it is -";
    cout<<"\n2. It's late, I should sleep today - ";
    cout<<"\n(Choose the corresponding number of the option)\n";

    cin>>inpt;
    if (inpt == 1){
        cout<<"\n\nThe bar it is. The bartender welcomed me like an old friend, maybe going to a bar 3 days in a week can make you gain some acquaintances.";
        cout<<"\nI guess I should take my medication; the headaches are coming back.";
        PlaySound(".\\sound\\bar.wav", NULL, SND_ASYNC);
    }
    else if (inpt == 2){
        cout<<"\n\nGoing back home... It would have been an uneventful night, only if I hadn't seen that stupid landlord's face again.";
        cout<<"\nI am 2 days late on my rent and he is mad like I killed his wife, I will one day if it goes on like this.";
        PlaySound(".\\sound\\home.wav", NULL, SND_ASYNC);
        cout<<"\nADDICTION -10";
        addiction-=10;
    }
    cout<<"\n\n";
    system("pause");
    system("cls");

    if (cin.get() == '\n')
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"TRRRRRRRRR!!!!!!!";
    cout<<"\nI should change my morning alarm it seems as it might as well be the primary reason of my migraines and hypertension, which I am experiencing at this instantaneous moment.";
    cout<<"\nTime to take my medicines.\n";
    cout<<"Sunday... I am going to meet Michelle today. ";
    cout<<"She was so eager to meet me, but I have been busy for the past few days. \nI am meeting her for dinner tonight, I guess the Rollers might be a nice place.";
    cout<<"\n\nPress Enter to continue\n\n";
    PlaySound(".\\sound\\alarm.wav", NULL, SND_ASYNC);
    cout<<"";

    if (cin.get() == '\n')
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"There she is, her beautiful smile is the only thing that is keeping me alive. \nTurns out Rollers was a good choice, they are giving complementary drinks as it is the Owner's birthday.";
    cout<<"\n";
    cout<<"'How have you been? You look quite dull nowadays. The boss again?' \n'Yeah same old crap. Stupid boss, stupid landlord, stupid life,'\n";
    cout<<"'Look, I love you but I am concerned. \nAre you sure you are taking the right medicines, your health doesn't seem to be improving,'";
    PlaySound(".\\sound\\bar.wav", NULL, SND_ASYNC);
    cout<<"\n\nPress Enter to continue\n\n";
    cout<<"";

    if (cin.get() == '\n')
    cout<<"And here we go again. Another one of her tantrums about my medication. \nJust like my father, she wouldn't understand the pain. I require my medicines to function properly, but I will just leave this argument for now.";
    cout<<"\n\nPress Enter to continue\n\n";
    cout<<"";

    if(cin.get() == '\n')
    cout<<"Apart from that little \"hiccup\", it was a pleasant date. \nWe part our ways and on my way home, I realize I have to buy some milk from Supermart.";
    cout<<"\n\nAfter two blocks, I get this terrible headache again. \nMaybe I should head back home, I have enough milk for tonight. ";
    cout<<"\n\n1.Head to the Supermart - ";
    cout<<"\n\n2.Head back home - ";
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\n(Choose the corresponding number of the option)\n";
    cin>>inpt;
    if (inpt == 1){
        cout<<"\nI never thought a simple task like finding milk from the right aisle would have been so difficult if you are suffering from migraine. \n";
        cout<<"I finally found some milk, time to head back home. ";
        cout<<"\nI met Ronald at the gates, not really the best time to get shouted at.";
        cout<<"\n'You don't look good, haven't been for the past few days. Rest now, you can submit the file on Tuesday'";
        cout<<"\nI didn't really expect this from him. Well then, the boss said sleep, so I will sleep tonight. ";
        cout<<"\n\nADDICTION -10";
        addiction-=10;
    }
    else if (inpt == 2){
        cout<<"\nThe pain is immense; I will sleep tonight.";
        cout<<"\nI will work on that file tomorrow at work. I should take my medicines as well.";
        PlaySound(".\\sound\\home.wav", NULL, SND_ASYNC);
    }
    cout<<"\n\n";
    system("pause");
    system("cls");

    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\nA call from father, again scolding me about my medication. ";
    cout<<"A perfect way to start your Monday.";
    cout<<"\nOn my way to work, I receive a message from Michelle 'Dinner tonight at my house :) ' Just what I wanted. ";
    cout<<"\nI wasted 3 hours on that file which was due last Friday, above that I have other pending files as well.";
    cout<<"I should take my medicine.";
    cout<<"\n\nPress Enter to continue\n\n";
    PlaySound(".\\sound\\ringing.wav", NULL, SND_ASYNC);

    if(cin.get() == '\n')
    cout<<"Here comes John, an Intern. The kid is ambitious and dedicated to his work, but sometimes my colleagues ask him to run small errands like this one.";
    cout<<"\n'Sir, we have an office party tonight at 9pm. We expect you to be there.'";
    cout<<"John hands me out an invitation letter. 'Thanks John'.";
    PlaySound(".\\sound\\keyboard.wav", NULL, SND_ASYNC);
    cout<<"\nAfter work, I realized I also have to meet Michelle tonight. I guess I should tell her about the office party...";
    cout<<"\n\n1. Go to the office party - ";
    cout<<"\n\n2. Go to Michelle's house - ";
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\n(Choose the corresponding number of the option)\n";
    cin>>inpt;
    if(inpt == 1){
        cout<<"\n\nI am not in the good books of my boss, I should go to the office party.";
        cout<<"After a while, I receive a call from Michelle.";
        PlaySound(".\\sound\\ringing.wav", NULL, SND_ASYNC);
        cout<<"\nI forgot to inform her, not a good thing. I had to explain her about this for an hour.";
        cout<<"\nAfter the call, Ronald approached me 'You worked hard today, I hope you are taking care of your health'. ";
        cout<<"The party was going good, only problem was Michelle was upset.";
        cout<<"\n\nPress Enter to continue\n\n";

        if(cin.get() == '\n')
        cout<<"\nI decided to take a drink. ";
        cout<<"Bad choice, I hadn't taken my medicines for a few hours and it's taking a toll on my body.";
        cout<<"\nI should leave or else I will puke, I will definitely puke. I should hurry up to the toilet. ";
        cout<<"After rushing and pushing through the crowd, I reached there in time. ";
        cout<<"\n\nPress Enter to continue\n\n";

        if(cin.get() == '\n')
        cout<<"\nUgh, there is blood in my puke. ";
        PlaySound(".\\sound\\vomit.wav", NULL, SND_ASYNC);
        cout<<"John was there as well, he informed Ronald. I can see Ronald calling Michelle.";
        cout<<"\n'Wake up! I am taking you back to my place,' and these were the last words of that night.";
    }
    else if (inpt == 2){
        cout<<"\nI would rather relax and enjoy instead of going to that head bursting office party. ";
        cout<<"I reached her house after 7, it was a long day at work. ";
        cout<<"Michelle opens the door with a broad smile on her face. It's Turkey tonight, lovely. ";
        cout<<"\nAfter a satisfying dinner along with a couple of drinks, we decide to watch a movie and go to bed. ";
        cout<<"\nFinally, it seems like I am going to be happy again; I was never so wrong in my life...";
        PlaySound(".\\sound\\home.wav", NULL, SND_ASYNC);
        cout<<"\n\nADDICTION -10\n";
        addiction-=10;
    }
    cout<<"\n\n";
    system("pause");
    system("cls");

    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\nThe first thing I saw in the morning was Michelle digging in my laptop bag, with a pouch full of white pills in her left hand.";
    cout<<"\nMy medicines, my lifeline, she is going to throw them away.";
    cout<<"\n\n";
    system("cls");

    cout<<"\nI cannot let this happen, and on a whim I stood up and pushed her away from my bag, snatching the pouch from her. ";
    cout<<"\nShe was in shock 'These… your \"medicines\"!. These are drugs! For how long have you been taking them?!' ";
    cout<<"\n'It doesn't concern you,'\n'Really? All those migraines and fluctuating temperatures, it was all because of them! How can this not concern me? I have been dating a drug addict for the past 3 years!'";
    cout<<"\n'You will never understand how important are these to me,' ";
    cout<<"\n'YES! Your illness, the terrible headaches, you passing out. You need these in your life, right? All those times I helped you, took care of you without even realizing you were the one who is responsible for all this.'";
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nShe stood up and glanced at my bag. 'Leave.'";
    cout<<"\nShe throws the last packet on the floor 'and take this disgusting stuff out with you' ";
    cout<<"\n'Just give me a minute, I can explain this to you,'";
    cout<<"\n'Those drugs in your hand have already explained everything. You are a drug addict, that is exactly what you are. Just leave, it's all over,' ";
    cout<<"\nFeeling all numb, I leave her house and return back home. ";
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\n\n";
    system("pause");
    system("cls");

    cout<<"\nI won't go to work today, I just need my medicines. ";
    cout<<"\nAfter a while, I receive a call from Ronald 'Our sponsors will be here today and I need you to address the delegates, reach here by 1pm,'";
    cout<<"\nI am not in the mood today, but this is important. I have to decide...";
    cout<<"\n\n1. Go to the office as this is important - ";
    cout<<"\n\n2. Rest for today - ";
    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\n(Choose the corresponding number of the option)\n";
    cin>>inpt;

    if(inpt == 1){
        cout<<"\nHaving a good relationship with the sponsors is quite crucial for the company. I should leave for work. ";
        cout<<"\nI glance at my medicines, wondering if it would be wise to take them before this important event or not...";
        cout<<"\n\n1. Take the medicines - ";
        cout<<"\n\n2. Don't take the medicines - ";
        cout<<"\n(Choose the corresponding number of the option)\n";
        cin>>inpt;

        if(inpt == 1){
            cout<<"\n\nI guess taking the medicines would be better. I need my brain to be working properly for this. ";
            cout<<"\nAfter popping the pills, I finally feel relaxed.";
            cout<<"\nI think I should sleep for a little while, there is still 3 hours left for the sponsors to arrive.";
            cout<<"\nA fresh mind before the meeting would be great.";
            cout<<"\n\nPress Enter to continue.\n\n";

            if(cin.get() == '\n')
            cout<<"\nAfter waking up to 3 snoozed alarms and 5 missed calls, I realize that it’s already 3pm.";
            cout<<"\nI headed to my workplace without any delays, and one of my colleagues informs me that the sponsors have already left.";
            cout<<"\nRonald has been eyeing me ever since I entered the office, he approached me, ";
            cout<<"\n'This is the last time you are being excused. Better pull up your socks.'";
            cout<<"\n'We have a very important conference lined up on Saturday, and you will be giving the presentation.'";
            cout<<"\n'If you screw this up, you are fired.'";
            PlaySound(".\\sound\\alarm.wav", NULL, SND_ASYNC);

        }

        else if (inpt == 2){
            cout<<"\nI should stay away from the medicines for a while.";
            cout<<"\nIf I want Michelle back in my life, I need to mend my ways.";
            cout<<"\nI headed to my workplace, the sponsors will be here any time now.";
            cout<<"\nI guess I should’ve taken the medicines, I feel dizzy and I am sweating a lot. I am feeling nervous, I hope this goes well.";
            cout<<"\n\nADDICTION -10";
            addiction-=10;
            PlaySound(".\\sound\\boss.wav", NULL, SND_ASYNC);
            cout<<"\n\nPress Enter to continue.\n\n";

            if(cin.get() == '\n')
            cout<<"\nOkay, I messed it up. Ronald is definitely not happy.";
            cout<<"\n'This is the last time you are being excused. Better pull up your socks.'";
            cout<<"\n'We have a very important conference lined up on Saturday, and you will be giving the presentation.'";
            cout<<"\n'If you screw this up, you are fired.'";
            cout<<"\nPerhaps I should have taken my medication.";

        }

    }

    else if (inpt == 2){
            cout<<"\nI think going to the office in this state is not a good option.";
            cout<<"\nI will screw up the meeting with the sponsors, plus I am not in the mood.";
            cout<<"\nI am not happy about today’s incident. I want to make this up...";
            cout<<"\n\n1.	Call Michelle - ";
            cout<<"\n\n2.   Don't call Michelle - ";
            cout<<"\n(Choose the corresponding number of the option)\n";
            cin>>inpt;

            if(inpt == 1){
                cout<<"\nOkay, here it goes.";
                cout<<"\n*ring*";
                PlaySound(".\\sound\\ringing.wav", NULL, SND_ASYNC);
                cout<<"\nShe is not picking up.";
                cout<<"\nI just need one more chance to talk, I hope I will get it.";
                cout<<"\nThinking about all this is giving me a headache, gotta take my medicines.";
                cout<<"\n\nADDICTION +10\n";
                addiction+=10;
                cout<<"\n\nPress Enter to continue.\n\n";
            }

            else if(inpt == 2){
                cout<<"\nI should give it some time, it wasn't a right thing to talk to her like that.";
                cout<<"\nI should stay off my medication for a few days and everything will be fine between us hopefully.";
                cout<<"\nADDICTION -10\n";
                addiction-=10;
                cout<<"\n\nPress Enter to continue.\n\n";
            }

            if(cin.get() == '\n')
                cout<<"\nIts 7pm now, and Ronald messaged.";
                cout<<"\n'You missed a very important meeting today. The sponsors are not happy, this has weakened our relationship.'";
                cout<<"\n'We have a very important conference lined up on Saturday and you will be giving the presentation.'";
                cout<<"\n'If you screw this up, you are fired.'";
                cout<<"\nMaybe this is conference is the last straw.";
                PlaySound(".\\sound\\ringing.wav", NULL, SND_ASYNC);


    }

    cout<<"\n\n";
    system("pause");
    system("cls");

    cout<<"\nAddiction level - "<<addiction<<endl;
    cout<<"\nI have my conference in 3 days now, but the headaches won't go away.\nAbove that, I am low on my medication. I should contact sniff...";
    cout<<"\n\nPress Enter to continue.\n\n";

    if(cin.get() == '\n')
    cout<<"\nSame alley, same time, more stuff. I have visiting this alley quite often now.";
    cout<<"\n\nADDICTION +10\n";
    addiction+=10;
    cout<<"\nThese walls filled with the graffiti is symbolizing my life at this point, just a plain wall with strange, unnecessary black marks on it.";
    cout<<"\nAfter every visit the walls seem warmer, and Sniff as a friend.";
    cout<<"\nThe visit to the pharmacist would've been smooth if I hadn't met my Landlord while going back to my room.";
    cout<<"\nI am already two weeks late on rent and he is not a patient type.";
    cout<<"\n'You will get kicked out if you didn't pay next week!' I have a job, at least wait for the payday, idiot.";
    cout<<"\n\nPress Enter to continue.\n\n";

    if(cin.get() == '\n')
    cout<<"\nThe next morning is a very important day for my career.";
    cout<<"\nNo window for any mistakes. I don't feel sleepy; I guess I should call Michelle.";
    PlaySound(".\\sound\\ringing.wav", NULL, SND_ASYNC);
    cout<<"\n'Hey, I have an important day tomorrow. The conference meeting will decide my future,'";
    cout<<"\n'Listen, I don't care about your meetings, your problems, your achievements nor your health. You are not a part of my life anymore. Please do not call on this number again,'";
    cout<<"\n'I will promise to mend my ways, please give me another chance.'";
    cout<<"\n'You should have left drugs a long time ago. There is no way to mend your ways now. This addiction will not go away. Never.'";
    cout<<"\nAnd she cuts the call without giving me a chance to reply.";
    cout<<"\n\nAddiction level - "<<addiction<<endl;
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nI wasn't ready for this. I didn't want this to happen. ";
    cout<<"\nThe thought of losing Michelle scares me.";
    cout<<"\nThe only person who was with me for the past three years is no more with me. She will never forgive me. ";
    cout<<"\n\nAddiction level - "<<addiction<<endl;
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nWhat should I do now? What should I do now?";
    cout<<"\nI can't think of a better remedy than having my medicines as of now. ";
    cout<<"\nThe only thing that is constant in my life; I shall better have them now.";
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nNext morning, I woke up with 5 snoozed alarms and one email.";
    cout<<"\nOne email from Ronald that I wished to have never received.";
    cout<<"\nI can sense what it is without even opening it. Yes, my termination letter. ";
    cout<<"\n\nAddiction level - "<<addiction<<endl;
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nI am screwed up. I don't have a job, I no longer have Michelle standing by me.";
    cout<<"\nI don't know how to pay me debts because apparently I have been using my savings to buy the medicines. ";
    cout<<"\n\nADDICTION +10\n";
    addiction+=10;
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nHardly did I get out of this shock when I heard loud banging on my door. The Landlord is here. ";
    PlaySound(".\\sound\\banging.wav", NULL, SND_ASYNC);
    cout<<"\n'Give my rent, you are 3 weeks late already. Or else you can pack your stuff and get out of my house! Unlike you, I have a family to look after.'";
    cout<<"\n'Just give me one more day'";
    cout<<"\n'Okay, you get one day to pack your stuff!'";
    cout<<"\nThat Landlord... he is right. I have no one by my side.";
    cout<<"\nI have no way to pay the rent.";
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\n\nAddiction level - "<<addiction<<endl;
    cout<<"\nMaybe it's time, as I turn around I see my medicine on the table.";
    cout<<"\nI pop one pill and relax for one minute.";
    cout<<"\nMy father, should I call him?";
    PlaySound(".\\sound\\ringing.wav", NULL, SND_ASYNC);
    cout<<"\n'Hello, how are you doing?'";
    cout<<"\n'Dad, I lost my job. Michelle has left me. I don't have money to pay my rents, I am broke.'";
    cout<<"\n'And what should I do about it?'";
    cout<<"\n'I need some money, at least to pay the rent. I will return it in 2 weeks'";
    cout<<"\n'No. I know you will use the money on the drugs. You have been doing drugs for 7 years now. How many times have I told you to stop? But you don't listen, you never did. And now look, look at the impact it has taken on your life. Your job, your house and your soulmate. All lost because of your choices. You are a disgrace son. No, you are not my son; not anymore. I disown you.'";
    cout<<"\n\nPress Enter to continue\n\n";

    if(cin.get() == '\n')
    cout<<"\nAnd there it is, I lost my job, Michelle and my father.";
    cout<<"\nI am alone with no money. I need money to pay my rent. ";
    cout<<"\nI need my medicines. I need money to buy my medicines. Should I?";
    cout<<"\n\n1. Call Michelle again - ";
    cout<<"\n2. Contact Sniff - ";
    cout<<"\n3. Call Ronald for final apology - ";
    cout<<"\n4. Take a final walk - ";
    cout<<"\n\nAddiction level - "<<addiction<<endl;
    cout<<"\n(Choose the corresponding number of the option)\n";
    cin>>inpt;
    if(inpt == 1){
        cout<<"\nI called Michelle, one ring, two rings, ten rings. She isn't picking up.";
        cout<<"\nI will call again, no reply. Yet again, 'I asked you to stop calling me. I don't know you anymore,'";
        cout<<"\n'Please Michelle. I lost my job, I really need your help.'";
        cout<<"\n'Look at yourself, still running away. You should at least realize now that you will never escape from this addiction. You are a mess. You will always be one. Goodbye'";
        cout<<"\nThe call didn't work. I guess I have no option left… ";
        cout<<"\nOr maybe I do. I need a lot of courage for this. I have to wait for midnight.";
        cout<<"\n\n";
        system("pause");

        cout<<"\n\nI take some of my medicines and break into the landlord's house at midnight. He and his wife are sleeping, perfect, I just need to find the safe. With a knife in one hand, I tread slowly towards the living room. The Landlord's picture is on the table. \"Mr and Mrs Sael\", so that is the Landlord's name, Sael. Well then Mr. Sael, I will give you your money. I found the safe at the back of a painting, as I turned around I saw the Landlord's wife in front of me. In a frightened state, my reflexes worked, and I stabbed her. Again. I killed the Landlord's wife, I have her blood on her hands. What have I done? I am a murderer; I have someone's blood on my hands! I hurried back to my room, thinking what should I do. To calm myself I eat all of the remaining medicines. Bad choice, I have overdosed on them. I am coughing, so hard I can feel vomit coming up but it's not coming out. No, I can't breathe! The vomit is choking me and I try to breathe hard. After 2 long minutes of struggling, I can finally relax a little. Maybe I deserved it, maybe it is the punishment for the Mrs. Sael. \n\nIf only my choices weren't as dark as the room I am in...";
        PlaySound(".\\sound\\glass.wav", NULL, SND_ASYNC);
        PlaySound(".\\sound\\end.wav", NULL, SND_ASYNC);
        end++;

    }
    else if(inpt == 2){
        cout<<"\nSniff, my only friend. I should contact him. He will surely understand my situation and help me out. ";
        cout<<"\nI should message him explaining about my situation. After 3 hours of waiting for a reply I realized one thing. ";
        cout<<"\nDrug dealers will never help a customer out because drug dealers are not friends. ";
        cout<<"\nSniff was the devil who put me in this mess and I will never be able to recover from this.";
        cout<<"\nThe call didn't work. I guess I have no option left… ";
        cout<<"\nOr maybe I do. I need a lot of courage for this. I have to wait for midnight.";
        cout<<"\n\n";
        system("Pause");

        cout<<"\n\nI take some of my medicines and break into the landlord's house at midnight. He and his wife are sleeping, perfect, I just need to find the safe. With a knife in one hand, I tread slowly towards the living room. The Landlord's picture is on the table. \"Mr and Mrs Sael\", so that is the Landlord's name, Sael. Well then Mr. Sael, I will give you your money. I found the safe at the back of a painting, as I turned around I saw the Landlord's wife in front of me. In a frightened state, my reflexes worked, and I stabbed her. Again. I killed the Landlord's wife, I have her blood on her hands. What have I done? I am a murderer; I have someone's blood on my hands! I hurried back to my room, thinking what should I do. To calm myself I eat all of the remaining medicines. Bad choice, I have overdosed on them. I am coughing, so hard I can feel vomit coming up but it's not coming out. No, I can't breathe! The vomit is choking me and I try to breathe hard. After 2 long minutes of struggling, I can finally relax a little. Maybe I deserved it, maybe it is the punishment for the Mrs. Sael. \n\nIf only my choices weren't as dark as the room I am in...";
        PlaySound(".\\sound\\glass.wav", NULL, SND_ASYNC);
        PlaySound(".\\sound\\end.wav", NULL, SND_ASYNC);
        end++;
    }
    else if(inpt == 3){
        cout<<"\nI guess Ronald is my final option.";
        cout<<"\n'Hey Ronald, I am really sorry about that day. I was suffering from high fever. I am ready to do anything to make it up.'";
        cout<<"\n'You really think I am that ignorant? I have known about your drug addiction for quite a while. I tried to keep your personal life out of my business, but you didn't. Your drug problem was pulling down the company. I am sorry, but I cannot help you.'";
        cout<<"\nThe call didn't work. I guess I have no option left… ";
        cout<<"\nOr maybe I do. I need a lot of courage for this. I have to wait for midnight.";
        cout<<"\n\n";
        system("pause");

        cout<<"\n\nI take some of my medicines and break into the landlord's house at midnight. He and his wife are sleeping, perfect, I just need to find the safe. With a knife in one hand, I tread slowly towards the living room. The Landlord's picture is on the table. \"Mr and Mrs Sael\", so that is the Landlord's name, Sael. Well then Mr. Sael, I will give you your money. I found the safe at the back of a painting, as I turned around I saw the Landlord's wife in front of me. In a frightened state, my reflexes worked, and I stabbed her. Again. I killed the Landlord's wife, I have her blood on her hands. What have I done? I am a murderer; I have someone's blood on my hands! I hurried back to my room, thinking what should I do. To calm myself I eat all of the remaining medicines. Bad choice, I have overdosed on them. I am coughing, so hard I can feel vomit coming up but it's not coming out. No, I can't breathe! The vomit is choking me and I try to breathe hard. After 2 long minutes of struggling, I can finally relax a little. Maybe I deserved it, maybe it is the punishment for the Mrs. Sael. \n\nIf only my choices weren't as dark as the room I am in...";
        PlaySound(".\\sound\\glass.wav", NULL, SND_ASYNC);
        PlaySound(".\\sound\\end.wav", NULL, SND_ASYNC);
        end++;
   }
   else if(inpt == 4){
        cout<<"\nI don't think there is anything left to do now.";
        cout<<"\nMaybe some time to relax would be good. I am already so stressed; I guess I should just take a walk.";
        cout<<"\n3 blocks North, there is a river. The view there is very beautiful. ";
        cout<<"\nThe 15 min walk felt really long as the choices I made are revolving in my head right now. ";
        cout<<"\nAah, the connecting bridge. 100m higher than the water level. It is quite beautiful. ";
        cout<<"\nThe horizon is asking me to take the step. I take all my left medicines and jump into the water.";
        cout<<"\nThe light is slowly fading away and darkness is lurking. This darkness symbolizing the wrong choices I made.";
        cout<<"\n\nIf only I could have...";
        PlaySound(".\\sound\\end.wav", NULL, SND_ASYNC);
        end++;
   }


   if(end == 1)
        cout<<"\n\n\nMaybe the choices I made were wrong. If only i could redo all this... Let me try again.\n";
    else if (end == 2)
        cout<<"\n\nNot again... Why did I end up here? yet again... Where did I go wrong?\n";
    else if (end == 3)
        cout<<"\n\nI guess there is no way out of this addiction. I don't know... Let me try again for one last time...\n";
    else
        cout<<"\n\nI guess there is no way out of this addiction...I am done";

    cout<<"\nShall I try again? (Y/N) \n";
    cin>>choice;

    }while(choice == 'y'|| choice == 'Y');

    return 0;
}
