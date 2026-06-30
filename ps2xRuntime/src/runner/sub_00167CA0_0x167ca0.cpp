#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167CA0
// Address: 0x167ca0 - 0x167cd8
void sub_00167CA0_0x167ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167CA0_0x167ca0");
#endif

    switch (ctx->pc) {
        case 0x167cbcu: goto label_167cbc;
        default: break;
    }

    ctx->pc = 0x167ca0u;

    // 0x167ca0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x167ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x167ca4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cac: 0x24847268  addiu       $a0, $a0, 0x7268
    ctx->pc = 0x167cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29288));
    // 0x167cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167cb4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x167CB4u;
    SET_GPR_U32(ctx, 31, 0x167CBCu);
    ctx->pc = 0x167CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167CB4u;
            // 0x167cb8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CBCu; }
        if (ctx->pc != 0x167CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167CBCu; }
        if (ctx->pc != 0x167CBCu) { return; }
    }
    ctx->pc = 0x167CBCu;
label_167cbc:
    // 0x167cbc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x167cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167cc4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x167cc8: 0xac607260  sw          $zero, 0x7260($v1)
    ctx->pc = 0x167cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29280), GPR_U32(ctx, 0));
    // 0x167ccc: 0xac407264  sw          $zero, 0x7264($v0)
    ctx->pc = 0x167cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29284), GPR_U32(ctx, 0));
    // 0x167cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x167CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167CD0u;
            // 0x167cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167CD8u;
}
