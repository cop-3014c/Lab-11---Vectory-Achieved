/** Test cases for functions defined in contacts.h
@file contacts_test.cpp
@author YOUR NAME HERE
*/
// TODO: Fill in your name above.

#include "contacts.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <vector>
#include "lib/test_utils.h"
using namespace std;

TEST(ContactsTest, LookupTests) {
  // Vector of contact info, to be used by all test cases in this section
  // TODO: Fill this.
  vector<vector<string>> contacts = {};

  // 3 test cases for lookup_index()
  // TODO: Fill these.
  string name1 = "";
  int expected_index1 = -1;
  bool expected_lookup_info1 = false;
  string expected_address1 = "";
  string expected_phone1 = "";
  string expected_email1 = "";

  string name2 = "";
  int expected_index2 = -1;
  bool expected_lookup_info2 = false;
  string expected_address2 = "";
  string expected_phone2 = "";
  string expected_email2 = "";

  string name3 = "";
  int expected_index3 = -1;
  bool expected_lookup_info3 = false;
  string expected_address3 = "";
  string expected_phone3 = "";
  string expected_email3 = "";

  // Don't change this code
  EXPECT_EQ(lookup_index(contacts, name1), expected_index1);
  EXPECT_EQ(lookup_index(contacts, name2), expected_index2);
  EXPECT_EQ(lookup_index(contacts, name3), expected_index3);

  string actual_address, actual_phone, actual_email;

  GEN_LOOKUP_INFO_TEST(1);
  GEN_LOOKUP_INFO_TEST(2);
  GEN_LOOKUP_INFO_TEST(3);
}

TEST(ContactsTest, UpdateTests) {
  // TODO: Fill this out with a starting state for the contacts list.
  vector<vector<string>> contacts = {};

  // Call the update_address(), update_phone(), and update_email() functions.
  // TODO: Make 5 or more function calls (at least once each).
  update_address(contacts, "A name goes here", "An address goes here");
  update_phone(contacts, "A name goes here", "A phone number goes here");
  update_email(contacts, "A name goes here", "An email goes here");
  // TODO: Don't forget to add at least 2 more function calls.

  // TODO: Fill this out with the expected final state of the contacts list.
  vector<vector<string>> expected_contacts = {};

  // Do not change this code
  EXPECT_THAT(contacts, ::testing::ContainerEq(expected_contacts));
}

TEST(ContactsTest, AddContactTest) {
  // TODO: Fill this out with a starting state for the contacts list.
  vector<vector<string>> contacts = {};

  // TODO: Fill these.
  // add_contact() will be called with this the 1st time:
  string name1 = "";
  string address1 = "";
  string phone1 = "";
  string email1 = "";
  bool expected_result1 = false;

  // add_contact() will be called with this the 2nd time:
  string name2 = "";
  string address2 = "";
  string phone2 = "";
  string email2 = "";
  bool expected_result2 = false;

  // add_contact() will be called with this the 3rd time:
  string name3 = "";
  string address3 = "";
  string phone3 = "";
  string email3 = "";
  bool expected_result3 = false;

  // If you want to add additional calls to add_contact(), declare variables
  // with similar names here. Follow the same pattern.

  // TODO: Fill this out with the expected final state of the contacts list.
  vector<vector<string>> expected_contacts = {};

  // Do not edit anything after this unless you added more tests.
  // If you added more tests, add additional GENERATE_ADD_CONTACT_TEST(n);
  // lines below the existing ones. There should be the same number of
  // these lines as function calls and they should all be numbered in order.
  GENERATE_ADD_CONTACT_TEST(1);
  GENERATE_ADD_CONTACT_TEST(2);
  GENERATE_ADD_CONTACT_TEST(3);

  // Do not change this code
  EXPECT_THAT(contacts, ::testing::ContainerEq(expected_contacts));
}

TEST(ContactsTest, DeleteContactTest) {
  // TODO: Fill this out with a starting state for the contacts list.
  vector<vector<string>> contacts = {};

  // TODO: Make at least 3 calls to delete_contact().
  delete_contact(contacts, "A name goes here");
  delete_contact(contacts, "A name goes here");
  delete_contact(contacts, "A name goes here");

  // TODO: Fill this out with the expected final state of the contacts list.
  vector<vector<string>> expected_contacts = {};

  // Do not change this code
  EXPECT_THAT(contacts, ::testing::ContainerEq(expected_contacts));
}

TEST(ContactsTest, AddContactSortedTest) {
  // TODO: Fill this out with a starting state for the contacts list.
  vector<vector<string>> contacts = {};

  // TODO: Fill these.
  // add_contact_sorted() will be called with this the 1st time:
  string name1 = "";
  string address1 = "";
  string phone1 = "";
  string email1 = "";
  bool expected_result1 = false;

  // add_contact() will be called with this the 2nd time:
  string name2 = "";
  string address2 = "";
  string phone2 = "";
  string email2 = "";
  bool expected_result2 = false;

  // add_contact() will be called with this the 3rd time:
  string name3 = "";
  string address3 = "";
  string phone3 = "";
  string email3 = "";
  bool expected_result3 = false;

  // If you want to add additional calls to add_contact(), declare variables
  // with similar names here. Follow the same pattern.

  // TODO: Fill this out with the expected final state of the contacts list.
  vector<vector<string>> expected_contacts = {};

  // Do not edit anything after this unless you added more tests.
  // If you added more tests, add additional GENERATE_ADD_CONTACT_TEST(n);
  // lines below the existing ones. There should be the same number of
  // these lines as function calls and they should all be numbered in order.
  GENERATE_ADD_CONTACT_SORTED_TEST(1);
  GENERATE_ADD_CONTACT_SORTED_TEST(2);
  GENERATE_ADD_CONTACT_SORTED_TEST(3);

  // Do not change this code
  EXPECT_THAT(contacts, ::testing::ContainerEq(expected_contacts));
}
