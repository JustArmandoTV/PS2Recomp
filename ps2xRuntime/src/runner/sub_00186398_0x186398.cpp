#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186398
// Address: 0x186398 - 0x1863e8
void sub_00186398_0x186398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186398_0x186398");
#endif

    ctx->pc = 0x186398u;

    // 0x186398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18639c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1863a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1863a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1863a4: 0x24634fb0  addiu       $v1, $v1, 0x4FB0
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20400));
    // 0x1863a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1863a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1863ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1863acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1863b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1863B0u;
    {
        const bool branch_taken_0x1863b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1863B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863B0u;
            // 0x1863b4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863b0) {
            ctx->pc = 0x1863D8u;
            goto label_1863d8;
        }
    }
    ctx->pc = 0x1863B8u;
    // 0x1863b8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1863b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1863bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1863bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1863c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1863c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863c4: 0x24844fb8  addiu       $a0, $a0, 0x4FB8
    ctx->pc = 0x1863c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20408));
    // 0x1863c8: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1863cc: 0x804a576  j           func_1295D8
    ctx->pc = 0x1863CCu;
    ctx->pc = 0x1863D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1863CCu;
            // 0x1863d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1863D4u;
    // 0x1863d4: 0x0  nop
    ctx->pc = 0x1863d4u;
    // NOP
label_1863d8:
    // 0x1863d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1863d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1863dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1863DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863DCu;
            // 0x1863e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1863E4u;
    // 0x1863e4: 0x0  nop
    ctx->pc = 0x1863e4u;
    // NOP
}
