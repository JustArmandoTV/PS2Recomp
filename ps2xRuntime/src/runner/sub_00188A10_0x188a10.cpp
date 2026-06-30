#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188A10
// Address: 0x188a10 - 0x188a68
void sub_00188A10_0x188a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188A10_0x188a10");
#endif

    switch (ctx->pc) {
        case 0x188a40u: goto label_188a40;
        default: break;
    }

    ctx->pc = 0x188a10u;

    // 0x188a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188a14: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x188a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188a1c: 0x2442690c  addiu       $v0, $v0, 0x690C
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26892));
    // 0x188a20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188a24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x188a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x188a2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188a30: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x188A30u;
    {
        const bool branch_taken_0x188a30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x188A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A30u;
            // 0x188a34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a30) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x188A38u;
    // 0x188a38: 0xc06224a  jal         func_188928
    ctx->pc = 0x188A38u;
    SET_GPR_U32(ctx, 31, 0x188A40u);
    ctx->pc = 0x188928u;
    if (runtime->hasFunction(0x188928u)) {
        auto targetFn = runtime->lookupFunction(0x188928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A40u; }
        if (ctx->pc != 0x188A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188928_0x188928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A40u; }
        if (ctx->pc != 0x188A40u) { return; }
    }
    ctx->pc = 0x188A40u;
label_188a40:
    // 0x188a40: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x188a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x188a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188a48: 0x2484fe30  addiu       $a0, $a0, -0x1D0
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966832));
    // 0x188a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a50: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x188a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188a54: 0x804a576  j           func_1295D8
    ctx->pc = 0x188A54u;
    ctx->pc = 0x188A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A54u;
            // 0x188a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188A5Cu;
    // 0x188a5c: 0x0  nop
    ctx->pc = 0x188a5cu;
    // NOP
label_188a60:
    // 0x188a60: 0x3e00008  jr          $ra
    ctx->pc = 0x188A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A60u;
            // 0x188a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188A68u;
}
