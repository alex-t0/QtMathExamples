#include <iostream>
#include <fstream>
#include <vector>
#include "MultiplePandigital.h"
#include "PrimeTester.h"
#include "Pandigital.h"
#include "TriangleWords.h"
#include "PermutationGenerator.h"
#include "gmpxx.h"
#include "Cards.h"
#include "Catch.h"
// #include "PermutationGenerator.cpp"

using namespace std;

int main()
{
    /*std::ifstream inpf("/home/alex-t/MyApps/ConsoleTests/data/permutations.txt");

    std::vector<int> v;
    int palindrome;

    while(inpf >> palindrome)
    {
        v.push_back(palindrome);
    }

    std::cout << "Read " << v.size() << " numbers" << std::endl;*/

    /*for (int i = v.size() - 1; i >= 0; i--)
    {
        if (MultiplePandigital::IsMultiplePandigital(i) == true)
        {
            std::cout << "Multiple pandigital: " << i << std::endl;
            return;
        }
    }*/

    /*std::cout << "987654321{1,1} = " << MultiplePandigital::SubNumber(987654321,1,1) << std::endl;
    std::cout << "987654321{1,2} = " << MultiplePandigital::SubNumber(987654321,1,2) << std::endl;
    std::cout << "987654321{1,5} = " << MultiplePandigital::SubNumber(987654321,1,5) << std::endl;

    std::cout << "987654321{2,5} = " << MultiplePandigital::SubNumber(987654321,2,5) <<
    std::endl;*/

    /*std::cout << "987654321 : " << MultiplePandigital::IsMultiplePandigital(987654321) << std::endl;
    std::cout << "985674312 : " << MultiplePandigital::IsMultiplePandigital(987654321) << std::endl;
    std::cout << "918273645 : " << MultiplePandigital::IsMultiplePandigital(918273645) << std::endl;
    std::cout << "192384576 : " << MultiplePandigital::IsMultiplePandigital(192384576) <<
    std::endl;*/

    /*for (int i = v.size() - 1; i>=0; i--)
    {
        if (MultiplePandigital::IsMultiplePandigital(v[i]) == true)
        {
            std::cout << v[i] << std::endl;
            break;
        }
    }*/
////////////////////////////////////////////////////////////////////////////////////////////////////
    /*auto func = [=](int b, int p)
    {
        double ad = ((double)p * p - 2 * b * p)/(2*p - 2*b);

        if (ad <= 0) return false;

        int di = floor(ad);

        double diff = ad - di;
        int a = floor(ad);

        int c = p - a - b;

        return (diff == 0) && (a*a + b*b == c * c);
    };*/

    /*if (func(48, 120) == true)
        std::cout << "yes" << std::endl;*/

    /*int maxPerimeter = 0;
    int maxPerimeterCount = 0;

    for (int perimeter = 1000; perimeter >= 10; perimeter--)
    {
        int countTriangles = 0;
        for (int b = perimeter-2; b > 0; b--)
        {
            if (func(b,perimeter) == true)
                countTriangles++;
        }
        if (countTriangles > 0)
        {
            // std::cout << perimeter << " : " << countTriangles << std::endl;

            if (countTriangles > maxPerimeterCount)
            {
                maxPerimeterCount = countTriangles;
                maxPerimeter = perimeter;
            }
        }
    }

    std::cout << "Max perimeter: " << maxPerimeter << ", count: " << maxPerimeterCount/2 <<
    std::endl;*/
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (PrimeTester::IsPrime(v[i]) == true && Pandigital::IsFullPandigital(v[i]) == true)
        {
            std::cout << "Prime pandigital: " << v[i] << std::endl;
            return;
        }
    }
*/
////////////////////////////////////////////////////////////////////////////////////////////////////

    /*TriangleWords tw;

    if (tw.TestWord("SKY") == true)
        std::cout << "Triangle!" << std::endl;

    vector<string> strs = {"A","ABILITY","ABLE","ABOUT","ABOVE","ABSENCE","ABSOLUTELY","ACADEMIC","ACCEPT","ACCESS","ACCIDENT","ACCOMPANY","ACCORDING","ACCOUNT","ACHIEVE","ACHIEVEMENT","ACID","ACQUIRE","ACROSS","ACT","ACTION","ACTIVE","ACTIVITY","ACTUAL","ACTUALLY","ADD","ADDITION","ADDITIONAL","ADDRESS","ADMINISTRATION","ADMIT","ADOPT","ADULT","ADVANCE","ADVANTAGE","ADVICE","ADVISE","AFFAIR","AFFECT","AFFORD","AFRAID","AFTER","AFTERNOON","AFTERWARDS","AGAIN","AGAINST","AGE","AGENCY","AGENT","AGO","AGREE","AGREEMENT","AHEAD","AID","AIM","AIR","AIRCRAFT","ALL","ALLOW","ALMOST","ALONE","ALONG","ALREADY","ALRIGHT","ALSO","ALTERNATIVE","ALTHOUGH","ALWAYS","AMONG","AMONGST","AMOUNT","AN","ANALYSIS","ANCIENT","AND","ANIMAL","ANNOUNCE","ANNUAL","ANOTHER","ANSWER","ANY","ANYBODY","ANYONE","ANYTHING","ANYWAY","APART","APPARENT","APPARENTLY","APPEAL","APPEAR","APPEARANCE","APPLICATION","APPLY","APPOINT","APPOINTMENT","APPROACH","APPROPRIATE","APPROVE","AREA","ARGUE","ARGUMENT","ARISE","ARM","ARMY","AROUND","ARRANGE","ARRANGEMENT","ARRIVE","ART","ARTICLE","ARTIST","AS","ASK","ASPECT","ASSEMBLY","ASSESS","ASSESSMENT","ASSET","ASSOCIATE","ASSOCIATION","ASSUME","ASSUMPTION","AT","ATMOSPHERE","ATTACH","ATTACK","ATTEMPT","ATTEND","ATTENTION","ATTITUDE","ATTRACT","ATTRACTIVE","AUDIENCE","AUTHOR","AUTHORITY","AVAILABLE","AVERAGE","AVOID","AWARD","AWARE","AWAY","AYE","BABY","BACK","BACKGROUND","BAD","BAG","BALANCE","BALL","BAND","BANK","BAR","BASE","BASIC","BASIS","BATTLE","BE","BEAR","BEAT","BEAUTIFUL","BECAUSE","BECOME","BED","BEDROOM","BEFORE","BEGIN","BEGINNING","BEHAVIOUR","BEHIND","BELIEF","BELIEVE","BELONG","BELOW","BENEATH","BENEFIT","BESIDE","BEST","BETTER","BETWEEN","BEYOND","BIG","BILL","BIND","BIRD","BIRTH","BIT","BLACK","BLOCK","BLOOD","BLOODY","BLOW","BLUE","BOARD","BOAT","BODY","BONE","BOOK","BORDER","BOTH","BOTTLE","BOTTOM","BOX","BOY","BRAIN","BRANCH","BREAK","BREATH","BRIDGE","BRIEF","BRIGHT","BRING","BROAD","BROTHER","BUDGET","BUILD","BUILDING","BURN","BUS","BUSINESS","BUSY","BUT","BUY","BY","CABINET","CALL","CAMPAIGN","CAN","CANDIDATE","CAPABLE","CAPACITY","CAPITAL","CAR","CARD","CARE","CAREER","CAREFUL","CAREFULLY","CARRY","CASE","CASH","CAT","CATCH","CATEGORY","CAUSE","CELL","CENTRAL","CENTRE","CENTURY","CERTAIN","CERTAINLY","CHAIN","CHAIR","CHAIRMAN","CHALLENGE","CHANCE","CHANGE","CHANNEL","CHAPTER","CHARACTER","CHARACTERISTIC","CHARGE","CHEAP","CHECK","CHEMICAL","CHIEF","CHILD","CHOICE","CHOOSE","CHURCH","CIRCLE","CIRCUMSTANCE","CITIZEN","CITY","CIVIL","CLAIM","CLASS","CLEAN","CLEAR","CLEARLY","CLIENT","CLIMB","CLOSE","CLOSELY","CLOTHES","CLUB","COAL","CODE","COFFEE","COLD","COLLEAGUE","COLLECT","COLLECTION","COLLEGE","COLOUR","COMBINATION","COMBINE","COME","COMMENT","COMMERCIAL","COMMISSION","COMMIT","COMMITMENT","COMMITTEE","COMMON","COMMUNICATION","COMMUNITY","COMPANY","COMPARE","COMPARISON","COMPETITION","COMPLETE","COMPLETELY","COMPLEX","COMPONENT","COMPUTER","CONCENTRATE","CONCENTRATION","CONCEPT","CONCERN","CONCERNED","CONCLUDE","CONCLUSION","CONDITION","CONDUCT","CONFERENCE","CONFIDENCE","CONFIRM","CONFLICT","CONGRESS","CONNECT","CONNECTION","CONSEQUENCE","CONSERVATIVE","CONSIDER","CONSIDERABLE","CONSIDERATION","CONSIST","CONSTANT","CONSTRUCTION","CONSUMER","CONTACT","CONTAIN","CONTENT","CONTEXT","CONTINUE","CONTRACT","CONTRAST","CONTRIBUTE","CONTRIBUTION","CONTROL","CONVENTION","CONVERSATION","COPY","CORNER","CORPORATE","CORRECT","COS","COST","COULD","COUNCIL","COUNT","COUNTRY","COUNTY","COUPLE","COURSE","COURT","COVER","CREATE","CREATION","CREDIT","CRIME","CRIMINAL","CRISIS","CRITERION","CRITICAL","CRITICISM","CROSS","CROWD","CRY","CULTURAL","CULTURE","CUP","CURRENT","CURRENTLY","CURRICULUM","CUSTOMER","CUT","DAMAGE","DANGER","DANGEROUS","DARK","DATA","DATE","DAUGHTER","DAY","DEAD","DEAL","DEATH","DEBATE","DEBT","DECADE","DECIDE","DECISION","DECLARE","DEEP","DEFENCE","DEFENDANT","DEFINE","DEFINITION","DEGREE","DELIVER","DEMAND","DEMOCRATIC","DEMONSTRATE","DENY","DEPARTMENT","DEPEND","DEPUTY","DERIVE","DESCRIBE","DESCRIPTION","DESIGN","DESIRE","DESK","DESPITE","DESTROY","DETAIL","DETAILED","DETERMINE","DEVELOP","DEVELOPMENT","DEVICE","DIE","DIFFERENCE","DIFFERENT","DIFFICULT","DIFFICULTY","DINNER","DIRECT","DIRECTION","DIRECTLY","DIRECTOR","DISAPPEAR","DISCIPLINE","DISCOVER","DISCUSS","DISCUSSION","DISEASE","DISPLAY","DISTANCE","DISTINCTION","DISTRIBUTION","DISTRICT","DIVIDE","DIVISION","DO","DOCTOR","DOCUMENT","DOG","DOMESTIC","DOOR","DOUBLE","DOUBT","DOWN","DRAW","DRAWING","DREAM","DRESS","DRINK","DRIVE","DRIVER","DROP","DRUG","DRY","DUE","DURING","DUTY","EACH","EAR","EARLY","EARN","EARTH","EASILY","EAST","EASY","EAT","ECONOMIC","ECONOMY","EDGE","EDITOR","EDUCATION","EDUCATIONAL","EFFECT","EFFECTIVE","EFFECTIVELY","EFFORT","EGG","EITHER","ELDERLY","ELECTION","ELEMENT","ELSE","ELSEWHERE","EMERGE","EMPHASIS","EMPLOY","EMPLOYEE","EMPLOYER","EMPLOYMENT","EMPTY","ENABLE","ENCOURAGE","END","ENEMY","ENERGY","ENGINE","ENGINEERING","ENJOY","ENOUGH","ENSURE","ENTER","ENTERPRISE","ENTIRE","ENTIRELY","ENTITLE","ENTRY","ENVIRONMENT","ENVIRONMENTAL","EQUAL","EQUALLY","EQUIPMENT","ERROR","ESCAPE","ESPECIALLY","ESSENTIAL","ESTABLISH","ESTABLISHMENT","ESTATE","ESTIMATE","EVEN","EVENING","EVENT","EVENTUALLY","EVER","EVERY","EVERYBODY","EVERYONE","EVERYTHING","EVIDENCE","EXACTLY","EXAMINATION","EXAMINE","EXAMPLE","EXCELLENT","EXCEPT","EXCHANGE","EXECUTIVE","EXERCISE","EXHIBITION","EXIST","EXISTENCE","EXISTING","EXPECT","EXPECTATION","EXPENDITURE","EXPENSE","EXPENSIVE","EXPERIENCE","EXPERIMENT","EXPERT","EXPLAIN","EXPLANATION","EXPLORE","EXPRESS","EXPRESSION","EXTEND","EXTENT","EXTERNAL","EXTRA","EXTREMELY","EYE","FACE","FACILITY","FACT","FACTOR","FACTORY","FAIL","FAILURE","FAIR","FAIRLY","FAITH","FALL","FAMILIAR","FAMILY","FAMOUS","FAR","FARM","FARMER","FASHION","FAST","FATHER","FAVOUR","FEAR","FEATURE","FEE","FEEL","FEELING","FEMALE","FEW","FIELD","FIGHT","FIGURE","FILE","FILL","FILM","FINAL","FINALLY","FINANCE","FINANCIAL","FIND","FINDING","FINE","FINGER","FINISH","FIRE","FIRM","FIRST","FISH","FIT","FIX","FLAT","FLIGHT","FLOOR","FLOW","FLOWER","FLY","FOCUS","FOLLOW","FOLLOWING","FOOD","FOOT","FOOTBALL","FOR","FORCE","FOREIGN","FOREST","FORGET","FORM","FORMAL","FORMER","FORWARD","FOUNDATION","FREE","FREEDOM","FREQUENTLY","FRESH","FRIEND","FROM","FRONT","FRUIT","FUEL","FULL","FULLY","FUNCTION","FUND","FUNNY","FURTHER","FUTURE","GAIN","GAME","GARDEN","GAS","GATE","GATHER","GENERAL","GENERALLY","GENERATE","GENERATION","GENTLEMAN","GET","GIRL","GIVE","GLASS","GO","GOAL","GOD","GOLD","GOOD","GOVERNMENT","GRANT","GREAT","GREEN","GREY","GROUND","GROUP","GROW","GROWING","GROWTH","GUEST","GUIDE","GUN","HAIR","HALF","HALL","HAND","HANDLE","HANG","HAPPEN","HAPPY","HARD","HARDLY","HATE","HAVE","HE","HEAD","HEALTH","HEAR","HEART","HEAT","HEAVY","HELL","HELP","HENCE","HER","HERE","HERSELF","HIDE","HIGH","HIGHLY","HILL","HIM","HIMSELF","HIS","HISTORICAL","HISTORY","HIT","HOLD","HOLE","HOLIDAY","HOME","HOPE","HORSE","HOSPITAL","HOT","HOTEL","HOUR","HOUSE","HOUSEHOLD","HOUSING","HOW","HOWEVER","HUGE","HUMAN","HURT","HUSBAND","I","IDEA","IDENTIFY","IF","IGNORE","ILLUSTRATE","IMAGE","IMAGINE","IMMEDIATE","IMMEDIATELY","IMPACT","IMPLICATION","IMPLY","IMPORTANCE","IMPORTANT","IMPOSE","IMPOSSIBLE","IMPRESSION","IMPROVE","IMPROVEMENT","IN","INCIDENT","INCLUDE","INCLUDING","INCOME","INCREASE","INCREASED","INCREASINGLY","INDEED","INDEPENDENT","INDEX","INDICATE","INDIVIDUAL","INDUSTRIAL","INDUSTRY","INFLUENCE","INFORM","INFORMATION","INITIAL","INITIATIVE","INJURY","INSIDE","INSIST","INSTANCE","INSTEAD","INSTITUTE","INSTITUTION","INSTRUCTION","INSTRUMENT","INSURANCE","INTEND","INTENTION","INTEREST","INTERESTED","INTERESTING","INTERNAL","INTERNATIONAL","INTERPRETATION","INTERVIEW","INTO","INTRODUCE","INTRODUCTION","INVESTIGATE","INVESTIGATION","INVESTMENT","INVITE","INVOLVE","IRON","IS","ISLAND","ISSUE","IT","ITEM","ITS","ITSELF","JOB","JOIN","JOINT","JOURNEY","JUDGE","JUMP","JUST","JUSTICE","KEEP","KEY","KID","KILL","KIND","KING","KITCHEN","KNEE","KNOW","KNOWLEDGE","LABOUR","LACK","LADY","LAND","LANGUAGE","LARGE","LARGELY","LAST","LATE","LATER","LATTER","LAUGH","LAUNCH","LAW","LAWYER","LAY","LEAD","LEADER","LEADERSHIP","LEADING","LEAF","LEAGUE","LEAN","LEARN","LEAST","LEAVE","LEFT","LEG","LEGAL","LEGISLATION","LENGTH","LESS","LET","LETTER","LEVEL","LIABILITY","LIBERAL","LIBRARY","LIE","LIFE","LIFT","LIGHT","LIKE","LIKELY","LIMIT","LIMITED","LINE","LINK","LIP","LIST","LISTEN","LITERATURE","LITTLE","LIVE","LIVING","LOAN","LOCAL","LOCATION","LONG","LOOK","LORD","LOSE","LOSS","LOT","LOVE","LOVELY","LOW","LUNCH","MACHINE","MAGAZINE","MAIN","MAINLY","MAINTAIN","MAJOR","MAJORITY","MAKE","MALE","MAN","MANAGE","MANAGEMENT","MANAGER","MANNER","MANY","MAP","MARK","MARKET","MARRIAGE","MARRIED","MARRY","MASS","MASTER","MATCH","MATERIAL","MATTER","MAY","MAYBE","ME","MEAL","MEAN","MEANING","MEANS","MEANWHILE","MEASURE","MECHANISM","MEDIA","MEDICAL","MEET","MEETING","MEMBER","MEMBERSHIP","MEMORY","MENTAL","MENTION","MERELY","MESSAGE","METAL","METHOD","MIDDLE","MIGHT","MILE","MILITARY","MILK","MIND","MINE","MINISTER","MINISTRY","MINUTE","MISS","MISTAKE","MODEL","MODERN","MODULE","MOMENT","MONEY","MONTH","MORE","MORNING","MOST","MOTHER","MOTION","MOTOR","MOUNTAIN","MOUTH","MOVE","MOVEMENT","MUCH","MURDER","MUSEUM","MUSIC","MUST","MY","MYSELF","NAME","NARROW","NATION","NATIONAL","NATURAL","NATURE","NEAR","NEARLY","NECESSARILY","NECESSARY","NECK","NEED","NEGOTIATION","NEIGHBOUR","NEITHER","NETWORK","NEVER","NEVERTHELESS","NEW","NEWS","NEWSPAPER","NEXT","NICE","NIGHT","NO","NOBODY","NOD","NOISE","NONE","NOR","NORMAL","NORMALLY","NORTH","NORTHERN","NOSE","NOT","NOTE","NOTHING","NOTICE","NOTION","NOW","NUCLEAR","NUMBER","NURSE","OBJECT","OBJECTIVE","OBSERVATION","OBSERVE","OBTAIN","OBVIOUS","OBVIOUSLY","OCCASION","OCCUR","ODD","OF","OFF","OFFENCE","OFFER","OFFICE","OFFICER","OFFICIAL","OFTEN","OIL","OKAY","OLD","ON","ONCE","ONE","ONLY","ONTO","OPEN","OPERATE","OPERATION","OPINION","OPPORTUNITY","OPPOSITION","OPTION","OR","ORDER","ORDINARY","ORGANISATION","ORGANISE","ORGANIZATION","ORIGIN","ORIGINAL","OTHER","OTHERWISE","OUGHT","OUR","OURSELVES","OUT","OUTCOME","OUTPUT","OUTSIDE","OVER","OVERALL","OWN","OWNER","PACKAGE","PAGE","PAIN","PAINT","PAINTING","PAIR","PANEL","PAPER","PARENT","PARK","PARLIAMENT","PART","PARTICULAR","PARTICULARLY","PARTLY","PARTNER","PARTY","PASS","PASSAGE","PAST","PATH","PATIENT","PATTERN","PAY","PAYMENT","PEACE","PENSION","PEOPLE","PER","PERCENT","PERFECT","PERFORM","PERFORMANCE","PERHAPS","PERIOD","PERMANENT","PERSON","PERSONAL","PERSUADE","PHASE","PHONE","PHOTOGRAPH","PHYSICAL","PICK","PICTURE","PIECE","PLACE","PLAN","PLANNING","PLANT","PLASTIC","PLATE","PLAY","PLAYER","PLEASE","PLEASURE","PLENTY","PLUS","POCKET","POINT","POLICE","POLICY","POLITICAL","POLITICS","POOL","POOR","POPULAR","POPULATION","POSITION","POSITIVE","POSSIBILITY","POSSIBLE","POSSIBLY","POST","POTENTIAL","POUND","POWER","POWERFUL","PRACTICAL","PRACTICE","PREFER","PREPARE","PRESENCE","PRESENT","PRESIDENT","PRESS","PRESSURE","PRETTY","PREVENT","PREVIOUS","PREVIOUSLY","PRICE","PRIMARY","PRIME","PRINCIPLE","PRIORITY","PRISON","PRISONER","PRIVATE","PROBABLY","PROBLEM","PROCEDURE","PROCESS","PRODUCE","PRODUCT","PRODUCTION","PROFESSIONAL","PROFIT","PROGRAM","PROGRAMME","PROGRESS","PROJECT","PROMISE","PROMOTE","PROPER","PROPERLY","PROPERTY","PROPORTION","PROPOSE","PROPOSAL","PROSPECT","PROTECT","PROTECTION","PROVE","PROVIDE","PROVIDED","PROVISION","PUB","PUBLIC","PUBLICATION","PUBLISH","PULL","PUPIL","PURPOSE","PUSH","PUT","QUALITY","QUARTER","QUESTION","QUICK","QUICKLY","QUIET","QUITE","RACE","RADIO","RAILWAY","RAIN","RAISE","RANGE","RAPIDLY","RARE","RATE","RATHER","REACH","REACTION","READ","READER","READING","READY","REAL","REALISE","REALITY","REALIZE","REALLY","REASON","REASONABLE","RECALL","RECEIVE","RECENT","RECENTLY","RECOGNISE","RECOGNITION","RECOGNIZE","RECOMMEND","RECORD","RECOVER","RED","REDUCE","REDUCTION","REFER","REFERENCE","REFLECT","REFORM","REFUSE","REGARD","REGION","REGIONAL","REGULAR","REGULATION","REJECT","RELATE","RELATION","RELATIONSHIP","RELATIVE","RELATIVELY","RELEASE","RELEVANT","RELIEF","RELIGION","RELIGIOUS","RELY","REMAIN","REMEMBER","REMIND","REMOVE","REPEAT","REPLACE","REPLY","REPORT","REPRESENT","REPRESENTATION","REPRESENTATIVE","REQUEST","REQUIRE","REQUIREMENT","RESEARCH","RESOURCE","RESPECT","RESPOND","RESPONSE","RESPONSIBILITY","RESPONSIBLE","REST","RESTAURANT","RESULT","RETAIN","RETURN","REVEAL","REVENUE","REVIEW","REVOLUTION","RICH","RIDE","RIGHT","RING","RISE","RISK","RIVER","ROAD","ROCK","ROLE","ROLL","ROOF","ROOM","ROUND","ROUTE","ROW","ROYAL","RULE","RUN","RURAL","SAFE","SAFETY","SALE","SAME","SAMPLE","SATISFY","SAVE","SAY","SCALE","SCENE","SCHEME","SCHOOL","SCIENCE","SCIENTIFIC","SCIENTIST","SCORE","SCREEN","SEA","SEARCH","SEASON","SEAT","SECOND","SECONDARY","SECRETARY","SECTION","SECTOR","SECURE","SECURITY","SEE","SEEK","SEEM","SELECT","SELECTION","SELL","SEND","SENIOR","SENSE","SENTENCE","SEPARATE","SEQUENCE","SERIES","SERIOUS","SERIOUSLY","SERVANT","SERVE","SERVICE","SESSION","SET","SETTLE","SETTLEMENT","SEVERAL","SEVERE","SEX","SEXUAL","SHAKE","SHALL","SHAPE","SHARE","SHE","SHEET","SHIP","SHOE","SHOOT","SHOP","SHORT","SHOT","SHOULD","SHOULDER","SHOUT","SHOW","SHUT","SIDE","SIGHT","SIGN","SIGNAL","SIGNIFICANCE","SIGNIFICANT","SILENCE","SIMILAR","SIMPLE","SIMPLY","SINCE","SING","SINGLE","SIR","SISTER","SIT","SITE","SITUATION","SIZE","SKILL","SKIN","SKY","SLEEP","SLIGHTLY","SLIP","SLOW","SLOWLY","SMALL","SMILE","SO","SOCIAL","SOCIETY","SOFT","SOFTWARE","SOIL","SOLDIER","SOLICITOR","SOLUTION","SOME","SOMEBODY","SOMEONE","SOMETHING","SOMETIMES","SOMEWHAT","SOMEWHERE","SON","SONG","SOON","SORRY","SORT","SOUND","SOURCE","SOUTH","SOUTHERN","SPACE","SPEAK","SPEAKER","SPECIAL","SPECIES","SPECIFIC","SPEECH","SPEED","SPEND","SPIRIT","SPORT","SPOT","SPREAD","SPRING","STAFF","STAGE","STAND","STANDARD","STAR","START","STATE","STATEMENT","STATION","STATUS","STAY","STEAL","STEP","STICK","STILL","STOCK","STONE","STOP","STORE","STORY","STRAIGHT","STRANGE","STRATEGY","STREET","STRENGTH","STRIKE","STRONG","STRONGLY","STRUCTURE","STUDENT","STUDIO","STUDY","STUFF","STYLE","SUBJECT","SUBSTANTIAL","SUCCEED","SUCCESS","SUCCESSFUL","SUCH","SUDDENLY","SUFFER","SUFFICIENT","SUGGEST","SUGGESTION","SUITABLE","SUM","SUMMER","SUN","SUPPLY","SUPPORT","SUPPOSE","SURE","SURELY","SURFACE","SURPRISE","SURROUND","SURVEY","SURVIVE","SWITCH","SYSTEM","TABLE","TAKE","TALK","TALL","TAPE","TARGET","TASK","TAX","TEA","TEACH","TEACHER","TEACHING","TEAM","TEAR","TECHNICAL","TECHNIQUE","TECHNOLOGY","TELEPHONE","TELEVISION","TELL","TEMPERATURE","TEND","TERM","TERMS","TERRIBLE","TEST","TEXT","THAN","THANK","THANKS","THAT","THE","THEATRE","THEIR","THEM","THEME","THEMSELVES","THEN","THEORY","THERE","THEREFORE","THESE","THEY","THIN","THING","THINK","THIS","THOSE","THOUGH","THOUGHT","THREAT","THREATEN","THROUGH","THROUGHOUT","THROW","THUS","TICKET","TIME","TINY","TITLE","TO","TODAY","TOGETHER","TOMORROW","TONE","TONIGHT","TOO","TOOL","TOOTH","TOP","TOTAL","TOTALLY","TOUCH","TOUR","TOWARDS","TOWN","TRACK","TRADE","TRADITION","TRADITIONAL","TRAFFIC","TRAIN","TRAINING","TRANSFER","TRANSPORT","TRAVEL","TREAT","TREATMENT","TREATY","TREE","TREND","TRIAL","TRIP","TROOP","TROUBLE","TRUE","TRUST","TRUTH","TRY","TURN","TWICE","TYPE","TYPICAL","UNABLE","UNDER","UNDERSTAND","UNDERSTANDING","UNDERTAKE","UNEMPLOYMENT","UNFORTUNATELY","UNION","UNIT","UNITED","UNIVERSITY","UNLESS","UNLIKELY","UNTIL","UP","UPON","UPPER","URBAN","US","USE","USED","USEFUL","USER","USUAL","USUALLY","VALUE","VARIATION","VARIETY","VARIOUS","VARY","VAST","VEHICLE","VERSION","VERY","VIA","VICTIM","VICTORY","VIDEO","VIEW","VILLAGE","VIOLENCE","VISION","VISIT","VISITOR","VITAL","VOICE","VOLUME","VOTE","WAGE","WAIT","WALK","WALL","WANT","WAR","WARM","WARN","WASH","WATCH","WATER","WAVE","WAY","WE","WEAK","WEAPON","WEAR","WEATHER","WEEK","WEEKEND","WEIGHT","WELCOME","WELFARE","WELL","WEST","WESTERN","WHAT","WHATEVER","WHEN","WHERE","WHEREAS","WHETHER","WHICH","WHILE","WHILST","WHITE","WHO","WHOLE","WHOM","WHOSE","WHY","WIDE","WIDELY","WIFE","WILD","WILL","WIN","WIND","WINDOW","WINE","WING","WINNER","WINTER","WISH","WITH","WITHDRAW","WITHIN","WITHOUT","WOMAN","WONDER","WONDERFUL","WOOD","WORD","WORK","WORKER","WORKING","WORKS","WORLD","WORRY","WORTH","WOULD","WRITE","WRITER","WRITING","WRONG","YARD","YEAH","YEAR","YES","YESTERDAY","YET","YOU","YOUNG","YOUR","YOURSELF","YOUTH"};

    int count = 0;
    for (std::string s : strs)
    {
        if (tw.TestWord(s) == true) count++;
    }

    std::cout << "Count = " << count << std::endl;*/

///////////////////////////////////////////////////////////////////////////////////////////////////////
/*	PermutationGenerator<int> pg = {0,1,2,3,4,5,6,7,8,9};
    auto result = pg.GeneratePermutations();

    cout << result.size() << std::endl;

    long sum = 0;

    for (unsigned int i = 0; i < result.size(); i++)
    {
        auto current = result[i];
        int d234 = current[1] * 100 + current[2] * 10 + current[3] * 1;
        if (d234 % 2 != 0) continue;

        int d345 = current[2] * 100 + current[3] * 10 + current[4] * 1;
        if (d345 % 3 != 0) continue;

        int d456 = current[3] * 100 + current[4] * 10 + current[5] * 1;
        if (d456 % 5 != 0) continue;

        int d567 = current[4] * 100 + current[5] * 10 + current[6] * 1;
        if (d567 % 7 != 0) continue;

        int d678 = current[5] * 100 + current[6] * 10 + current[7] * 1;
        if (d678 % 11 != 0) continue;

        int d789 = current[6] * 100 + current[7] * 10 + current[8] * 1;
        if (d789 % 13 != 0) continue;

        int d8910 = current[7] * 100 + current[8] * 10 + current[9] * 1;
        if (d8910 % 17 != 0) continue;

        long multiplier = 1;
        long currentNum = 0;
        for (int j = current.size() - 1; j >= 0; j--)
        {
            currentNum += multiplier * current[j];

            multiplier *= 10;
        }

        sum += currentNum;
    }

    std::cout << sum << std::endl;*/

    /*for (unsigned int i = 0; i < result.size(); i++)
    {
        auto permutation = result[i];

        std::cout << i << ": ";

        for (unsigned int j = 0; j < permutation.size(); j++)
        {
            std::cout << permutation[j] << " ";
        }

        std::cout << std::endl;
    }*/
////////////////////////////////////////////////////////////////////////////////////////////////
    /*vector<unsigned long> triangles;
    vector<unsigned long> pentagonals;
    vector<unsigned long> hexagonals;

    for (unsigned int i = 0; i < 100000; i++)
    {
        triangles.push_back((i * (i+1))/2);
    }

    for (unsigned int i = 0; i < 100000; i++)
    {
        pentagonals.push_back((i * (3*i-1))/2);
    }

    for (unsigned long i = 0; i < 100000; i++)
    {
        hexagonals.push_back(i * (2*i-1));
    }

    for (int i = 0; i < 100000; i++)
    {
        auto v = triangles[i];

        if (!std::binary_search (pentagonals.begin(), pentagonals.end(), v))
            continue;

        if (!std::binary_search (hexagonals.begin(), hexagonals.end(), v))
            continue;

        std::cout << "found value: " << v << std::endl;
    }*/

    // std::cout << triangles[500999];
    // std::cout << pentagonals[99999];
////////////////////////////////////////////////////////////////////////////////////////////////
/*	vector<long> primes;
    primes.push_back(2);
    for (long i = 3; i < 200000; i+=2)
    {
        if (PrimeTester::IsPrime(i))
            primes.push_back(i);
    }

    std::cout << primes.size() << " primes found, last " << primes[primes.size() - 1] << std::endl;

    for (long i = 9; i < 10000; i += 2)
    {
        long j = 0;

        if (PrimeTester::IsPrime(i)) continue;

        while (primes[j] < i)
        {
            long diff = i - primes[j];

            if (diff % 2 == 1)
            {
                j++;
                continue;
            }

            long divided = diff / 2;

            long sq_rt = sqrt(divided);

            if (sq_rt * sq_rt != divided)
            {
                j++;
                continue;
            }

            break;
        }

        if (primes[j] > i)
        {
            std::cout << "found: " << i << std::endl;
            break;
        }
    }*/
////////////////////////////////////////////////////////////////////////////////////////////////
/*	vector<long> primes;
    primes.push_back(2);
    for (long i = 3; i < 1000000; i+=2)
    {
        if (PrimeTester::IsPrime(i))
            primes.push_back(i);
    }

    auto distinct_divisors = [=](long n)
    {
        vector<long> l;
        int i=0;
        bool already_added = false;
        while (n > 0 && primes[i] <= n)
        {
            if (n % primes[i] == 0)
            {
                n = n / primes[i];

                if (!already_added)
                {
                    l.push_back(primes[i]);
                    already_added = true;
                }
            }
            else
            {
                already_added = false;
                i++;
            }
        }

        return l;
    };

    for (int i = 2; i < 150000; i++)
    {
        auto vi1 = distinct_divisors(i);
        if (vi1.size() != 4) continue;

        auto vi2 = distinct_divisors(i+1);
        if (vi2.size() != 4) continue;

        auto vi3 = distinct_divisors(i+2);
        if (vi3.size() != 4) continue;

        auto vi4 = distinct_divisors(i+3);
        if (vi4.size() != 4) continue;

        std::cout << "found " << i << std::endl;
        break;
    }*/
////////////////////////////////////////////////////////////////////////////////////////////////
    /*unsigned long modulo = 100000000000;
    auto selfpower = [=](unsigned long x)
    {
        unsigned long result = 1;
        for (unsigned long i = 0; i < x; i++)
        {
            result *= x;
            result %= modulo;
        }

        return result;
    };

    unsigned long sum = 0;
    for (unsigned long i = 1; i <= 1000; i++)
    {
        sum += selfpower(i);
        sum %= modulo;
    }

    std::cout << sum;*/
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    int max_size = 0;
    for (long i = 1000; i < 10000; i++)
    {
        if (!PrimeTester::IsPrime(i))
            continue;

        vector<long> permutations;
        long copy = i;

        permutations.push_back(copy % 10);
        copy /= 10;
        permutations.push_back(copy % 10);
        copy /= 10;
        permutations.push_back(copy % 10);
        copy /= 10;
        permutations.push_back(copy % 10);

        PermutationGenerator<long> pg = { permutations[0], permutations[1], permutations[2], permutations[3] };

        vector<vector<long>> items = pg.GeneratePermutations();
        vector<long> primes;
        for (auto item : items)
        {
            long test = item[0] * 1000 + item[1] * 100 + item[2] * 10 + item[3] * 1;

            if (test == i)
                continue;

            if (!PrimeTester::IsPrime(test))
                continue;

            if (find(primes.begin(), primes.end(), test) == primes.end())
                primes.push_back(test);
        }

        primes.push_back(i);

        if (primes.size() < 3) continue;

        std::sort(primes.begin(), primes.end());

        if (primes.size() > max_size) max_size = primes.size();
        bool good = false;
        for (int idx = 1; idx < primes.size()-1; idx++)
        {
            if (primes[idx] - primes[idx-1] == primes[idx+1] - primes[idx])
                good = true;
        }

        if (good)
            std::cout << primes[0] << " " << (primes.size() > 1 ? primes[1] : -1) << " " << (primes.size() > 2 ? primes[2] : -1) << " " << (primes.size() > 3 ? primes[3] : -1) << " " << (primes.size() > 4 ? primes[4] : -1) << std::endl;
    }

    std::cout << "max size: " << max_size << std::endl;*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*	long N = 1000000;
    vector<long> primes;
    primes.push_back(2);
    for (long i = 3; i < N; i+=2)
    {
        if (PrimeTester::IsPrime(i))
            primes.push_back(i);
    }

    std::sort(primes.begin(), primes.end());
    long max = 0;
    long max_len = 0;
    for (long start = 0; start < primes.size() - 1; start++)
    {
        long sum = 0;
        int iteration_counter = 0;
        for (long i = start; i < primes.size(); i++)
        {
            sum += primes[i];
            if (sum < N && PrimeTester::IsPrime(sum) == true)
            {
                if (sum > max && iteration_counter > 0 && ((i - start) > max_len))
                {
                    max = sum;
                    max_len = i - start;
                }
            }

            if (sum > N) break;
            iteration_counter++;
        }
    }

    std::cout << "max size: " << max << std::endl;*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*	long N = 999999;
    vector<long> primes;
    // primes.push_back(2);
    for (long i = 100001; i < N; i+=2)
    {
        if (PrimeTester::IsPrime(i))
            primes.push_back(i);
    }

    auto count_digits = [=](long n)
    {
        int result = 0;

        while (n > 0)
        {
            n = n / 10;
            result++;
        }

        return result;
    };

    auto diff_digits = [=](long a, long b)
    {
        vector<int> different_positions;

        int position = 0;

        while (a > 0)
        {
            int a_value = a % 10;
            int b_value = b % 10;

            if (a_value != b_value)
                different_positions.push_back(position);

            a /= 10;
            b /= 10;
            position++;
        }

        return different_positions;
    };

    auto get_nth_digit = [=](long n, int pos)
    {
        for (int ipos = 0; ipos < pos; ipos++)
        {
            n /= 10;
        }

        return n % 10;
    };

    auto is_same_digits = [=](long a, vector<int> positions)
    {
        int pos_value = get_nth_digit(a, positions[0]);

        for (unsigned int i = 1; i < positions.size(); i++)
        {
            if (get_nth_digit(a, positions[i]) != pos_value)
                return false;
        }

        return true;
    };

    struct prime_group
    {
        long prime;
        vector<int> asterisks;
        vector<long> other_primes;
    };

    std::cout << "total primes count: " << primes.size() << std::endl;

    vector<prime_group> prime_groups;
    for (unsigned long start = 0; start < primes.size() - 1; start++)
    {
        if (start % 1000 == 0)
            std::cout << "start = " << start << std::endl;

        long primes_value = primes[start];
        unsigned int start_count_digits = count_digits(primes_value);
        for (unsigned long current = start + 1; current < primes.size(); current++)
        {
            unsigned int current_count_digits = count_digits(primes[current]);

            if (start_count_digits > current_count_digits) continue;
            if (start_count_digits < current_count_digits) break;

            long a = primes[start];
            long b = primes[current];
            vector<int> diffs = diff_digits(a, b);

            if (diffs.size() == current_count_digits) continue;

            if (!is_same_digits(primes[start], diffs)) continue;
            if (!is_same_digits(primes[current], diffs)) continue;

            auto found_iter = std::find_if(prime_groups.begin(), prime_groups.end(), [&](prime_group const& item)
            {
                if (item.prime != primes[start]) return false;

                if (diffs.size() != item.asterisks.size()) return false;

                for (unsigned int ind_diffs = 0; ind_diffs < diffs.size(); ind_diffs++)
                {
                    if (diffs[ind_diffs] != item.asterisks[ind_diffs]) return false;
                }

                return true;
            });

            if (found_iter != prime_groups.end())
            {
                found_iter->other_primes.push_back(primes[current]);
            }
            else
            {
                prime_group pg;
                pg.prime = primes[start];
                pg.asterisks = diffs;
                pg.other_primes.push_back(primes[current]);

                prime_groups.push_back(pg);
            }
        }
    }

    for (unsigned int i = 0; i < prime_groups.size(); i++)
    {
        auto el = prime_groups[i];

        if (el.other_primes.size() < 6) continue;

        std::cout << "base prime: " << el.prime << " changed positions: " << el.asterisks.size() << " group size: " << el.other_primes.size();

        std::cout << " elements: ";
        for (unsigned int gk = 0; gk < el.other_primes.size(); gk++)
            std::cout << el.other_primes[gk] << " ";

        std::cout << std::endl;
    }
    */
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*	auto is_vectors_identical = [&](const vector<unsigned long>& v1, const vector<unsigned long>& v2)
    {
        if (v1.empty()) return false;
        if (v1.size() != v2.size()) return false;

        for (unsigned int i = 0; i < v1.size(); i++)
            if (v1[i] != v2[i]) return false;

        return true;
    };

    auto get_digits = [=](unsigned long n)
    {
        vector<unsigned int> result;

        while (n > 0)
        {
            result.push_back(n % 10);

            n = n / 10;
        }

        return result;
    };

    unsigned long res = 0;
    for (unsigned long x = 1; x < 1000000; x++)
    {
        auto vx = get_digits(x);
        unsigned long x2 = x + x;
        auto vx2 = get_digits(x2);

        if (vx.size() != vx2.size()) continue;
        std::sort(vx.begin(), vx.end());
        std::sort(vx2.begin(), vx2.end());

        int dcount = 0;
        for (int idx = 0; idx < vx.size(); idx++)
        {
            if (vx[idx] != vx2[idx])
                break;
            dcount++;
        }

        if (dcount < vx.size()) continue;

        unsigned long x3 = x2 + x;
        auto vx3 = get_digits(x3);
        if (vx3.size() != vx2.size()) continue;
        std::sort(vx3.begin(), vx3.end());

        dcount = 0;
        for (int idx = 0; idx < vx3.size(); idx++)
        {
            if (vx[idx] != vx3[idx])
                break;
            dcount++;
        }

        if (dcount < vx3.size()) continue;

        unsigned long x4 = x3 + x;
        auto vx4 = get_digits(x4);
        if (vx4.size() != vx3.size()) continue;
        std::sort(vx4.begin(), vx4.end());

        dcount = 0;
        for (int idx = 0; idx < vx4.size(); idx++)
        {
            if (vx[idx] != vx4[idx])
                break;
            dcount++;
        }

        if (dcount < vx4.size()) continue;

        unsigned long x5 = x4 + x;
        auto vx5 = get_digits(x5);
        if (vx5.size() != vx4.size()) continue;
        std::sort(vx5.begin(), vx5.end());

        dcount = 0;
        for (int idx = 0; idx < vx5.size(); idx++)
        {
            if (vx[idx] != vx5[idx])
                break;
            dcount++;
        }

        if (dcount < vx5.size()) continue;

        unsigned long x6 = x5 + x;
        auto vx6 = get_digits(x6);
        if (vx6.size() != vx5.size()) continue;
        std::sort(vx6.begin(), vx6.end());

        dcount = 0;
        for (int idx = 0; idx < vx6.size(); idx++)
        {
            if (vx[idx] != vx6[idx])
                break;
            dcount++;
        }

        if (dcount < vx6.size()) continue;

        res = x;
        break;
    }

    std::cout << "x = " << res << std::endl;
    */
////////////////////////////////////////////////////////////////////////////////////////////////////
    /*mpz_class a { 1 };
    mpz_class b { "739273273827392783729732739232367826387268362836826326938729379273972379273928738923" };
    mpz_class c = a + b;*/

/*    mpz_class million { 1000000 };

    auto factorial = [=](mpz_class a)
    {
        mpz_class factorial { 1 };

        if (a == 0) return factorial;

        for(mpz_class i = 1; i <= a; i++)
        {
            factorial *= i;
        }

        return factorial;
    };

    auto cnk = [=](mpz_class a, mpz_class b)
    {
        mpz_class a_f = factorial(a);
        mpz_class b_f = factorial(b);
        mpz_class diff = a - b;
        mpz_class diff_f = factorial(diff);

        mpz_class mul = b_f * diff_f;

        mpz_class result = a_f/mul;

        return result;
    };

    // cout << a << " + " << b << " = " << c << endl;
    // std::getchar();

    int counter = 0;
    for (int n = 1; n <= 100; n++)
    {
        for (int k = 1; k <= n; k++)
        {
            mpz_class a { n }, b { k };
            mpz_class c = cnk(a,b);

            if (c > million)
                counter++;
        }
    }

    cout << counter << std::endl;*/
////////////////////////////////////////////////////////////////////////////////////////////////////
    /*Suite s1 = Suite::Hearts, s2 = Suite::Diamonds;

    if (s1 < s2)
        cout << "ololo";
    else
        cout << "trulala";

    cout << endl;*/

    Card c1 { "4D" };
    Card c2 { "4S" };

    Hand h1 = { Card { "JC" }, Card { "TC" }, Card { "AC" }, Card { "KC" }, Card { "QC" }};

    RoyalFlush r;

    if (r.Test(h1).success)
        std::cout << "h1 royal flush" << std::endl;
    else
        std::cout << "h1 no royal flush" << std::endl;
    // Card ctest = h1[3];

    Hand h2 = { Card { "7C" }, Card { "TC" }, Card { "2C" }, Card { "9C" }, Card { "6C" }};

    StraightFlush sf;
    if (sf.Test(h2).success)
        std::cout << "h2 straight flush" << std::endl;
    else
        std::cout << "h2 no straight flush" << std::endl;
}
