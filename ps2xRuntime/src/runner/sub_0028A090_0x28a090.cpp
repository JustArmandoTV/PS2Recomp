#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A090
// Address: 0x28a090 - 0x28a110
void sub_0028A090_0x28a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A090_0x28a090");
#endif

    ctx->pc = 0x28a090u;

    // 0x28a090: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28a094: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x28a094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28a098: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x28a098u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a09c: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x28a09cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a0a0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x28a0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28a0a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A0A4u;
    {
        const bool branch_taken_0x28a0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a0a4) {
            ctx->pc = 0x28A0B8u;
            goto label_28a0b8;
        }
    }
    ctx->pc = 0x28A0ACu;
    // 0x28a0ac: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x28a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x28a0b0: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x28a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x28a0b4: 0x0  nop
    ctx->pc = 0x28a0b4u;
    // NOP
label_28a0b8:
    // 0x28a0b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x28a0bc: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x28a0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28a0c0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x28a0c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a0c4: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x28a0c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a0c8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x28a0c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28a0cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A0CCu;
    {
        const bool branch_taken_0x28a0cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a0cc) {
            ctx->pc = 0x28A0E0u;
            goto label_28a0e0;
        }
    }
    ctx->pc = 0x28A0D4u;
    // 0x28a0d4: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x28a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x28a0d8: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x28a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x28a0dc: 0x0  nop
    ctx->pc = 0x28a0dcu;
    // NOP
label_28a0e0:
    // 0x28a0e0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x28a0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28a0e4: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x28a0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28a0e8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x28a0e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a0ec: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x28a0ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28a0f0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x28a0f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28a0f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A0F4u;
    {
        const bool branch_taken_0x28a0f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a0f4) {
            ctx->pc = 0x28A108u;
            goto label_28a108;
        }
    }
    ctx->pc = 0x28A0FCu;
    // 0x28a0fc: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x28a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x28a100: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x28a100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x28a104: 0x0  nop
    ctx->pc = 0x28a104u;
    // NOP
label_28a108:
    // 0x28a108: 0x3e00008  jr          $ra
    ctx->pc = 0x28A108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A110u;
}
