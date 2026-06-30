#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AF48
// Address: 0x16af48 - 0x16af78
void sub_0016AF48_0x16af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF48_0x16af48");
#endif

    switch (ctx->pc) {
        case 0x16af60u: goto label_16af60;
        default: break;
    }

    ctx->pc = 0x16af48u;

    // 0x16af48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16af4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AF4Cu;
    {
        const bool branch_taken_0x16af4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF4Cu;
            // 0x16af50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af4c) {
            ctx->pc = 0x16AF68u;
            goto label_16af68;
        }
    }
    ctx->pc = 0x16AF54u;
    // 0x16af54: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16af54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16af58: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16AF58u;
    SET_GPR_U32(ctx, 31, 0x16AF60u);
    ctx->pc = 0x16AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF58u;
            // 0x16af5c: 0x24843a90  addiu       $a0, $a0, 0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF60u; }
        if (ctx->pc != 0x16AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AF60u; }
        if (ctx->pc != 0x16AF60u) { return; }
    }
    ctx->pc = 0x16AF60u;
label_16af60:
    // 0x16af60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AF60u;
    {
        const bool branch_taken_0x16af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF60u;
            // 0x16af64: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af60) {
            ctx->pc = 0x16AF6Cu;
            goto label_16af6c;
        }
    }
    ctx->pc = 0x16AF68u;
label_16af68:
    // 0x16af68: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_16af6c:
    // 0x16af6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af70: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF70u;
            // 0x16af74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AF78u;
}
