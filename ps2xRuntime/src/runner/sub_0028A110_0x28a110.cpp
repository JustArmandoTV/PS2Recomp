#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A110
// Address: 0x28a110 - 0x28a5c0
void sub_0028A110_0x28a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A110_0x28a110");
#endif

    ctx->pc = 0x28a110u;

    // 0x28a110: 0xc71826  xor         $v1, $a2, $a3
    ctx->pc = 0x28a110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x28a114: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a118: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A118u;
    {
        const bool branch_taken_0x28a118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a118) {
            ctx->pc = 0x28A130u;
            goto label_28a130;
        }
    }
    ctx->pc = 0x28A120u;
    // 0x28a120: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x28a120u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a124: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x28a124u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a128: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a12c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28a12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28a130:
    // 0x28a130: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28A130u;
    {
        const bool branch_taken_0x28a130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A130u;
            // 0x28a134: 0x35e3c  dsll32      $t3, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a130) {
            ctx->pc = 0x28A164u;
            goto label_28a164;
        }
    }
    ctx->pc = 0x28A138u;
    // 0x28a138: 0x94ca0002  lhu         $t2, 0x2($a2)
    ctx->pc = 0x28a138u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28a13c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x28a13cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28a140: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x28a140u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x28a144: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a148: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x28a148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x28a14c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a150: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28a150u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a154: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28a154u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a158: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a15c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a15cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a160: 0x35e3c  dsll32      $t3, $v1, 24
    ctx->pc = 0x28a160u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 24));
label_28a164:
    // 0x28a164: 0x1091826  xor         $v1, $t0, $t1
    ctx->pc = 0x28a164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 9));
    // 0x28a168: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a16c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A16Cu;
    {
        const bool branch_taken_0x28a16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A16Cu;
            // 0x28a170: 0xb5e3f  dsra32      $t3, $t3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a16c) {
            ctx->pc = 0x28A184u;
            goto label_28a184;
        }
    }
    ctx->pc = 0x28A174u;
    // 0x28a174: 0x950a0000  lhu         $t2, 0x0($t0)
    ctx->pc = 0x28a174u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28a178: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x28a178u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a17c: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a180: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28a180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28a184:
    // 0x28a184: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28A184u;
    {
        const bool branch_taken_0x28a184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A184u;
            // 0x28a188: 0x3563c  dsll32      $t2, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a184) {
            ctx->pc = 0x28A1B8u;
            goto label_28a1b8;
        }
    }
    ctx->pc = 0x28A18Cu;
    // 0x28a18c: 0x950a0002  lhu         $t2, 0x2($t0)
    ctx->pc = 0x28a18cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28a190: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x28a190u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x28a194: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x28a194u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x28a198: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a19c: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x28a19cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x28a1a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a1a4: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28a1a4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a1a8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28a1a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a1ac: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a1b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a1b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a1b4: 0x3563c  dsll32      $t2, $v1, 24
    ctx->pc = 0x28a1b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 24));
label_28a1b8:
    // 0x28a1b8: 0xb1e3c  dsll32      $v1, $t3, 24
    ctx->pc = 0x28a1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 24));
    // 0x28a1bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a1bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a1c0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a1c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A1C4u;
    {
        const bool branch_taken_0x28a1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1C4u;
            // 0x28a1c8: 0xa563f  dsra32      $t2, $t2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1c4) {
            ctx->pc = 0x28A1D8u;
            goto label_28a1d8;
        }
    }
    ctx->pc = 0x28A1CCu;
    // 0x28a1cc: 0xa1e3c  dsll32      $v1, $t2, 24
    ctx->pc = 0x28a1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 24));
    // 0x28a1d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a1d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a1d4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a1d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28a1d8:
    // 0x28a1d8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a1dc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a1dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a1e0: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x28A1E0u;
    {
        const bool branch_taken_0x28a1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1e0) {
            ctx->pc = 0x28A518u;
            goto label_28a518;
        }
    }
    ctx->pc = 0x28A1E8u;
    // 0x28a1e8: 0xc91826  xor         $v1, $a2, $t1
    ctx->pc = 0x28a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x28a1ec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a1ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a1f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A1F0u;
    {
        const bool branch_taken_0x28a1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A1F0u;
            // 0x28a1f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1f0) {
            ctx->pc = 0x28A208u;
            goto label_28a208;
        }
    }
    ctx->pc = 0x28A1F8u;
    // 0x28a1f8: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x28a1f8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a1fc: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x28a1fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a200: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a204: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28a204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28a208:
    // 0x28a208: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A208u;
    {
        const bool branch_taken_0x28a208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a208) {
            ctx->pc = 0x28A218u;
            goto label_28a218;
        }
    }
    ctx->pc = 0x28A210u;
    // 0x28a210: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x28a210u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x28a214: 0x0  nop
    ctx->pc = 0x28a214u;
    // NOP
label_28a218:
    // 0x28a218: 0x1160000b  beqz        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x28A218u;
    {
        const bool branch_taken_0x28a218 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A218u;
            // 0x28a21c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a218) {
            ctx->pc = 0x28A248u;
            goto label_28a248;
        }
    }
    ctx->pc = 0x28A220u;
    // 0x28a220: 0x94ca0002  lhu         $t2, 0x2($a2)
    ctx->pc = 0x28a220u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28a224: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x28a224u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x28a228: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x28a228u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x28a22c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a230: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x28a234: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a238: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28a238u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a23c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28a23cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a240: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a244: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a244u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28a248:
    // 0x28a248: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a24c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a24cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a250: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28A250u;
    {
        const bool branch_taken_0x28a250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a250) {
            ctx->pc = 0x28A2A4u;
            goto label_28a2a4;
        }
    }
    ctx->pc = 0x28A258u;
    // 0x28a258: 0x11090013  beq         $t0, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A258u;
    {
        const bool branch_taken_0x28a258 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x28A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A258u;
            // 0x28a25c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a258) {
            ctx->pc = 0x28A2A8u;
            goto label_28a2a8;
        }
    }
    ctx->pc = 0x28A260u;
    // 0x28a260: 0x950a0000  lhu         $t2, 0x0($t0)
    ctx->pc = 0x28a260u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28a264: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x28a264u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a268: 0x11430003  beq         $t2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A268u;
    {
        const bool branch_taken_0x28a268 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x28a268) {
            ctx->pc = 0x28A278u;
            goto label_28a278;
        }
    }
    ctx->pc = 0x28A270u;
    // 0x28a270: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28A270u;
    {
        const bool branch_taken_0x28a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a270) {
            ctx->pc = 0x28A2A4u;
            goto label_28a2a4;
        }
    }
    ctx->pc = 0x28A278u;
label_28a278:
    // 0x28a278: 0x950a0002  lhu         $t2, 0x2($t0)
    ctx->pc = 0x28a278u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28a27c: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x28a27cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x28a280: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x28a280u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x28a284: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a288: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x28a288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x28a28c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a290: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28a290u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a294: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28a294u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a298: 0x1431826  xor         $v1, $t2, $v1
    ctx->pc = 0x28a298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x28a29c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A29Cu;
    {
        const bool branch_taken_0x28a29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A29Cu;
            // 0x28a2a0: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a29c) {
            ctx->pc = 0x28A2A8u;
            goto label_28a2a8;
        }
    }
    ctx->pc = 0x28A2A4u;
label_28a2a4:
    // 0x28a2a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a2a8:
    // 0x28a2a8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a2ac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a2acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a2b0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A2B0u;
    {
        const bool branch_taken_0x28a2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a2b0) {
            ctx->pc = 0x28A300u;
            goto label_28a300;
        }
    }
    ctx->pc = 0x28A2B8u;
    // 0x28a2b8: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x28a2b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28a2bc: 0x952a0000  lhu         $t2, 0x0($t1)
    ctx->pc = 0x28a2bcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a2c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a2c4: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x28a2c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a2c8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x28a2c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x28a2cc: 0x1543000d  bne         $t2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28A2CCu;
    {
        const bool branch_taken_0x28a2cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x28A2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A2CCu;
            // 0x28a2d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2cc) {
            ctx->pc = 0x28A304u;
            goto label_28a304;
        }
    }
    ctx->pc = 0x28A2D4u;
    // 0x28a2d4: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x28a2d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x28a2d8: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x28a2d8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a2dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a2e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a2e4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28a2e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a2e8: 0x11430003  beq         $t2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A2E8u;
    {
        const bool branch_taken_0x28a2e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A2E8u;
            // 0x28a2ec: 0x1691826  xor         $v1, $t3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2e8) {
            ctx->pc = 0x28A2F8u;
            goto label_28a2f8;
        }
    }
    ctx->pc = 0x28A2F0u;
    // 0x28a2f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A2F0u;
    {
        const bool branch_taken_0x28a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a2f0) {
            ctx->pc = 0x28A300u;
            goto label_28a300;
        }
    }
    ctx->pc = 0x28A2F8u;
label_28a2f8:
    // 0x28a2f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A2F8u;
    {
        const bool branch_taken_0x28a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A2F8u;
            // 0x28a2fc: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2f8) {
            ctx->pc = 0x28A304u;
            goto label_28a304;
        }
    }
    ctx->pc = 0x28A300u;
label_28a300:
    // 0x28a300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a304:
    // 0x28a304: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a308: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a308u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a30c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A30Cu;
    {
        const bool branch_taken_0x28a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a30c) {
            ctx->pc = 0x28A35Cu;
            goto label_28a35c;
        }
    }
    ctx->pc = 0x28A314u;
    // 0x28a314: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x28a314u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28a318: 0x952a0000  lhu         $t2, 0x0($t1)
    ctx->pc = 0x28a318u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a31c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a320: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x28a320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a324: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x28a324u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x28a328: 0x1543000d  bne         $t2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28A328u;
    {
        const bool branch_taken_0x28a328 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x28A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A328u;
            // 0x28a32c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a328) {
            ctx->pc = 0x28A360u;
            goto label_28a360;
        }
    }
    ctx->pc = 0x28A330u;
    // 0x28a330: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x28a330u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x28a334: 0x950a0000  lhu         $t2, 0x0($t0)
    ctx->pc = 0x28a334u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28a338: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28a338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28a33c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a340: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28a340u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a344: 0x11430003  beq         $t2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A344u;
    {
        const bool branch_taken_0x28a344 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x28A348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A344u;
            // 0x28a348: 0x1691826  xor         $v1, $t3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a344) {
            ctx->pc = 0x28A354u;
            goto label_28a354;
        }
    }
    ctx->pc = 0x28A34Cu;
    // 0x28a34c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A34Cu;
    {
        const bool branch_taken_0x28a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a34c) {
            ctx->pc = 0x28A35Cu;
            goto label_28a35c;
        }
    }
    ctx->pc = 0x28A354u;
label_28a354:
    // 0x28a354: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A354u;
    {
        const bool branch_taken_0x28a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A354u;
            // 0x28a358: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a354) {
            ctx->pc = 0x28A360u;
            goto label_28a360;
        }
    }
    ctx->pc = 0x28A35Cu;
label_28a35c:
    // 0x28a35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a360:
    // 0x28a360: 0xc74826  xor         $t1, $a2, $a3
    ctx->pc = 0x28a360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x28a364: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a368: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x28a368u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x28a36c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a36cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a370: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A370u;
    {
        const bool branch_taken_0x28a370 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A370u;
            // 0x28a374: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a370) {
            ctx->pc = 0x28A388u;
            goto label_28a388;
        }
    }
    ctx->pc = 0x28A378u;
    // 0x28a378: 0x94ca0000  lhu         $t2, 0x0($a2)
    ctx->pc = 0x28a378u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a37c: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x28a37cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a380: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x28a380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x28a384: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x28a384u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28a388:
    // 0x28a388: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A388u;
    {
        const bool branch_taken_0x28a388 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a388) {
            ctx->pc = 0x28A398u;
            goto label_28a398;
        }
    }
    ctx->pc = 0x28A390u;
    // 0x28a390: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x28a390u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x28a394: 0x0  nop
    ctx->pc = 0x28a394u;
    // NOP
label_28a398:
    // 0x28a398: 0x1160000b  beqz        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x28A398u;
    {
        const bool branch_taken_0x28a398 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A398u;
            // 0x28a39c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a398) {
            ctx->pc = 0x28A3C8u;
            goto label_28a3c8;
        }
    }
    ctx->pc = 0x28A3A0u;
    // 0x28a3a0: 0x94ca0002  lhu         $t2, 0x2($a2)
    ctx->pc = 0x28a3a0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28a3a4: 0x94e90002  lhu         $t1, 0x2($a3)
    ctx->pc = 0x28a3a4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28a3a8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x28a3a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x28a3ac: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x28a3acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x28a3b0: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x28a3b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x28a3b4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x28a3b8: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28a3b8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a3bc: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x28a3bcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a3c0: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x28a3c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x28a3c4: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x28a3c4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_28a3c8:
    // 0x28a3c8: 0x94e3c  dsll32      $t1, $t1, 24
    ctx->pc = 0x28a3c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x28a3cc: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x28a3ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x28a3d0: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28A3D0u;
    {
        const bool branch_taken_0x28a3d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a3d0) {
            ctx->pc = 0x28A424u;
            goto label_28a424;
        }
    }
    ctx->pc = 0x28A3D8u;
    // 0x28a3d8: 0x11070013  beq         $t0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x28A3D8u;
    {
        const bool branch_taken_0x28a3d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x28A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A3D8u;
            // 0x28a3dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a3d8) {
            ctx->pc = 0x28A428u;
            goto label_28a428;
        }
    }
    ctx->pc = 0x28A3E0u;
    // 0x28a3e0: 0x950a0000  lhu         $t2, 0x0($t0)
    ctx->pc = 0x28a3e0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28a3e4: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x28a3e4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a3e8: 0x11490003  beq         $t2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A3E8u;
    {
        const bool branch_taken_0x28a3e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        if (branch_taken_0x28a3e8) {
            ctx->pc = 0x28A3F8u;
            goto label_28a3f8;
        }
    }
    ctx->pc = 0x28A3F0u;
    // 0x28a3f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28A3F0u;
    {
        const bool branch_taken_0x28a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a3f0) {
            ctx->pc = 0x28A424u;
            goto label_28a424;
        }
    }
    ctx->pc = 0x28A3F8u;
label_28a3f8:
    // 0x28a3f8: 0x950a0002  lhu         $t2, 0x2($t0)
    ctx->pc = 0x28a3f8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28a3fc: 0x94e90002  lhu         $t1, 0x2($a3)
    ctx->pc = 0x28a3fcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28a400: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x28a400u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x28a404: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x28a404u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x28a408: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x28a408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x28a40c: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x28a40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x28a410: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28a410u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a414: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x28a414u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a418: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x28a418u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x28a41c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A41Cu;
    {
        const bool branch_taken_0x28a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A41Cu;
            // 0x28a420: 0x9482b  sltu        $t1, $zero, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a41c) {
            ctx->pc = 0x28A428u;
            goto label_28a428;
        }
    }
    ctx->pc = 0x28A424u;
label_28a424:
    // 0x28a424: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28a424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a428:
    // 0x28a428: 0x94e3c  dsll32      $t1, $t1, 24
    ctx->pc = 0x28a428u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x28a42c: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x28a42cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x28a430: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28A430u;
    {
        const bool branch_taken_0x28a430 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a430) {
            ctx->pc = 0x28A484u;
            goto label_28a484;
        }
    }
    ctx->pc = 0x28A438u;
    // 0x28a438: 0x94c90002  lhu         $t1, 0x2($a2)
    ctx->pc = 0x28a438u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28a43c: 0x94eb0000  lhu         $t3, 0x0($a3)
    ctx->pc = 0x28a43cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a440: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x28a440u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x28a444: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x28a448: 0x95490000  lhu         $t1, 0x0($t2)
    ctx->pc = 0x28a448u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28a44c: 0x1569000d  bne         $t3, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x28A44Cu;
    {
        const bool branch_taken_0x28a44c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        if (branch_taken_0x28a44c) {
            ctx->pc = 0x28A484u;
            goto label_28a484;
        }
    }
    ctx->pc = 0x28A454u;
    // 0x28a454: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x28a454u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a458: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x28a458u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28a45c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28a460: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28a464: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x28a464u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a468: 0x11260003  beq         $t1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A468u;
    {
        const bool branch_taken_0x28a468 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x28a468) {
            ctx->pc = 0x28A478u;
            goto label_28a478;
        }
    }
    ctx->pc = 0x28A470u;
    // 0x28a470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28A470u;
    {
        const bool branch_taken_0x28a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A470u;
            // 0x28a474: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a470) {
            ctx->pc = 0x28A488u;
            goto label_28a488;
        }
    }
    ctx->pc = 0x28A478u;
label_28a478:
    // 0x28a478: 0x1473026  xor         $a2, $t2, $a3
    ctx->pc = 0x28a478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
    // 0x28a47c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A47Cu;
    {
        const bool branch_taken_0x28a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A47Cu;
            // 0x28a480: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a47c) {
            ctx->pc = 0x28A488u;
            goto label_28a488;
        }
    }
    ctx->pc = 0x28A484u;
label_28a484:
    // 0x28a484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a488:
    // 0x28a488: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x28a488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28a48c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x28a48cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x28a490: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x28A490u;
    {
        const bool branch_taken_0x28a490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a490) {
            ctx->pc = 0x28A4E4u;
            goto label_28a4e4;
        }
    }
    ctx->pc = 0x28A498u;
    // 0x28a498: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x28a498u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28a49c: 0x94ea0000  lhu         $t2, 0x0($a3)
    ctx->pc = 0x28a49cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a4a0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28a4a4: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x28a4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28a4a8: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x28a4a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a4ac: 0x1546000d  bne         $t2, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x28A4ACu;
    {
        const bool branch_taken_0x28a4ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        if (branch_taken_0x28a4ac) {
            ctx->pc = 0x28A4E4u;
            goto label_28a4e4;
        }
    }
    ctx->pc = 0x28A4B4u;
    // 0x28a4b4: 0x94e60002  lhu         $a2, 0x2($a3)
    ctx->pc = 0x28a4b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28a4b8: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x28a4b8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28a4bc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x28a4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28a4c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28a4c4: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x28a4c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a4c8: 0x11050003  beq         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A4C8u;
    {
        const bool branch_taken_0x28a4c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x28a4c8) {
            ctx->pc = 0x28A4D8u;
            goto label_28a4d8;
        }
    }
    ctx->pc = 0x28A4D0u;
    // 0x28a4d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28A4D0u;
    {
        const bool branch_taken_0x28a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4D0u;
            // 0x28a4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4d0) {
            ctx->pc = 0x28A4E8u;
            goto label_28a4e8;
        }
    }
    ctx->pc = 0x28A4D8u;
label_28a4d8:
    // 0x28a4d8: 0x1272826  xor         $a1, $t1, $a3
    ctx->pc = 0x28a4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x28a4dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A4DCu;
    {
        const bool branch_taken_0x28a4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4DCu;
            // 0x28a4e0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4dc) {
            ctx->pc = 0x28A4E8u;
            goto label_28a4e8;
        }
    }
    ctx->pc = 0x28A4E4u;
label_28a4e4:
    // 0x28a4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28a4e8:
    // 0x28a4e8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a4ec: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x28a4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x28a4f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a4f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a4f4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a4f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a4f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A4F8u;
    {
        const bool branch_taken_0x28a4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A4F8u;
            // 0x28a4fc: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4f8) {
            ctx->pc = 0x28A50Cu;
            goto label_28a50c;
        }
    }
    ctx->pc = 0x28A500u;
    // 0x28a500: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x28a500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x28a504: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a508: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28a50c:
    // 0x28a50c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28a510: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28a510u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28a514: 0x0  nop
    ctx->pc = 0x28a514u;
    // NOP
label_28a518:
    // 0x28a518: 0x3e00008  jr          $ra
    ctx->pc = 0x28A518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A518u;
            // 0x28a51c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A520u;
    // 0x28a520: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x28a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28a524: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x28a524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28a528: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x28a528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a52c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28A52Cu;
    {
        const bool branch_taken_0x28a52c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A52Cu;
            // 0x28a530: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a52c) {
            ctx->pc = 0x28A540u;
            goto label_28a540;
        }
    }
    ctx->pc = 0x28A534u;
    // 0x28a534: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28A534u;
    {
        const bool branch_taken_0x28a534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A534u;
            // 0x28a538: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a534) {
            ctx->pc = 0x28A5B0u;
            goto label_28a5b0;
        }
    }
    ctx->pc = 0x28A53Cu;
    // 0x28a53c: 0x0  nop
    ctx->pc = 0x28a53cu;
    // NOP
label_28a540:
    // 0x28a540: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x28a540u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a544: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x28A544u;
    {
        const bool branch_taken_0x28a544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a544) {
            ctx->pc = 0x28A568u;
            goto label_28a568;
        }
    }
    ctx->pc = 0x28A54Cu;
    // 0x28a54c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a550: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x28a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28a554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a558: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28A558u;
    {
        const bool branch_taken_0x28a558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A558u;
            // 0x28a55c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a558) {
            ctx->pc = 0x28A568u;
            goto label_28a568;
        }
    }
    ctx->pc = 0x28A560u;
    // 0x28a560: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28A560u;
    {
        const bool branch_taken_0x28a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A560u;
            // 0x28a564: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a560) {
            ctx->pc = 0x28A5B0u;
            goto label_28a5b0;
        }
    }
    ctx->pc = 0x28A568u;
label_28a568:
    // 0x28a568: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x28a568u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a56c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x28A56Cu;
    {
        const bool branch_taken_0x28a56c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a56c) {
            ctx->pc = 0x28A5A8u;
            goto label_28a5a8;
        }
    }
    ctx->pc = 0x28A574u;
    // 0x28a574: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a578: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x28a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a57c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28a57cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a580: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x28A580u;
    {
        const bool branch_taken_0x28a580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a580) {
            ctx->pc = 0x28A5A8u;
            goto label_28a5a8;
        }
    }
    ctx->pc = 0x28A588u;
    // 0x28a588: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a58c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x28a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a590: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28a590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a594: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28A594u;
    {
        const bool branch_taken_0x28a594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A594u;
            // 0x28a598: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a594) {
            ctx->pc = 0x28A5A8u;
            goto label_28a5a8;
        }
    }
    ctx->pc = 0x28A59Cu;
    // 0x28a59c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28A59Cu;
    {
        const bool branch_taken_0x28a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A59Cu;
            // 0x28a5a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a59c) {
            ctx->pc = 0x28A5B0u;
            goto label_28a5b0;
        }
    }
    ctx->pc = 0x28A5A4u;
    // 0x28a5a4: 0x0  nop
    ctx->pc = 0x28a5a4u;
    // NOP
label_28a5a8:
    // 0x28a5a8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x28a5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a5ac: 0x0  nop
    ctx->pc = 0x28a5acu;
    // NOP
label_28a5b0:
    // 0x28a5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A5B8u;
    // 0x28a5b8: 0x0  nop
    ctx->pc = 0x28a5b8u;
    // NOP
    // 0x28a5bc: 0x0  nop
    ctx->pc = 0x28a5bcu;
    // NOP
}
