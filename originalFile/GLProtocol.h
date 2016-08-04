/*---------------------------------------------------------------------------
 GlobalLink Games Client/Server protocol
 ���ڻ���������Ϸ �ͻ�/�������˹�����Ϣ���弰�ṹ
 
 ����: jjwk 1998.3.2
 
 ע�����к궨����� GL_ ��ͷ
     ���нṹ����ȫ����д������ GL ��ͷ,ǰ��� *P ��ʾԤ����ָ��
     GLID_ ��ͷ��ʾ��Ϣ������ID
     GLBIT_ ��ͷ��ʾӦ����λ����
 
	1998.4.21 AddID GLID_BASECHNCHESS	by SHi Lei
	1998.5.24 AddID GLID_BASEJUMP	by jjwk
---------------------------------------------------------------------------*/

#ifndef __GLPROTOCOL_H__
#define __GLPROTOCOL_H__

#include <time.h>
//---------------------------------------------------------------------------
//	1.�� GL_BUFLEN_ ��ͷ
//	2.�ַ������ȶ��壬�����ַ�������0��β�����ʵ�ʿ�ʹ�õĳ���Ϊ����ֵ��1
//  3.��ó��ȶ����ܱ�4��������� 32 λ�����½ṹ�ռ䱻�Զ�����������
//---------------------------------------------------------------------------
#define GL_BUFLEN_HOST					(39+1)	// HOST Ĭ�ϳ���


#define	GL_BUFLEN_USERNAME				(19+1)	// �û�������
#define GL_BUFLEN_USERNAME_CHN			(12+1)	// 6�����ֵĳ��� wuqy add 2007.4.5(����IDר��)
#define GL_BUFLEN_NICKNAME				(19+1)	// Nike Name ����
#define	GL_BUFLEN_PASSWORD				(15+1)	// ���볤��
#define	GL_BUFLEN_MD5				(32+1)	// md5�ַ�������
#define GL_BUFLEN_PASSWORD_MD5			GL_BUFLEN_MD5	//(32+1) md5�����ַ�������
#define	GL_BUFLEN_SERIALNUMBER			(15+1)	// ���кų���
#define GL_BUFLEN_EMAIL					(63+1)	// EMAIL ����
#define	GL_BUFLEN_HTML					(255+1)	// HTML ���ҳ��ַ
#define	GL_BUFLEN_PRESENTNOTE			(47+1)	//avatar������Ʒ����
#define GL_BUFLEN_NIPID					(63+1)	// nipID�ĳ��ȣ����˵�½nip����������Ψһ�ı�ʶ
#define GL_BUFLEN_BCNAME				(63+1)	// ת����������GLBroadcastProtocol.h��BROADCAST_GAMENAME_LEN����
#define GL_BUFLEN_TGUSERNAME			(63+1)	// ��������Ϸ�û�������


#define GL_BUFLEN_REALNAME				(19+1)	// ����
#define GL_BUFLEN_STATE					(19+1)	// ʡ��
#define GL_BUFLEN_CITY					(19+1)	// �У�������
#define GL_BUFLEN_POSTALCODE			(11+1)	// ��������
#define GL_BUFLEN_WHEREPLAY				(19+1)	// ����������
#define GL_BUFLEN_LOVEGAME				(49+1)	// ϲ������Ϸ
#define GL_BUFLEN_FAVOR					(49+1)	// ��Ȥ����
#define GL_BUFLEN_COMPANY				(39+1)	// ��λ
#define GL_BUFLEN_DEPART				(19+1)	// ����
#define GL_BUFLEN_ADDRESS				(39+1)	// ��ַ
#define GL_BUFLEN_PHONE					(31+1)	// �绰

#define	GL_BUFLEN_GAMENAME				(31+1)	//��ϷӢ����, ��GO
#define	GL_BUFLEN_GAMEFULLNAME			(63+1)	//��Ϸ������, ��Χ��

#define	GL_BUFLEN_SERVERNAME			(39+1)	//���������ֳ���,����������
#define	GL_BUFLEN_ROOMNAME				(39+1)	//�������ֳ���,����������

#define	GL_BUFLEN_RANKNAME				(15+1)	//�ȼ����Ƴ���

#define GL_BUFLEN_ASCTIME				(27+1)	// ��׼ asctime ����
#define GL_BUFLEN_SAVEINDEXNAME			(63+1)	// ��׼���� Index �ִ�����

#define	GL_BUFLEN_FIELDNAME				(15+1)	//�ֶ�������

#define	GL_BUFLEN_PERSONALID			(19+1)	//���֤���롢��������

#define	GL_BUFLEN_VERSION				(39+1)	//�汾��
#define	GL_BUFLEN_NAMES					(59+1)

#define	GL_BUFLEN_TITLE					(255+1)

#define	GL_BUFLEN_FACTION				(19+1)	//����
#define	GL_BUFLEN_DUTY					(19+1)	//ְ��
#define	GL_BUFLEN_MATCHRANKNAME			(19+1)	//��������

#define	GL_BUFLEN_IP					(15+1)
#define	GL_BUFLEN_ACTION				(29+1)
#define	GL_BUFLEN_COMMENT				(63+1)
#define	GL_BUFLEN_COMMENT128			(127+1)//����̫�����û�����64λ��comment������ wuqy add 2006.6.7

#define	GL_BUFLEN_MOBILENO				GL_BUFLEN_USERNAME
#define	GL_BUFLEN_MANUFACTURER			(19+1)
#define	GL_BUFLEN_MODEL					(19+1)
#define GL_BUFLEN_SMCONTENT				(120+1)	//�ֻ��������ݳ���

#define GL_BUFLEN_CARDNO				(39+1)	//��Ա�����볤��
#define GL_BUFLEN_CARDPASSWORD			(19+1)	//��Ա�����볤��

#define	GL_BUFLEN_OLDINFO				(59+1)	//ԭ���ľ���Ϣ

#define GL_BUFLEN_TICKET				(128)	// ticket

#define GL_BUFLEN_IDCCHECKSUM			(19+1)	//���֤��ʶ����
#define GL_BUFLEN_IDCCHECKSUMSTRING		(35+1)	//MD5��֤���ַ�����32�ֽ��ַ���

#define GL_BUFLEN_PROMPTMSG			(1024+1)//��ʾ��Ϣ


//obisϵͳҪ���ڻ�Ա�ʸ�����ڱҵ�ע�����ѽӿ�����������
#define GL_BUFLEN_OBIS_CHANNELID		(11+1)//8		//������ų���
#define GL_BUFLEN_OBIS_PRODUCTID		(63+1)//60		//��Ʒ��ų��ȣ���ƷΪmapping���ʱ��m@productid��
#define GL_BUFLEN_OBIS_FLOWNUMBER		(63+1)//60		//��ˮ�ų���
#define GL_BUFLEN_OBIS_PRODUCTREMARK	(63+1)//60		//��Ʒ����ע�ͳ���

#define	GL_MAX_GAMES					100		//�����Ϸ����
#define	GL_MAX_SERVERSPERGAME			50		//һ����Ϸ�����е�Server��
#define	GL_MAX_ROOMSPERGAME				100		//һ����Ϸ�����е�Room��
#define	GL_MAX_PLAYERSPERROOM			500		//һ��Room�����������ɵ�����
#define GL_MAX_PLAYERSPERTABLE			6		//ÿ�������������ж��ٸ�Player
#define GL_MAX_WAITEVENT				10		//���ͬʱ�ȴ����ٸ�event(һ��client)

#define	GL_MIN_USERNAME					2		//�û�����̳���
#define	GL_MIN_PASSWORD					3		//������̳���
#define	GL_MIN_ROOMNAME					2		//��������̳���

//---------------------------------------------------------------------------
//	����ϵͳ���
//---------------------------------------------------------------------------
#define GL_BUFLEN_TEAMNAME				(39+1)	//��������
#define GL_BUFLEN_ROOMPROPERTY			64		//��������

//---------------------------------------------------------------------------
//	����ϵͳ���----add by zzh.
//---------------------------------------------------------------------------
#define	GL_BUFLEN_DBNAME				(19+1)	// ���ݿ�������
#define	GL_BUFLEN_DBUSERNAME			(19+1)	// ���ݿ��û�������
#define	GL_BUFLEN_DBPASSWORD			(19+1)	// ���ݿ����볤��
#define	GL_BUFLEN_ODBCNAME				(19+1)	// ODBC������

//---------------------------------------------------------------------------
//	�û�������״̬
//---------------------------------------------------------------------------
#define	GL_STATUS_EMPTY					0	//������
#define	GL_STATUS_STANDING				0	//�û���վ��Room��
#define	GL_STATUS_WAITING				1	//�û��ڵȴ����֣����������˵��������㣬��û�п�ʼ��Ϸ
#define	GL_STATUS_PLAYING				2	//������
#define	GL_STATUS_WATCHING				3	//�û����ڹۿ�������
#define	GL_STATUS_IDLEING				4	//�û������У�5������δ����״̬�ı������

#define	GL_ADVERT_WIDTH					200	//�ͻ��˹��ҳ���
#define	GL_ADVERT_HEIGHT				60	//�ͻ��˹��ҳ�߶�

#define	GL_TEXTADVERT_WIDTH				120	//�ͻ��˹��ҳ���
#define	GL_TEXTADVERT_HEIGHT			60	//�ͻ��˹��ҳ�߶�

#define	GL_ROOMADVERT_WIDTH				468	//�ͻ��˹��ҳ���
#define	GL_ROOMADVERT_HEIGHT			60	//�ͻ��˹��ҳ�߶�

//�йؼ��ܹ����ݳ��ȶ���
#define GL_SOFTDOG_RANDOMLEN			16
#define GL_SOFTDOG_MD5RESULTLEN			16


//---------------------------------------------------------------------------
//	1.��������ͻ���֮��������ݽ���ʱ��ÿ����Ϣ���������һ����ID���ܷ�Ϊ����
//	  �࣬���������Ӧ����
//	2.������ID������GLID_REQ��ͷ
//	3.Ӧ����ID������GLID_ACK��ͷ
//---------------------------------------------------------------------------
#define GLID_REQ						0x00000000	// �����
#define GLID_ACK						0x80000000	// Ӧ���
#define	GLID_COMPRESS					0x40000000	// ѹ�����ݰ�


//---------------------------------------------------------------------------
//	1.������Ҫ��ID����ϸ�֣�ÿ��ID������һ������ID��ʵ��ID�ڴ˻���֮�Ͻ��ж���
//---------------------------------------------------------------------------
#define GLID_BASEREGISTER				0x00000000	// ע����
#define	GLID_BASEROOM					0x00000100	// ��Room��ص�ID
#define GLID_BASEGAMES					0x00000200	// ��Ϸ�е�ͨ����Ϣ��
#define GLID_BASECHAT					0x00000300	// ������
#define GLID_BASEMSG					0x00000400	// ��ʱͨѸ, byq 2002.11.17
#define GLID_BASEB2B					0x00000500	// B2B, byq 2002.12.02
#define GLID_BASESERVICE				0x00000600	// ���������̼�ͨѶ		������ǧ��Ҫ�� GLID_BASESERVICE �� 255�����ټ���Ϣ�ˣ��Ѿ�����������Ϣ������ wangym 2008.3.25
//#define GLID_BASESERVICEEX				0x00040000	//���·���һ���θ�����������Ϣʹ�ã�ԭ��GLID_BASESERVICE����Խ��ʹ�ã�������Ϣ�ظ� wangym 2008.3.25
#define GLID_BASEDOWNLOAD				0x00000700	// ���������̼�ͨѶ	
#define GLID_BASEMASTERROOM				0x00000800  // ������
#define	GLID_BASESM						0x00000900	// ����
#define	GLID_BASETASK					0x00000a00	// �������
#define	GLID_BASEGRAPHCHAT				0x00000b00	// ͼ������
#define GLID_BASEMATCH					0x00000c00	// ����ϵͳ
#define GLID_BASEMAIL  				    0x00000d00	// �ʼ�Ⱥ��ϵͳ
#define GLID_BASEADSVR 				    0x00000e00	// ���ϵͳ
#define GLID_BASEPASSWORD			    0x00000f00	// ����ϵͳ

#define GLID_BASEGO						0x00001000	// Χ��
#define GLID_BASEUPGRADE				0x00002000	// ����
#define GLID_BASEHEARTS					0x00003000	// ����
#define GLID_BASECHNCHESS				0x00004000	// �й�����
#define GLID_BASEJUMP					0x00005000	// ����
#define GLID_BASERUNOUT					0x00006000	// �ܵÿ�
#define GLID_BASEINTCHESS				0x00007000	// ��������
#define GLID_BASEJUNQI					0x00008000	// ����
#define GLID_BASEBRIDGE					0x00009000	// ����
#define GLID_BASECNACHESS				0x0000A000	// �й����尵��
#define GLID_BASEMJ						0x0000B000	// �齫
#define GLID_BASETETRIS					0x0000C000	// ����˹����
#define GLID_BASECUTOUT					0x0000D000	// �����
#define GLID_BASESQUEEN					0x0000E000	// ���Ĵ�ս
#define GLID_BASEWZQ					0x0000F000  // ������
#define GLID_BASESHOWHAND				0x00010000	// ���
#define GLID_BASEDOUBLE					0x00011000	// ˫��
#define GLID_BASELORD					0x00012000	// ������
#define GLID_BASELORD3					0x00012100	// ������3		wym 2005.8.23
#define GLID_BASETHREETOONE				0x00013000	// ����һ
#define GLID_BASEGOUJI					0x00014000	// ����
#define	GLID_BASELOG					0x00015000	// Log���ݼ�¼
#define	GLID_BASEBUILDPIC				0x00016000	// ƴͼ
#define	GLID_BASEFLYCHESS				0x00017000	// ������
#define	GLID_BASEBILLIARD				0x00018000	// ̨��
#define GLID_BASEATOM					0x00019000	// ԭ��
#define GLID_BASEK007					0x0001A000	// ����
#define GLID_BASEK105					0x0001B000	// ��ʮK
#define GLID_BASEOTHELLO				0x0001C000	// �ڰ���
#define GLID_BASECHAODP					0x0001D000	// ����Ƥ	 wym 2002-1-31 9:42:17
#define GLID_BASEBOMBMAN				0x0001E000	// ը����	 wym 2002-4-3 16:57:48
#define GLID_BASEK003					0x0001F000	// ������	 wym 2002-5-20 10:23:24
#define GLID_BASEDIGPIT					0x00020000	// �ڿ�		wuqy 2004-2-24
#define GLID_BASEUSERCACHE				0x00021000	// �û���Ϣ��¼��ȡ�͸��·���, baoyq 2004.4.19
#define GLID_BASEGAMECACHE				0x00022000	// �û���Ϸ��¼��ȡ�͸��·���, baoyq 2004.4.19
#define GLID_BASEMBAUTHENTICATE			0x00023000	// �ֻ���Ϸ��Ȩ������ wym 2004.4.20
#define GLID_BASEMBPROXY				0x00024000	// �ֻ���Ϸ������������ֻ�ͨѶ����Ϣ wym 2004.4.20
#define GLID_BASEGOLDFLOWER				0x00025000	// ը��	wuqy 2004-6-2
#define GLID_BASEBAOHUANG				0x00026000	// ����		wuqy 2004-6-2
#define GLID_BASEBLACKJACK				0x00027000	// BlackJack��21�㣩	wuqy 2004-6-2
#define GLID_BASESITUAN					0x00028000	// ����	wuqy 2004-6-2
#define GLID_BASESLOT					0x00029000	// ������	lvch 2004-6-21
#define GLID_BASESEAWAR					0x0002A000	// ��վ��	wuqy 2004-8-4
#define GLID_BASECARIBBEAN				0x0002B000	// ���ձȺ�����	wuqy 2004-8-4
#define GLID_BASEJUNQIHUN				0x0002C000	// ��ս����	wuqy 2004-8-4
#define GLID_BASEPOPDRAGON				0x0002D000	// ������ wuqy 2004-8-19
#define GLID_BASESNAKE					0x0002E000	// ̰���� wuqy 2004-8-19
#define GLID_BASEROLL					0x0002F000	// ����� wuqy 2004-8-30
#define GLID_BASEGUANSJ					0x00030000	// ������ wuqy 2004-8-30
#define GLID_BASELORDWH					0x00031000	// �人������ wuqy 2004-9-17
#define GLID_BASETANK					0x00032000	// ̹�˴�ս(�����Ϸ) wuqy 2004-11-29
#define GLID_BASECRAZYGF				0x00033000	// ���Ӯ���� chairmin 2007-9-11
#define GLID_BASETEXASPOKER				0x00034000	// �����˿� chairmin 2007-11-14
#define GLID_BASEMAJIANGT				0x00035000	// �������齫 chairmin 2008-1-9
#define GLID_BASEMAJIANGZS				0x00035100	// ��ʯ�齫 chairmin 2008.4.10

#define GLID_BASEBROADCAST				0x00001100	// ת��ϵͳͨ����Ϣ wym 2005.4.5
#define GLID_BASEBROADCASTROOM			0x00001200	// ת������ wym 2005.4.5
#define GLID_BASEBROADCASTWEIQI			0x00001300  // Χ��ת�� wym 2005.4.5
#define GLID_BASEBROADCASTXIANGQI		0x00001400	// ����ת�� wym 2005.4.5

#define GLID_BASEITEM					0x00002100	// ����ϵͳ wym 2005.12.6

#define GLID_BASEPIPEUICOM				0x00002A00	// �ͻ��˹���ͨѶģ����Ϣ,�ͻ���֮��ʹ�ò��ᵽ������ wym 2007.9.12

#define GLID_BASECHECKCC				0x00003100	// ��Ϸ����ֵ������ wym 2005.7.15
#define GLID_BASEGIGN					0x00003200	// ����ҷ����� wuqy 2006.1.4
#define GLID_BASEINDICT					0x00003300	// Ͷ�߷����� wuqy 2006.2.22
#define GLID_BASEHBZHA					0x00003400	// �ӱ�׽��A wuqy 2006.3.17
#define GLID_BASEMONITOR				0x00003500	// ��ط����� wangch 2006.4.12
#define GLID_BASEBET					0x00003600	// ���·����� wuqy 2006.8.4
#define GLID_BASESUBUSERCACHE			0x00003700	// Sub�û���Ϣ��¼��ȡ�͸��·���, wuqy 2006.11.23
#define GLID_BASEIDCDB					0x00003800	// IDC��� wuqy 2006.11.29
#define GLID_BASEIDCMONITOR				0x00003900	// IDC��� wuqy 2006.11.29
#define GLID_BASESOHUGHOSTUSERCACHE		0x00003A00	// SohuGhost�û���Ϣ��¼��ȡ�͸��·���, wuqy 2006.12.1
#define GLID_BASETOMGHOSTUSERCACHE		0x00003A00	// TomGhost�û���Ϣ��¼��ȡ�͸��·���, wuqy 2007.1.4
#define GLID_BASESINAGHOSTUSERCACHE		0x00003A00	// SinaGhost�û���Ϣ��¼��ȡ�͸��·���, wuqy 2007.4.29
#define GLID_BASECONTROLMONITOR			0x00003B00	// ͬ����ط����� wangcheng 2007.1.29

#define GLID_BASELUCKYCOIN				0x00004100	// ���˱Ҳ�Ʒ��ص���Ϣ����	by cobra 20070920
#define GLID_BASEUSERIMAGE				0x00004200	// ��Ϸ������Ϣ���� chairmin 2007.11.2
/*
#define GLID_BASESERVICEEX				0x00005000	//���·���һ���θ�����������Ϣʹ�ã�ԭ��GLID_BASESERVICE����Խ��ʹ�ã�������Ϣ�ظ� chairmin 2007.11.30*/
#define GLID_BASESERVICEEX				0x00040000	//���·���һ���θ�����������Ϣʹ�ã�ԭ��GLID_BASESERVICE����Խ��ʹ�ã�������Ϣ�ظ� wangym 2008.3.25
#define GLID_BASEDBSVR					0x00041100	// dbsvrʹ�õ���Ϣ�� wangym 2008.3.25

#define GLID_BASEHISTORY				0x00080000	// ͳһ����ʷ����̹���ϵͳ wuqy 2004-12-15
#define GLID_PDB_CHESS					0x00081000	// �������ݿ⹦�ܣ�����ʹ�� chairmin 2008-12-15
#define GLID_PDB_MAJIANG				0x00082000	// �������ݿ⹦�ܣ��齫ʹ��(��ʯ�齫����) chairmin 2008-12-29

//Gaoy, 2004.02.13
#define GLID_BASENEW					0x000FB000	//����ϵͳ�ӿ���Ϣ

#define GLID_BASESM2					0x000FD000	// ����ƽ̨�ڶ����� 0xfd000~0xff000 8192�� wym 2003-9-17

#define GLID_BASESAMPLE					0x000FF000	// ��ģ����Ϸ  wym 2001-12-4 16:22:56

// ȫ�����ͨ������ͨ���ͨ���ķֽ�ֵ  wym 2002-4-12 17:35:17
#define GLID_BASEADVERTLARGE			0x00100000	// ���ڵ������ֵ��ȫ����� С�����ֵ����ͨ���
#define GLID_BASEADVERTIMAGE			0x00400000  // Image���  ��GameID|GLID_BASEADVERTIMAGE �����ֵ
#define GLID_BASEADVERTNORMAL			0x00000000	// ��ͨ���

//����
#define	GLID_BASEMOBILE					0x03000000	//��ֵ�����ѱ�����ʹ�� chairmin 2007.6.6


// add by zhp 2014/04/25
#define GL_BUFLEN_ROLENAME				(79+1)
// add end zhp

//---------------------------------------------------------------------------
//	������׼�������
//---------------------------------------------------------------------------
#define GLBIT_FAIL						0x00000000	// ʧ��
#define GLBIT_SUCCESS					0x00000001	// �ɹ�

//---------------------------------------------------------------------------
//	�ͻ���������ͷ�������Ӧ���������Ϣ����ͷ�ṹ
//---------------------------------------------------------------------------
typedef struct tagGLHEADER
{
	DWORD dwType;				// ��������ID
	DWORD dwLength;				// ʵ�����ݳ���(������������ͷ�ĳ���2��DWORD)
}GLHEADER, *PGLHEADER;

//---------------------------------------------------------------------------
//	���пͻ����������ͷ
//---------------------------------------------------------------------------
typedef struct tagGLREQHEADER
{
	DWORD dwType;				// ��������ID
	DWORD dwLength;				// ʵ�����ݳ���(������������ͷ�ĳ���2��DWORD)
}GLREQHEADER, *PGLREQHEADER;

// hangame������ͷ wym 2004.12.16
typedef struct tagGLREQHGHEADER
{
	DWORD dwType;				// ��������ID
	DWORD dwLength;				// ʵ�����ݳ���(��������������ͷ�ĳ���2��DWORD)

	DWORD dwSeqID;				// ��Ϣ���кţ�����hangame����Ҫ���
}GLREQHGHEADER, *PGLREQHGHEADER;

//---------------------------------------------------------------------------
//	���з�����Ӧ�����ͷ
//---------------------------------------------------------------------------
typedef struct tagGLACKHEADER
{
	DWORD dwType;				// ����ID
	DWORD dwLength;				// ʵ�����ݳ���(��������Ӧ��ͷ�ĳ���3��DWORD)
	DWORD dwResult;				// ��λ����Ľ��
}GLACKHEADER, *PGLACKHEADER;

// ��hangame��Ӧ��ͷ wym 2004.12.16
typedef struct tagGLACKHGHEADER
{
	DWORD dwType;				// ����ID
	DWORD dwLength;				// ʵ�����ݳ���(����������Ӧ��ͷ�ĳ���3��DWORD)
	DWORD dwResult;				// ��λ����Ľ��

	DWORD dwSeqID;				// ��Ϣ���кţ���req�е�ֵ��ͬ������hangame����Ҫ���
	DWORD dwDummy;				// û���ã�����Ϊ�˶��룬����hangame����Ҫ���
}GLACKHGHEADER, *PGLACKHGHEADER;

#define	GLID_SHAREMSG			0xffeeddcc
#define GLID_STRLINEMSG			0xAABBCCDD		//�ַ�����Ϣ CGLLineClientʹ��
#define GLID_SOCKETMONIT		0x0000eeee		//socket�����Ϣ


//---------------------------------------------------------------------------
//	�ڴ湲�����ݰ�
//---------------------------------------------------------------------------
typedef struct tagGLSHAREMSG
{
	DWORD dwMagic;				// ��־�֣�����������Ϣ��һ�µ�ͳһֵ��GLID_SHAREMSG
	DWORD dwCount;				// ���������Ϊ0ʱ����ɾ��
}GLSHAREMSG,*PGLSHAREMSG;

#define	GL_MAX_LOBBYCHAT			20

#define	GL_CHAT_MAPFILENAME_MAIN	"GL_MF_CPM"
#define	GL_CHAT_MAPFILENAME_LOCAL	"GL_MF_CPL"
#define	GL_CHAT_MUTEX_MAIN			"GL_MU_CPM"
#define	GL_CHAT_MUTEX_LOCAL			"GL_MU_CPL"
#define	GL_CHAT_MAPFILENAME_LOBBY	"GL_MF_CML"

#define GL_LOBBYFINDGAME_MESSAGE	"GL_LOBBYFINDGAME_MESSAGE_ID"
#define	GL_GAME_PRIVATEDATA			0xFECE

//---------------------------------------------------------------------------
//	�Ѿ���������Ϸ�Ҽ��ͻ�����Ϣ�ṹ����
//---------------------------------------------------------------------------
#define	GL_MAX_ROOMCOUNT				20		//����ͬʱ��������Ϸ������
#define	GL_MAX_COPLAYER					20		//��һ����Ϸ����Ϸ�ߺ��Թ۵���������������ڱ������׶��裬ʵ��û���������
#define	GL_BUFLEN_WNDTITLE				(39+1)	//���ڱ������󳤶�
typedef struct tagROOMRECINFO
{
	HWND hwnd;									//Room�Ĵ��ھ��
	char szWndTitle[GL_BUFLEN_WNDTITLE];		//Room�Ĵ��ڱ���
	DWORD idGame;								//��ϷID
	char aszCoplayer[GL_MAX_COPLAYER][GL_BUFLEN_USERNAME];
	char szRoomChatName[GL_BUFLEN_ROOMNAME];	//��Ϸ�������ҵ�����
	char szClientChatName[GL_BUFLEN_ROOMNAME];	//��Ϸ
}ROOMRECINFO,*PROOMRECINFO;

typedef struct tagLOCATEINFO
{
	char szGameName[GL_BUFLEN_GAMENAME];
	char szServerName[GL_BUFLEN_SERVERNAME];
	char szRoomName[GL_BUFLEN_ROOMNAME];
	int  nTable;
}LOCATEINFO,*PLOCATEINFO;

//add by lvch 2003/12/06 for avatar
#define	GL_MAXAVATARDRESSCOUNT			64				//Avatar���Ĵ�������
#define	GL_MAXAVATARSTYLECOUNT			128				//Avatar����������Ŀ
#define	GL_MAXAVATARCTRLCOUNT			64				//����Avatar�ؼ���Ŀ
#define	GL_AVATARCTRLNOTIFYMSG			(WM_USER + 142)	//֪ͨAvatar�ؼ���Ϣ
#define	GL_AVATARCTRLADDONEBUBBLE		(WM_USER + 143)	//֪ͨAvatar�ؼ���Ϣ,ָ������Ϸ��һ��һ����Ϸ����
typedef struct tagGL_AVATARCTRLINFO_OLD
{
	char	szUserName[GL_BUFLEN_USERNAME];			//��Ӧ�ؼ��û���
	DWORD	dwGameID;								//��ϷID
	HWND	hCtrlWnd;								//�ؼ����ھ��
	WORD	wAvatarDressCount;						//��ǰ�����·�����	���GL_MAXAVATARDRESSCOUNT
	WORD	awAvatarDressID[GL_MAXAVATARDRESSCOUNT];//��ǰ�����·�ID�б�
	DWORD	dwByFillInfo;							//�Ƿ��������Ϣ 
}GL_AVATARCTRLINFO_OLD,*PGL_AVATARCTRLINFO_OLD;
typedef struct tagGL_AVATARCTRLINFO
{
	char	szUserName[GL_BUFLEN_USERNAME];			//��Ӧ�ؼ��û���
	DWORD	dwGameID;								//��ϷID
	HWND	hCtrlWnd;								//�ؼ����ھ��
	WORD	wAvatarDressCount;						//��ǰ�����·�����	���GL_MAXAVATARDRESSCOUNT
	WORD	awAvatarDressID[GL_MAXAVATARDRESSCOUNT + GL_MAXAVATARDRESSCOUNT];//��ǰ�����·�ID�б�
	DWORD	dwByFillInfo;							//�Ƿ��������Ϣ 
}GL_AVATARCTRLINFO,*PGL_AVATARCTRLINFO;

#define	MAPFILENAME						_T("GL_ROOM_REC")
typedef struct tagMAPFILEINFO
{
	char szUserName[GL_BUFLEN_USERNAME];
	BOOL bLobbyExist;
	BOOL bMaskEnemyMsg;
	ROOMRECINFO asrri[GL_MAX_ROOMCOUNT];
	char szPassword[GL_BUFLEN_PASSWORD];
	BOOL bStopMasterRoom;
	BOOL bInMasterRoom;
	LOCATEINFO asLocate[GL_MAX_ROOMCOUNT];
	char szLobbyName[GL_BUFLEN_SERVERNAME];
//add by lvch 2003/12/06 for avatar
	DWORD	dwSize;						//=sizeof(MAPFILEINFO)��2005.12.1��szReserve[64]���
	DWORD	dwWorldExeVersion;			//��������İ汾��2005.12.1��szReserve[64]���
	char	szReserve[56];				//����
	HWND	hGlworldFrameWnd;			//���������ھ��
	char	szNickName[GL_BUFLEN_NICKNAME];//�û��ǳ�
	int		nMoney;						//�Ƹ�ֵ Ϊ��һ�ν������ʱ��ֵ,�����ܱ仯
	int		nCoin;						//���ڱ� Ϊ��һ�ν������ʱ��ֵ,�����ܱ仯
	char	szFaction[GL_BUFLEN_FACTION];//�û�����
	char	szDuty[GL_BUFLEN_DUTY];		//�û�ְ��
	BYTE	bySex;						//�û��Ա�
	BYTE	byMember;					//�Ƿ��Ա
	char	szAvatarServer[GL_BUFLEN_HOST]; //�Ƽ�Avatar��������ַ
	int		nAvatarServerPort;              //�Ƽ�Avatar�������˿�
	char	szLastLoginServer[GL_BUFLEN_HOST]; //�û����һ�γɹ���½����Ϸ��������ַ
	int		nLastLoginServerPort;              //�û����һ�γɹ���½����Ϸ�������˿�
	GL_AVATARCTRLINFO_OLD	astrAvatarCtrl_cannotuse[GL_MAXAVATARCTRLCOUNT];//��ӦAvatar�ؼ���Ϣ (������2.7,��ֹʹ�ô˽ṹ,����ֻ��ռλ)
	LONGLONG	lDigitalID;					//����id wuqy add 2005.3.8 %I64d

	DWORD	dwFaction;					//����ID,���ڹ���������ʱ���ж�ָ����Ľ�������ID��0��ʾ�ǽ�����Ա wuqy add 2005.6.23
	time_t	timeMemberStart;			//��Ա������ʼʱ��//0û�У���1δ֪
	int		nMemberRank;				//��Ա�ȼ�,0û�еȼ����ɻ�Ա����ʱ����������wuqy add 2005.6.23
	int		nCoinScore;					//���ڱ����ѻ��� wuqy add 2005.6.23

	char	szTicket[GL_BUFLEN_TICKET];	//wangym 2005.11.11
	GL_AVATARCTRLINFO	astrAvatarCtrl[GL_MAXAVATARCTRLCOUNT];//��ӦAvatar�ؼ���Ϣ Avatar2.7
}MAPFILEINFO,*PMAPFILEINFO;

//Ewonder ��������Ķ��� 2000/05/10
//��Glworld������ʱ���⵽�Ѿ�����һ��ʵ��������������������ڴ��ļ�����
//���ҷ�����Ϣ����ǰ������Glworld������
#define	MAPCOMMANDLINE					_T("GL_WORLD_CMDLINE")
typedef struct tagMAPCOMMANDLINEINFO
{		
	int	nLen;							//�����ַ����ĳ���
	char szCmd[512];					//�����ŵ�λ��
}MAPCOMMANDLINEINFO,*PMAPCOMMANDLINEINFO;

// �������������κδ���ʱ,����������������͵���Ϣ(ʹ��GLACKHEADER)
#define GLID_ACKERR						(GLID_ACK | 0x7FFFFFFF)
													// Ӧ�����
#define GLBIT_ACKERR_GAMEBREAK			0x00000001	// Game ���κ�һ���ж�
#define GLBIT_ACKERR_KICKOUT			0x00000002	// ��һ����ͬ�û����Ϳ�������߳���
#define GLBIT_ACKERR_ROOMBREAK			0x00000004	// Room������
#define GLBIT_ACKERR_TIMEOUT			0x00000008	// ����TIMEOUT�����������ر�

//---------------------------------------------------------------------------
//	ͨ�ô�����Ϣ
//---------------------------------------------------------------------------
typedef struct tagGLACKERR
{
	GLACKHEADER header;
	char szUserName[GL_BUFLEN_USERNAME];
}GLACKERR, *PGLACKERR;

//---------------------------------------------------------------------------
//	��ע���йصĳ��������ݽṹ�Ķ���
//---------------------------------------------------------------------------
//#include "GLRegisterProtocol.h"	commented by wym 2003-3-11
								// �ᵼ��registerservice����ʱ�����Լ�Ŀ¼�±�������ļ� 
								// �����������������

//---------------------------------------------------------------------------
//	��Room�йصĳ��������ݽṹ�Ķ���
//---------------------------------------------------------------------------
//#include "GLRoomProtocol.h"

//---------------------------------------------------------------------------
//	����Ϸ�йصĳ��������ݽṹ�Ķ��壬����ÿ����Ϸ���ܻ�������Ķ���
//---------------------------------------------------------------------------
//#include "GLGamesProtocol.h"

//---------------------------------------------------------------------------
//	��ͨѶ�޹صĹ�����Ϣ���������ݽṹ����
//---------------------------------------------------------------------------
//#include "GLOtherProtocol.h"

//add by lvch 2002 09 22
//             �����ڲ�������                 ���仪
#define LVCH_chSTR2(x)	   #x
#define LVCH_chSTR(x)	LVCH_chSTR2(x)
#define LVCH_MSG(desc) message(__FILE__ "(" LVCH_chSTR(__LINE__) "):" #desc)
//end add by lvch 2002 09 22

// wym 2003-8-8
// wMobileType ��ÿ���ֻ������ڵ�Ψһ��ʶ ����WORD
// (wMobileType & 0x0080)==0x0080 ��brew�ֻ��ı�ʶ����Ҫ��������ͨ��������ӳ����
#define MB_BREW		0x0080		// 0x0080 ��λ��brew�ֻ��ı�ʶ

typedef struct tagAvatarUserInfo
{
	char szUserName[GL_BUFLEN_USERNAME];  
	char szNickName[GL_BUFLEN_NICKNAME];  
	char szFaction[32];                   
	char szBusiness[32];                  
	int	 nMoney;                           
	int	 nCoin;                       
	BYTE bySex; 
	tagAvatarUserInfo()
	{
		memset(this, 0, sizeof(*this));
	}
}GL_AVATAR_USER_INFO, *PGL_AVATAR_USER_INFO;

//add by chairmin ����Ҫ����ϴ˶��� 2008.11.21
//��дLangRsc��Mapfile
#define	MAPLANGRSCNAME					_T("GL_WORLD_LANGRSC")
//�ṹ�������dwLength���ȵ�buffer
typedef struct tagMAPLANGRSCINFO
{		
	DWORD dwLength;						//LangRsc�ļ�����
}MAPLANGRSCINFO,*PMAPLANGRSCINFO;


#define	GL_MAX_PRIVILEGE_COUNT			64				//�û�ӵ�е����Ȩ�ޱ�־����

#endif	// __GLPROTOCOL_H__
