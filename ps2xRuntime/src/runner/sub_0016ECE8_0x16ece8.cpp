#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016ECE8
// Address: 0x16ece8 - 0x16ed30
void sub_0016ECE8_0x16ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ECE8_0x16ece8");
#endif

    ctx->pc = 0x16ece8u;

    // 0x16ece8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ecec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ecf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ecf4: 0x24422380  addiu       $v0, $v0, 0x2380
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x16ecf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ecfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16ed00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16ed04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ed08: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16ED08u;
    {
        const bool branch_taken_0x16ed08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ED0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED08u;
            // 0x16ed0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed08) {
            ctx->pc = 0x16ED28u;
            goto label_16ed28;
        }
    }
    ctx->pc = 0x16ED10u;
    // 0x16ed10: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16ed14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ed14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed18: 0x24842398  addiu       $a0, $a0, 0x2398
    ctx->pc = 0x16ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9112));
    // 0x16ed1c: 0x24060ac0  addiu       $a2, $zero, 0xAC0
    ctx->pc = 0x16ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    // 0x16ed20: 0x804a576  j           func_1295D8
    ctx->pc = 0x16ED20u;
    ctx->pc = 0x16ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED20u;
            // 0x16ed24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16ED28u;
label_16ed28:
    // 0x16ed28: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED28u;
            // 0x16ed2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16ED30u;
}
