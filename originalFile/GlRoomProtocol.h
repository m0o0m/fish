#ifndef __GLROOM_H__
#define __GLROOM_H__

#define GL_ROOMVER_LOGINONCE			0x02060004	//�����һվ��¼�Ĵ����İ汾�� wangym 2005.11.7

#define GL_DISLIKE_ESCAPE				1
#define GL_DISLIKE_ENEMY				2
#define GL_DISLIKE_NETSPEED				3
#define GL_DISLIKE_OTHER				4
#define GL_DISLIKE_SCORE				5
//DYF.2003.03.31.Begin
//����ֻ���Ա�湦��
#define GL_DISLIKE_NOFREE				6
//DYF.2003.03.31.End
#define GL_DISLIKE_KICKBYTABLELEADER	8
#define GL_DISLIKE_KICKBYMASTER			16
#define GL_DISLIKE_CHECK				32
#define GL_DISLIKE_MONEY				33//�Ƹ�ֵ
#define GL_DISLIKE_WINRATE				34//ʤ��


//---------------------------------------------------------------------------
//	��������
//---------------------------------------------------------------------------
#define	GL_MATCHTYPE_FREE				0	//ѡ���Լ�ѡ����λ���Լ��Ҷ���
#define	GL_MATCHTYPE_AUTOFREE			1	//ѡ��ͬ�⿪ʼ�������ɷ�����������λ
#define	GL_MATCHTYPE_AUTO				2	//�����������ѡ�ַ�����λ
#define	GL_MATCHTYPE_FIX				3	//����֯�߹涨���ּ���λ����ı���
#define	GL_MATCHTYPE_ORDER				4	//����ѡ�ֳɼ�����������һ�������һ�����б���
#define	GL_MATCHTYPE_SWISS				5	//����ѡ�ֳɼ�����������һ�������һ�����б���

#define	GL_MATCHTYPE_MIN				0	//����������Сֵ
#define	GL_MATCHTYPE_MAX				5	//�����������ֵ

//---------------------------------------------------------------------------
//	����ѡ�ֵ�״̬GL_MATCHPLAYERSTATUS_NOTMATCHED����չ
//---------------------------------------------------------------------------
#define	GL_NEWMATCHPLAYERSTATUS_NOTMATCHED		0x10	//�ֿ�
#define	GL_NEWMATCHPLAYERSTATUS_MATCHED			0x20	//�Ѿ���������û�а취������ϸ��״��
#define	GL_NEWMATCHPLAYERSTATUS_DELAY			0x30	//��ʱ��Ȩ
#define	GL_NEWMATCHPLAYERSTATUS_ESCAPE			0x40	//����
#define	GL_NEWMATCHPLAYERSTATUS_WIN				0x50	//Ӯ��
#define	GL_NEWMATCHPLAYERSTATUS_LOSS			0x60	//����
#define	GL_NEWMATCHPLAYERSTATUS_DRAW			0x70	//����
#define	GL_NEWMATCHPLAYERSTATUS_CLOSE			0x80	//��棬�ɲ����ٲ�

//---------------------------------------------------------------------------
//	��ǰ�ֱ���״̬
//---------------------------------------------------------------------------
#define	GL_STAGESTATUS_NOTSTART			0	//δ��ʼ
#define	GL_STAGESTATUS_ROOMCREATED		1	//������Ϸ���Ѿ�����
#define	GL_STAGESTATUS_DOING			2	//���ڱ����ڼ�
#define	GL_STAGESTATUS_DELAY			3	//�Ѿ�������Ϸ������ʱ����
#define	GL_STAGESTATUS_ROOMNOTDELETED	4	//�����Ѿ���������������Ϸ�һ�δɾ��
#define	GL_STAGESTATUS_DONE				5	//�����Ѿ���������Ϸ��Ҳ�Ѿ���ɾ����

//---------------------------------------------------------------------------
//wuqy2001-10-15��������״̬
//---------------------------------------------------------------------------
#define GL_SIGNROOMSTATUS_NOTSTART		0	//�������䣬����ʱ��û�е�
#define GL_SIGNROOMSTATUS_DOING			1	//�������䣬���ڱ���
#define GL_SIGNROOMSTATUS_OVER			2	//�������䣬��������
#define GL_SIGNROOMSTATUS_DELETED		3	//�������䣬�Ѿ���ɾ��

//---------------------------------------------------------------------------
//wuqy2002-3-6һ���ƻ�һ������������һ������
//---------------------------------------------------------------------------
#define GL_MATCHHANDOVER_CONTINUEGAME	0	//��������һ���ƻ�����һ����
#define GL_MATCHHANDOVER_STOPGAME		1	//ʤ���Ѿ�������������һ����Ϸ

//---------------------------------------------------------------------------
//	��Ϸ������
//---------------------------------------------------------------------------
#define GL_ROOMTYPE_SYSTEM				0	//��ͨ��Ϸ�ң�ϵͳ����
#define	GL_ROOMTYPE_SHOW				1	//��ʾ��Ϸ�ң�ֻ��������
#define	GL_ROOMTYPE_MATCH				2	//������Ϸ��
#define GL_ROOMTYPE_USERDEFINE			3	//��ͨ��Ϸ�ң��û�����
#define GL_ROOMTYPE_SINGLEPLAYER		4	//֧��������Ϸ������Ҳ�������������ϵ���Ϸ��
#define	GL_ROOMTYPE_HIDENAMEMATCH		5	//����������Ϸ��
#define	GL_ROOMTYPE_NEWGAMEMODE			6	//����Ϸ���Ʒ���


//---------------------------------------------------------------------------
//	��Ϸ����״̬(���)
//---------------------------------------------------------------------------
#define	GL_MATCHTABLEFLAG_MATCHED		1	//�Ѿ�����
#define	GL_MATCHTABLEFLAG_WATCHABLE		2	//�����Թ�

//---------------------------------------------------------------------------
//	����ѡ�ֵ�״̬
//---------------------------------------------------------------------------
#define	GL_MATCHPLAYERSTATUS_NOTPLAYER		0	//���Ǳ���ѡ��
#define	GL_MATCHPLAYERSTATUS_NOMATCH		1	//�ֿ�
#define	GL_MATCHPLAYERSTATUS_NOTMATCHED		2	//�ֿ�
#define	GL_MATCHPLAYERSTATUS_NOTTHISROOM	3	//���������Ϸ�ҵ�ѡ��
#define	GL_MATCHPLAYERSTATUS_MATCHED		4	//�Ѿ���������û�а취������ϸ��״��
#define	GL_MATCHPLAYERSTATUS_DELAY			5	//��ʱ��Ȩ
#define	GL_MATCHPLAYERSTATUS_ESCAPE			6	//����
#define	GL_MATCHPLAYERSTATUS_WIN			7	//Ӯ��
#define	GL_MATCHPLAYERSTATUS_LOSS			8	//����
#define	GL_MATCHPLAYERSTATUS_DRAW			9	//����
#define	GL_MATCHPLAYERSTATUS_CLOSE			10	//��棬�ɲ����ٲ�
#define	GL_MATCHPLAYERSTATUS_NOTPLAYER_NOPROMPT		11	//���Ǳ���ѡ��(�ͻ��˲�����ʾ���ɷ���������ʾ) wuqy add 2005.8.26



//--------------------------------------------------------------------------
//	����(����3��)����ѡ�ֵ�״̬
//---------------------------------------------------------------------------
#define	GL_MATCHPLAYERSTATUS_MULTIPESCAPE			0	//����
#define	GL_MATCHPLAYERSTATUS_MULTIPFIRST			1	//��1��
#define	GL_MATCHPLAYERSTATUS_MULTIPSECOND			2	//��2��
#define	GL_MATCHPLAYERSTATUS_MULTIPTHIRD			3	//��3��
#define	GL_MATCHPLAYERSTATUS_MULTIPFOUR				4	//��4��
#define	GL_MATCHPLAYERSTATUS_MULTIPFIFTH			5	//��5��
#define	GL_MATCHPLAYERSTATUS_MULTIPSIXTH			6	//��6��
#define	GL_MATCHPLAYERSTATUS_MULTIPSEVEN			7	//��7��
#define	GL_MATCHPLAYERSTATUS_MULTIPEIGHTH			8	//��8��


//--------------------------------------------------------------------------
//	�����Ʒ�����
//---------------------------------------------------------------------------
#define GL_MATCHSCORETYPE_1							1   //4����Ϸ�в���ȡƽ���� zy add 2006.3.1�������齫��
#define GL_MATCHSCORETYPE_2							2   //4����Ϸ����С�������ֱ�Ʒ�,����С�ֲ��У�ȡƽ���� zy add 2006.7.4�������壬�����齫��
#define GL_MATCHSCORETYPE_3							3   //3����Ϸ�в���ȡƽ���֣����Ƚ϶����ˡ��Ƕ����˵�С�ּ�����˵ĳɼ� zy add 2006.7.13���ڿӣ�
#define GL_MATCHSCORETYPE_4							4   //5����Ϸ�в���ȡƽ���� zy add 2006.8.24 (����)


//---------------------------------------------------------------------------
//	�û�����
//---------------------------------------------------------------------------
#define GL_USERTYPEFLAG_SELF			0x01		//�Լ�
#define	GL_USERTYPEFLAG_SUPER			0x02		//��Ȩ�û�
#define	GL_USERTYPEFLAG_FRIEND			0x80		//����
#define	GL_USERTYPEFLAG_ENEMY			0x40		//���ܻ�ӭ
#define	GL_USERTYPEFLAG_FACTION			0x20		//����
#define	GL_USERTYPEFLAG_HONGUEST		0x08		//�α�
#define GL_USERTYPEFLAG_PARTNER			0x10		//�

#define GL_USERTYPEFLAG_HAND			0x10
#define GL_USERTYPEFLAG_MIC				0x04

#define GL_PRIVILEGE_CORE				0
#define GL_PRIVILEGE_SETUSER			5
#define GL_PRIVILEGE_PASSWORD			10

#define	GL_PRIVILEGE_KICKUSER			70
#define GL_PRIVILEGE_SUPER				70

#define GL_PRIVILEGE_MASTERSTART				0
#define GL_PRIVILEGE_MASTEREND					70	

#define GL_PRIVILEGE_MATCHMASTER				11
#define GL_PRIVILEGE_MASTER						16
#define GL_PRIVILEGE_GOODUMPIREHEAD				21
#define GL_PRIVILEGE_UMPIREHEAD					22
#define GL_PRIVILEGE_GOODMASTER					23
#define GL_PRIVILEGE_ONWATCHGROUPHEAD			24
#define GL_PRIVILEGE_GOODMASTERFOREVER			28	//������������	// DYF 2004.05.08
#define GL_PRIVILEGE_GOODMASTER1				29
#define GL_PRIVILEGE_ONWATCHCLASSHEAD			30
#define GL_PRIVILEGE_GOODUMPIRE					33
#define GL_PRIVILEGE_ASSISTANTGOODUMPIRE		34
#define GL_PRIVILEGE_GOODUMPIRE1				37
#define GL_PRIVILEGE_STAIRUMPIRE				38
#define GL_PRIVILEGE_GOODUMPIRE2				41
#define GL_PRIVILEGE_BIVALENTUMPIRE				42
#define GL_PRIVILEGE_THIRDCLASSUMPIRE			45
#define GL_PRIVILEGE_GOODMASTER2				48
#define GL_PRIVILEGE_INDUEFORMMASTER			49

#define GL_PRIVILEGE_COMPERE					51		//������ Add by DYF 2004/08/24
#define GL_PRIVILEGE_NOVICIATE					52		//��ϰ
#define GL_PRIVILEGE_TEACHER					56		//��ʦ Add by DYF 2004/08/24
#define GL_PRIVILEGE_LGSHOUTER					60		//������ʹ��lgshout�����Ȩ�� add by wangning 09105
#define GL_PRIVILEGE_CHECKREFRESHLOW			70		//�����ˢ�������Ȩ��

#define GL_PRIVILEGE_GUESTSTART					71		//�α�?
#define GL_PRIVILEGE_GUESTEND					80		//�α�?

#define GL_PRIVILEGE_GUEST						71		//�α�
//#define GL_PRIVILEGE_?						72		//ְҵ������
//#define GL_PRIVILEGE_?						73		//ְҵΧ����
//#define GL_PRIVILEGE_?						74		//ְҵ��������
//#define GL_PRIVILEGE_?						75		//ְҵ����������
#define GL_PRIVILEGE_CHESSCARDGUEST				76		//ְҵ�й�������
#define GL_PRIVILEGE_LOVER						77		//��������(��������)	//DYF 2004.05.18
#define GL_PRIVILEGE_FORLIFECREDIT				78		//��������
#define GL_PRIVILEGE_EXCELLENCECONTRIBUTE		79		//׿Խ����
#define GL_PRIVILEGE_ESPECIALLYCONTRIBUTE		80		//���⹱��

#define GL_PRIVILEGE_NORMALSTART				81		//�������û�
#define GL_PRIVILEGE_NORMALEND					198		//�������û�

//----------------------------------------------------------------
//	��������綨����Ҫ������ʾ��ͬͼ��81--198
//----------------------------------------------------------------
#define GL_PRIVILEGE_GUEST_GOODBBSEDITOR		81
#define GL_PRIVILEGE_GUEST_DIAMONDBBSEDITOR		82
#define GL_PRIVILEGE_GUEST_GOODBBSEDITOR1		83
#define GL_PRIVILEGE_GUEST_GOLDBBSEDITOR		84
#define GL_PRIVILEGE_GUEST_GOODBBSEDITOR2		85
#define GL_PRIVILEGE_GUEST_SILVERBBSEDITOR		86
#define GL_PRIVILEGE_GUEST_GOODBBSEDITOR3		87
#define GL_PRIVILEGE_GUEST_BBSEDITOR			88
#define GL_PRIVILEGE_GUEST_OURGAMEHERO			92
#define GL_PRIVILEGE_GUEST_OURGAMEBIGERRANTRY	93
#define GL_PRIVILEGE_GUEST_OURGAMEERRANTRY		94
#define GL_PRIVILEGE_GUEST_OURGAMEHERO1			95
#define GL_PRIVILEGE_GUEST_DUNPAI				100//�����ʼ�Ա//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_NEWSTAR				101
#define GL_PRIVILEGE_GUEST_SHANDIAN				105//��������//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_GOODAUTHOR			106
#define GL_PRIVILEGE_GUEST_COOPERATEASSOCIATE	111
#define GL_PRIVILEGE_GUEST_CRYSTALEX			120 //��164��ʾ����120  (10�������������)
#define GL_PRIVILEGE_GUEST_ZZL					121	//������wangcheng 2005.2.3
#define GL_PRIVILEGE_GUEST_TZJ					122	//���ӽ�wangcheng 2005.2.3
#define GL_PRIVILEGE_GUEST_WZL					123	//������wangcheng 2005.2.3
#define GL_PRIVILEGE_GUEST_KMSH					124	//������wangcheng 2005.2.3
#define GL_PRIVILEGE_GUEST_ZHL					125	//�����wangcheng 2005.2.3
#define GL_PRIVILEGE_GUEST_ZYF					128	//�����wangcheng 2005.2.3 wangcheng 2005.3.14 �ͷ��ô�126�ĳ�128
#define GL_PRIVILEGE_GUEST_TSL					127	//̫����wangcheng 2005.2.3
#define GL_PRIVILEGE_GUEST_SWJ					126	//�����wangcheng 2005.2.3 wangcheng 2005.3.14 �ͷ��ô�128�ĳ�126
#define GL_PRIVILEGE_GUEST_TGYH					150	//�����û�wangcheng 2005.3.3
#define GL_PRIVILEGE_GUEST_ROSE2				155 //õ�����//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_ROSE3				156 //õ����ʹ//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_MONEYHOME			157	//����@��֮��		// DYF 2004.08.10
#define GL_PRIVILEGE_GUEST_GROUP				158 //������//wangch.2004.1.7
#define GL_PRIVILEGE_GUEST_OVERFLOW				159 //��ֵ��//wangch.2004.1.7
#define GL_PRIVILEGE_GUEST_GKEY					160 //��Կ��//wangch.2004.1.7
#define GL_PRIVILEGE_GUEST_ROSE5				161 //����õ��//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_CRYSTAL				164	//10�������������
#define GL_PRIVILEGE_GUEST_EXTEND				167	//������ֵ���
#define GL_PRIVILEGE_JHLP						170	//��������
#define GL_PRIVILEGE_GUEST_XXL					171 //������//wangcheng 2005.2.3
#define GL_PRIVILEGE_LORDTY						177 //��������ѫ������ 2005.6.30
#define GL_PRIVILEGE_LORDJC						178 //��������ѫ����� 2005.6.30
#define GL_PRIVILEGE_LORDYC						179 //��������ѫ������ 2005.6.30
#define GL_PRIVILEGE_GUEST_RICH0				180 //���Ŵ�����������//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_RICH1				181 //���Ŵ�����������//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_RICH2				182	//���Ŵ��̳�������//shil.2003.9.10
#define GL_PRIVILEGE_GUEST_RICH3				183 //���Ŵ��̲Ƹ�Ӣ��//shil.2003.9.10
#define GL_PRIVILEGE_ZHIHUAN_J					184	//��ָ��				// DYF 2004.04.23
#define GL_PRIVILEGE_ZHIHUAN_Y					185	//��ָ��				// DYF 2004.04.23
#define GL_PRIVILEGE_DIZHU						186	//�人�����������ھ�	// DYF 2004.05.18
#define GL_PRIVILEGE_SUPERSTAR					187	//����������			// wangcheng 2004.12.27
#define GL_PRIVILEGE_LOCKYSTAR_J				188	//�޵�������(��)		// DYF 2004.08.10
#define GL_PRIVILEGE_LOCKYSTAR_Y				189	//�޵�������(��)		// DYF 2004.08.10
#define GL_PRIVILEGE_JUNQI_BABY					190	//�Ĺ����屦��		// DYF 2004.03.10
#define GL_PRIVILEGE_BRIDGE_TEAM				191	//���ƶ�ʽ������ѡ��	// DYF 2004.03.19
#define GL_PRIVILEGE_BRIDGE_TWIN				192	//����˫��������ѡ��	// DYF 2004.03.19
#define GL_PRIVILEGE_TET3						193	//�λö���˹			// wuqy 2004.12.07
#define GL_PRIVILEGE_JUNQI_1					194	//���������㹤����Ա	// wym 2003.11.24
#define GL_PRIVILEGE_JUNQI_2					195	//������������Ա		// wym 2003.11.24
#define GL_PRIVILEGE_JUNQI_3					196	//��̨������			// wym 2003.11.24	
#define GL_PRIVILEGE_JUNQI_4					197	//��ѫӢ��				// wym 2003.11.24
#define GL_PRIVILEGE_GUEST_MATCH				198 //���������������Ȩ�ޣ�ˮ����

#define GL_PRIVILEGE_NORMAL				199		//�������û�

#define GL_PRIVILEGE_SPECIALSTART		200		//���⴦��
#define GL_PRIVILEGE_SPECIALEND			255		//

#define GL_PRIVILEGE_RECORD				230		//��������û�	chenzd	2001.7.13
#define GL_PRIVILEGE_DISABLESTART		240
#define GL_PRIVILEGE_DISABLEEND			254
#define GL_PRIVILEGE_DISABLE			254
#define GL_PRIVILEGE_DISABLENOPROMPT	253		//baoyq 2004.9.23,ԭ����GL_PRIVILEGE_DISABLENOTIP
#define GL_PRIVILEGE_DISABLEIP			252		//baoyq 2004.9.23,�û�IP��ַ����ֹ˵��,������ʾ��
#define GL_PRIVILEGE_NONE				255

//----------------------------------------------------------------
//	��չͼ��256--511
//----------------------------------------------------------------
#define GL_PRIVILEGE_NEWICONSTART				256
#define GL_PRIVILEGE_NEWICONEND					4095


#define GL_RPIVILEGE_PRIORITYBEGIN		171		//�������ȿ�ʼ����
#define GL_RPIVILEGE_PRIORITYEND		180		//�������Ƚ�������

#define	GL_CHECKUSER_EQUAL				0
#define	GL_CHECKUSER_HIGH				1
#define	GL_CHECKUSER_LOWE				2

#define	GL_LANGRSC_BASEMASTER			1000
#define	GL_LANGRSC_BASEMEMBER			2000

#define	GL_MEMBER_FREE					0
#define	GL_MEMBER_NORMAL				10
#define GL_MEMBER_MOBILE				11	// �ƶ��û��������������ǽ��ѵ�
#define	GL_MEMBER_VIP					20
#define	GL_MEMBER_LIEFLONG				30
#define	GL_MEMBER_HONOR					40



typedef	union tagEXTENDFIELD
{
	char cContent;
	BYTE uchContent;
	WORD perContent;
	short unContent;
	WORD wContent;
	LONG lContent;
	DWORD dwContent;
	float fContent;
	char szContent[256];
} EXTENDFIELD, FAR *PEXTENDFIELD;

//---------------------------------------------------------------------------
//	�û���Ϣ�ṹ
//---------------------------------------------------------------------------
typedef struct tagROOMPLAYERINFOEX
{
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szNickName[GL_BUFLEN_NICKNAME];				// �س�
	int nImage;											// ͷ��
	DWORD dwRank;										// ����
	int nScore;										// ����
	DWORD dwWins;										// Ӯ�ľ���
	DWORD dwLosses;										// ��ľ���
	DWORD dwDraws;										// ƽ����
	DWORD dwGameCount;									// ��Ϸ����
	int nBreakRate;										// ������
	DWORD dwMoney;										// �Ƹ�
	WORD wSpeed;										// ����
	char szFaction[GL_BUFLEN_FACTION];					// ����
	BYTE uchMember;										// ��Ա
	BYTE uchPrivilege;									// ��Ȩ
	DWORD dwLanguage;									// ����

	BYTE uchStatus;										// �û�״̬
	WORD wTable;										// ����
	BYTE uchSeat;										// ��λ��
	BOOL bTablePassword;								// ��ǰ�����Ƿ��п���
	BOOL bReady;										// �Ƿ��Ѿ�׼����

	BYTE cUserType;										// ������ԣ��Ƿ����Ѻ͵���, 0=ʲô�����ǣ�1=���ѣ�2=����

	PEXTENDFIELD pExntendField;							// ��չ�ֶ�
} ROOMPLAYERINFOEX, FAR *PROOMPLAYERINFOEX;

typedef struct tagNEWROOMPLAYERINFOEX
{
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szNickName[GL_BUFLEN_NICKNAME];				// �س�
	int nImage;											// ͷ��
	DWORD dwRank;										// ����
	int nScore;										// ����
	DWORD dwWins;										// Ӯ�ľ���
	DWORD dwLosses;										// ��ľ���
	DWORD dwDraws;										// ƽ����
	DWORD dwGameCount;									// ��Ϸ����
	int nBreakRate;										// ������
	DWORD dwMoney;										// �Ƹ�
	WORD wSpeed;										// ����
	char szFaction[GL_BUFLEN_FACTION];					// ����
	BYTE uchMember;										// ��Ա
	BYTE uchPrivilege;									// ��Ȩ
	DWORD dwLanguage;									// ����

	BYTE uchStatus;										// �û�״̬
	WORD wTable;										// ����
	BYTE uchSeat;										// ��λ��
	BOOL bTablePassword;								// ��ǰ�����Ƿ��п���
	BOOL bReady;										// �Ƿ��Ѿ�׼����

	BYTE cUserType;										// ������ԣ��Ƿ����Ѻ͵���, 0=ʲô�����ǣ�1=���ѣ�2=����

	PEXTENDFIELD pExntendField;							// ��չ�ֶ�
	BOOL bMobile;                                       //�Ƿ�������ֻ�
	WORD	*pwAvatarItems;								//�û���ǰ�����Avatar��ƷID�б�
	BYTE	bySex;										//�û��Ա�
											//��ʽ  wCount  wItemID ....  wItemID 
	LONGLONG	lDigitalID;					//����id wuqy add 2005.3.8
} NEWROOMPLAYERINFOEX, FAR *PNEWROOMPLAYERINFOEX;

//byq 2002.9.27 ��Ϸ����չ�˵��ص�����(����������Ϣ��)
typedef BOOL (WINAPI *PGLPLUGINCALLBACK)(void * pParam,const void *pMsg,void **pRecvMsg,DWORD dwWaitMsgID);
                         //�ص���������
                         //��������:pParamΪPGLPLUGINFUNCʱ���ݵĲ���ָ��fParam
						 //pMsgΪҪ���͵İ�
                         //pRecvMsgΪ��ȴ����յİ���ַ
						 //dwWaitMsgIDΪ��ȴ��İ���ϢID
typedef void (WINAPI *PGLPLUGINFUNC)(HWND hMainWnd,void* SelfInfo,void *OtherInfo,LPCTSTR lParam,
									 PGLPLUGINCALLBACK  pFunc,void *fParam);
						//Ϊ���������PlugIn����
						//���ݲ�����������
						//hMainWndΪ�����ھ��   SelfInfoΪ�����PNEWPLAYERINFOEXָ��  
						//OtherInfoΪ�������������PNEWPLAYERINFOEXָ��   lParamΪע�����д���һ��������
						//pFuncΪ�������緢�Ͱ��ص�������ַ   fParamΪ�贫��pFunc�ص������Ĳ���

//---------------------------------------------------------------------------
//	Login���̣�IP��Port��GameList.ini�ļ�ָ��
//---------------------------------------------------------------------------
#define	GLID_LOGIN						(GLID_BASEROOM+0x00000000)	//Login

#define GLBIT_LOGIN_SUCCESS				GLBIT_SUCCESS	// Login�ɹ�
#define GLBIT_LOGIN_SVRBUSY				0x00000002		// ������æ����ʾ�û��Ժ�����
#define GLBIT_LOGIN_INVALIDGAMEVERSION	0x00000003		// ��Ҫ�°汾����Ϸ
#define GLBIT_LOGIN_EXPIRED				0x00000004		// �û�ʹ����������
#define GLBIT_LOGIN_TRIALEXPIRED		0x00000005		// ���ð浽�ڣ���Ҫ�������ؽɷѰ��ɷ� wym 2003-8-5 
														// ����Ӧ��������ڷ���GLACKLOGIN��Ϣ���渽��˵�� 
#define GLBIT_LOGIN_VERIFYFAIL			0x00000006		// ������������֤ʧ�ܣ�����ƶ��ͽ�Ѷ�ֻ��շѣ�������������֤�õ� wym 2004.3.26
#define GLBIT_LOGIN_NOREGISTER			0x00000008		// ����Ϸû��ע���//�Ӵ����п�Ӧ�����û�û��ע���,�������ִ����� chairmin 2009.02.20
#define GLBIT_LOGIN_NOLICENCE			0x00000009		// δ��������Ȩ��oem�ͻ��� wym 2002-10-10
//---------------------------------------------------------------------------
//	GLBIT_LOGIN_USEREXIST�����������������ó������ݿ�汾ʱ�Żᷢ��,
//	��Internet�汾��, ��һ���û����Ѿ��ڷ������д���ʱ, ��������ɱ��ԭ��
//	���ڵġ�����ͬ�û������߳�
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_USEREXIST			0X00000010		// �Ѿ���һ����ͬ���ֵ��ڴ˷������д���
#define GLBIT_LOGIN_INVALIDUSER			0X00000020		// �û�����������
#define GLBIT_LOGIN_USERNOTACTIVE		0X00000021		// �ʺ�û�м����Ҫ���ͼ�� wuqy add 2007.7.27��
//---------------------------------------------------------------------------
//	version >= 0x011e05ff
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_FULL				0x00000040		// ����������
//---------------------------------------------------------------------------
//	version >= 0x011e08ff
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_INVALIDROOMVERSION	0x00000080
//---------------------------------------------------------------------------
//	2000.4.23�°����
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_CLOSED				0x00000100		// ��̨�����Ѿ�����գ�ֻ��������������
//---------------------------------------------------------------------------
//	2001.11.21,byq����ĳЩIP�ǻ�Ա�û�����
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_NOTFREE				0x00000200		// ��̨�����Ѿ�����գ�ֻ��������������
//---------------------------------------------------------------------------
//	2001.12.14,byq���ӱչ�����
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_PAUSE				0x00000400		// ��̨�����Ѿ�����գ�ֻ��������������
//---------------------------------------------------------------------------
//	2001.12.27,byq���ӱչ�����
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_PROMPT				0x00000800		// ���û���ʾ��Ϣ��ͬʱ�����¼
#define GLBIT_LOGIN_PROMPTIMP			0x00000801		// ���û���ʾ����Ҫ����Ϣ�������������Ź��ڵ���ʾ����ͬʱ�����¼ wuqy add 2006.10.26
//---------------------------------------------------------------------------
//	2002.11.20,shil �����������ʱ��game�汾���Ե�ʱ�����ȥ����
//	version >= 0x0201000d
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_ROOMVERSIONTOOHIGH	0x00001001		// �����汾̫����
#define GLBIT_LOGIN_GAMEVERSIONTOOHIGH	0x00001002		// ��Ϸ�汾̫����
//---------------------------------------------------------------------------
//	baoyq 2004.12.17 Ϊ��ID����ʱ����������¼���,GLRegisterService���ݴ����汾���ز�ͬ����Ϣ
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_PROTECTLOGIN		0x00001003
#define GLBIT_LOGIN_INVALIDTICKET		0x00001004		// ticket��֤ʧ�� wym 2005.10.20
#define GLBIT_LOGIN_INVALIDTICKETTIME	0x00001005		// ticket��֤ʧ��,������Ч��,�������µ�½ wym 2005.10.20
#define GLBIT_LOGIN_ONCEPROTECT			0x00001006		//�û��а��ε�¼���� wuqy 2006.9.15
#define GLBIT_LOGIN_GAMECLOSED			0x00001007		//���û����ض���Ϸ�б���� wuqy 2006.11.28
#define GLBIT_LOGIN_ABNORMALUSER		0x00001008		//�쳣�û�����ʾ�û�������֤ chairmin 2008.5.6

//---------------------------------------------------------------------------
//	wuqy 2005.1.6 ����ܹ���¼��صķ���ֵ
//---------------------------------------------------------------------------
#define GLBIT_LOGIN_MUSTSOFTDOG			0x00002001	//�õ�¼�û��Ѿ���һ�����ܹ��󶨣������û����ܹ���¼
#define GLBIT_LOGIN_SOFTDOGEXPIRED		0x00002002	//�ü��ܹ��Ѿ����ڣ��������øü��ܹ���¼�������ֵ�����û�����
#define GLBIT_LOGIN_SOFTDOGMD5ERROR		0x00002003	//�ͻ����ܹ���������󣨿����Ǵ���ļ��ܹ���
#define GLBIT_LOGIN_SOFTDOGNOTBIND		0x00002004	//���û�û�а�

//	Login���̣�����ṹ��ע��ǰ�沿�ֱ�����GLREQSVRLOGIN��ͬ
typedef struct tagGLREQLOGIN
{
	GLREQHEADER header;
	DWORD dwGameID;										//��ϷID
	char szUserName[GL_BUFLEN_USERNAME];				//�û���
	char szPassword[GL_BUFLEN_PASSWORD];				//����
	DWORD dwRegisterIP;									//����У��RegisterServer�Ƿ�Ϸ�
	DWORD dwMachineIDLo;
	DWORD dwMachineIDHi;
	// ������ֻ��û�������������Ϣ wym add 2003.8.14
	//����0��β�ַ����ֱ���:IMSI\0machineID\0PhoneNumber\0
	//�����һ��û��ҲҪ���������\0��ԭ����Ҫôһ��Ҳ��д��ҪôֻҪд��һ�����������\0�ͱ�����
}GLREQLOGIN, *PGLREQLOGIN;

//�����汾0x0201000C�����������Ϣ��
typedef struct tagGLREQLOGINEX
{
	GLREQHEADER header;
	DWORD dwGameID;										//��ϷID
	char szUserName[GL_BUFLEN_USERNAME];				//�û���
	char szPassword[GL_BUFLEN_PASSWORD];				//����
	DWORD dwRegisterIP;									//����У��RegisterServer�Ƿ�Ϸ�
	DWORD dwMachineIDLo;
	DWORD dwMachineIDHi;
	DWORD dwRoomEncrypt;               
}GLREQLOGINEX, *PGLREQLOGINEX;

//Login �����ϰ汾�� GLID_LOGIN
#define	GLID_ROOMLOGIN						(GLID_BASEROOM+0x00000030)	

//��ticket��¼��Ϸ������ 2.6.0.4�Ժ�İ汾�� wangym 2005.11.7
#define GLID_ROOMLOGIN2						(GLID_BASEROOM+0x00000031)
//��¼��Ϣ�޸����� 
typedef struct tagGLREQLOGINEX2
{
	GLREQHEADER header;
	DWORD dwGameID;										//��ϷID
	char szUserName[GL_BUFLEN_USERNAME];				//�û���
	//char szPassword[GL_BUFLEN_PASSWORD];				//����
	char szTicket[GL_BUFLEN_TICKET];					//��Чticket
	DWORD dwRegisterIP;									//����У��RegisterServer�Ƿ�Ϸ�
	DWORD dwMachineIDLo;
	DWORD dwMachineIDHi;
	DWORD dwRoomEncrypt;
}GLREQLOGINEX2, *PGLREQLOGINEX2;
//�ظ���Ϣ����GLACKLOGIN

#define GLBIT_LOGIN_ITEM_ENABLE		0x00000001		//������֧�ֵ���
#define GLBIT_LOGIN_WEBNOTIFY		0x00000002		//�Ƿ���ҪWEB֪ͨ�����˵���Ϸ�һ�ʱ��ֱ�ӵ�����ҳ����ԭ����Ϸ���һ����̣���ҳ��Ҫ�ж�dwGameCoinID�����������˵����xx��
//	Login���̣�Ӧ��ṹ
typedef struct tagGLACKLOGIN
{
	GLACKHEADER header;
	DWORD dwFreeDays;				// ʣ������
	BOOL bFreeWatch;				
	DWORD dwLoginTime;
	DWORD dwMachineIDLo;
	DWORD dwMachineIDHi;
	DWORD dwServerVersion;			//����������Ϸ�İ汾���Ե�ʱ�����ﷵ�ص��ǿ��Խ���Ĵ�������Ϸ�İ汾
	DWORD dwFlags;					//������־˫�֣����λ������ָ���Ƿ�������֧�ֵ��ߣ������֧�ֿͻ��˲����õ��߿ؼ�����ֹ�ؼ�����Ϣ���� chairmin 2006.11.2
	DWORD dwGameCoinGameID;			//ָ����Ϸ����ID���ڷ�����ini�����ã����û�����ô�ֵΪdwGameID
}GLACKLOGIN, *PGLACKLOGIN;
// ���header.dwResult==GLBIT_LOGIN_TRIALEXPIRED,�����ֻ��û�����������ѵ�����Ҫ�ɷѻ�����
// ���������Ϣ���渽���������Ϣ
/*
{
	char* pszPrompt;	// \0��β����ʾ��Ϣ,û����ʾҲҪд\0
	BYTE byType;		// 1==��ʾ�������ʾ���˳�����
						// 2==���Žɷѣ���Ҫ��ʾpszPrompt���û�ȷ�Ϻ���ܷ�����
	char pszSmsAddress;	// ���ŷ�������
	char pszSms;		// ���ŵ�ҵ�����
}
*/
//���header.dwResult=GLBIT_LOGIN_VERIFYFAIL��Ϣ�����\0��β����ʾ�ַ���

//---------------------------------------------------------------------------
//	��ȡRoomList���̣�IP��Port��ServerListָ��
//---------------------------------------------------------------------------
#define	GLID_READROOMLIST				(GLID_BASEROOM+0x00000002)	//RoomList

//---------------------------------------------------------------------------
//	��ȡRoomList����ṹ��ֻҪ����������ֻ�����ɹ�
//---------------------------------------------------------------------------
typedef struct tagGLREQREADROOMLIST
{
	GLREQHEADER header;
	DWORD dwGameID;
}GLREQREADROOMLIST, *PGLREQREADROOMLIST;

#define		GLBIT_SERVERFULL		2					// ����Ϊ��

//---------------------------------------------------------------------------
//	��ȡRoomList���ؽṹ������dwTotalRoom��BASEROOMINFO
//---------------------------------------------------------------------------
typedef struct tagGLACKREADROOMLIST
{
	GLACKHEADER header;
//---------------------------------------------------------------------------
//	ԭdwTotalRoom��Ϊ����������1.32֮����Ч
//---------------------------------------------------------------------------
	WORD wTotalRoom;									// �ɹ��󷢻ص� Host �б������
	WORD wLanguage;
}GLACKREADROOMLIST, *PGLACKREADROOMLIST;

//---------------------------------------------------------------------------
//	����Room��Ϣ�ṹ
//---------------------------------------------------------------------------
typedef struct tagBASEROOMINFO
{
	char szName[GL_BUFLEN_ROOMNAME];					// Room����
	WORD bPassword;										// Room�Ƿ��п���
	WORD nType;
	WORD wPlayers;										// ��Room���ж����û�	
	WORD nRuler;
}BASEROOMINFO,FAR *PBASEROOMINFO;

//---------------------------------------------------------------------------
//	����Default Room����
//---------------------------------------------------------------------------
#define	GLID_ENTERDEFAULTROOM			(GLID_BASEROOM+0x00000003)
														// ����Room
//������뷿���־λ
#define GLBIT_ENTERROOM_FLAG_USEITEM	0x00000001		//ʹ�õ��߽�����������

//---------------------------------------------------------------------------
//	����Default Room���̣�����ṹ���������������Room��ͬ
//
//	1.EnterRoom(szRoomName)������ɹ��򷵻�
//	2.����Room�б��ֱ����EnterRoom���ɹ�����
//	3.���г��Խ����Room������û��Password
//---------------------------------------------------------------------------
typedef struct tagGLREQENTERDEFAULTROOM
{
	GLREQHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szPassword[GL_BUFLEN_PASSWORD];				// ����
	char szRoomName[GL_BUFLEN_ROOMNAME];				// ȱʡ��Room���������Room�����ڻ������룬���Զ�����DefaultRoom
	DWORD dwFlags;										//��־˫�֣����λָ���Ƿ�ʹ�õ��߽��룻
														//�û������Ϸ������β��Զ�ʹ�õ��ߣ����ÿ�����䶼�������ɿͻ�����ʾ�û��Ƿ���Ҫ����ʹ�õ��ߣ�����ɹ���ָ���˱�־�ؽ�
														//���û��ѽ���������ٵ����������ʱ���Զ�ʹ�õ��ߣ����û����ʾ�û�����ʹ��
}GLREQENTERDEFAULTROOM, *PGLREQENTERDEFAULTROOM;

//---------------------------------------------------------------------------
//	����Room����
//---------------------------------------------------------------------------
#define	GLID_ENTERROOM					(GLID_BASEROOM+0x00000004)
														// ����Room
#define GLBIT_ENTERROOM_SUCCESS			GLBIT_SUCCESS	// �ɹ�
//---------------------------------------------------------------------------
//	��������������Ϣ�����ڽ���Room
//---------------------------------------------------------------------------
#define GLBIT_ENTERROOM_INVALIDPASSWORD		0x00000002	// Password����
#define GLBIT_ENTERROOM_ROOMFULL			0x00000004	// ��������
#define GLBIT_ENTERROOM_NOTEXIST			0x00000008	// ���䲻����
//���뷿��ʱʹ�ó�ͨ������ߣ����Ӵ�����Ϣ�� chairmin 2006.10.16
#define GLBIT_ENTERROOM_ROOMFULL_TRUTH		0x00010000	//����ȷʵ�������ѽ�������1.5������ʹ��ԱҲû������
#define GLBIT_ENTERROOM_SCI_USEFAIL			0x00020000	//ʹ�ó�ͨ������߳���
#define GLBIT_ENTERROOM_SCI_NONE			0x00040000	//�û�û�г�ͨ�������

//---------------------------------------------------------------------------
//	����һ��������Ϣ�����ڽ���Default Room
//---------------------------------------------------------------------------
#define GLBIT_ENTERROOM_SERVERBUSY			0x00000010	// �����������ٴ���ROOM��
//---------------------------------------------------------------------------
//	����һ��������Ϣ�����ڴ���ROOM
//---------------------------------------------------------------------------
#define GLBIT_ENTERROOM_EXIST				0x00000020	// �봴����ROOM�Ѵ���
#define GLBIT_ENTERROOM_CANNOTCREATE		0x00000040	
#define GLBIT_ENTERROOM_INVALIDROOMVERSION	0x00000080	
#define GLBIT_ENTERROOM_ROOMVERSIONTOOHIGH	0x10000080	
#define GLBIT_ENTERROOM_INVALIDGAMEVERSION	0x00000100	
#define GLBIT_ENTERROOM_GAMEVERSIONTOOHIGH	0x10000100	
#define GLBIT_ENTERROOM_INVALIDNETSPEED		0x00000200	
#define GLBIT_ENTERROOM_INVALIDBREAKRATE	0x00000400	
#define GLBIT_ENTERROOM_INVALIDMEMBER		0x00000800	
#define GLBIT_ENTERROOM_INVALIDRANK			0x00001000	
#define GLBIT_ENTERROOM_INVALIDSCORE		0x00002000	
#define GLBIT_ENTERROOM_INVALIDMONEY		0x00004000	
#define GLBIT_ENTERROOM_NOTSAMEFACTION		0x00008000	// ���ɲ�����
#define GLBIT_ENTERROOM_INVALIDPRIVILEGE	0x00100000	// ��־������
#define GLBIT_ENTERROOM_LIMITFREEDAYS		0x00120000	//��Ա��������������
#define GLBIT_ENTERROOM_LIMITMEMBERRANK		0x00140000	//��Ա�ȼ�����������
#define GLBIT_ENTERROOM_FAILED				0xffffffff	

//---------------------------------------------------------------------------
//	����Room���̣�����ṹ
//
//	1.���RoomName�Ƿ����
//	2.���Password�Ƿ���ȷ
//	3.�����Ϸ�������Ƿ�����
//	4.����û��Ѿ�����һ����Ϸ���ˣ����ȴ�ԭ����Room�˳�
//	5.������û���ͬʱ���Ѿ��ڸ���Ϸ���ڵ��û��������û���Ϣ
//	6.���ؽ�����Ϸ�ҳɹ���Ϣ�������͵�ǰ��Ϸ��Ŀǰ���û���Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLREQENTERROOM
{
	GLREQHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szPassword[GL_BUFLEN_PASSWORD];				// ����
	char szRoomName[GL_BUFLEN_ROOMNAME];				// Room����
	char szRoomPassword[GL_BUFLEN_PASSWORD];			// Room����
}GLREQENTERROOM, *PGLREQENTERROOM;

//---------------------------------------------------------------------------
//	Room�ṹ
//---------------------------------------------------------------------------
typedef struct tagROOMINFO
{
	char szName[GL_BUFLEN_ROOMNAME];
	WORD bPassword;
	WORD nType;
	WORD wPlayers;
	WORD nRuler;
//---------------------------------------------------------------------------
//	��BASEROOMINFO���ӵ����ݣ�һ����������
//---------------------------------------------------------------------------
	DWORD dwMaxPlayersAndTables;						// ������������
	char szChatIP[GL_BUFLEN_HOST];						// �����ҵ�IP��Port
	WORD wChatPort;
	char szChatRoom[GL_BUFLEN_ROOMNAME];				// ����������
}ROOMINFO,FAR *PROOMINFO;

//---------------------------------------------------------------------------
//	1.����Room���̣�Ӧ��ṹ������ɹ����ýṹ�����wPlayers��PLAYERINFO�ṹ
//	2.�������ɹ������ص�PlayerInfo���а��������û��Լ�������
//---------------------------------------------------------------------------
typedef struct tagGLACKENTERROOM
{
	GLACKHEADER header;
	ROOMINFO sRoomInfo;
}GLACKENTERROOM, *PGLACKENTERROOM;

//---------------------------------------------------------------------------
//	����Room���̳ɹ��󣬿ͻ���Ҫ��ȡ��Room������Player����Ϣ
//	bao 2000.10.16�Ķ�:
//	1.�����Ϸ�Ұ汾1.32.0.255֮��汾
//	2.ԭBOOL bReady��Ϊint nMoney
//	3.ԭBYTE bTablePassword��ΪBYTE bTablePassword : 4,BYTE bReady : 4
//  zengxi 2006.05.11 �Ķ�:
//  1.����dwGameCoin�ֶ�
//---------------------------------------------------------------------------
typedef struct tagPLAYERINFO
{
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szNickName[GL_BUFLEN_NICKNAME];				// �س�
	DWORD dwRank;										// Rank
	DWORD dwScore;										// ����
	DWORD dwWins;										// Ӯ�ľ���
	DWORD dwLosses;										// ��ľ���
	DWORD dwDraws;										// ƽ����
	DWORD dwGameCount;									// ��Ϸ����
	DWORD dwBreakCount;									// ���ܴ���

	BYTE uchStatus;										// �û�״̬
	BYTE uchMember;										// ��Ա
	WORD wTable;										// ����
	BYTE uchSeat;										// ��λ��
	BYTE uchPrivilege;									// ��Ȩ
	int nMoney;											// �Ƹ�
	BYTE bTablePassword : 4;							// ��ǰ�����Ƿ��п���
	BYTE bReady : 4;									// �Ƿ��Ѿ�׼������
	BYTE cUserType;										// ������ԣ��Ƿ����Ѻ͵���, 0=ʲô�����ǣ�1=���ѣ�2=����
	WORD wSpeed;
	DWORD dwGameCoin;									// ��Ϸ�� zengxi 2006.05.15
}PLAYERINFO,FAR *PPLAYERINFO;

//---------------------------------------------------------------------------
//	����sSignRoomM��MatchRoom���̳ɹ��󣬿ͻ���Ҫ��ȡ��Room������Player����Ϣ
//---------------------------------------------------------------------------
typedef struct tagMDPLAYERINFO
{

	DWORD dwMatchScore;									// �ܻ���
	DWORD dwSecondScore;								// С��
//	DWORD dwPlayerWins;									// Ӯ������(����)
//	DWORD dwPlayerLosses;								// �������(����)
//	DWORD dwPlayerDraws;								// �͵�����(����)
//	DWORD dwPlayerPlace;								//��������(����)
	DWORD dwMatchCount;									//��������
	DWORD dwFirstCount;									//���ִ���

	//Ϊ������ʱ����ʾ����������Чֵ
	char szTeamName[GL_BUFLEN_USERNAME];//�ȶ�Ϊ20		// ����
//	DWORD dwTeamScore;									// �ӻ���(����)
//	DWORD dwTeamSecondScore;							// ��С��(����)
	DWORD dwTeamWins;									// Ӯ�ĳ���
	DWORD dwTeamLosses;									// ��ĳ���
	DWORD dwTeamDraws;									// ƽ�ĳ���
	DWORD dwTeamPlace;									// ������

}MDPLAYERINFO,FAR *PMDPLAYERINFO;

//---------------------------------------------------------------------------
//	�����û����̣������û�����һ���Ƿ��������õģ����û������ṹ
//---------------------------------------------------------------------------
#define	GLID_ADDPLAYER					(GLID_BASEROOM+0x00000005)

//---------------------------------------------------------------------------
//	�����û�Ӧ��
//---------------------------------------------------------------------------
typedef struct tagGLACKADDPLAYER
{
	GLACKHEADER header;
	PLAYERINFO sPlayerInfo;
}GLACKADDPLAYER, *PGLACKADDPLAYER;
//Ϊ���ܹ��ȽϷ������GLACKADDPLAYER��Ϣ������Ӱ��ɵ���Ϣ,������һ���ṹ
typedef struct tagGLACKADDPLAYEREX
{
	GLACKADDPLAYER ap;
	char szFactionDuty[GL_BUFLEN_FACTION+GL_BUFLEN_DUTY];

	//zhp add 2014/05/05
	char szRoleName[GL_BUFLEN_ROLENAME];				// ��ɫ��

}GLACKADDPLAYEREX,*PGLACKADDPLAYEREX;

//---------------------------------------------------------------------------
//	ɾ���û����̣������û�����һ���Ƿ��������õģ����û������ṹ
//---------------------------------------------------------------------------
#define	GLID_DELETEPLAYER				(GLID_BASEROOM+0x00000006)

//---------------------------------------------------------------------------
//	ɾ���û�Ӧ��
//---------------------------------------------------------------------------
typedef struct tagGLACKDELETEPLAYER
{
	GLACKHEADER header;
	char szName[GL_BUFLEN_USERNAME];
}GLACKDELETEPLAYER, *PGLACKDELETEPLAYER;

//---------------------------------------------------------------------------
//	�ı��û�״̬����
//---------------------------------------------------------------------------
#define	GLID_CHANGEPLAYERSTATUS			(GLID_BASEROOM+0x00000007)

//---------------------------------------------------------------------------
//	�ı��û�״̬����
//
//	1.�ж�״̬�ĺϷ���
//	2.���ݲ�ͬ��״̬���в�ͬ�Ĵ���
//		1.Standing
//			1.��ǰ״̬����ΪWaiting
//		2.Waiting
//			1.��ǰ״̬����ΪStanding
//		3.Playing
//			1.��Ч�������ɿͻ������ã�ֻ������Ϸ��ʼʱ���������Զ�����
//		4.Watching
//			1.��ǰ״̬����ΪStanding
//			2.���ָ����Ϸ���Ƿ�������Ϸ������
//			3.�㲥���û�����Watching״̬
//			4.�����û�����GameStart��Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLREQCHANGEPLAYERSTATUS
{
	GLREQHEADER header;

	WORD wStatus;										// �û�״̬
	WORD wTable;										// ����
	WORD wSeat;											// ���Ӻ�
	char szTablePassword[GL_BUFLEN_PASSWORD];			// ���ӵ�Password, ֻ�е�һ���û�������Password
}GLREQCHANGEPLAYERSTATUS, *PGLREQCHANGEPLAYERSTATUS;

//---------------------------------------------------------------------------
//	�ı��û�״̬���̣�Ӧ��ṹ
//---------------------------------------------------------------------------
typedef struct tagGLACKCHANGEPLAYERSTATUS
{
	GLACKHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];				// �û���

	WORD wStatus;										// �û�״̬
	WORD wTable;										// ����
	WORD wSeat;											// ���Ӻ�

	BOOL bTablePassword;								// ��ǰ�����Ƿ��п���
}GLACKCHANGEPLAYERSTATUS, *PGLACKCHANGEPLAYERSTATUS;

//---------------------------------------------------------------------------
//	������Ϸ��û��������Ϣ��Room���յ��������ִ�����ж�����
//	1.�ı�������ϵ��û�״̬ΪPlaying
//	2.�����ͻ��˳���
//---------------------------------------------------------------------------
#define	GLID_GAMESTART					(GLID_BASEROOM+0x00000008)

//---------------------------------------------------------------------------
//	�ͻ�������������Ϸ
//
//	1.��ǰ״̬����ΪWaiting״̬
//	2.����GameStart��־
//	3.�������Ϸ�����û����ѷ���GameStart��Ϣ���������пͻ��˷���GameStart��Ϣ
//	4.���κ�һ����ǰ��Ϸ������Ϸ�ߵ�״̬�����仯�󣬶�Ҫ�����Ӧÿ����Ϸ�ߵĸñ�־
//---------------------------------------------------------------------------
typedef struct tagGLACKGAMESTART
{
	GLACKHEADER header;
	WORD wTable;	
	WORD wChannel;
	char szChatRoomName[GL_BUFLEN_ROOMNAME];
	char szGameAdvert[GL_BUFLEN_HOST];
}GLACKGAMESTART, *PGLACKGAMESTART;

typedef struct tagSTARTGAMEINFO
{
	const char *pszGameName;
	const char *pszGameIP;					//��Ϸ������IP��ַ
	UINT nGamePort;							//��Ϸ�������˿�
	const char *pszRoomName;				//��Ϸ������
	int nTable;								//��Ϸ����
	int nSeat;								//��λ�ţ���Ŵ�1��ʼ���Թ���Ҫ����Ϸ����

	const char *pszChatIP;					//���������IP��ַ
	UINT nChatPort;							//����������˿�
	const char *pszChatRoomName;			//����������

	const char *pszUserName;				//�û���
	const char *pszNickName;				//��������
	const char *pszRank;					//�ȼ�
	int nScore;								//����

	const char *pszAdvertURL;				//�ͻ����׸�����ַ

	int nStartMode;							//������ʽ��0������ 1���������� 2��ת��
}STARTGAMEINFO,*PSTARTGAMEINFO;

#define STARTMODE_NORMAL		0
#define STARTMODE_CONTINUE		1
#define STARTMODE_BROADCAST		2
#define STARTMODE_BROADCASTSELF	3
//---------------------------------------------------------------------------
//	���������������Ϸ
//---------------------------------------------------------------------------
typedef struct tagGLREQGAMESTART
{
	GLREQHEADER header;
	WORD wTable;
	DWORD dwCount;
	DWORD dwCheck;
}GLREQGAMESTART, *PGLREQGAMESTART;

//---------------------------------------------------------------------------
//	������Ϸ��û��������Ϣ��Room���յ��������ִ�����ж�����
//	1.�ı�������ϵ�����״̬ΪStanding
//	2.�ͻ�����Ϸ�����Ѿ��Զ�����
//	3.���ÿ����Ϸ�ߵĻ���
//---------------------------------------------------------------------------
#define	GLID_GAMEOVER					(GLID_BASEROOM+0x00000009)

typedef struct tagSCOREINFO
{
	DWORD dwSeat;
	DWORD dwScore;										// ����
	DWORD dwWins;										// Ӯ�ľ���
	DWORD dwLosses;										// ��ľ���
	DWORD dwDraws;										// ƽ����
	DWORD dwRank;										// ����
	DWORD dwGameCount;									// ��Ϸ����
	DWORD dwBreakCount;									// ���ܴ���
}SCOREINFO,*PSCOREINFO;

//---------------------------------------------------------------------------
//	��Ϸ��������ͻ��˷��͸���Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLACKGAMEOVER
{
	GLACKHEADER header;
	WORD wTable;
	DWORD dwCount;
	SCOREINFO sScoreInfo[GL_MAX_PLAYERSPERTABLE];
}GLACKGAMEOVER, *PGLACKGAMEOVER;

//---------------------------------------------------------------------------
//	����Room��ͬʱ�Զ������Room
//---------------------------------------------------------------------------
#define	GLID_CREATEROOM					(GLID_BASEROOM+0x0000000a)

//---------------------------------------------------------------------------
//	��GLACKENTERROOM��Ϊ���ص���Ϣ��, dwType��GLID_ENTERROOM | GLID_ACK
//
//	1.�����Ϸ���Ƿ��Ѿ�����
//	2.�����µ���Ϸ��
//	3.����EnterRoom
//---------------------------------------------------------------------------
typedef struct tagGLREQCREATEROOM
{
	GLREQHEADER header;
	char szName[GL_BUFLEN_ROOMNAME];
	char szPassword[GL_BUFLEN_PASSWORD];
	int nMaxTable;
	int nMaxPlayer;
	int nNetSpeed;
	int nBreakRate;
	DWORD cnProperty;
}GLREQCREATEROOM, *PGLREQCREATEROOM;

//---------------------------------------------------------------------------
//	�������
//---------------------------------------------------------------------------
#define	GLID_INVITE						(GLID_BASEROOM+0x0000000b)

//---------------------------------------------------------------------------
//	ת����Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLREQINVITE
{
	GLREQHEADER header;
	char szSrcUserName[GL_BUFLEN_USERNAME];
	char szDstUserName[GL_BUFLEN_USERNAME];
}GLREQINVITE, *PGLREQINVITE;

//---------------------------------------------------------------------------
//	�ı��û�״̬����
//---------------------------------------------------------------------------
#define	GLID_READY						(GLID_BASEROOM+0x0000000c)

//---------------------------------------------------------------------------
//	�ı��û�״̬���̣�����ṹ���ض���ǰ�û����ͻ�������������������ֱ��
//	������ȷ�Ϸ��غ�������ı��û���״̬
//
//	1.����Ready��־��ͬʱ�㲥���û�״̬
//---------------------------------------------------------------------------
typedef struct tagGLREQREADDY
{
	GLREQHEADER header;
	BOOL bReady;										// �Ƿ��Ѿ�׼����
}GLREQREADDY, *PGLREQREADY;

//---------------------------------------------------------------------------
//	�ͻ������յ�����Ϣ�󣬼���Ƿ����������Ϸ�ˣ�������ԣ��������������GameStart������Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLACKREADY
{
	GLACKHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	BOOL bReady;										// �Ƿ��Ѿ�׼����
}GLACKREADY, *PGLACKREADY;

//---------------------------------------------------------------------------
//	������Ϸ�ͻ����޷����������Ҫ�������ȡ���þ���Ϸ
//
//	1.������Ϸ�ͻ��˳����޷������������������������Ϸ������Ϣ
//---------------------------------------------------------------------------
#define	GLID_CANCELGAME					(GLID_BASEROOM+0x0000000d)

typedef struct tagGLREQCANCELGAME
{
	GLREQHEADER header;
	DWORD dwTable;
}GLREQCANCELGAME, *PGLREQCANCELGAME;

//----------------------------------------------------------------------
//	֪ͨ��Ϸ�ҵİ汾��ע��ֻ����Ϸ�Ұ汾����0�Ĳ��п���ʵ����Ϸ�Զ����������Ĺ���
//----------------------------------------------------------------------
#define GLID_ROOMVERSION				(GLID_BASEROOM+0x0000000e)

typedef struct tagGLREQROOMVERSION
{
	GLREQHEADER header;
	DWORD dwVersion;
	DWORD dwLanguage;
	int nIPMaskByte;
	DWORD dwGameVersion;
	DWORD dwLocalIP;						//����ip��ַ		chenzd	2001.7.13
}GLREQROOMVERSION, *PGLREQROOMVERSION;

typedef struct tagGLREQROOMVERSIONEX
{
	GLREQHEADER header;
	DWORD dwVersion;
	//DWORD dwLanguage;	//�ֳ���������word wym 2003-3-5
	WORD wLanguage;			// �ͻ��˵����Դ��� 936=����
	WORD wMobileType;		// �ֻ����ͺţ�ÿһ������֧�ֵ��ֻ�����һ��Ψһ�ı�� 
							// pc�ͻ��˱�����0  wym 2003-3-5
	int   nIPMaskByte;
	DWORD dwGameVersion;
	DWORD dwLocalIP;		//����ip��ַ		chenzd	2001.7.13
	WORD  dwRoomAdCount;	//��ǰ��������ӵĹ��ͻ��˿ؼ���Ŀ(Ƶ����Ŀ)   lvch 2002 04 05
    WORD  dwGameAdCount;	//��ǰ������Ϸ�й��ͻ��˿ؼ���Ŀ(Ƶ����Ŀ) =0 ��֧�ֵ�ǰ�¹����ʽ
    //������dwRoomAdCount��DWORDֵ,�ֱ�Ϊ��Ӧ��Ƶ��ID
    //���dwGameAdCount>0������󻹸������dwGameAdCount��DWORDֵ,�ֱ�Ϊ��Ӧ����Ϸ��Ƶ��ID
}GLREQROOMVERSIONEX, *PGLREQROOMVERSIONEX;
// wMobileType�Ķ����glregisterProtocol.h wym 2003-3-5
#define GL_RRVEX_MT_MOBILEPROXY		0x8000		//�ֻ������ʶ chairmin 2004.6.2

/*  //����0x0201000B�Ժ�Ĵ���,�����ȴ�һ����Ӧ��Ϣ ��ϢID=GLID_ACK|GLID_ROOMVERSION
*/
typedef struct tagGLACKROOMVERSION
{
	GLACKHEADER header;
	DWORD RoomLoginSeed;  //���ص�½��У����
	DWORD dwGenePlayerInfoVersion;//�����������û���Ϣ��Э��汾�ţ����ݸð汾�ţ��ͻ��˿����ж��Ƿ���������ֶ� wuqy add 2005.8.10
}GLACKROOMVERSION, *PGLACKROOMVERSION;

#define	GLID_GAMESTARTSELF				(GLID_BASEROOM+0x0000000f)
//---------------------------------------------------------------------------
//	�Զ�������Ϸ
//---------------------------------------------------------------------------
typedef GLACKGAMESTART GLACKGAMESTARTSELF,*PGLACKGAMESTARTSELF;

//---------------------------------------------------------------------------
//	���ڲ�����ҵ������ٶȣ������������յ�����Ϣ�������Ѹ���Ϣͬ�����ظ��ͻ���
//---------------------------------------------------------------------------
#define	GLID_NETSPEED					(GLID_BASEROOM+0x00000010)
typedef struct tagGLREQNETSPEED
{
	GLREQHEADER header;
	DWORD dwSpeed;
	DWORD dwTickCount;
}GLREQNETSPEED, *PGLREQNETSPEED;

typedef struct tagGLREQNETSPEEDEX//��������û���������ʱ���۳��ӳ�ʱ�� wuqy add 2006.4.3
{
	GLREQHEADER header;
	DWORD dwSpeed;
	DWORD dwTickCount;
	DWORD dwTickCountWhenReceive;
}GLREQNETSPEEDEX, *PGLREQNETSPEEDEX;

//---------------------------------------------------------------------------
//	ǿ������վ��
//---------------------------------------------------------------------------
#define	GLID_STANDUP					(GLID_BASEROOM+0x00000011)
typedef struct tagGLREQSTANDUP
{
	GLREQHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];
	DWORD dwReason;
}GLREQSTANDUP,*PGLREQSTANDUP;

typedef struct tagGLACKSTANDUP
{
	GLACKHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];
	DWORD dwReason;
}GLACKSTANDUP,*PGLACKSTANDUP;

#define	GLID_SAMEIP						(GLID_BASEROOM+0x00000012)

//---------------------------------------------------------------------------
//	�������ʾ��Ϣ
//---------------------------------------------------------------------------
#define	GLID_PROMPTMSG					(GLID_BASEROOM+0x00000013)

#define	GL_PROMPTMSG_OTHER				0			//������Ϣ���ɷ������˴���

#define	GL_PROMPTMSG_WATCHONLY			1			//�������Ӳ������ˣ�
#define	GL_PROMPTMSG_NODATA				2			//�����������Ѿ��ı䣬�����˳��������½��룡

#define	GL_PROMPTMSG_NOTSTARTED			3			//����ʱ��δ����
#define	GL_PROMPTMSG_FINISHED			4			//����ʱ��δ����
#define	GL_PROMPTMSG_NOTPLAYER			5			//�����ǲ���ѡ�֣�
#define	GL_PROMPTMSG_NOMATCH			6			//��һ�������òμӣ�
#define	GL_PROMPTMSG_MATCHED			7			//���ֱ������Ѿ�����ˣ�
#define	GL_PROMPTMSG_FREE				8			//����ѡ�����
#define	GL_PROMPTMSG_AUTOFREE			9			//���ѡ�����
#define	GL_PROMPTMSG_NOTTHISROOM		10			//������λ���������Ϸ���ڣ�
#define	GL_PROMPTMSG_NOTTHISSEAT		11			//��ѡ��������Լ����ֵ�λ�þ�����
#define	GL_PROMPTMSG_CANNOTSIT			12			//�����Ϸ�Ҳ�����Ϸ��ֻ���Թۣ�
#define	GL_PROMPTMSG_START				13			//�������ڿ�ʼ��
#define	GL_PROMPTMSG_DELAY				14			//���˱����ĵȴ�����

#define	GL_PROMPTMSG_SIGN_NOTSTART		15			//������û�п�ʼ
#define	GL_PROMPTMSG_SIGN_IPREFUSE		16			//����IP��ַ����
#define	GL_PROMPTMSG_SIGN_MASTERSCORE	17			//������ʦ������
#define	GL_PROMPTMSG_SIGN_SCORE			18			//������Ϸ��������
#define	GL_PROMPTMSG_SIGN_GAMECOUNT		19			//������Ϸ����������
#define	GL_PROMPTMSG_SIGN_OTHERTABLE	20			//����һ������
#define	GL_PROMPTMSG_SIGN_PDSEAT2		21			//��ʹ����
#define	GL_PROMPTMSG_SIGN_PDSEAT3		22			//����ͬһ��Ӫ��
#define	GL_PROMPTMSG_SIGN_OVER			23			//��������
#define	GL_PROMPTMSG_SIGN_ERR			24			//���ִ���
#define GL_PROMPTMSG_SIGN_NOADD			25			//��������ѡ�֣����ܲμӵ�ǰ�ı���

#define	GL_PROMPTMSG_SIGN_ALREADY		26			//���Ѿ��������ˣ���׼���μ���һ�ֱ���
#define	GL_PROMPTMSG_SIGN_FULL			27			//�����������������������Ժ�����
#define	GL_PROMPTMSG_PAUSED				28			//����������ͣ�׶�
#define	GL_PROMPTMSG_OLDSEAT			29			//�������������ˣ�Ҫ����ԭ����λ����

#define	GL_PROMPTMSG_ACHIEVE			30			//���ڱ��׶α������Ѿ�������
#define	GL_PROMPTMSG_COUNTOVER			31			//���Ѿ�����˱��׶α����ĳ���
#define GL_PROMPTMSG_SIGN_LASEPHASE		32			//ֻ����һ�׶α������ߵ�ѡ�ֲ��ܼ�������
#define GL_PROMPTMSG_SIGN_WEB			33			//��ҳ����������ǩ��

#define GL_PROMPTMSG_PLAYER_SEED		34			//��������ѡ�֣����ܲμӵ�ǰ�ı���
#define GL_PROMPTMSG_SIGN_FUNCTION		35			//��������

#define	GL_PROMPTMSG_MATCH_NOPROMP		100			//����Ҫ��ʾ

typedef struct tagGLREQPROMPTMSG
{
	GLREQHEADER header;
	DWORD dwPromptMsg;
}GLREQPROMPTMSG,*PGLREQPROMPTMSG;

#define	GLID_ADDROOM					(GLID_BASEROOM+0x00000014)

typedef struct tagGLREQADDROOM
{
	GLREQHEADER header;
	BASEROOMINFO sRoom;
	int cnProperty;
}GLREQADDROOM,*PGLREQADDROOM;

#define	GLID_DELETEROOM					(GLID_BASEROOM+0x00000015)

typedef struct tagGLREQDELETEROOM
{
	GLREQHEADER header;
	char szName[GL_BUFLEN_ROOMNAME];
}GLREQDELETEROOM,*PGLREQDELETEROOM;

//---------------------------------------------------------------------------
//	�����ļ���Ϣ
//---------------------------------------------------------------------------
typedef struct tagSAVEFILEINFO
{
	int cnPlayer;
	char aszPlayerName[GL_MAX_PLAYERSPERTABLE][GL_BUFLEN_USERNAME];
	char szTitle[GL_BUFLEN_SAVEINDEXNAME];
	void *pwm;
	int cnMsg;
	char aszNickName[GL_MAX_PLAYERSPERTABLE][GL_BUFLEN_NICKNAME];
}SAVEFILEINFO,*PSAVEFILEINFO;

#ifdef _NEWSTAGE
#else
typedef struct tagMATCHPLAYERINFO
{
	char szUserName[GL_BUFLEN_USERNAME];
	WORD wRoom;
	WORD wTable;
	WORD wSeat;
	WORD wStatus;
	WORD wStatus2;
	int nSaveFile;
	DWORD dwPlayedCount;
	DWORD dwScore;
	//DWORD* pdwOtherPlayers;
	//���еĽṹ������һ�����Կ���ͨ������ҵ����ֵ�pmpi, 
	//һ��dword����Ҫ���ڽṹ�����(��Ϊ�ṹ�ǿ��������)�� ��Ŷ��ֵ�����ǰ����ţ�Ҳ�������ڴ��е�ƫ��
}MATCHPLAYERINFO,*PMATCHPLAYERINFO;
#endif
//---------------------------------------------------------------------------
//	����ѡ�ּ�¼������׺�ж��ֺű�,���m_pMatchInfo->cnMatchGameCount*(cnSeat-1)��DWORD������
//  ����ṹֻ���汾GameServer�ϵ���Ա���಻��3000��
//---------------------------------------------------------------------------
//#define MAX_OPPONENT_NUM	100
typedef struct tagNEWMATCHPLAYERINFO
{
	char szUserName[GL_BUFLEN_USERNAME];	//ѡ������
	char szPartner[GL_BUFLEN_USERNAME];		//ͬ������(�����ԼҾͻ���)
	char szPartner2[GL_BUFLEN_USERNAME];	//�ڶ�ͬ������(���ܻ�3��3)--����wuqy 2002.7.26
	DWORD dwTeamID;							//�����Ӻ�
	WORD wRoom;								//ѡ�ֱ��������
	WORD wTable;							//ѡ�ֱ�����Ϸ��
	WORD wSeat;								//ѡ�ֱ�����λ��
	WORD wStatus;							//ѡ�ֱ���״̬
	WORD wStatus2;							//����״̬��Ϣ
	WORD wPlace;
	int nScore;								//��������
	int nSecondScore;						//С��
	DWORD dwLosses;							//��
	DWORD dwWins;							//Ӯ
	DWORD dwDraws;							//��
	int nSaveFile;							//������pNmpi�ı��ش����ļ����
	DWORD dwFirstCount;						//���ִ���
	int cnMatch;							//�Ѿ��������ٴ���
	int cnOpponent;							//������Ŀ
	DWORD dwFlag;							//λ��־
	int	cnMatchCount;						//�����Ǵ�
}NEWMATCHPLAYERINFO,*PNEWMATCHPLAYERINFO;

//NEWMATCHPLAYERINFO.dwFlagλ��־����
#define	GL_MATCH_PLAYER_SEED		0x00000001	//��һ�ֵı���ѡ�֣����ܲμӵ�ǰ����

//---------------------------------------------------------------------------
//	����ͻ��������û��ĳ�ʼ��λ�����ֵ
//---------------------------------------------------------------------------
#define	GLID_INITIALRANKSCORE				(GLID_BASEROOM+0x00000016)

//---------------------------------------------------------------------------
//	nType=0	��ʼ����λ
//	nType=1	��ʼ������
//---------------------------------------------------------------------------
typedef struct tagGLREQINITIALRANKSCORE
{
	GLREQHEADER header;
	int nType;
	int nMin;
	int nMax;
	int nCur;
}GLREQINITIALRANKSCORE,*PGLREQINITIALRANKSCORE;

typedef struct tagGLACKINITIALRANKSCORE
{
	GLACKHEADER header;
	int nType;
	int nValue;
}GLACKINITIALRANKSCORE,*PGLACKINITIALRANKSCORE;

//---------------------------------------------------------------------------
//	��ѯ���˶Ծ֣���ʤ����Ӯ���ٷ֣����˺�Ҫ�����ٷ֣����ߺ����ж��ٷ�
//---------------------------------------------------------------------------
#define	GLID_QUERYGAMESCORE					(GLID_BASEROOM+0x00000017)

#define GLBIT_QUERYGAMESCORE_SUCCESS			GLBIT_SUCCESS	//�ɹ�
#define GLBIT_QUERYGAMESCORE_INVALIDUSERNAME	2				//�û���û���ҵ�
#define GLBIT_QUERYGAMESCORE_NOTSUPPORT			4				//��֧��

typedef struct tagGLREQQUERYGAMESCORE
{
	GLREQHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];
}GLREQQUERYGAMESCORE,*PGLREQQUERYGAMESCORE;

typedef struct tagGLACKQUERYGAMESCORE
{
	GLACKHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];
	DWORD dwLoseScore;
	DWORD dwWinScore;
	DWORD dwDrawScore;
}GLACKQUERYGAMESCORE,*PGLACKQUERYGAMESCORE;

//---------------------------------------------------------------------------
//	�����������°�ͻ��˷��͵���Ϸ��Ϣ������������������
//---------------------------------------------------------------------------
#define	GLID_GAMEINFO						(GLID_BASEROOM+0x00000018)

typedef struct tagGLACKGEMEINFO
{
	GLACKHEADER header;
	int nTableNo;								//�ɼ���
	int nCreateRoomFee;							//������Ϸ�ҵĲƸ�ֵ
}GLACKGEMEINFO,*PGLACKGEMEINFO;

//DYF.2003.04.01.Begin
//���ӻ�Ա�����������շѹ���
typedef struct tagGLACKGEMEINFOEX
{
	GLACKHEADER header;
	int nTableNo;								//�ɼ���
	int nCreateRoomFee;							//������Ϸ�ҵĲƸ�ֵ
	int nSetTablePwdFee;						//������Ϸ������ĲƸ�ֵ
}GLACKGEMEINFOEX,*PGLACKGEMEINFOEX;
//DYF.2003.04.01.End

//---------------------------------------------------------------------------
//	����Ϸ�����󣬻�����;���û�����Ϣ�����ı�ʱ���������Ϣ�������Ϣ���Դ���ʽ�����µ��ֶ����ݣ�ÿ���û������ݰ�����
//	szUserName		��������0��β
//	cnCol			1�ֽڣ��ֶθ�������ͬ���û��ֶ������ܲ�һ��
//	col1			��һ���ֶ��ڽ�����Ϸ��ʱ�ֶ��ڵı��(�����������ֶ�)
//	content1		��һ���ֶε���ֵ�����ͺͽ�����Ϸ��ʱ������һ����
//	...
//---------------------------------------------------------------------------
#define	GLID_CHANGEINFO						(GLID_BASEROOM+0x00000020)

typedef struct tagGLREQCHANGEINFO
{
	GLREQHEADER header;
	DWORD dwCount;
}GLREQCHANGEINFO,*PGLREQCHANGEINFO;

//#define	GLID_ROOMLOGIN						(GLID_BASEROOM+0x00000030)	//Login �����ϰ汾�� GLID_LOGIN ��ǰ��

//��ticket��¼��Ϸ������ wangym 2005.11.7
//#define GLID_ROOMLOGIN2						(GLID_BASEROOM+0x00000031) ��ǰ��

//	���������������
#define	GLID_AUTOFREESIT					(GLID_BASEROOM+0x00000050)

//	��ȡ������Ϣ
#define	GLID_MATCHINFO						(GLID_BASEROOM+0x00000051)

typedef struct tagGLACKMATCHINFO
{
	GLACKHEADER header;
	DWORD dwLength;
	BOOL bHtml;
}GLACKMATCHINFO,*PGLACKMATCHINFO;

//---------------------------------------------------------------------------
//	��������Ϸ��״̬�����仯ʱ����
//---------------------------------------------------------------------------
#define	GLID_STATICINFO						(GLID_BASEROOM+0x00000052)
#define	GLID_MATCHPLAYERSTATUS				(GLID_BASEROOM+0x00000053)

typedef struct tagMATCHPLAYERSTATUSINFO
{
	char szUserName[GL_BUFLEN_USERNAME];
	char cUserType;
}MATCHPLAYERSTATUSINFO,*PMATCHPLAYERSTATUSINFO;

typedef struct tagGLREQMATCHPLAYERSTATUS
{
	GLREQHEADER header;
	int nTable;
	DWORD dwCount;
	MATCHPLAYERSTATUSINFO amps[GL_MAX_PLAYERSPERTABLE];
}GLREQMATCHPLAYERSTATUS,*PGLREQMATCHPLAYERSTATUS;

#define	GLID_BROADCAST						(GLID_BASEROOM+0x00000054)

typedef struct tagGLREQBROADCAST
{
	GLREQHEADER header;
	int nTable;
}GLREQBROADCAST,*PGLREQBROADCAST;

#define	GLID_GAMESTARTBROADCAST				(GLID_BASEROOM+0x00000055)
#define	GLID_GAMESTARTBROADCASTSELF			(GLID_BASEROOM+0x00000056)
//---------------------------------------------------------------------------
//	ת����ʽ������Ϸ�ͻ���
//---------------------------------------------------------------------------
typedef GLACKGAMESTART GLACKGAMESTARTBROADCAST,*PGLACKGAMESTARTBROADCAST;
typedef GLACKGAMESTART GLACKGAMESTARTBROADCASTSELF,*PGLACKGAMESTARTBROADCASTSELF;

//---------------------------------------------------------------------------
//	��Ϸ������ת����������û���
//---------------------------------------------------------------------------
typedef struct tagGLACKBROADCAST
{
	GLACKHEADER header;
	int nTable;
	char szTitle[GL_BUFLEN_SAVEINDEXNAME];
	int cnPlayer;
	char aszUserName[GL_MAX_PLAYERSPERTABLE][GL_BUFLEN_USERNAME];
}GLACKBROADCAST,*PGLACKBROADCAST;

#define	GLID_ENCRYPT						(GLID_BASEROOM+0x00000060)
//---------------------------------------------------------------------------
//	���ͼ��ܺ���
//---------------------------------------------------------------------------
typedef struct tagGLREQENCRYPT
{
	GLREQHEADER header;
	DWORD dwEncryptSeed;
	DWORD dwDencryptSeed;
	UINT nEncryptLen;
	UINT nDencryptLen;
}GLREQENCRYPT,*PGLREQENCRYPT;


#define	GLID_USERCHANGEDRESS					(GLID_BASEROOM+0x00000065)
//-------------------------------------------------------------------------------------------------------
//	�û��ı��������Ʒ���
//	������Ϣ��
//	ackheader
//	string	pszUserName			//�ı���Ʒ������û���
//	WORD	wCount;				//�����Ʒ������
//	������wCount�� wItemID ... wItemID
//���������յ�����Ϣ��,��ֱ�ӰѸ���Ϣת��������Ϸ�������û�

//�û���Ȩ�ޱ�־���û���¼��Ϸ������ʱ��room.ocx���͵ĸ��û�������Ȩ�ޱ�־
#define	GLID_USER_PRIVILEGEICO					(GLID_BASEROOM+0x00000066)
typedef struct tagGLACKUSERPRIVILEGEICO
{
    GLACKHEADER header;
	int		timeMemberStart;						//�û���Ա������ʼʱ�� wuqy add 2005.7.27
	int		nMemberRank;							//��ǰ�û���Ա�ȼ� wuqy add 2005.7.27
	int		nMemberStartDays;						//�Ѿ���ȥ�Ļ�Ա����(�ۼƻ�Ա����)
	int		nNextMemberRankNeedDays;				//��һ�λ���Ա�ȼ���������Ҫ������

	int		nCoinScore;								//�û����ѻ��� wuqy add 2005.7.27
	int		nCoinScoreRank;							//��ǰ���ѵȼ�
	int		nNextCoinScoreRankNeed;					//��һ�����ѵȼ���������Ҫ�����ѻ���

	int		cnPrivilegeIcon;						//Ȩ�ޱ�־��
	WORD	awPrivilege[GL_MAX_PRIVILEGE_COUNT];	//�û�ӵ�е�Ȩ�ޱ�־
	WORD	wIcoFlags;								//Icon��ʾ��־��bit0�Ƿ���ʾ��Ա�ȼ�,bit1�Ƿ���ʾ���ѵȼ���bit2�Ƿ���ʾ��Ա��־��bit3�Ƿ���ʾȨ�ޱ�־

	int		timeMemberContinueStart;				//��������Ա�Ŀ�ʼʱ��
	int		nMemberContinueDays;					//��������Ա��
	int		nMemberLeftDays;						//ʣ���Ա����
}GLACKUSERPRIVILEGEICO,*PGLACKUSERPRIVILEGEICO;

#define PRIVILEGEICO_MEMBERRANK		0x0001
#define PRIVILEGEICO_COINSCORERANK	0x0002
#define PRIVILEGEICO_MEMBER			0x0004
#define PRIVILEGEICO_PRIVILEGE		0x0008
#define PRIVILEGEICO_HAVEMEMBERDAYS	0x0010

//�û�����ı���ʾ��־
#define	GLID_CHANGE_USER_PRIVILEGEICO			(GLID_BASEROOM+0x00000067)
typedef struct tagGLREQCHANGEPRIVILEGE
{
    GLREQHEADER header;
	WORD	wIcoFlags;								//Icon��ʾ��־��bit0�Ƿ���ʾ��Ա�ȼ�,bit1�Ƿ���ʾ���ѵȼ���bit2�Ƿ���ʾ��Ա��־��bit3�Ƿ���ʾȨ�ޱ�־
	WORD	wPrivilege;								//�û�ϣ����ʾ��Ȩ�ޱ�־,GL_PRIVILEGE_NONEû�б仯
}GLREQCHANGEPRIVILEGE,*PGLREQCHANGEPRIVILEGE;
//GLACKHEADER header;

//�û����������ʾ��־
#define	GLID_UPDATE_USER_PRIVILEGEICO			(GLID_BASEROOM+0x00000068)
//GLREQHEADER header;
typedef struct tagGLACKUPDATEPRIVILEGE
{
	GLACKHEADER header;
	char	szUserName[GL_BUFLEN_USERNAME];
	WORD	wIcoFlags;								//Icon��ʾ��־��bit0�Ƿ���ʾ��Ա�ȼ�,bit1�Ƿ���ʾ���ѵȼ���bit2�Ƿ���ʾ��Ա��־��bit3�Ƿ���ʾȨ�ޱ�־
	WORD	wPrivilege;								//�û�ϣ����ʾ��Ȩ�ޱ�־,GL_PRIVILEGE_NONEû�б仯
}GLACKUPDATEPRIVILEGE,*PGLACKUPDATEPRIVILEGE;

//Room.ocx�����û���Ȩ�ޱ�־�ͻ�Ա�ȼ���Ϣ wuqy add 2005.12.15
#define	GLID_GETUSERPRIVILEGEICOANDMEMBERINFO				(GLID_BASEROOM+0x00000069)
typedef struct tagGLREQGETUSERPRIVILEGEICOANDMEMBERINFO
{
    GLREQHEADER header;
	char	szUserName[GL_BUFLEN_USERNAME];
}GLREQGETUSERPRIVILEGEICOANDMEMBERINFO,*PGLREQGETUSERPRIVILEGEICOANDMEMBERINFO;
typedef struct tagGLACKGETUSERPRIVILEGEICOANDMEMBERINFO
{
	GLACKHEADER header;
	char	szUserName[GL_BUFLEN_USERNAME];

	WORD	wIcoFlags;								//Icon��ʾ��־��bit0�Ƿ���ʾ��Ա�ȼ�,bit1�Ƿ���ʾ���ѵȼ���bit2�Ƿ���ʾ��Ա��־��bit3�Ƿ���ʾȨ�ޱ�־
	int		cnPrivilegeIcon;						//Ȩ�ޱ�־��
	WORD	awPrivilege[GL_MAX_PRIVILEGE_COUNT];	//�û�ӵ�е�Ȩ�ޱ�־

	int		timeMemberStart;						//�û���Ա������ʼʱ��
	int		nMemberRank;							//��ǰ�û���Ա�ȼ�
	int		nMemberStartDays;						//�Ѿ���ȥ�Ļ�Ա����(�ۼƻ�Ա����)
	int		nNextMemberRankNeedDays;				//��һ�λ���Ա�ȼ���������Ҫ������

	int		nCoinScore;								//�û����ѻ���
	int		nCoinScoreRank;							//��ǰ���ѵȼ�
	int		nNextCoinScoreRankNeed;					//��һ�����ѵȼ���������Ҫ�����ѻ���

	int		timeMemberContinueStart;				//��������Ա�Ŀ�ʼʱ��
	int		nMemberContinueDays;					//��������Ա��
	int		nMemberLeftDays;						//ʣ���Ա����

}GLACKGETUSERPRIVILEGEICOANDMEMBERINFO,*PGLACKGETUSERPRIVILEGEICOANDMEMBERINFO;


//add by lvch  2002/04/01  �µĹ��ϵͳ���ݽṹ
//#define  GLID_PUTADVERTFILELIST             (GLID_BASEROOM+0x00000070)//��������ͻ��˷��������صĹ���ļ��б�
//ʹ��ԭ����ID     GLID_FILEADVERT
typedef struct tagGLNEWADLOCALVERSION
{
	DWORD   AdvertID;
	DWORD   AdvertVersion;
}GLNEWADLOCALVERSION,*PGLNEWADLOCALVERSION;
typedef struct tagGLPUTADVERTFILELIST
{
	GLREQHEADER header;
	int     ADTotal;   //���е��ļ���Ϣ����
}GLPUTADVERTFILELIST,*PGLPUTADVERTFILELIST;//������ADTotal��GLNEWADLOCALVERSION


#define  GLID_GETADVERTFILEINFO             (GLID_BASEROOM+0x00000071)//�ͻ�����������������ļ�
typedef struct tagGLGETADVERTFILEINFO
{
    GLREQHEADER header;
	DWORD       AdvertID;
}GLGETADVERTFILEINFO,*PGLGETADVERTFILEINFO;

#define  GLID_PUTADVERTFILEINFO             (GLID_BASEROOM+0x00000072)//��������ͻ��˷���ָ������ļ�
typedef struct tagGLPUTADVERTFILEINFO
{
    GLACKHEADER header;
    DWORD       AdvertID;
	DWORD       AdvertVersion;
}GLPUTADVERTFILEINFO,*PGLPUTADVERTFILEINFO;//�����Ź���ļ�����

//end lvch 2002/04/01

//add lvch 2002 08 30
#define  GLID_LOBBYADNOTIFYCMD              (GLID_BASEROOM+0x00000073)//�����������֪ͨ��ǰ��ǰ���л�������ʾ�����͵����
typedef struct tagGLLOBBYADNOTIFYCMD
{
    GLREQHEADER header;
	char        UserName[GL_BUFLEN_USERNAME];
    DWORD       AdCount;
}GLLOBBYADNOTIFYCMD,*PGLLOBBYADNOTIFYCMD;//������AdCount��GLLOBBYADNOTIFYINFO�ṹ

typedef struct tagGLROOMCLIENTADINFO
{
	DWORD   ChannelID;           //Ƶ��ID
	DWORD	GamePopupTime;		 //��Ƶ���Ƿ�����Ϸ��ʼ�ͽ�������  
								//=0  �������
								//=1  ��Ƶ�����ֻ������Ϸ������ŵ���
								//=2  ��Ƶ�����ֻ������Ϸ��ʼʱ�ŵ���
	DWORD	dwDeltaRefreshTime; //��Ƶ�����õĹ��ˢ��ʱ���� wuqy add 2005.1.28
	DWORD   LastRefreshTime;     //��Ƶ�����һ��ˢ��ʱ��
	DWORD   CurrentIndex;        //��ǰ��ʾ�Ĺ������
}GLROOMCLIENTADINFO,*PGLROOMCLIENTADINFO;   //add by lvch  2002 04 05

typedef struct tagGLLOBBYADNOTIFYINFO
{
	DWORD    ADID;
	WORD     ShowCount;
	WORD     ClickCount;
}GLLOBBYADNOTIFYINFO,*PGLLOBBYADNOTIFYINFO;

//end add lvch 2002 08 30

//shil.2002.11.8
//�±߲����Ǵ�gameprotocol�ƹ�����
//��Ҫ����Ϊʹ����GLID_BASEROOM
//-----------------------------------------------------------------------
//     ���ϵͳ
//------------------------------------------------------------------------
//#define  GLID_NTYCLIENTPLAYAD               (GLID_BASEROOM+0x00000073)//������֪ͨ�ͻ��˲���ָ�����
//ʹ��ԭ����ID   GLID_ADVERT
typedef struct tagGLNTYCLIENTPLAYAD
{
    GLREQHEADER header;
	DWORD       ChannelID;
    DWORD       AdvertID;
    DWORD       PopupSize;          //����Ϊ���  ����Ϊ�߶�
	DWORD       LargeType;          //����Ϊȫ��������� ����Ϊȫ�������ʾʱ��(��)
	DWORD       LargeTopLeft;       //ȫ��������Ͻ����� ��λ��ΪLeft ��λ��ΪTop
    DWORD       LargeBottomRight;   //ȫ��������½����� ��λ��ΪRight ��λ��Ϊbottom
	DWORD       URLLength;          //�ĸ��ֽ���������(�ӵ͵���) MainURL������ PopupURL������,LARGEURL������,Tips������
}GLNTYCLIENTPLAYAD,*PGLNTYCLIENTPLAYAD;//������θ���MainURL[],PopupURL[],LARGEURL[],Tips[];


typedef struct tagGLNTYLOBBYNEWAD
{
    GLREQHEADER header;
	DWORD       ChannelID;
    DWORD       AdvertCount;//������AdvertCount��DWORDֵ,��ʾ���ID
}GLNTYLOBBYNEWAD,*PGLNTYLOBBYNEWAD;//�������л����


#define  GLID_ROOMDOWNLOADSERVERIP           (GLID_BASEROOM+0x00000075)
										//����������Advert.ini�ļ��д���һ��[DownLoadServer]��ʱ,��
							//������½�Լ�������Ϸ��ʱ������������ͻ��˷���GLID_ROOMDOWNLOADSERVERIP��Ϣ
							//������ֻ����һ��Ip���ͻ���(������������ѭDownLoadServer),��֤����޶Ⱦ���
typedef struct tagGL_NOTIFYDOWNLOAD_SERVERINFO
{
	GLACKHEADER		header;
	DWORD			ServerIP;
	DWORD			ServerPort;			
}GL_NOTIFYDOWNLOAD_SERVERINFO,*PGL_NOTIFYDOWNLOAD_SERVERINFO;
typedef struct tagGL_NOTIFYDOWNLOAD_SERVERINFO2//�°汾�������������Ϣ wuqy add 2006.3.15
{
	GLACKHEADER	    header;
	int             nSvrCount;
}GL_NOTIFYDOWNLOAD_SERVERINFO2,*PGL_NOTIFYDOWNLOAD_SERVERINFO2;

#define  GLID_REPORTADINFO                   (GLID_BASEROOM+0x00000074)//�ͻ����������������ĵ����������������
typedef struct tagGLREPORTADINFO
{
    GLREQHEADER header;
	DWORD  AdvertID;   //���ID
    DWORD  MainShow;   //�������Ϲ����ʾ����
	DWORD  MainClick;  //�������Ϲ��������
    DWORD  PopupShow;  //���������Ϲ����ʾ����
	DWORD  PopupClick; //���������Ϲ��������
    DWORD  LargeShow;  //ȫ�������Ϲ����ʾ����
	DWORD  LargeClick; //�������Ϲ��������
}GLREPORTADINFO,*PGLREPORTADINFO;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ͻ������������ҪP2P���ع����Ҫ����Ϣ
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define  GLID_GETADP2PINFO                   (GLID_BASEROOM+0x00000076)

//�ͻ���->������
typedef struct tagGLREQADP2PRESOURCE
{
    GLREQHEADER header;
	DWORD	dwADID;					//���ID
}GLREQADP2PRESOURCE,*LPGLREQADP2PRESOURCE;

//������->�ͻ���

//��Դ�ļ��Ľṹ
typedef struct tagGLP2PRESOURCE
{
	char szSrcPath[MAX_PATH];		//��Դ�ļ��������ͻ��ϵ����λ�ã��ļ������·����
	BYTE byMd5[16];					//��Դ�ļ���MD5ֵ����������Դ��Ψһ��ʶ
	DWORD dwResourceSize;			//��Դ�ļ��Ĵ�С
	DWORD dwOffsetSize;				//����ƫ���������ֵ������ʾ�Ӷ���ƫ������ʼ���أ����ڶϵ��������ݲ�ʹ�ã�������
	char szSavePath[MAX_PATH];		//��Դ�ļ����ص����صı���·�����ļ������·����
}GLP2PRESOURCE,*LPGLP2PRESOURCE;

typedef struct tagGLACKADP2PRESOURCE
{
    GLACKHEADER header;
	DWORD	dwADID;					//���ID
	INT		nCount;					//��������ļ����������������nCount��GLP2PRESOURCE�ļ�
}GLACKADP2PRESOURCE,*LPGLACKADP2PRESOURCE;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ͻ�����������ϴ��������
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define  GLID_ADDOWNLOADINFO                   (GLID_BASEROOM+0x00000077)

//�ͻ���->������
typedef struct tagGLREQADDOWNLOADINFO
{
    GLREQHEADER header;
	DWORD	dwP2PSuccessed;			//P2P�ɹ����صĹ��ID����
	DWORD	dwP2PFailed;			//P2Pʧ�����صĹ��ID����
	DWORD	dwSuccessed;			//��P2P�ɹ����صĹ��ID����
	DWORD	dwFailed;				//��P2Pʧ�����صĹ��ID����
									//�ں���Ǳ����dwP2PSuccessed����dwP2PFailed����dwSuccessed����dwFailed�����ID
}GLREQADDOWNLOADINFO,*LPGLREQADDOWNLOADINFO;

//������->�ͻ���	�����Ϸ��������������Ϣ����Ҫ�����ͻ���ACK��Ϣ����ʱ�ȶ������
typedef struct tagGLACKADDOWNLOADINFO
{
    GLACKHEADER header;
}GLACKADDOWNLOADINFO,*LPGLACKADDOWNLOADINFO;
//---------------------------------------------------------------------------------------------------------
//shil.2002.11.8.end

//---------------------------------------------------------------------------
//	�������ӷ�����ʽ,һ��GLACKHEADER+<�ֶ�����n>\0<����1>...<����n>
//	����:	2\0��%d\0��%d\0
//---------------------------------------------------------------------------
#define	GLID_TABLEGROUP						(GLID_BASEROOM+0x00000080)

//---------------------------------------------------------------------------
//	������
//---------------------------------------------------------------------------
#define	GLID_IMAGEADVERT					(GLID_BASEROOM+0x00000090)

typedef struct tagIMAGEFILEIDINFO
{
	int nFileID;							//�ļ����
	int nVersion;							//�汾��
}IMAGEFILEIDINFO,*PIMAGEFILEIDINFO;

typedef struct tagGLREQIMAGEADVERT
{
	GLREQHEADER header;
	int nType;								//0:û�й��(ɾ�����ع��),1:ǿ����ʾ,2:ֻ����ɫ��ͬ����ʾ
	int nBkColor;							//0x123456��ʾ������ɫ�����ԣ�����ֻҪ��������ͼ�Σ���Ӧ����ʾ
	int cnFile;								//�����Ŀ
	IMAGEFILEIDINFO asFileInfo[5];			//cnAdvert���ļ���Ϣ��ʵ����Ŀ��cnAdvert���
}GLREQIMAGEADVERT,*PGLREQIMAGEADVERT;

#define IMAGEADVERT_DELETE				0
#define IMAGEADVERT_FORCE				1
#define IMAGEADVERT_SAMECOLOR			2

#define	GLID_GETIMAGEADVERT					(GLID_BASEROOM+0x00000091)

//---------------------------------------------------------------------------
//	�ͻ����������������ͼ���ļ���Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLREQGETIMAGEADVERT
{
	GLREQHEADER header;
	int nFileID;
}GLREQGETIMAGEADVERT,*PGLREQGETIMAGEADVERT;

//---------------------------------------------------------------------------
//	����������ͻ��˷��͹��ͼ���ļ�
//---------------------------------------------------------------------------
typedef struct tagGLACKGETIMAGEADVERT
{
	GLACKHEADER header;
	int nFileID;							//�ļ����
	int nVersion;							//�汾��
	int nType;								//0���Ͻǣ�1���½ǣ�2���Ͻǣ�3���½ǣ�4���У�5ƽ��
	int x,y;								//ƫ�ƣ�����ϵľ���
	int nMinWidth,nMinHeight;				//��С����Ļ��ɺ͸߶�
	DWORD dwLength;							//ͼ���ļ����ݳ���
}GLACKGETIMAGEADVERT,*PGLACKGETIMAGEADVERT;
//zhouy
#define IMGADV_TOPLEFT			0
#define IMGADV_TOPBOTTOM		1
#define IMGADV_RIGHTTOP			2
#define IMGADV_RIGHTBOTTOM		3
#define IMGADV_CENTER			4
#define IMGADV_FULL				5

//shilei.2001.5.10.BEGIN
//---------------------------------------------------------------------------
//	�����ļ����
//---------------------------------------------------------------------------
#define	GLID_FILEADVERT					(GLID_BASEROOM+0x00000092)

typedef struct tagFILESFILEIDINFO
{
	int nFileID;							//�ļ����
	int nVersion;							//�汾��
}FILESFILEIDINFO,*PFILESFILEIDINFO;

typedef struct tagGLREQFILEADVERT
{
	GLREQHEADER header;
	int cnFile;								//�����Ŀ
	//FILESFILEIDINFO *asFileInfo;			//cnFile���ļ���Ϣ��ʵ����Ŀ��cnFile���
}GLREQFILEADVERT,*PGLREQFILEADVERT;

typedef struct tagGLWORLDFILEADVERT
{
	char szServerIP[GL_BUFLEN_HOST];
	WORD wPort;
	int nFile;
	PFILESFILEIDINFO pfa;
} GLWORLDFILEADVERT, FAR *PGLWORLDFILEADVERT;

typedef struct tagGLWORLDNEWFILEADVERT
{
	char szServerIP[GL_BUFLEN_HOST];
	WORD wPort;
	int nFile;
	PGLNEWADLOCALVERSION pfa;
}GLWORLDNEWFILEADVERT, FAR *PGLWORLDNEWFILEADVERT;


#define	GLID_GETFILEADVERT					(GLID_BASEROOM+0x00000092)

//---------------------------------------------------------------------------
//	�ͻ���������������ر����ļ������Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLREQGETFILEADVERT
{
	GLREQHEADER header;
	int nFileID;
}GLREQGETFILEADVERT,*PGLREQGETFILEADVERT;

//---------------------------------------------------------------------------
//	����������ͻ��˷��ͱ����ļ���棬ÿ���ļ�������
//	1.�鳤�ȣ������ļ������ļ����ݣ��鳤��=0����ʾ����
//	2.�ļ�������0��β
//	3.�ļ�����
//---------------------------------------------------------------------------
typedef struct tagGLACKGETFILEADVERT
{
	GLACKHEADER header;
	int nFileID;							//�ļ����
	char szFileName[GL_BUFLEN_HOST];		//�����õ��ļ���
	int nVersion;							//�汾��
	int cnFile;								//Ŀ¼�е��ļ�����
}GLACKGETFILEADVERT,*PGLACKGETFILEADVERT;
//shilei.2001.5.10.END

//---------------------------------------------------------------------------
//	�������б�����GLWord����GLRoom				chenzd 2001.4.9
//---------------------------------------------------------------------------
typedef struct tagGAMESERVERINFO
{
	char szName[GL_BUFLEN_SERVERNAME];	//����������
	char szServerIP[GL_BUFLEN_HOST];	//Ϊ�����ServerӦ��ʹ�õ�IP��ַ
	WORD wServerPort;					//Ϊ�����ServerӦ��ʹ�õ�Port��ַ
	int cnPlayers;
}GAMESERVERINFO, *PGAMESERVERINFO;

//wuqy add
typedef struct tagGAMESERVERINFOEX
{
	char szName[GL_BUFLEN_SERVERNAME];	//����������
	char szServerIP[GL_BUFLEN_HOST];	//Ϊ�����ServerӦ��ʹ�õ�IP��ַ
	WORD wServerPort;					//Ϊ�����ServerӦ��ʹ�õ�Port��ַ
	int cnPlayers;
	int cnNetSpeed;
}GAMESERVERINFOEX, *PGAMESERVERINFOEX;

//---------------------------------------------------------------------------
//	���е�RoomOcx����������
//---------------------------------------------------------------------------
#define GL_ROOMOCX_PRIVATEDATA		1500
#define MSG_ROOM_SETTINGSCHANGED	_T("MSG_ROOM_SETTINGSCHANGED")

//---------------------------------------------------------------------------
//	GLWorld������������
//---------------------------------------------------------------------------
#define GL_WORLD_PRIVATEDATA		1600
//���������Ϣ, LPARAM������һ��GLREQADVERT��ַ��Room��SendMessage��ʽ֪ͨGLWorld
#define MSG_WORLD_ADVERT			_T("MSG_WORLD_ADVERT")
#define MSG_WORLD_ADDOWNLOADSERVER  _T("MSG_WORLD_ADDOWNLOADSERVER")
//Room����GLWorld�رգ�û�в���
#define MSG_WORLD_CLOSEROOM			_T("MSG_WORLD_CLOSEROOM")
//�ļ������Ϣ��Room֪ͨGLWorld��鱾�ع���ļ�, LPARAM������һ��GLWORLDFILEADVERT��ַ��Room��SendMessage��ʽ֪ͨGLWorld
#define MSG_WORLD_FILEADVERT		_T("MSG_WORLD_FILEADVERT")
//���������Ϣ��LPARAM������һ��GLREQADVERT��ַ��Room��SendMessage��ʽ֪ͨGLWorld
#define MSG_WORLD_LARGEADVERT		_T("MSG_WORLD_LARGEADVERT")
//���ؿͻ�����Ϣ��LPARAM������GLDOWNLOADCLIENT��ַ��Room��SendMessage��ʽ֪ͨGLWorld
#define MSG_WORLD_DOWNLOADCLIENT	_T("MSG_WORLD_DOWNLOADCLIENT")
#define MSG_WORLD_ONGLMOBILE        _T("GL_WORLD_MOBILE")
#define MSG_WORLD_GETLOBBYADVERT	_T("MSG_WORLD_GETLOBBYADVERT")
											//room��world����ǰ�Ĺ�����

//�ı�Room��֪ͨ������ʾ������Ϣˢ��
#define MSG_CHANGE_ROOM				_T("MSG_CHANGE_ROOM")
// Room.ocx ���������������� Room.ocx ���û���ʾͼ�ꡣ
#define MSG_WORLD_UPDATEICON		_T("MSG_WORLD_UPDATEICON")

typedef struct tagGLDOWNLOADCLIENT
{
	DWORD dwClientID;							//�ͻ���ID��0��ʾRoom
	DWORD dwVersion;							//��Ҫ�İ汾��
	char  szClientName[GL_BUFLEN_GAMENAME];		//�ͻ���������GO add by wangning ʹ��ID��name˫��ƥ������
} GLDOWNLOADCLIENT, *PGLDOANLOADCLIENT;
//����5����Ϣ��WPARAM�������Ƿ�����Ϣ��GLRoom.ocx�ĸ����ھ��

#define MSG_WORLD_ANOTHERSTARTUP	_T("MSG_WORLD_ANOTHERSTARTUP")

//---------------------------------------------------------------------------
//	�ڴ�ӳ���ļ������dwCheck						chenzd 2001.4.20
//	dwCheck����dwOp���dwOp��GLWord������ɣ����GLRoom���ڴ�ӳ��ʧ�ܣ�
//	����Ϊ�Ƿ�
//---------------------------------------------------------------------------
#define	GL_ROOMOCX_CHECK						_T("GL_ROOMOCX_CHECK")
typedef struct tagROOMOCXCHECK{
	DWORD dwMachineIDLo;
	DWORD dwMachineIDHi;
	DWORD dwOp;
}ROOMOCXCHECKINFO,*PROOMOCXCHECKINFO;

//---------------------------------------------------------------------------
//	��֪GLWord�Ƿ����˳�
//---------------------------------------------------------------------------
#define RESULT_ROOM_EXIT		0			//ȷ���˳�
#define RESULT_ROOM_CANCEL		1			//�û�ȡ��
#define RESULT_ROOM_BUSY		2			//���ڽ������ݲ������˳�

//---------------------------------------------------------------------------
//	�°汾�еĹ��ڽ�����Ϸ�ҵĶ���
//---------------------------------------------------------------------------
//	������Ϸ�ҵ���Ϣ���ݽṹ��������:
//	GLACKENTERROOM				��Ϣͷ
//	szRankName					��0��β�Ķ�λ�����ַ���������Χ�������Ϊ����,[30-1]%dk,[1-9]%dd,[1-9]%dp,��ʥ,����[1-50],��,[30-1]%dk*,[1-9]%dd*
//	cnField						1�ֽڣ�˵���ֶ���Ŀ
//	FieldType[cnField]			ÿ���ֶ�һ���ֽ�
//		7 6 5 4 3 2 1 0
//		| | -----------
//		| |       |
//		| |       ----------->	�̶��ֶΣ�˵����ʲô�ֶΣ�ÿ���ֶεĳ����Ѿ��ڲ�ȷ�������ڶ�̬�ֶ�˵������ֶε�����
//		|-------------------->	���ڹ̶��ֶΣ���λ=1��ʾ����ֶβ�����ʾ
//		|-------------------->	=1��ʾ��̬�ֶΣ�0��ʾ�̶��ֶ�
//
//	FieldName[0],...			ÿ���ֶε���ʾ����
//	Player[0],...				ÿ���û�����Ϣ������FieldType����������
//---------------------------------------------------------------------------
#define	GL_MAX_FIELDCOUNT			40
#define	GL_FIELDTYPE_DYNAMIC		0x80
#define	GL_FIELDTYPE_HIDE			0x40

#define	GL_FIELDTYPE_CHAR			1
#define	GL_FIELDTYPE_BYTE			2
#define	GL_FIELDTYPE_SHORT			3
#define	GL_FIELDTYPE_WORD			4
#define	GL_FIELDTYPE_LONG			5
#define	GL_FIELDTYPE_DWORD			6
#define	GL_FIELDTYPE_FLOAT			7
#define	GL_FIELDTYPE_STRING			8
#define	GL_FIELDTYPE_PERCENT		9					// x 100

#define	GL_FIELD_USERNAME			0					//string
#define	GL_FIELD_NICKNAME			1					//string
#define	GL_FIELD_RANK				2					//BYTE
#define	GL_FIELD_SCORE				3					//int
#define	GL_FIELD_GAMECOIN			3					//int ��GL_FIELD_SCORE���ñ�ʾ�û�����Ϸ���ֶ�
#define	GL_FIELD_WINS				4					//DWORD
#define	GL_FIELD_LOSSES				5					//DWORD
#define	GL_FIELD_DRAWS				6					//DWORD
#define	GL_FIELD_BREAKRATE			7					//WORD, x 100
#define	GL_FIELD_IMAGE				8					//WORD
#define	GL_FIELD_MEMBER				9					//BYTE
#define	GL_FIELD_PRIVILEGE			10					//BYTE
#define	GL_FIELD_MONEY				11					//int, / 100
#define	GL_FIELD_STATUS				12					//BYTE
#define	GL_FIELD_TABLE				13					//WORD
#define	GL_FIELD_SEAT				14					//BYTE
#define	GL_FIELD_TABLEPASSWORD		15					//BYTE
#define	GL_FIELD_READY				16					//BYTE
#define	GL_FIELD_MATCHSTATUS		17					//BYTE
#define	GL_FIELD_SPEED				18					//WORD
#define	GL_FIELD_FACTION			19					//string
#define	GL_FIELD_LANGUAGE			20					//WORD

#define	GL_FIXFIELD_COUNT			21

#define	GL_FIELD_TEAMNAME			21					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_STRING	
#define	GL_FIELD_TEAMSCORE			22					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_TEAM2THSCORE		23					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_MATCHSCORE			24					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_SECONDSCORD		25					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_TEAMWINS			26					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_TEAMLOSSES			27					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_TEAMDRAWS			28					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
//������ʾ�ֶ� wuqy 2002.6.18
//�ֶ�22.23.31����
//#define	GL_FIELD_PLAYERWINS			29					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
//#define	GL_FIELD_PLAYERLOSSES		30					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_MATCHCOUNT			29					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_FIRSTCOUNT			30					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_PLAYERDRAWS		31					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD

#define	GL_FIELD_WINRATE			32					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_PERCENT
#define	GL_FIELD_DUTY				33					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_STRING
#define	GL_FIELD_GAMECOUNT			34					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_BRIDGERATE			35					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_PERCENT
#define	GL_FIELD_GAMECOINSCORE		35					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD //��GL_FIELD_BRIDGERATE���ñ�ʾ��Ϸ����Ϸ�Ļ����ֶ�
#define	GL_FIELD_BRIDGELASTWEEK		36					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_FLOAT

#define	GL_FIELD_MASTERSCORE		37					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD
#define	GL_FIELD_MATCHORDER			38					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_DWORD

#define GL_FIELD_TIME				39					//GL_FIELDTYPE_DWORD
#define GL_FIELD_MATCHRANK			40					//GL_FIELDTYPE_DYNAMIC | GL_FIELDTYPE_STRING

#define GL_FIELD_MOBILEDSM			63					//�ֻ���־�����ֻ����Ϸ���ã�ʵ�ʷ�������ͨ��������ʽ��������

#define	GL_DATA_UNKNOWN				0x80000001			//δ֪��ֵ���ͻ��˽��յ������ֵ����ʾδ֪
#define GL_HALFMAX_NEGATIVE         0xc0000001          //��Ϸ�����п��ܳ��ֵ������

//----------------------------------------------------------------------
//	��ȡĳ���û��Ķ���,��Ҫ���ڲ���
//----------------------------------------------------------------------
#define	GLID_GETROOMCLIENT				(GLID_BASEROOM+0x00000093)

typedef struct tagGLREQGETROOMCLIENT
{
	GLREQHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];
}GLREQGETROOMCLIENT,*PGLREQGETROOMCLIENT;

typedef struct tagGLACKGETROOMCLIENT
{
	GLACKHEADER header;
	int nLength;
}GLACKGETROOMCLIENT,*PGLACKGETROOMCLIENT;

//----------------------------------------------------------------------
//	������õ���Ϣ
//					chenzd	2001.9.20
//----------------------------------------------------------------------

//----------------------------------------------------------------------
//	������֧�����������
//----------------------------------------------------------------------
#define	GLID_CANLOCKPARTNER				(GLID_BASEROOM+0x00000094)

//----------------------------------------------------------------------
//	�������Ϣ
//----------------------------------------------------------------------
#define	GLID_LOCKPARTNER				(GLID_BASEROOM+0x00000095)
typedef struct tagGLREQLOCKPARTNER
{
	GLREQHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];		//����û���
	DWORD dwType;								//��Ϣ����
} GLREQLOCKPARTNER, *PGLREQLOCKPARTNER;

#define GL_LOCKPARTNER_REQ				0			//��������
#define GL_LOCKPARTNER_AGREE			1			//ͬ������
#define	GL_LOCKPARTNER_DISAGREE			2			//�Է���ͬ��

typedef struct tagGLACKLOCKPARTNER
{
	GLACKHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];		//����û���
} GLACKLOCKPARTNER, *PGLACKLOCKPARTNER;

#define	GL_LOCKPARTNER_SUCCESS			0			//�����ɹ�
#define	GL_LOCKPARTNER_NOTSUPPORT		1			//�Է��Ĵ�����֧��
#define	GL_LOCKPARTNER_HASLOCKED		2			//�Է��Ѿ�������
#define	GL_LOCKPARTNER_ACKDISAGREE		3			//�Է���ͬ��
#define	GL_LOCKPARTNER_PARTNERLEFT		4			//�Է��Ѿ��뿪

//----------------------------------------------------------------------
//	����������Ϣ
//----------------------------------------------------------------------
#define	GLID_UNLOCKPARTNER				(GLID_BASEROOM+0x00000096)

//----------------------------------------------------------------------
//	�����״̬�ı���Ϣ
//----------------------------------------------------------------------
//	�Լ��ı�״̬�����Ǵ�޷����µ�ʱ���ӵ�������Ϣ
#define	GLID_PARTNERCANNOTSIT			(GLID_BASEROOM+0x00000097)

//----------------------------------------------------------------------
//	�ı���Ϸ��������������Ϣ
//					chenzd	2001.11.6
//----------------------------------------------------------------------
//----------------------------------------------------------------------
//	����������Ϣ
//----------------------------------------------------------------------
#define	GLID_ADDTABLE					(GLID_BASEROOM+0x00000098)
//----------------------------------------------------------------------
//	����������Ϣ
//----------------------------------------------------------------------
#define	GLID_DELETETABLE				(GLID_BASEROOM+0x00000099)
//����������Ϣ������������ṹ
typedef struct tagGLTABLECHANGE
{
	GLREQHEADER header;
	int nTableCount;					//���ӻ���ٵ���Ŀ
} GLTABLECHANGE, *PGLTABLECHANGE;

//----------------------------------------------------------------------
//	��������������ѡ����ܻ�ӭ���˵���Ϣ
//					chenzd	2002.1.22
//----------------------------------------------------------------------
#define GLID_SETUSERPROPERTY			(GLID_BASEROOM+0x0000009A)
typedef struct tagGLSETUSERPROPERTY
{
	GLREQHEADER	header;
	char szUserName[GL_BUFLEN_USERNAME];		//Ŀ���û���
	DWORD dwType;								//�������ͣ��������
} GLSETUSERPROPERTY, *PGLSETUSERPROPERTY;

#define GL_SETUSER_FRIENDTONORMAL		1				//�������ó���ͨ����
#define	GL_SETUSER_ENEMYTONORMAL		2				//���ܻ�ӭ���ó���ͨ����
#define	GL_SETUSER_FRIEND				3				//��ͨ�������ó�����
#define	GL_SETUSER_ENEMY				4				//��ͨ�������óɲ��ܻ�ӭ
#define	GL_SETUSER_ENEMYTOFRIEND		5				//�������óɲ��ܻ�ӭ
#define	GL_SETUSER_FRIENDTOENEMY		6				//���ܻ�ӭ���ó�����
//----------------------------------------------------------------------
//	��������������Ϸ�ҷ��ͱ��������ʾ����Ϣ
//					wangcheng 2005.6.15
//----------------------------------------------------------------------
#define GLID_SENDMATCHUSERINVESTIGATE			(GLID_BASEROOM+0x0000009B)
typedef struct tagGLSENDMATCHUSERINVESTIGATE
{
	GLREQHEADER	header;
	char        MatchInvestigateURL[256];
} GLSENDMATCHUSERINVESTIGATE, *PGLSENDMATCHUSERINVESTIGATE;

//OF�Զ�������Ϣ wuqy add 2005.8.16
#define GLID_OFAUTOSTARTGAME			(GLID_BASEROOM+0x0000009C)
typedef struct tagGLREQOFAUTOSTARTGAME
{
	GLREQHEADER	header;
	char szRoomName[GL_BUFLEN_ROOMNAME];
	int nPlayers;
	char aszPlayerName[GL_MAX_PLAYERSPERTABLE][GL_BUFLEN_USERNAME];
}GLREQOFAUTOSTARTGAME,*PGLREQOFAUTOSTARTGAME;
//wuqy end


//----------------------------------------------------------------------
// ��ͻ��˷��ʹ��зḻ��Ϣ����Ϣʹ�õ���ϢID�ͽṹ���塣
//----------------------------------------------------------------------
#define GLID_RICH_PROMPTMSG		(GLID_BASEROOM+0x0000009D)
typedef struct tagGLREQRICHPROMPTMSG
{
	GLREQHEADER header;
	DWORD dwMsgVersion;		// ��Ϣ�汾����ǰΪ1.0.0.0(0x01000000)
	DWORD dwFlag;			// ��Ϣ��־, ����ĳ���ֶ��Ƿ���õı�־, �Լ��Ի���İ�ť��־.
	DWORD dwMsgId;			// ��Ϣ��ʶ, ����������Ϣ����, Ҳ���ڼ�¼�Ƿ������
							// Ϣ�´��Ƿ���ʾ��Ψһ����.
	USHORT nAutoCloseTime;	// �Զ��رյĵ���ʱʱ��.
	USHORT nIcon;				// ��Ϣ���Iconֵ��
	DWORD dwReserved1;		// �����ֶ�1.
	DWORD dwReserved2;		// �����ֶ�2.
	// char msg[];					// ��Ϣ�壬�� \0 ������
	// δ��������ܸ���������Ϣ������ dwVersion �ֶε����ö�����
} GLREQRICHPROMPTMSG, *PGLREQRICHPROMPTMSG;



// GLREQRICHPROMPTMSG Flag ˵����
#define GL_RICHPM_OK				0x00000000	// ֻ��ȷ����ť��ID=IDOK, ����ȱʡ���.
#define GL_RICHPM_MSGID				0x00000001	// msgid �ֶ���Ч��
#define GL_RICHPM_TIME				0x00000002	// auto close time �ֶ���Ч��
#define GL_RICHPM_ICON				0x00000004	// icon �ֶ���Ч��
#define GL_RICHPM_MSG				0x00000008	// msg �ֶ���Ч��
#define GL_RICHPM_RESET				0x00000010	// ����CheckBox���ã�������ʾ��Ϣ
#define GL_RICHPM_YESNO				0x00000040	// �� Yes/No������ť��IDYES, IDNO
#define GL_RICHPM_OKCANCEL			0x00000080	// ��OK/Cancel������ť��IDOK, IDCANCEL
#define GL_RICHPM_YESNOCANCEL		0x00000100	// �� Yes/No/Cancel������ť��IDYES, IDNO, IDCANCEL

// GLREQRICHPROMPTMSG Icon ˵����
#define GL_RICHPM_ICON_APP			0x0001	// ʹ��Ӧ�ó����ͼ�ꡣ
#define GL_RICHPM_ICON_CURGAME		0x0002	// ʹ��Room��ǰ�������Ϸ��Icon,���û����ʹ��Ӧ�ó����ͼ�ꡣ
#define GL_RICHPM_ICON_EXCLAMATION	0x0003	// ʹ��ϵͳExclamationͼ�ꡣ
#define GL_RICHPM_ICON_WARNING		0x0004	// ʹ��ϵͳWarningͼ�ꡣ
#define GL_RICHPM_ICON_INFORMATION	0x0005	// ʹ��ϵͳInformationͼ�ꡣ
#define GL_RICHPM_ICON_ASTERISK		0x0006	// ʹ��ϵͳAsterRiskͼ�ꡣ
#define GL_RICHPM_ICON_QUESTION		0x0007	// ʹ��ϵͳQuestionͼ�ꡣ
#define GL_RICHPM_ICON_STOP			0x0008	// ʹ��ϵͳStopͼ�ꡣ

//----------------------------------------------------------------------
// ������������Ϸ�����������������Ҫ��Ŀͻ���room�汾��game�汾  wangch 2006.4.4
//----------------------------------------------------------------------
#define GLID_GETROOMGAMEVERSION		(GLID_BASEROOM+0x0000009E)
//����
typedef struct tagGLREQGETROOMGAMEVERSION
{
	GLREQHEADER header;
	char szRoomName[GL_BUFLEN_ROOMNAME];	//��������

} GLREQGETROOMGAMEVERSION, *PGLREQGETROOMGAMEVERSION;
//����
typedef struct tagGLACKGETROOMGAMEVERSION
{
	GLACKHEADER header;
	DWORD dwRoomVersion;		//�������ư汾��
	DWORD dwGameVersion;		//��Ϸ���ư汾��
	DWORD dwMinRoomVersion;		//��С�ķ������ư汾��
} GLACKGETROOMGAMEVERSION, *PGLACKGETROOMGAMEVERSION;

//�û������ڱҵȹ�����Ϣ�����˱仯,֪ͨ������µ�mapfile wuqy add 2006.4.6
#define GLID_UPDATEUSERPUBINFO	(GLID_BASEROOM+0x0000009F)
typedef struct tagGLREQUPDATEUSERPUBINFO
{
	GLREQHEADER	header;
	int			nMoney;//��ǰӵ�еĲƸ�ֵ
	int			nCoin;//��ǰӵ�е����ڱ�
	BYTE		uchMember;
}GLREQUPDATEUSERPUBINFO,*PGLREQUPDATEUSERPUBINFO;
//----------------------------------------------------------------------
// ��Ϸ��������������ʱ�����������������������Ϣ  wangch 2006.5.8
//----------------------------------------------------------------------
#define GLID_SENDRESTARTINFO	(GLID_BASEROOM+0x000000A0)
//����
typedef struct tagGLREQSENDRESTARTINFO
{
	GLREQHEADER header;
	int					nPort;//����IP
	DWORD				dwIP;//�����˿�
}GLREQSENDRESTARTINFO,*PGLREQSENDRESTARTINFO;


//----------------------------------------------------------------------
// �û���������������Ϸʱ�������ƺ������߹��ܵ���Ϣ wangch 2006.5.23
//----------------------------------------------------------------------
#define GLID_LIMITOURFRIEND	(GLID_BASEROOM+0x000000A1)
//���� GLREQHEADER header;

//---------------------------------------------------------------------------
// ����ҽ��뷿��֮�󣬷�����������������е���Ϸ��������Ϣ���ͻ���
//---------------------------------------------------------------------------
#define GLID_TABLEDESCRIPTION	( GLID_BASEROOM + 0x000000A2 )
// s->c
typedef struct tagGLReqTableDescription
{
	GLREQHEADER header ;
	int nStart ;		// �����Ϣ�������Ǵ���������ţ���0��ʼ��������һ������ʼ����Ϸ��
	int nEnd ;			// �����Ϣ�������ǵ���������ţ���������һ����Ϊֹ����Ϸ��
	int nSeatCount ;	// ��Ϸ���е���λ����
	// ����ǹ̶����ȵ�������Ϣ��ֱ�Ӽӵ����漴�ɣ�����Ǳ䳤����Ϣ����ô��������һ���ֶα�ʾ����ṹ�Ĵ�С
	// �������Լ���������Ϣ�����糬�������е���Ϣ����Ϸ�����ֵ���Ϣ�������Ϸ��ֻ�ܻ�Ա���µȵ�
} GLREQTABLEDESCRIPTION , *PGLREQTABLEDESCRIPTION ;

//2.7Avatar�û�����Ϸ��������AvatarDress
#define	GLID_USERCHANGEDRESS27					(GLID_BASEROOM+0x000000A3)
//-------------------------------------------------------------------------------------------------------
//	�û��ı��������Ʒ���
//	������Ϣ��
//	ackheader
//	string	pszUserName			//�ı���Ʒ������û���
//	WORD	wCount;				//�����Ʒ������
//	������wCount�� dwItemID ... dwItemID
//���������յ�����Ϣ��,��ֱ�ӰѸ���Ϣת��������Ϸ�������û�

//glworld�ͻ��˷��͹����Ŀͻ���ϵͳ��Ϣ
#define GLID_GAMEUSERMACHINEINFO							(GLID_BASEROOM+0x000000A4)
typedef struct tagGLREQGAMEUSERMACHINEINFO
{
	GLREQHEADER header;
	DWORD	dwGLWorldVersion;				//GLWorld�ĵ�ǰ�汾��
	DWORD   dwGameVersion;					//��ǰ��Ϸ�ͻ��˵İ汾�ţ���Ϸ��GameID�ڷ������˿��Ի�ã�
	DWORD	dwScreenResolution;				//��Ļ�ֱ���
	WORD	wWindowVersion;					//ʹ�õ�Windows�汾
	WORD	wMemoryCapability;				//��ǰ�ڴ�����(��λM)
	BYTE	byCPUType;						//��ǰCPU�ͺ�
	BYTE	byScreenPixelDepth;				//��Ļ��ɫλ��
	WORD	wCpuSpeed;						//��ǰCPU��Ƶ
}GLREQGAMEUSERMACHINEINFO,*PGLREQGAMEUSERMACHINEINFO;

// 
// glworld->server�����ڱ����Լ�֧����Щ����
// �Ժ���ʹ�������Ϣ��������ͨ���������汾���жϴ����Ƿ�֧��ĳ������
// �����ϢӦ���ڴ������Ͱ汾��Ϣ֮���͵���������
// 
#define GLID_GLWORLDFACULTY				(GLID_BASEROOM+0x000000A5)
// ��bitȡֵ�Ĺ���
#define GLWF_BIT_USEOLDAVATAR			( 1 << 0 )	// �Ƿ�ʹ�þɰ��Avatar��Ĭ�ϲ�ʹ�ã�2.7.0.1֮ǰ�İ汾����ʹ�þɰ�Avatar��2.7.0.4֮��İ汾�������ֶ�֧�֣�
typedef struct tagGLReqGLWorldFaculty
{
	GLREQHEADER header ;
	DWORD dwFacultyBit ;			// ��bitȡֵ�Ĺ�����Ϣ��ȡֵΪGLWF_BIT_XXX�������Ӧ��λΪ1��ʾ����֧���������
									// ���е���Щ�����У�ȱʡ���Ƕ�Ӧ����ӦbitȡֵΪ0��״̬
} GLREQGLWORLDFACULTY , *PGLREQGLWORLDFACULTY ;

// 
// server->glworld����֪����ÿ�����䶼����Щ���ơ�����ĳ��������������ƶ��ԣ�����and�Ĺ�ϵ��
// �����Ϣһ�������ҽ��������֮���͸�������
// 
#define GLID_ROOMLIMITDESCRIPTION		(GLID_BASEROOM+0x000000A6)
// ���Ƶ���Ϣ����
#define RLD_FIELD_SCORE				(  1 )	// ���ƻ��֣���ʱnValueȡֵΪ����ķ�ֵ
#define RLD_FIELD_GAMECOIN			(  2 )	// ������Ϸ������ʱnValueȡֵΪ�������Ϸ����Ŀ
#define RLD_FIELD_BREAKRATE			(  3 )	// ���ƶ����ʣ���ʱnValue�Ƕ����ʰٷֱ�*100����ֵ������350��ʾ���ƶ�����3.5%
#define RLD_FIELD_MEMBERGAMECOUNT	(  4 )	// ���ƻ�Ա��Ϸ����������ʱnValueȡֵΪ��Ϸ������ֵ
#define RLD_FIELD_FREEGAMECOUNT		(  5 )	// ���Ʒǻ�Ա��Ϸ������������ʱnValueȡֵΪ��Ϸ������ֵ
#define RLD_FIELD_MEMBER			(  6 )	// ������һ�Ա״̬����ʱnValueȡֵΪ0���ǻ�Ա������1����Ա��
#define RLD_FIELD_PRIVILEGE			(  7 )	// ������ҵı�־����ʱnValueȡֵΪĳ����־
#define RLD_FIELD_GAMEVERSION		(  8 )	// ������Ϸ�汾����ʱnValueȡֵΪ�汾��ֵ������0x02030405��ʾ2.3.4.5
#define RLD_FIELD_ROOMVERSION		(  9 )	// ���ƴ����汾����ʱnValueȡֵΪ�汾��ֵ������0x02030405��ʾ2.3.4.5
#define RLD_FIELD_SEX				( 10 )	// ��������Ա���ʱnValueȡֵΪ0��Ů�ԣ�����1�����ԣ�
#define RLD_FIELD_RANK				( 11 )	// ������ҵȼ�����ʱnValueȡֵΪ�ȼ���ֵ
#define RLD_FIELD_NETSPEED			( 12 )	// ����������٣���ʱnValueȡֵΪ���ٵ�ֵ
#define RLD_FIELD_MONEY				( 13 )	// ������ҵĲƸ�ֵ����ʱnValueȡֵΪ�Ƹ�ֵ����Ŀ
// ���Ƶ�����
#define RLD_TYPE_EQUAL	( 1 )	// ���Ƶ�ֵ�������nValue��ֵ�������Ա�ȣ�
#define RLD_TYPE_MIN	( 2 )	// ���Ƶ�ֵ������nValue��ֵ��������Ϸ����
#define RLD_TYPE_MAX	( 3 )	// ���Ƶ�ֵ������nValue��ֵ����������ʣ�
typedef struct tagRoomLimitDesc
{
	int nField ;	// ���Ƶ���ʲô��Ϣ��ȡֵΪRLD_FIELD_XXX�����������Ĵ������ܽ��������࣬�����Թ�����
	int nType ;		// ���Ƶ����ͣ�ȡֵΪRLD_TYPE_XXX
	int nValue ;	// ���Ƶ�ֵ���������Ƶ�ֵ������ĺ���ο�GLD_FIELD_XXX�е�����
} ROOMLIMITDESC , *PROOMLIMITDESC ;
typedef struct tagGLReqRoomLimitDescription
{
	GLREQHEADER header ;
	int nSize ;						// ����ṹ�Ĵ�С������Ӧ���Ǵ���Ϣͷƫ����ô����ֽڴ���ʼ������Ϣ��������ݣ�
									// ����Ҫֱ��ʹ����Ϣͷ��1�ķ�ʽ
	int nRoomCount ;				// �������Ŀ
	int nDescSize ;					// ÿ���������ƵĽṹ�Ĵ�С������Ӧ��ʹ�����ֵ��������sizeof(ROOMLIMITDESC)��
									// ����Ϊÿһ��������Ϣ�Ĵ�С�����ڶ�λ��һ��������Ϣʱ����ʹ�������±�ķ�ʽ��
	// ��Ϣ���nRoomCount��DWORD��Ϣ����ʾÿ�����䶼�ж��ٸ�������Ϣ
	// ֮�������θ�ÿ�������������Ϣ
} GLREQROOMLIMITDESCRIPTION , *PGLREQROOMLIMITDESCRIPTION ;

//---------------------------------------------------------------------------
//	ˢ�·����û�����(����������)
//---------------------------------------------------------------------------
#define	GLID_REFRESHPLAYERCOUNT				(GLID_BASEROOM+0x000000A7)
typedef struct tagGLRefreshPlayerCount
{
	GLREQHEADER header ;
	WORD		wPlayers;//����
}GLREFRESHPLAYERCOUNT,*PGLREFRESHPLAYERCOUNT;

//---------------------------------------------------------------------------
//	�·��Ƿ�ʹ��˫ͨ��Ϣ
//  ˵��:
//   1 �����������·����REQ��Ϣ 
//   2 ����ͻ��������˻������� ������һ��ACK��Ϣͷ ���ڼ�¼ GLACKHEADER header;
//---------------------------------------------------------------------------
#define	GLID_USEWELLNET				(GLID_BASEROOM+0x000000A8)
typedef struct tagUseWellNet
{
	BOOL		bUseWellNet;		//�Ƿ�ʹ��˫ͨ
	WORD		wValve;				//�ٶȷ�ֵ
	WORD		wTestSpeedTick;		//����ʱ����
	WORD		wWNTestSpeedCount;	//������ٸ���	
	WORD		wDCTestSpeedCount;	//ֱ�����ٸ���
	WORD		wSendSpeedInfoTick; //���Ͳ��ٱ���ʱ����
}USEWELLNET,*PUSEWELLNET;



typedef struct tagGLReqUseWellNet
{
	GLREQHEADER header ;
	USEWELLNET	stUwn;
}GLREQUSEWELLNET,*PGLREQUSEWELLNET;


//---------------------------------------------------------------------------
// �Ϸ�˫ͨ����ٶ���Ϣ	  �������ط�ʹ�ô���Ϣ һ���ǿͻ��˸���Ϸ������ ����һ����Ϸ��������������¼������
//---------------------------------------------------------------------------
#define	GLID_WELLNETSPEEDINFO				(GLID_BASEROOM+0x000000A9)
typedef struct tagGLReqWellNetSpeedInfo
{
	GLREQHEADER header ;
	WORD		wWellNetSpeed;	//ʹ�ô����ٶ�
	WORD		wDCSpeed;		//ʹ��ֱ������ٶ� 0����ʾ��ͨ
	WORD		wType;			//��������
}GLREQWELLNETSPEEDINFO,*PGLREQWELLNETSPEEDINFO;


typedef struct tagGLReqWellNetSpeedInfoEx
{
	GLREQHEADER header ;
	DWORD		dwIP;//IP
	DWORD		dwGameID;
	time_t		tmTime;//ʱ��
	char		szUserName[GL_BUFLEN_USERNAME];
	WORD		wWellNetSpeed;	//ʹ�ô����ٶ�
	WORD		wDCSpeed;		//ʹ��ֱ������ٶ� 0����ʾ��ͨ
	WORD		wType;			//��������
}GLREQWELLNETSPEEDINFOEx,*PGLREQWELLNETSPEEDINFOEx;

//---------------------------------------------------------------------------
// ��Ϸ��������������¼������ ����ͳ����Ϣ
//---------------------------------------------------------------------------
#define	GLID_WELLNETPLAYERSINFO				(GLID_BASEROOM+0x000000AA)
typedef struct tagGLReqWellNetPlayersInfo
{
	GLREQHEADER header ;
	DWORD	dwGameID;//��ϷID
	int	cnWellProxyPlayer;//ʹ�ô�������
	int	cnRoomPlayer;//����������
}GLREQWELLNETPLAYERSINFO,*PGLREQWELLNETPLAYERSINFO;


//---------------------------------------------------------------------------
// �����Ӻ���λ
//---------------------------------------------------------------------------
#define	GLID_CHANGESEAT						(GLID_BASEROOM+0x000000AB)
typedef struct tagGLReqChangeSeat
{
	GLREQHEADER header ;
	int nTable;										// ����  <=0 Ϊ����  >0ΪҪת��������
	BYTE uchSeat;									// ��λ��
	BOOL bWatch;									// �Թ�
}GLREQCHANGESEAT,*PGLREQCHANGESEAT;


typedef struct tagGLAckChangeSeat
{
	GLACKHEADER header ;
	BYTE uchSeat;									// ���ص���λ��
	BOOL bWatch;									// �Թ�
	char	szChatRoomName[GL_BUFLEN_ROOMNAME];		// Chat Room Name
}GLACKCHANGESEAT,*PGLACKCHANGESEAT;


#define USERROOMSETTING_GROUP	4096
typedef struct tagGLUSERDEMANDINFO
{
	int	nNewBreakRate;	// ���˶�����
	int	nNewWinRate;	// ����ʤ��
	DWORD	dwNewSpeed;	//��������
	int	nNewScoreOrGameCoin;	//���˻���
	int	nNewMember;	//���˻�Ա
	int	nOldScore;	//���˻���
}GLUSERDEMANDINFO,*PGLUSERDEMANDINFO;

typedef struct tagGLUSERROOMSETTING
{
	BOOL bPlayWithNotFree;					// ֻ���Ա�棬��Ա����
	BOOL bNoPlayWithEnemy;					// ���Ͳ��ܻ�ӭ����棬��Ա����
	int nBreakRate;						// ���������ƣ�0Ϊ������
	DWORD dwNetSpeed;						// �������ƣ�0Ϊ������
	long lScore;						// �������ƣ�0Ϊ������
	long lAbsScore;						// ���ֲ����ƣ�0Ϊ������
	int  nWinRate;						// ʤ�����ƣ�0Ϊ������
	BOOL bNotDefenceFriend;					// ����������
	int nIPMask;						// IP��ַ���ƣ�0Ϊ������
	BOOL bLimitScore;					//�Ƿ����ƻ���
}GLUSERROOMSETTING,*PGLUSERROOMSETTING;


typedef struct tagFRIENDDATA
{
	char szUserName[GL_BUFLEN_USERNAME];
	int nType;//1Ϊ���ѣ�2Ϊ���ܻ�ӭ
}GLFRIENDDATA,*PGLFRIENDDATA;

//�û��������ü�¼
typedef struct tagUSERROOMSETTINGINFO
{
	char	szUserName[GL_BUFLEN_USERNAME];		//�û���
	DWORD	dwCheckSum;
	DWORD	dwSettingLastUpdateBase;		//room����������ʱ��
	DWORD	dwFriendLastUpdateBase;			//���ѹ�ϵ����������ʱ��
	time_t	timeLeave;				//�뿪ʱ��
	GLUSERROOMSETTING stUserSettingInfo;		//�û�������Ϣ
	int 		nFriendCount;			//���Ѹ���
	PGLFRIENDDATA	pFrienData;			//��������
}USERROOMSETTINGINFO,*PUSERROOMSETTINGINFO;

typedef struct tagUSERROOMSETTINGGROUPINFO
{
	CRITICAL_SECTION	cs;
	DWORD			dwCount;
	PUSERROOMSETTINGINFO	pUserRoomSetList;
}USERROOMSETTINGGROUPINFO,*PUSERROOMSETTINGGROUPINFO;


//�������·��������ϵ�ʱ���
#define	GLID_USERSETTINGTIME				(GLID_BASEROOM+0x000000AC)
typedef struct tagGLREQUSERSETTINGTIME
{
	GLREQHEADER	header;
	DWORD	dwSettingLastUpdateBase;		//room����������ʱ��
	DWORD	dwFriendLastUpdateBase;			//���ѹ�ϵ����������ʱ��
	DWORD	dwFriendCount;					//��Ҫ�ϴ������б����
	DWORD	dwEnemyCount;					//��Ҫ�ϴ����ܻ�ӭ�б����
}GLREQUSERSETTINGTIME,*PGLREQUSERSETTINGTIME;



//�û���������
#define	GLID_USERROOMSETTINGINFO				(GLID_BASEROOM+0x000000AD)


typedef struct tagGLREQUSERROOMSETTING
{
	GLREQHEADER	header;
	GLUSERROOMSETTING	stUserSettingInfo;			//�û�������Ϣ
}GLREQUSERROOMSETTING,*PGLREQUSERROOMSETTING;

typedef struct tagGLACKUSERROOMSETTING
{
	GLACKHEADER	header;
	DWORD	dwSettingLastUpdateBase;		//room����������ʱ��
}GLACKUSERROOMSETTING,*PGLACKUSERROOMSETTING;



//�����û������û���
#define	GLID_UPDATEFRIENDUSERNAME				(GLID_BASEROOM+0x000000AE)


typedef struct tagGLREQUPDATEFRIENDUSERNAME
{
	GLREQHEADER	header;
	int		nCount;			//���ܻ�ӭ�û���
}GLREQFRIENDUSERNAME,*PGLREQUPDATEFRIENDUSERNAME;
//���nCount*GLFRIENDDATA


typedef struct tagGLACKUPDATEFRIENDUSERNAME
{
	GLACKHEADER	header;
	DWORD	dwFriendLastUpdateBase;		//���ܻ�ӭ����������ʱ��
}GLACKUPDATEFRIENDUSERNAME,*PGLACKUPDATEFRIENDUSERNAME;


//֪ͨ��Ϸ���Ѿ���ʼ��Ϸ�� ��roomˢ������״̬
#define	GLID_UPDATETABLEPLAYING				(GLID_BASEROOM+0x000000AF)
typedef struct tagGLUPDATETABLEPLAYING
{
	GLREQHEADER	header;
	int		nCount;			//���nCount��tableID 
}GLREQUPDATETABLEPLAYING,*PGLREQUPDATETABLEPLAYING;

// << added by zengxi 2011.02.15
// �ͻ����ڵ�¼֮ǰ�����Լ��ĵ�¼λ����Ϣ�����������Ա����������׼ȷ��֪���ͻ�����������Ӷ�������Ӧ��ͳ�ơ�
// �����ϢӦ��������ڷ��� GLID_LOGIN ��Ϣ֮ǰ����
// ����pc�ͻ��˾Ͳ��÷����ˣ���ΪĬ����pc�ͻ���
#define GLID_USERLOGINPOS	( GLID_BASEROOM + 0x000000BC )
enum USER_LOGIN_TYPE
{
	USER_LOGIN_TYPE_PCCLIENT = 1 ,	// pc�ͻ��ˣ���Ҳ��Ĭ��ֵ
	USER_LOGIN_TYPE_FLASH    = 2 ,	// flash�ͻ���
	USER_LOGIN_TYPE_ANDROID  = 3 ,	// Android�ͻ���
	USER_LOGIN_TYPE_IPAD     = 4 ,	// iPad�ͻ���
	USER_LOGIN_TYPE_IPHONE   = 5 ,	// iPhone�ͻ���
	USER_LOGIN_TYPE_MAX ,
};
enum USER_LOGIN_POS
{
	USER_LOGIN_POS_PCCLIENT           = 1 ,		// pc�ͻ��ˣ���Ҳ��Ĭ��ֵ
	USER_LOGIN_POS_WEB_OURGAME        = 2 ,		// ��������
	USER_LOGIN_POS_WEB_OURGAME_FAMILY = 3 ,		// ���ڼ�԰
	USER_LOGIN_POS_WEB_GAME           = 4 ,		// ��Ϸ��վ
};
// ���ڼ�¼��ҵ�¼λ����Ϣ�Ľṹ
typedef struct tagUserLoginPos
{
	int nLoginType ;	// �ͻ��˵�¼�����ͣ�ȡֵΪ��pc�ͻ��ˡ�flash�ͻ��˵�
	int nLoginPos ;		// �ͻ��˵�¼��λ�ã��������ţ���ȡֵΪ��pc�ͻ��ˡ��������硢���ڼ�԰����Ϸ��վ��
						// ��nLoginTypeȡֵΪ1/2��ʱ�������Ǳ�ʾ��¼��λ�ã�
						// ��nLoginTypeȡֵΪ3/4/5��ʱ�������Ǳ�ʾ�����ţ�
	int nLanguage ;		// ����
	int nResolution ;	// �ֱ���
	char	szRoleName[GL_BUFLEN_ROLENAME]; 
} USERLOGINPOS , *PUSERLOGINPOS ;
typedef struct tagGLUSERLOGINPOS
{
	GLREQHEADER header ;		//   header.dwType =GLID_USERLOGINPOS | GLID_REQ
	USERLOGINPOS pos ;	// λ����Ϣ
} GLREQUSERLOGINPOS , *PGLREQUSERLOGINPOS ;
// >> added by zengxi 2011.02.15

typedef struct tagGLACKUSERLOGINPOS
{
	GLACKHEADER header ;	//header.dwType = GLID_USERLOGINPOS| GLID_ACK ;
	//header.dwResult = GLBIT_FAIL ;   //  
	//header.dwResult = GLBIT_SUCCESS ;   // 
}GLACKUSERLOGINPOS,*PGLACKUSERLOGINPOS ;


typedef struct tagROLEINFOLIST
{
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szRoleName[GL_BUFLEN_ROLENAME];				// ��ɫ��
	
}ROLEINFOLIST,FAR *PROLEINFOLIST;

//�����������û���id��rolename
#define	GLID_ROOMROLEINFO						(GLID_BASEROOM+0x000000B0)

typedef struct tagGLACKROLEINFOLIST
{
	GLACKHEADER header;								//header.dwType = GLID_ROOMROLEINFO| GLID_ACK ;
	WORD wPlayerNum;								//�û���,���n��ROLEINFOLIST
}GLACKROLEINFOLIST,*PGLACKROLEINFOLIST;


//�����߽��뷿���
#define	GLID_ADDPLAYER_WEB					(GLID_BASEROOM+0x000000B1)

//---------------------------------------------------------------------------
//	�����û�Ӧ��
//---------------------------------------------------------------------------
typedef struct tagGLACKADDPLAYERWEB
{
	GLACKHEADER header;									////header.dwType = GLID_ADDPLAYER_WEB| GLID_ACK ;
	char szUserName[GL_BUFLEN_USERNAME];				// �û���
	char szRoleName[GL_BUFLEN_ROLENAME];				// ��ɫ��
}GLACKADDPLAYERWEB, *PGLACKADDPLAYERWEB;
 

//Ϊ��ҳ׽���������ʧ����Ϣ,�յ�����Ϣ��ʾ����ʧ����
#define	GLID_SITFAIL_WEB					(GLID_BASEROOM+0x000000B2)

//---------------------------------------------------------------------------
//	�����û�Ӧ��
//---------------------------------------------------------------------------
typedef struct tagGLACKSITFAILWEB
{
	GLACKHEADER header;									////header.dwType = GLID_SITFAIL_WEB| GLID_ACK ;
	
}GLACKSITFAILWEB, *PGLACKSITFAILWEB;

#endif	// __GLROOM_H__
