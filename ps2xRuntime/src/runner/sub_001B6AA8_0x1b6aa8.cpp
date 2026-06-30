#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6AA8
// Address: 0x1b6aa8 - 0x1b6af0
void sub_001B6AA8_0x1b6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6AA8_0x1b6aa8");
#endif

    switch (ctx->pc) {
        case 0x1b6ac0u: goto label_1b6ac0;
        default: break;
    }

    ctx->pc = 0x1b6aa8u;

    // 0x1b6aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6ab0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ab4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6ab8: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B6AB8u;
    SET_GPR_U32(ctx, 31, 0x1B6AC0u);
    ctx->pc = 0x1B6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AB8u;
            // 0x1b6abc: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AC0u; }
        if (ctx->pc != 0x1B6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AC0u; }
        if (ctx->pc != 0x1B6AC0u) { return; }
    }
    ctx->pc = 0x1B6AC0u;
label_1b6ac0:
    // 0x1b6ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6ac4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6AC4u;
    {
        const bool branch_taken_0x1b6ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b6ac4) {
            ctx->pc = 0x1B6AD8u;
            goto label_1b6ad8;
        }
    }
    ctx->pc = 0x1B6ACCu;
    // 0x1b6acc: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x1b6accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1b6ad0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6AD0u;
    {
        const bool branch_taken_0x1b6ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AD0u;
            // 0x1b6ad4: 0xae0202d0  sw          $v0, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ad0) {
            ctx->pc = 0x1B6AE0u;
            goto label_1b6ae0;
        }
    }
    ctx->pc = 0x1B6AD8u;
label_1b6ad8:
    // 0x1b6ad8: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1b6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1b6adc: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x1b6adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_1b6ae0:
    // 0x1b6ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AE8u;
            // 0x1b6aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6AF0u;
}
