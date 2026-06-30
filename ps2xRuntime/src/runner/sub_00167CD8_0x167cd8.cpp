#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167CD8
// Address: 0x167cd8 - 0x167d38
void sub_00167CD8_0x167cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167CD8_0x167cd8");
#endif

    switch (ctx->pc) {
        case 0x167cf4u: goto label_167cf4;
        case 0x167d10u: goto label_167d10;
        default: break;
    }

    ctx->pc = 0x167cd8u;

    // 0x167cd8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x167cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x167cdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ce4: 0x24847268  addiu       $a0, $a0, 0x7268
    ctx->pc = 0x167ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29288));
    // 0x167ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167cec: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x167CECu;
    SET_GPR_U32(ctx, 31, 0x167CF4u);
    ctx->pc = 0x167CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167CECu;
            // 0x167cf0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CF4u; }
        if (ctx->pc != 0x167CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CF4u; }
        if (ctx->pc != 0x167CF4u) { return; }
    }
    ctx->pc = 0x167CF4u;
label_167cf4:
    // 0x167cf4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x167cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x167cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167cfc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x167d00: 0xac607260  sw          $zero, 0x7260($v1)
    ctx->pc = 0x167d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29280), GPR_U32(ctx, 0));
    // 0x167d04: 0xac407264  sw          $zero, 0x7264($v0)
    ctx->pc = 0x167d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29284), GPR_U32(ctx, 0));
    // 0x167d08: 0x3e00008  jr          $ra
    ctx->pc = 0x167D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167D08u;
            // 0x167d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167D10u;
label_167d10:
    // 0x167d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167d14: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x167d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167d1c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x167d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x167d20: 0xac447260  sw          $a0, 0x7260($v0)
    ctx->pc = 0x167d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29280), GPR_U32(ctx, 4));
    // 0x167d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167d28: 0x0  nop
    ctx->pc = 0x167d28u;
    // NOP
    // 0x167d2c: 0x806219c  j           func_188670
    ctx->pc = 0x167D2Cu;
    ctx->pc = 0x167D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D2Cu;
            // 0x167d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188670u;
    {
        auto targetFn = runtime->lookupFunction(0x188670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x167D34u;
    // 0x167d34: 0x0  nop
    ctx->pc = 0x167d34u;
    // NOP
}
