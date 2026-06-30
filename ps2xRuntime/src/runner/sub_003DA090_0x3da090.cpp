#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DA090
// Address: 0x3da090 - 0x3da340
void sub_003DA090_0x3da090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA090_0x3da090");
#endif

    switch (ctx->pc) {
        case 0x3da090u: goto label_3da090;
        case 0x3da094u: goto label_3da094;
        case 0x3da098u: goto label_3da098;
        case 0x3da09cu: goto label_3da09c;
        case 0x3da0a0u: goto label_3da0a0;
        case 0x3da0a4u: goto label_3da0a4;
        case 0x3da0a8u: goto label_3da0a8;
        case 0x3da0acu: goto label_3da0ac;
        case 0x3da0b0u: goto label_3da0b0;
        case 0x3da0b4u: goto label_3da0b4;
        case 0x3da0b8u: goto label_3da0b8;
        case 0x3da0bcu: goto label_3da0bc;
        case 0x3da0c0u: goto label_3da0c0;
        case 0x3da0c4u: goto label_3da0c4;
        case 0x3da0c8u: goto label_3da0c8;
        case 0x3da0ccu: goto label_3da0cc;
        case 0x3da0d0u: goto label_3da0d0;
        case 0x3da0d4u: goto label_3da0d4;
        case 0x3da0d8u: goto label_3da0d8;
        case 0x3da0dcu: goto label_3da0dc;
        case 0x3da0e0u: goto label_3da0e0;
        case 0x3da0e4u: goto label_3da0e4;
        case 0x3da0e8u: goto label_3da0e8;
        case 0x3da0ecu: goto label_3da0ec;
        case 0x3da0f0u: goto label_3da0f0;
        case 0x3da0f4u: goto label_3da0f4;
        case 0x3da0f8u: goto label_3da0f8;
        case 0x3da0fcu: goto label_3da0fc;
        case 0x3da100u: goto label_3da100;
        case 0x3da104u: goto label_3da104;
        case 0x3da108u: goto label_3da108;
        case 0x3da10cu: goto label_3da10c;
        case 0x3da110u: goto label_3da110;
        case 0x3da114u: goto label_3da114;
        case 0x3da118u: goto label_3da118;
        case 0x3da11cu: goto label_3da11c;
        case 0x3da120u: goto label_3da120;
        case 0x3da124u: goto label_3da124;
        case 0x3da128u: goto label_3da128;
        case 0x3da12cu: goto label_3da12c;
        case 0x3da130u: goto label_3da130;
        case 0x3da134u: goto label_3da134;
        case 0x3da138u: goto label_3da138;
        case 0x3da13cu: goto label_3da13c;
        case 0x3da140u: goto label_3da140;
        case 0x3da144u: goto label_3da144;
        case 0x3da148u: goto label_3da148;
        case 0x3da14cu: goto label_3da14c;
        case 0x3da150u: goto label_3da150;
        case 0x3da154u: goto label_3da154;
        case 0x3da158u: goto label_3da158;
        case 0x3da15cu: goto label_3da15c;
        case 0x3da160u: goto label_3da160;
        case 0x3da164u: goto label_3da164;
        case 0x3da168u: goto label_3da168;
        case 0x3da16cu: goto label_3da16c;
        case 0x3da170u: goto label_3da170;
        case 0x3da174u: goto label_3da174;
        case 0x3da178u: goto label_3da178;
        case 0x3da17cu: goto label_3da17c;
        case 0x3da180u: goto label_3da180;
        case 0x3da184u: goto label_3da184;
        case 0x3da188u: goto label_3da188;
        case 0x3da18cu: goto label_3da18c;
        case 0x3da190u: goto label_3da190;
        case 0x3da194u: goto label_3da194;
        case 0x3da198u: goto label_3da198;
        case 0x3da19cu: goto label_3da19c;
        case 0x3da1a0u: goto label_3da1a0;
        case 0x3da1a4u: goto label_3da1a4;
        case 0x3da1a8u: goto label_3da1a8;
        case 0x3da1acu: goto label_3da1ac;
        case 0x3da1b0u: goto label_3da1b0;
        case 0x3da1b4u: goto label_3da1b4;
        case 0x3da1b8u: goto label_3da1b8;
        case 0x3da1bcu: goto label_3da1bc;
        case 0x3da1c0u: goto label_3da1c0;
        case 0x3da1c4u: goto label_3da1c4;
        case 0x3da1c8u: goto label_3da1c8;
        case 0x3da1ccu: goto label_3da1cc;
        case 0x3da1d0u: goto label_3da1d0;
        case 0x3da1d4u: goto label_3da1d4;
        case 0x3da1d8u: goto label_3da1d8;
        case 0x3da1dcu: goto label_3da1dc;
        case 0x3da1e0u: goto label_3da1e0;
        case 0x3da1e4u: goto label_3da1e4;
        case 0x3da1e8u: goto label_3da1e8;
        case 0x3da1ecu: goto label_3da1ec;
        case 0x3da1f0u: goto label_3da1f0;
        case 0x3da1f4u: goto label_3da1f4;
        case 0x3da1f8u: goto label_3da1f8;
        case 0x3da1fcu: goto label_3da1fc;
        case 0x3da200u: goto label_3da200;
        case 0x3da204u: goto label_3da204;
        case 0x3da208u: goto label_3da208;
        case 0x3da20cu: goto label_3da20c;
        case 0x3da210u: goto label_3da210;
        case 0x3da214u: goto label_3da214;
        case 0x3da218u: goto label_3da218;
        case 0x3da21cu: goto label_3da21c;
        case 0x3da220u: goto label_3da220;
        case 0x3da224u: goto label_3da224;
        case 0x3da228u: goto label_3da228;
        case 0x3da22cu: goto label_3da22c;
        case 0x3da230u: goto label_3da230;
        case 0x3da234u: goto label_3da234;
        case 0x3da238u: goto label_3da238;
        case 0x3da23cu: goto label_3da23c;
        case 0x3da240u: goto label_3da240;
        case 0x3da244u: goto label_3da244;
        case 0x3da248u: goto label_3da248;
        case 0x3da24cu: goto label_3da24c;
        case 0x3da250u: goto label_3da250;
        case 0x3da254u: goto label_3da254;
        case 0x3da258u: goto label_3da258;
        case 0x3da25cu: goto label_3da25c;
        case 0x3da260u: goto label_3da260;
        case 0x3da264u: goto label_3da264;
        case 0x3da268u: goto label_3da268;
        case 0x3da26cu: goto label_3da26c;
        case 0x3da270u: goto label_3da270;
        case 0x3da274u: goto label_3da274;
        case 0x3da278u: goto label_3da278;
        case 0x3da27cu: goto label_3da27c;
        case 0x3da280u: goto label_3da280;
        case 0x3da284u: goto label_3da284;
        case 0x3da288u: goto label_3da288;
        case 0x3da28cu: goto label_3da28c;
        case 0x3da290u: goto label_3da290;
        case 0x3da294u: goto label_3da294;
        case 0x3da298u: goto label_3da298;
        case 0x3da29cu: goto label_3da29c;
        case 0x3da2a0u: goto label_3da2a0;
        case 0x3da2a4u: goto label_3da2a4;
        case 0x3da2a8u: goto label_3da2a8;
        case 0x3da2acu: goto label_3da2ac;
        case 0x3da2b0u: goto label_3da2b0;
        case 0x3da2b4u: goto label_3da2b4;
        case 0x3da2b8u: goto label_3da2b8;
        case 0x3da2bcu: goto label_3da2bc;
        case 0x3da2c0u: goto label_3da2c0;
        case 0x3da2c4u: goto label_3da2c4;
        case 0x3da2c8u: goto label_3da2c8;
        case 0x3da2ccu: goto label_3da2cc;
        case 0x3da2d0u: goto label_3da2d0;
        case 0x3da2d4u: goto label_3da2d4;
        case 0x3da2d8u: goto label_3da2d8;
        case 0x3da2dcu: goto label_3da2dc;
        case 0x3da2e0u: goto label_3da2e0;
        case 0x3da2e4u: goto label_3da2e4;
        case 0x3da2e8u: goto label_3da2e8;
        case 0x3da2ecu: goto label_3da2ec;
        case 0x3da2f0u: goto label_3da2f0;
        case 0x3da2f4u: goto label_3da2f4;
        case 0x3da2f8u: goto label_3da2f8;
        case 0x3da2fcu: goto label_3da2fc;
        case 0x3da300u: goto label_3da300;
        case 0x3da304u: goto label_3da304;
        case 0x3da308u: goto label_3da308;
        case 0x3da30cu: goto label_3da30c;
        case 0x3da310u: goto label_3da310;
        case 0x3da314u: goto label_3da314;
        case 0x3da318u: goto label_3da318;
        case 0x3da31cu: goto label_3da31c;
        case 0x3da320u: goto label_3da320;
        case 0x3da324u: goto label_3da324;
        case 0x3da328u: goto label_3da328;
        case 0x3da32cu: goto label_3da32c;
        case 0x3da330u: goto label_3da330;
        case 0x3da334u: goto label_3da334;
        case 0x3da338u: goto label_3da338;
        case 0x3da33cu: goto label_3da33c;
        default: break;
    }

    ctx->pc = 0x3da090u;

label_3da090:
    // 0x3da090: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x3da090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3da094:
    // 0x3da094: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3da098:
    if (ctx->pc == 0x3DA098u) {
        ctx->pc = 0x3DA09Cu;
        goto label_3da09c;
    }
    ctx->pc = 0x3DA094u;
    {
        const bool branch_taken_0x3da094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da094) {
            ctx->pc = 0x3DA0D8u;
            goto label_3da0d8;
        }
    }
    ctx->pc = 0x3DA09Cu;
label_3da09c:
    // 0x3da09c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x3da09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3da0a0:
    // 0x3da0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3da0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da0a4:
    // 0x3da0a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3da0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3da0a8:
    // 0x3da0a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3da0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3da0ac:
    // 0x3da0ac: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x3da0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_3da0b0:
    // 0x3da0b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3da0b4:
    if (ctx->pc == 0x3DA0B4u) {
        ctx->pc = 0x3DA0B4u;
            // 0x3da0b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x3DA0B8u;
        goto label_3da0b8;
    }
    ctx->pc = 0x3DA0B0u;
    {
        const bool branch_taken_0x3da0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da0b0) {
            ctx->pc = 0x3DA0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA0B0u;
            // 0x3da0b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA0C8u;
            goto label_3da0c8;
        }
    }
    ctx->pc = 0x3DA0B8u;
label_3da0b8:
    // 0x3da0b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3da0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3da0bc:
    // 0x3da0bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3da0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3da0c0:
    // 0x3da0c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3da0c4:
    if (ctx->pc == 0x3DA0C4u) {
        ctx->pc = 0x3DA0C4u;
            // 0x3da0c4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3DA0C8u;
        goto label_3da0c8;
    }
    ctx->pc = 0x3DA0C0u;
    {
        const bool branch_taken_0x3da0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA0C0u;
            // 0x3da0c4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0c0) {
            ctx->pc = 0x3DA0DCu;
            goto label_3da0dc;
        }
    }
    ctx->pc = 0x3DA0C8u;
label_3da0c8:
    // 0x3da0c8: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x3da0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3da0cc:
    // 0x3da0cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3da0d0:
    if (ctx->pc == 0x3DA0D0u) {
        ctx->pc = 0x3DA0D0u;
            // 0x3da0d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3DA0D4u;
        goto label_3da0d4;
    }
    ctx->pc = 0x3DA0CCu;
    {
        const bool branch_taken_0x3da0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA0CCu;
            // 0x3da0d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0cc) {
            ctx->pc = 0x3DA0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3da0a8;
        }
    }
    ctx->pc = 0x3DA0D4u;
label_3da0d4:
    // 0x3da0d4: 0x0  nop
    ctx->pc = 0x3da0d4u;
    // NOP
label_3da0d8:
    // 0x3da0d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3da0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da0dc:
    // 0x3da0dc: 0x3e00008  jr          $ra
label_3da0e0:
    if (ctx->pc == 0x3DA0E0u) {
        ctx->pc = 0x3DA0E4u;
        goto label_3da0e4;
    }
    ctx->pc = 0x3DA0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA0E4u;
label_3da0e4:
    // 0x3da0e4: 0x0  nop
    ctx->pc = 0x3da0e4u;
    // NOP
label_3da0e8:
    // 0x3da0e8: 0x0  nop
    ctx->pc = 0x3da0e8u;
    // NOP
label_3da0ec:
    // 0x3da0ec: 0x0  nop
    ctx->pc = 0x3da0ecu;
    // NOP
label_3da0f0:
    // 0x3da0f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3da0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3da0f4:
    // 0x3da0f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3da0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3da0f8:
    // 0x3da0f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3da0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3da0fc:
    // 0x3da0fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3da0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3da100:
    // 0x3da100: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3da100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3da104:
    // 0x3da104: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3da108:
    // 0x3da108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3da10c:
    // 0x3da10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3da110:
    // 0x3da110: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3da110u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3da114:
    // 0x3da114: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3da118:
    if (ctx->pc == 0x3DA118u) {
        ctx->pc = 0x3DA118u;
            // 0x3da118: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DA11Cu;
        goto label_3da11c;
    }
    ctx->pc = 0x3DA114u;
    {
        const bool branch_taken_0x3da114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA114u;
            // 0x3da118: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da114) {
            ctx->pc = 0x3DA164u;
            goto label_3da164;
        }
    }
    ctx->pc = 0x3DA11Cu;
label_3da11c:
    // 0x3da11c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3da11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3da120:
    // 0x3da120: 0x50a30034  beql        $a1, $v1, . + 4 + (0x34 << 2)
label_3da124:
    if (ctx->pc == 0x3DA124u) {
        ctx->pc = 0x3DA124u;
            // 0x3da124: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3DA128u;
        goto label_3da128;
    }
    ctx->pc = 0x3DA120u;
    {
        const bool branch_taken_0x3da120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da120) {
            ctx->pc = 0x3DA124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA120u;
            // 0x3da124: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA1F4u;
            goto label_3da1f4;
        }
    }
    ctx->pc = 0x3DA128u;
label_3da128:
    // 0x3da128: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3da128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3da12c:
    // 0x3da12c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3da130:
    if (ctx->pc == 0x3DA130u) {
        ctx->pc = 0x3DA134u;
        goto label_3da134;
    }
    ctx->pc = 0x3DA12Cu;
    {
        const bool branch_taken_0x3da12c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da12c) {
            ctx->pc = 0x3DA13Cu;
            goto label_3da13c;
        }
    }
    ctx->pc = 0x3DA134u;
label_3da134:
    // 0x3da134: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3da138:
    if (ctx->pc == 0x3DA138u) {
        ctx->pc = 0x3DA13Cu;
        goto label_3da13c;
    }
    ctx->pc = 0x3DA134u;
    {
        const bool branch_taken_0x3da134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da134) {
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA13Cu;
label_3da13c:
    // 0x3da13c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3da13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3da140:
    // 0x3da140: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3da140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3da144:
    // 0x3da144: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3da144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3da148:
    // 0x3da148: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3da148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3da14c:
    // 0x3da14c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3da14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3da150:
    // 0x3da150: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3da150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3da154:
    // 0x3da154: 0x320f809  jalr        $t9
label_3da158:
    if (ctx->pc == 0x3DA158u) {
        ctx->pc = 0x3DA158u;
            // 0x3da158: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3DA15Cu;
        goto label_3da15c;
    }
    ctx->pc = 0x3DA154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DA15Cu);
        ctx->pc = 0x3DA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA154u;
            // 0x3da158: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DA15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DA15Cu; }
            if (ctx->pc != 0x3DA15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DA15Cu;
label_3da15c:
    // 0x3da15c: 0x10000024  b           . + 4 + (0x24 << 2)
label_3da160:
    if (ctx->pc == 0x3DA160u) {
        ctx->pc = 0x3DA164u;
        goto label_3da164;
    }
    ctx->pc = 0x3DA15Cu;
    {
        const bool branch_taken_0x3da15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da15c) {
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA164u;
label_3da164:
    // 0x3da164: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x3da164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_3da168:
    // 0x3da168: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_3da16c:
    if (ctx->pc == 0x3DA16Cu) {
        ctx->pc = 0x3DA170u;
        goto label_3da170;
    }
    ctx->pc = 0x3DA168u;
    {
        const bool branch_taken_0x3da168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da168) {
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA170u;
label_3da170:
    // 0x3da170: 0x928200a8  lbu         $v0, 0xA8($s4)
    ctx->pc = 0x3da170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 168)));
label_3da174:
    // 0x3da174: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3da178:
    if (ctx->pc == 0x3DA178u) {
        ctx->pc = 0x3DA178u;
            // 0x3da178: 0x26930084  addiu       $s3, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->pc = 0x3DA17Cu;
        goto label_3da17c;
    }
    ctx->pc = 0x3DA174u;
    {
        const bool branch_taken_0x3da174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA174u;
            // 0x3da178: 0x26930084  addiu       $s3, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da174) {
            ctx->pc = 0x3DA194u;
            goto label_3da194;
        }
    }
    ctx->pc = 0x3DA17Cu;
label_3da17c:
    // 0x3da17c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3da17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3da180:
    // 0x3da180: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3da180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3da184:
    // 0x3da184: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3da184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3da188:
    // 0x3da188: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3da188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3da18c:
    // 0x3da18c: 0x320f809  jalr        $t9
label_3da190:
    if (ctx->pc == 0x3DA190u) {
        ctx->pc = 0x3DA194u;
        goto label_3da194;
    }
    ctx->pc = 0x3DA18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DA194u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DA194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DA194u; }
            if (ctx->pc != 0x3DA194u) { return; }
        }
        }
    }
    ctx->pc = 0x3DA194u;
label_3da194:
    // 0x3da194: 0xc04e738  jal         func_139CE0
label_3da198:
    if (ctx->pc == 0x3DA198u) {
        ctx->pc = 0x3DA198u;
            // 0x3da198: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3DA19Cu;
        goto label_3da19c;
    }
    ctx->pc = 0x3DA194u;
    SET_GPR_U32(ctx, 31, 0x3DA19Cu);
    ctx->pc = 0x3DA198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA194u;
            // 0x3da198: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA19Cu; }
        if (ctx->pc != 0x3DA19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA19Cu; }
        if (ctx->pc != 0x3DA19Cu) { return; }
    }
    ctx->pc = 0x3DA19Cu;
label_3da19c:
    // 0x3da19c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3da19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da1a0:
    // 0x3da1a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3da1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da1a4:
    // 0x3da1a4: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3da1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3da1a8:
    // 0x3da1a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3da1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3da1ac:
    // 0x3da1ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3da1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3da1b0:
    // 0x3da1b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3da1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3da1b4:
    // 0x3da1b4: 0xc0f6a70  jal         func_3DA9C0
label_3da1b8:
    if (ctx->pc == 0x3DA1B8u) {
        ctx->pc = 0x3DA1B8u;
            // 0x3da1b8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DA1BCu;
        goto label_3da1bc;
    }
    ctx->pc = 0x3DA1B4u;
    SET_GPR_U32(ctx, 31, 0x3DA1BCu);
    ctx->pc = 0x3DA1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA1B4u;
            // 0x3da1b8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DA9C0u;
    if (runtime->hasFunction(0x3DA9C0u)) {
        auto targetFn = runtime->lookupFunction(0x3DA9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA1BCu; }
        if (ctx->pc != 0x3DA1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DA9C0_0x3da9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA1BCu; }
        if (ctx->pc != 0x3DA1BCu) { return; }
    }
    ctx->pc = 0x3DA1BCu;
label_3da1bc:
    // 0x3da1bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3da1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3da1c0:
    // 0x3da1c0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3da1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3da1c4:
    // 0x3da1c4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3da1c8:
    if (ctx->pc == 0x3DA1C8u) {
        ctx->pc = 0x3DA1C8u;
            // 0x3da1c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3DA1CCu;
        goto label_3da1cc;
    }
    ctx->pc = 0x3DA1C4u;
    {
        const bool branch_taken_0x3da1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA1C4u;
            // 0x3da1c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1c4) {
            ctx->pc = 0x3DA1A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3da1a4;
        }
    }
    ctx->pc = 0x3DA1CCu;
label_3da1cc:
    // 0x3da1cc: 0x928300a8  lbu         $v1, 0xA8($s4)
    ctx->pc = 0x3da1ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 168)));
label_3da1d0:
    // 0x3da1d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3da1d4:
    if (ctx->pc == 0x3DA1D4u) {
        ctx->pc = 0x3DA1D8u;
        goto label_3da1d8;
    }
    ctx->pc = 0x3DA1D0u;
    {
        const bool branch_taken_0x3da1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da1d0) {
            ctx->pc = 0x3DA1F0u;
            goto label_3da1f0;
        }
    }
    ctx->pc = 0x3DA1D8u;
label_3da1d8:
    // 0x3da1d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3da1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3da1dc:
    // 0x3da1dc: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3da1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3da1e0:
    // 0x3da1e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3da1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3da1e4:
    // 0x3da1e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3da1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3da1e8:
    // 0x3da1e8: 0x320f809  jalr        $t9
label_3da1ec:
    if (ctx->pc == 0x3DA1ECu) {
        ctx->pc = 0x3DA1F0u;
        goto label_3da1f0;
    }
    ctx->pc = 0x3DA1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DA1F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DA1F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DA1F0u; }
            if (ctx->pc != 0x3DA1F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3DA1F0u;
label_3da1f0:
    // 0x3da1f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3da1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3da1f4:
    // 0x3da1f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3da1f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da1f8:
    // 0x3da1f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3da1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3da1fc:
    // 0x3da1fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da200:
    // 0x3da200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3da204:
    // 0x3da204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3da208:
    // 0x3da208: 0x3e00008  jr          $ra
label_3da20c:
    if (ctx->pc == 0x3DA20Cu) {
        ctx->pc = 0x3DA20Cu;
            // 0x3da20c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3DA210u;
        goto label_3da210;
    }
    ctx->pc = 0x3DA208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA208u;
            // 0x3da20c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA210u;
label_3da210:
    // 0x3da210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3da210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3da214:
    // 0x3da214: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3da214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3da218:
    // 0x3da218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3da218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3da21c:
    // 0x3da21c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3da21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3da220:
    // 0x3da220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3da224:
    // 0x3da224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3da228:
    // 0x3da228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3da22c:
    // 0x3da22c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3da22cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3da230:
    // 0x3da230: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_3da234:
    if (ctx->pc == 0x3DA234u) {
        ctx->pc = 0x3DA234u;
            // 0x3da234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DA238u;
        goto label_3da238;
    }
    ctx->pc = 0x3DA230u;
    {
        const bool branch_taken_0x3da230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA230u;
            // 0x3da234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da230) {
            ctx->pc = 0x3DA26Cu;
            goto label_3da26c;
        }
    }
    ctx->pc = 0x3DA238u;
label_3da238:
    // 0x3da238: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3da238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3da23c:
    // 0x3da23c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3da240:
    if (ctx->pc == 0x3DA240u) {
        ctx->pc = 0x3DA240u;
            // 0x3da240: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3DA244u;
        goto label_3da244;
    }
    ctx->pc = 0x3DA23Cu;
    {
        const bool branch_taken_0x3da23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da23c) {
            ctx->pc = 0x3DA240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA23Cu;
            // 0x3da240: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DA258u;
            goto label_3da258;
        }
    }
    ctx->pc = 0x3DA244u;
label_3da244:
    // 0x3da244: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3da244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3da248:
    // 0x3da248: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
label_3da24c:
    if (ctx->pc == 0x3DA24Cu) {
        ctx->pc = 0x3DA250u;
        goto label_3da250;
    }
    ctx->pc = 0x3DA248u;
    {
        const bool branch_taken_0x3da248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3da248) {
            ctx->pc = 0x3DA2A0u;
            goto label_3da2a0;
        }
    }
    ctx->pc = 0x3DA250u;
label_3da250:
    // 0x3da250: 0x10000013  b           . + 4 + (0x13 << 2)
label_3da254:
    if (ctx->pc == 0x3DA254u) {
        ctx->pc = 0x3DA258u;
        goto label_3da258;
    }
    ctx->pc = 0x3DA250u;
    {
        const bool branch_taken_0x3da250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da250) {
            ctx->pc = 0x3DA2A0u;
            goto label_3da2a0;
        }
    }
    ctx->pc = 0x3DA258u;
label_3da258:
    // 0x3da258: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3da258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3da25c:
    // 0x3da25c: 0x320f809  jalr        $t9
label_3da260:
    if (ctx->pc == 0x3DA260u) {
        ctx->pc = 0x3DA264u;
        goto label_3da264;
    }
    ctx->pc = 0x3DA25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DA264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DA264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DA264u; }
            if (ctx->pc != 0x3DA264u) { return; }
        }
        }
    }
    ctx->pc = 0x3DA264u;
label_3da264:
    // 0x3da264: 0x1000000e  b           . + 4 + (0xE << 2)
label_3da268:
    if (ctx->pc == 0x3DA268u) {
        ctx->pc = 0x3DA26Cu;
        goto label_3da26c;
    }
    ctx->pc = 0x3DA264u;
    {
        const bool branch_taken_0x3da264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da264) {
            ctx->pc = 0x3DA2A0u;
            goto label_3da2a0;
        }
    }
    ctx->pc = 0x3DA26Cu;
label_3da26c:
    // 0x3da26c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3da26cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3da270:
    // 0x3da270: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3da274:
    if (ctx->pc == 0x3DA274u) {
        ctx->pc = 0x3DA278u;
        goto label_3da278;
    }
    ctx->pc = 0x3DA270u;
    {
        const bool branch_taken_0x3da270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da270) {
            ctx->pc = 0x3DA2A0u;
            goto label_3da2a0;
        }
    }
    ctx->pc = 0x3DA278u;
label_3da278:
    // 0x3da278: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3da278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da27c:
    // 0x3da27c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3da27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da280:
    // 0x3da280: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3da280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3da284:
    // 0x3da284: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3da284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3da288:
    // 0x3da288: 0xc0f6afc  jal         func_3DABF0
label_3da28c:
    if (ctx->pc == 0x3DA28Cu) {
        ctx->pc = 0x3DA28Cu;
            // 0x3da28c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3DA290u;
        goto label_3da290;
    }
    ctx->pc = 0x3DA288u;
    SET_GPR_U32(ctx, 31, 0x3DA290u);
    ctx->pc = 0x3DA28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA288u;
            // 0x3da28c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DABF0u;
    if (runtime->hasFunction(0x3DABF0u)) {
        auto targetFn = runtime->lookupFunction(0x3DABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA290u; }
        if (ctx->pc != 0x3DA290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DABF0_0x3dabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA290u; }
        if (ctx->pc != 0x3DA290u) { return; }
    }
    ctx->pc = 0x3DA290u;
label_3da290:
    // 0x3da290: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3da290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3da294:
    // 0x3da294: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3da294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3da298:
    // 0x3da298: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3da29c:
    if (ctx->pc == 0x3DA29Cu) {
        ctx->pc = 0x3DA29Cu;
            // 0x3da29c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3DA2A0u;
        goto label_3da2a0;
    }
    ctx->pc = 0x3DA298u;
    {
        const bool branch_taken_0x3da298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA298u;
            // 0x3da29c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da298) {
            ctx->pc = 0x3DA280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3da280;
        }
    }
    ctx->pc = 0x3DA2A0u;
label_3da2a0:
    // 0x3da2a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3da2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3da2a4:
    // 0x3da2a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3da2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3da2a8:
    // 0x3da2a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da2a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da2ac:
    // 0x3da2ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3da2b0:
    // 0x3da2b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3da2b4:
    // 0x3da2b4: 0x3e00008  jr          $ra
label_3da2b8:
    if (ctx->pc == 0x3DA2B8u) {
        ctx->pc = 0x3DA2B8u;
            // 0x3da2b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3DA2BCu;
        goto label_3da2bc;
    }
    ctx->pc = 0x3DA2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA2B4u;
            // 0x3da2b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA2BCu;
label_3da2bc:
    // 0x3da2bc: 0x0  nop
    ctx->pc = 0x3da2bcu;
    // NOP
label_3da2c0:
    // 0x3da2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3da2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3da2c4:
    // 0x3da2c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3da2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3da2c8:
    // 0x3da2c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3da2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3da2cc:
    // 0x3da2cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3da2d0:
    // 0x3da2d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3da2d4:
    // 0x3da2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3da2d8:
    // 0x3da2d8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3da2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3da2dc:
    // 0x3da2dc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3da2e0:
    if (ctx->pc == 0x3DA2E0u) {
        ctx->pc = 0x3DA2E0u;
            // 0x3da2e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2E4u;
        goto label_3da2e4;
    }
    ctx->pc = 0x3DA2DCu;
    {
        const bool branch_taken_0x3da2dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA2DCu;
            // 0x3da2e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2dc) {
            ctx->pc = 0x3DA320u;
            goto label_3da320;
        }
    }
    ctx->pc = 0x3DA2E4u;
label_3da2e4:
    // 0x3da2e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3da2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da2e8:
    // 0x3da2e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3da2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3da2ec:
    // 0x3da2ec: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3da2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3da2f0:
    // 0x3da2f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3da2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3da2f4:
    // 0x3da2f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3da2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3da2f8:
    // 0x3da2f8: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x3da2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_3da2fc:
    // 0x3da2fc: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x3da2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3da300:
    // 0x3da300: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x3da300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
label_3da304:
    // 0x3da304: 0xc0d37dc  jal         func_34DF70
label_3da308:
    if (ctx->pc == 0x3DA308u) {
        ctx->pc = 0x3DA308u;
            // 0x3da308: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3DA30Cu;
        goto label_3da30c;
    }
    ctx->pc = 0x3DA304u;
    SET_GPR_U32(ctx, 31, 0x3DA30Cu);
    ctx->pc = 0x3DA308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA304u;
            // 0x3da308: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA30Cu; }
        if (ctx->pc != 0x3DA30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA30Cu; }
        if (ctx->pc != 0x3DA30Cu) { return; }
    }
    ctx->pc = 0x3DA30Cu;
label_3da30c:
    // 0x3da30c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3da30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3da310:
    // 0x3da310: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3da310u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3da314:
    // 0x3da314: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_3da318:
    if (ctx->pc == 0x3DA318u) {
        ctx->pc = 0x3DA318u;
            // 0x3da318: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3DA31Cu;
        goto label_3da31c;
    }
    ctx->pc = 0x3DA314u;
    {
        const bool branch_taken_0x3da314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA314u;
            // 0x3da318: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da314) {
            ctx->pc = 0x3DA2ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3da2ec;
        }
    }
    ctx->pc = 0x3DA31Cu;
label_3da31c:
    // 0x3da31c: 0x0  nop
    ctx->pc = 0x3da31cu;
    // NOP
label_3da320:
    // 0x3da320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3da320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3da324:
    // 0x3da324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3da324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3da328:
    // 0x3da328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3da328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da32c:
    // 0x3da32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3da330:
    // 0x3da330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3da334:
    // 0x3da334: 0x3e00008  jr          $ra
label_3da338:
    if (ctx->pc == 0x3DA338u) {
        ctx->pc = 0x3DA338u;
            // 0x3da338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3DA33Cu;
        goto label_3da33c;
    }
    ctx->pc = 0x3DA334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA334u;
            // 0x3da338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA33Cu;
label_3da33c:
    // 0x3da33c: 0x0  nop
    ctx->pc = 0x3da33cu;
    // NOP
}
