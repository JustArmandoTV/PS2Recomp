#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001402F0
// Address: 0x1402f0 - 0x140330
void sub_001402F0_0x1402f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001402F0_0x1402f0");
#endif

    switch (ctx->pc) {
        case 0x140300u: goto label_140300;
        case 0x14031cu: goto label_14031c;
        default: break;
    }

    ctx->pc = 0x1402f0u;

    // 0x1402f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1402f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1402f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1402f8: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x1402F8u;
    SET_GPR_U32(ctx, 31, 0x140300u);
    ctx->pc = 0x1402FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402F8u;
            // 0x1402fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140300u; }
        if (ctx->pc != 0x140300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140300u; }
        if (ctx->pc != 0x140300u) { return; }
    }
    ctx->pc = 0x140300u;
label_140300:
    // 0x140300: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x140304: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x140304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x140308: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x140308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14030c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14030cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x140310: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x140310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x140314: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x140314u;
    SET_GPR_U32(ctx, 31, 0x14031Cu);
    ctx->pc = 0x140318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140314u;
            // 0x140318: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14031Cu; }
        if (ctx->pc != 0x14031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14031Cu; }
        if (ctx->pc != 0x14031Cu) { return; }
    }
    ctx->pc = 0x14031Cu;
label_14031c:
    // 0x14031c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14031cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140320: 0x3e00008  jr          $ra
    ctx->pc = 0x140320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140320u;
            // 0x140324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140328u;
    // 0x140328: 0x0  nop
    ctx->pc = 0x140328u;
    // NOP
    // 0x14032c: 0x0  nop
    ctx->pc = 0x14032cu;
    // NOP
}
