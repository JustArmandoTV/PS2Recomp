#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4F08
// Address: 0x1b4f08 - 0x1b4f48
void sub_001B4F08_0x1b4f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4F08_0x1b4f08");
#endif

    ctx->pc = 0x1b4f08u;

    // 0x1b4f08: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b4f0c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b4f10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4f14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b4f18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4f1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b4f20: 0x248413b8  addiu       $a0, $a0, 0x13B8
    ctx->pc = 0x1b4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5048));
    // 0x1b4f24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4f28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4F28u;
    {
        const bool branch_taken_0x1b4f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F28u;
            // 0x1b4f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f28) {
            ctx->pc = 0x1B4F40u;
            goto label_1b4f40;
        }
    }
    ctx->pc = 0x1B4F30u;
    // 0x1b4f30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b4f34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4f38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4f3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b4f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4f40:
    // 0x1b4f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4F48u;
}
