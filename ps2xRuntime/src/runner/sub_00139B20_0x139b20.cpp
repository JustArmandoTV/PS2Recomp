#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139B20
// Address: 0x139b20 - 0x139b50
void sub_00139B20_0x139b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139B20_0x139b20");
#endif

    switch (ctx->pc) {
        case 0x139b34u: goto label_139b34;
        case 0x139b40u: goto label_139b40;
        default: break;
    }

    ctx->pc = 0x139b20u;

    // 0x139b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139b24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139b2c: 0xc0568d4  jal         func_15A350
    ctx->pc = 0x139B2Cu;
    SET_GPR_U32(ctx, 31, 0x139B34u);
    ctx->pc = 0x139B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139B2Cu;
            // 0x139b30: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A350u;
    if (runtime->hasFunction(0x15A350u)) {
        auto targetFn = runtime->lookupFunction(0x15A350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B34u; }
        if (ctx->pc != 0x139B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A350_0x15a350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B34u; }
        if (ctx->pc != 0x139B34u) { return; }
    }
    ctx->pc = 0x139B34u;
label_139b34:
    // 0x139b34: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139b38: 0xc0568d4  jal         func_15A350
    ctx->pc = 0x139B38u;
    SET_GPR_U32(ctx, 31, 0x139B40u);
    ctx->pc = 0x139B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139B38u;
            // 0x139b3c: 0x24844f10  addiu       $a0, $a0, 0x4F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A350u;
    if (runtime->hasFunction(0x15A350u)) {
        auto targetFn = runtime->lookupFunction(0x15A350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B40u; }
        if (ctx->pc != 0x139B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A350_0x15a350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B40u; }
        if (ctx->pc != 0x139B40u) { return; }
    }
    ctx->pc = 0x139B40u;
label_139b40:
    // 0x139b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139b44: 0x3e00008  jr          $ra
    ctx->pc = 0x139B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B44u;
            // 0x139b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139B4Cu;
    // 0x139b4c: 0x0  nop
    ctx->pc = 0x139b4cu;
    // NOP
}
