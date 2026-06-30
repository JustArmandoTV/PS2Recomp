#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EEA0
// Address: 0x29eea0 - 0x29eee0
void sub_0029EEA0_0x29eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EEA0_0x29eea0");
#endif

    switch (ctx->pc) {
        case 0x29eeccu: goto label_29eecc;
        default: break;
    }

    ctx->pc = 0x29eea0u;

    // 0x29eea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29eea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29eea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29eea8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29eea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29eeac: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29EEACu;
    {
        const bool branch_taken_0x29eeac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eeac) {
            ctx->pc = 0x29EEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEACu;
            // 0x29eeb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EED0u;
            goto label_29eed0;
        }
    }
    ctx->pc = 0x29EEB4u;
    // 0x29eeb4: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x29eeb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29eeb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29EEB8u;
    {
        const bool branch_taken_0x29eeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eeb8) {
            ctx->pc = 0x29EECCu;
            goto label_29eecc;
        }
    }
    ctx->pc = 0x29EEC0u;
    // 0x29eec0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29eec4: 0xc0a7a48  jal         func_29E920
    ctx->pc = 0x29EEC4u;
    SET_GPR_U32(ctx, 31, 0x29EECCu);
    ctx->pc = 0x29EEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EEC4u;
            // 0x29eec8: 0x8c44ea40  lw          $a0, -0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EECCu; }
        if (ctx->pc != 0x29EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EECCu; }
        if (ctx->pc != 0x29EECCu) { return; }
    }
    ctx->pc = 0x29EECCu;
label_29eecc:
    // 0x29eecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29eeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eed0:
    // 0x29eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x29EED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EED0u;
            // 0x29eed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EED8u;
    // 0x29eed8: 0x0  nop
    ctx->pc = 0x29eed8u;
    // NOP
    // 0x29eedc: 0x0  nop
    ctx->pc = 0x29eedcu;
    // NOP
}
