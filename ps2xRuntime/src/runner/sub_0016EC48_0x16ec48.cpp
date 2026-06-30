#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EC48
// Address: 0x16ec48 - 0x16ec90
void sub_0016EC48_0x16ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EC48_0x16ec48");
#endif

    switch (ctx->pc) {
        case 0x16ec60u: goto label_16ec60;
        case 0x16ec78u: goto label_16ec78;
        default: break;
    }

    ctx->pc = 0x16ec48u;

    // 0x16ec48: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16ec4c: 0x24632378  addiu       $v1, $v1, 0x2378
    ctx->pc = 0x16ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9080));
    // 0x16ec50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC58u;
            // 0x16ec5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EC60u;
label_16ec60:
    // 0x16ec60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ec64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ec68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ec68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ec6c: 0x8059196  j           func_164658
    ctx->pc = 0x16EC6Cu;
    ctx->pc = 0x16EC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC6Cu;
            // 0x16ec70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164658u;
    {
        auto targetFn = runtime->lookupFunction(0x164658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EC74u;
    // 0x16ec74: 0x0  nop
    ctx->pc = 0x16ec74u;
    // NOP
label_16ec78:
    // 0x16ec78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ec7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ec80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ec84: 0x805919a  j           func_164668
    ctx->pc = 0x16EC84u;
    ctx->pc = 0x16EC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EC84u;
            // 0x16ec88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164668u;
    if (runtime->hasFunction(0x164668u)) {
        auto targetFn = runtime->lookupFunction(0x164668u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00164668_0x164668(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16EC8Cu;
    // 0x16ec8c: 0x0  nop
    ctx->pc = 0x16ec8cu;
    // NOP
}
