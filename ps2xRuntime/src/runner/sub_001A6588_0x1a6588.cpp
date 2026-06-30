#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6588
// Address: 0x1a6588 - 0x1a65c0
void sub_001A6588_0x1a6588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6588_0x1a6588");
#endif

    ctx->pc = 0x1a6588u;

    // 0x1a6588: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a658c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6590: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1a6590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a6594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6598: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a6598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a659c: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A659Cu;
    {
        const bool branch_taken_0x1a659c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A65A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A659Cu;
            // 0x1a65a0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a659c) {
            ctx->pc = 0x1A65B4u;
            goto label_1a65b4;
        }
    }
    ctx->pc = 0x1A65A4u;
    // 0x1a65a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a65a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a65ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a65acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a65b0: 0x8c62138c  lw          $v0, 0x138C($v1)
    ctx->pc = 0x1a65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5004)));
label_1a65b4:
    // 0x1a65b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A65B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A65BCu;
    // 0x1a65bc: 0x0  nop
    ctx->pc = 0x1a65bcu;
    // NOP
}
