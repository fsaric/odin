#ifndef VALHALLA_ODIN_SIGNS_H_
#define VALHALLA_ODIN_SIGNS_H_

#include <vector>

#include <valhalla/odin/sign.h>

namespace valhalla {
namespace odin {

// TODO - comments

class Signs {
 public:
  Signs();

  const std::vector<Sign>& exit_number_list() const;
  std::vector<Sign>* mutable_exit_number_list();

  const std::string GetExitNumberString(
      uint32_t max_count = 0, bool limit_by_consecutive_count = false) const;

  const std::vector<Sign>& exit_branch_list() const;
  std::vector<Sign>* mutable_exit_branch_list();

  const std::string GetExitBranchString(
      uint32_t max_count = 0, bool limit_by_consecutive_count = false) const;

  const std::vector<Sign>& exit_toward_list() const;
  std::vector<Sign>* mutable_exit_toward_list();

  const std::string GetExitTowardString(
      uint32_t max_count = 0, bool limit_by_consecutive_count = false) const;

  const std::vector<Sign>& exit_name_list() const;
  std::vector<Sign>* mutable_exit_name_list();

  const std::string GetExitNameString(
      uint32_t max_count = 0, bool limit_by_consecutive_count = false) const;

  bool HasExit() const;
  bool HasExitNumber() const;
  bool HasExitBranch() const;
  bool HasExitToward() const;
  bool HasExitName() const;

  std::string ToString() const;

  std::string ToParameterString() const;

  bool operator ==(const Signs& rhs) const;

 protected:
  const std::string ListToString(const std::vector<Sign>& signs,
                                 uint32_t max_count = 0,
                                 bool limit_by_consecutive_count = false) const;

  const std::string ListToParameterString(const std::vector<Sign>& signs) const;

  std::vector<Sign> exit_number_list_;
  std::vector<Sign> exit_branch_list_;
  std::vector<Sign> exit_toward_list_;
  std::vector<Sign> exit_name_list_;

};

}
}

#endif  // VALHALLA_ODIN_SIGNS_H_
