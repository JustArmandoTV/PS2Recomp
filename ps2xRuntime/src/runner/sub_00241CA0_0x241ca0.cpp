#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241CA0
// Address: 0x241ca0 - 0x241cd0
void sub_00241CA0_0x241ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241CA0_0x241ca0");
#endif

    ctx->pc = 0x241ca0u;

    // 0x241ca0: 0x94a30022  lhu         $v1, 0x22($a1)
    ctx->pc = 0x241ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x241ca4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x241ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x241ca8: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x241CA8u;
    {
        const bool branch_taken_0x241ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x241ca8) {
            ctx->pc = 0x241CC4u;
            goto label_241cc4;
        }
    }
    ctx->pc = 0x241CB0u;
    // 0x241cb0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241cb4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x241cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x241cb8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x241cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x241cbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x241cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x241cc0: 0xa4a70022  sh          $a3, 0x22($a1)
    ctx->pc = 0x241cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 7));
label_241cc4:
    // 0x241cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x241CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241CCCu;
    // 0x241ccc: 0x0  nop
    ctx->pc = 0x241cccu;
    // NOP
}
