#pragma once

#include <string>
#include <string_view>

#include <rapidxml/rapidxml.hpp>

namespace astmlib {

using xml_doc = rapidxml::xml_document<>;

struct astml_doc final {
  xml_doc xml;

  auto write(const std::string &path) -> void;
};

class runner final {
public:
  auto generate_to(const astml_doc &doc, const std::string_view &path) -> void;
  auto parse_from(const std::string_view &path) -> astml_doc;
};

} // namespace astmlib
