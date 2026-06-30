#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2860
// Address: 0x2a2860 - 0x2a2900
void sub_002A2860_0x2a2860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2860_0x2a2860");
#endif

    switch (ctx->pc) {
        case 0x2a2860u: goto label_2a2860;
        case 0x2a2864u: goto label_2a2864;
        case 0x2a2868u: goto label_2a2868;
        case 0x2a286cu: goto label_2a286c;
        case 0x2a2870u: goto label_2a2870;
        case 0x2a2874u: goto label_2a2874;
        case 0x2a2878u: goto label_2a2878;
        case 0x2a287cu: goto label_2a287c;
        case 0x2a2880u: goto label_2a2880;
        case 0x2a2884u: goto label_2a2884;
        case 0x2a2888u: goto label_2a2888;
        case 0x2a288cu: goto label_2a288c;
        case 0x2a2890u: goto label_2a2890;
        case 0x2a2894u: goto label_2a2894;
        case 0x2a2898u: goto label_2a2898;
        case 0x2a289cu: goto label_2a289c;
        case 0x2a28a0u: goto label_2a28a0;
        case 0x2a28a4u: goto label_2a28a4;
        case 0x2a28a8u: goto label_2a28a8;
        case 0x2a28acu: goto label_2a28ac;
        case 0x2a28b0u: goto label_2a28b0;
        case 0x2a28b4u: goto label_2a28b4;
        case 0x2a28b8u: goto label_2a28b8;
        case 0x2a28bcu: goto label_2a28bc;
        case 0x2a28c0u: goto label_2a28c0;
        case 0x2a28c4u: goto label_2a28c4;
        case 0x2a28c8u: goto label_2a28c8;
        case 0x2a28ccu: goto label_2a28cc;
        case 0x2a28d0u: goto label_2a28d0;
        case 0x2a28d4u: goto label_2a28d4;
        case 0x2a28d8u: goto label_2a28d8;
        case 0x2a28dcu: goto label_2a28dc;
        case 0x2a28e0u: goto label_2a28e0;
        case 0x2a28e4u: goto label_2a28e4;
        case 0x2a28e8u: goto label_2a28e8;
        case 0x2a28ecu: goto label_2a28ec;
        case 0x2a28f0u: goto label_2a28f0;
        case 0x2a28f4u: goto label_2a28f4;
        case 0x2a28f8u: goto label_2a28f8;
        case 0x2a28fcu: goto label_2a28fc;
        default: break;
    }

    ctx->pc = 0x2a2860u;

label_2a2860:
    // 0x2a2860: 0x38a30002  xori        $v1, $a1, 0x2
    ctx->pc = 0x2a2860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_2a2864:
    // 0x2a2864: 0x38a20009  xori        $v0, $a1, 0x9
    ctx->pc = 0x2a2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_2a2868:
    // 0x2a2868: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a2868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a286c:
    // 0x2a286c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a286cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a2870:
    // 0x2a2870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a2870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a2874:
    // 0x2a2874: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2a2874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2a2878:
    // 0x2a2878: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x2a2878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_2a287c:
    // 0x2a287c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2a287cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a2880:
    // 0x2a2880: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2a2880u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a2884:
    // 0x2a2884: 0xa0830025  sb          $v1, 0x25($a0)
    ctx->pc = 0x2a2884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 3));
label_2a2888:
    // 0x2a2888: 0x38a20006  xori        $v0, $a1, 0x6
    ctx->pc = 0x2a2888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
label_2a288c:
    // 0x2a288c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2a288cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a2890:
    // 0x2a2890: 0x38a20004  xori        $v0, $a1, 0x4
    ctx->pc = 0x2a2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
label_2a2894:
    // 0x2a2894: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2a2894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2a2898:
    // 0x2a2898: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a289c:
    // 0x2a289c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2a289cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a28a0:
    // 0x2a28a0: 0x38a20008  xori        $v0, $a1, 0x8
    ctx->pc = 0x2a28a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
label_2a28a4:
    // 0x2a28a4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2a28a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a28a8:
    // 0x2a28a8: 0x38a2000d  xori        $v0, $a1, 0xD
    ctx->pc = 0x2a28a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)13);
label_2a28ac:
    // 0x2a28ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2a28acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2a28b0:
    // 0x2a28b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a28b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a28b4:
    // 0x2a28b4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2a28b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a28b8:
    // 0x2a28b8: 0x38a2000b  xori        $v0, $a1, 0xB
    ctx->pc = 0x2a28b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)11);
label_2a28bc:
    // 0x2a28bc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2a28bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a28c0:
    // 0x2a28c0: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x2a28c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
label_2a28c4:
    // 0x2a28c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2a28c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2a28c8:
    // 0x2a28c8: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x2a28c8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a28cc:
    // 0x2a28cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a28ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a28d0:
    // 0x2a28d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a28d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a28d4:
    // 0x2a28d4: 0xa0860024  sb          $a2, 0x24($a0)
    ctx->pc = 0x2a28d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 6));
label_2a28d8:
    // 0x2a28d8: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x2a28d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
label_2a28dc:
    // 0x2a28dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a28dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a28e0:
    // 0x2a28e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a28e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a28e4:
    // 0x2a28e4: 0xa0820026  sb          $v0, 0x26($a0)
    ctx->pc = 0x2a28e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 2));
label_2a28e8:
    // 0x2a28e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a28e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a28ec:
    // 0x2a28ec: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2a28ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2a28f0:
    // 0x2a28f0: 0x3200008  jr          $t9
label_2a28f4:
    if (ctx->pc == 0x2A28F4u) {
        ctx->pc = 0x2A28F8u;
        goto label_2a28f8;
    }
    ctx->pc = 0x2A28F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A28F8u;
label_2a28f8:
    // 0x2a28f8: 0x0  nop
    ctx->pc = 0x2a28f8u;
    // NOP
label_2a28fc:
    // 0x2a28fc: 0x0  nop
    ctx->pc = 0x2a28fcu;
    // NOP
}
