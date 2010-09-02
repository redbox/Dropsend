#include <QtTest/QtTest>

#include "./../DropSendClient/remoteserveruserdao.h"
#include "./../DropSendClient/remoteserverplandao.h"
#include "./../DropSendClient/remoteserversentfiledao.h"

using namespace dropsend::data;

class DAOTests : public QObject
{
     Q_OBJECT
private slots:
    void remoteServerUserDAOWrongUserDataTest();
    void remoteServerUserDAORightUserDataTest();

    void remoteServerPlanDAOTestCase1();
    void remoteServerPlanDAOTestCase2();
    void remoteServerPlanDAOTestCase3();

    void remoteServerSentFilesCountTest();
    void remoteServerSentFilesDataTest();
};

void DAOTests::remoteServerUserDAOWrongUserDataTest()
{
    RemoteServerUserDAO* user_dao = new RemoteServerUserDAO();
    User* user = user_dao->getByLoginAndPassword("asdasd", "asdasd");
    QVERIFY(user == NULL);
}

void DAOTests::remoteServerUserDAORightUserDataTest()
{
    RemoteServerUserDAO* user_dao = new RemoteServerUserDAO();
    User* user = user_dao->getByLoginAndPassword("user", "password");
    QVERIFY(user != NULL);
}

void DAOTests::remoteServerPlanDAOTestCase1() {
    RemoteServerPlanDAO* plan_dao = new RemoteServerPlanDAO();
    Plan* plan = plan_dao->getById(1);
    QVERIFY(plan->getCost() == 150);
}

void DAOTests::remoteServerPlanDAOTestCase2() {
    RemoteServerPlanDAO* plan_dao = new RemoteServerPlanDAO();
    Plan* plan = plan_dao->getById(1231);
    QVERIFY(plan->getCost() == 150);
}

void DAOTests::remoteServerPlanDAOTestCase3() {
    RemoteServerPlanDAO* plan_dao = new RemoteServerPlanDAO();
    Plan* plan = plan_dao->getById(561);
    QVERIFY(plan->getCost() == 150);
}

void DAOTests::remoteServerSentFilesCountTest() {
    RemoteServerSentFileDAO* sent_files_dao = new RemoteServerSentFileDAO();
    QList<SentFile*> files = sent_files_dao->getByUserId(1);
    QVERIFY(files.count() == 2);
}

void DAOTests::remoteServerSentFilesDataTest() {
    RemoteServerSentFileDAO* sent_files_dao = new RemoteServerSentFileDAO();
    SentFile* file = sent_files_dao->getById(4);
    QVERIFY(file->getName() == "thinking in c++");
}

QTEST_MAIN(DAOTests)
#include "DAOTests.moc"
