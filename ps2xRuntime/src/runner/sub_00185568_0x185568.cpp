#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185568
// Address: 0x185568 - 0x1855b8
void sub_00185568_0x185568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185568_0x185568");
#endif

    ctx->pc = 0x185568u;

    // 0x185568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18556c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18556cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x185570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185574: 0x24630778  addiu       $v1, $v1, 0x778
    ctx->pc = 0x185574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1912));
    // 0x185578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18557c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x185580: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x185580u;
    {
        const bool branch_taken_0x185580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185580u;
            // 0x185584: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185580) {
            ctx->pc = 0x1855A8u;
            goto label_1855a8;
        }
    }
    ctx->pc = 0x185588u;
    // 0x185588: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x185588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x18558c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18558cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185594: 0x24840780  addiu       $a0, $a0, 0x780
    ctx->pc = 0x185594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1920));
    // 0x185598: 0x24064800  addiu       $a2, $zero, 0x4800
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
    // 0x18559c: 0x804a576  j           func_1295D8
    ctx->pc = 0x18559Cu;
    ctx->pc = 0x1855A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18559Cu;
            // 0x1855a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1855A4u;
    // 0x1855a4: 0x0  nop
    ctx->pc = 0x1855a4u;
    // NOP
label_1855a8:
    // 0x1855a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1855a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1855ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1855ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1855B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1855ACu;
            // 0x1855b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1855B4u;
    // 0x1855b4: 0x0  nop
    ctx->pc = 0x1855b4u;
    // NOP
}
