// Generate examples of monero function outputs

#include <string>
#include "string_tools.h"

#include "cryptonote_basic/blobdatatype.h"
#include "cryptonote_basic/cryptonote_basic.h"
#include "cryptonote_basic/cryptonote_format_utils.h"

int main() {
  std::string prev_block_id_hex = 
    "a343502b990f7a9be7c9d10829eda293e13a05d765edca9ec64da68e6c6365e8";

  crypto::hash prev_block_id;
  epee::string_tools::hex_to_pod(prev_block_id_hex, prev_block_id);

  cryptonote::block_header bh {
    9, 9, 
    1545016413,
    prev_block_id,
    4253024397
  };

  std::ostringstream s;
  binary_archive<true> ar(s);
  ::serialization::serialize(ar, bh);

  int i;
  for (i = 0; i < s.str().size(); i++) {
    printf("%02x", s.str().data()[i] );
  }

  printf("\n");

  return 0;
}
