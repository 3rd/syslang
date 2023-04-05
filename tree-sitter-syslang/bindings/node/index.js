try {
  module.exports = require("../../build/Release/tree_sitter_syslang_binding");
} catch (error) {
  if (error.code !== "MODULE_NOT_FOUND") {
    throw error;
  }
  try {
    module.exports = require("../../build/Debug/tree_sitter_syslang_binding");
  } catch (error_) {
    if (error_.code !== "MODULE_NOT_FOUND") {
      throw error_;
    }
    throw error;
  }
}

try {
  module.exports.nodeTypeInfo = require("../../src/node-types.json");
} catch {}
