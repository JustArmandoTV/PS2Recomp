#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AC40
// Address: 0x16ac40 - 0x16ac70
void sub_0016AC40_0x16ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AC40_0x16ac40");
#endif

    switch (ctx->pc) {
        case 0x16ac58u: goto label_16ac58;
        default: break;
    }

    ctx->pc = 0x16ac40u;

    // 0x16ac40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ac44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AC44u;
    {
        const bool branch_taken_0x16ac44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC44u;
            // 0x16ac48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac44) {
            ctx->pc = 0x16AC60u;
            goto label_16ac60;
        }
    }
    ctx->pc = 0x16AC4Cu;
    // 0x16ac4c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16ac50: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16AC50u;
    SET_GPR_U32(ctx, 31, 0x16AC58u);
    ctx->pc = 0x16AC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC50u;
            // 0x16ac54: 0x248439d0  addiu       $a0, $a0, 0x39D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC58u; }
        if (ctx->pc != 0x16AC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC58u; }
        if (ctx->pc != 0x16AC58u) { return; }
    }
    ctx->pc = 0x16AC58u;
label_16ac58:
    // 0x16ac58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AC58u;
    {
        const bool branch_taken_0x16ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC58u;
            // 0x16ac5c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac58) {
            ctx->pc = 0x16AC64u;
            goto label_16ac64;
        }
    }
    ctx->pc = 0x16AC60u;
label_16ac60:
    // 0x16ac60: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x16ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_16ac64:
    // 0x16ac64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ac64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC68u;
            // 0x16ac6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AC70u;
}
