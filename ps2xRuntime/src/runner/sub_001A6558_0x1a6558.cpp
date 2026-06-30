#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6558
// Address: 0x1a6558 - 0x1a6588
void sub_001A6558_0x1a6558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6558_0x1a6558");
#endif

    ctx->pc = 0x1a6558u;

    // 0x1a6558: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a655c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6560: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6564: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6564u;
    {
        const bool branch_taken_0x1a6564 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6564u;
            // 0x1a6568: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6564) {
            ctx->pc = 0x1A657Cu;
            goto label_1a657c;
        }
    }
    ctx->pc = 0x1A656Cu;
    // 0x1a656c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6574: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a6578: 0xac46138c  sw          $a2, 0x138C($v0)
    ctx->pc = 0x1a6578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5004), GPR_U32(ctx, 6));
label_1a657c:
    // 0x1a657c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A657Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6584u;
    // 0x1a6584: 0x0  nop
    ctx->pc = 0x1a6584u;
    // NOP
}
