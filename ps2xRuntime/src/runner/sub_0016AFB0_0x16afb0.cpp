#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AFB0
// Address: 0x16afb0 - 0x16afe0
void sub_0016AFB0_0x16afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AFB0_0x16afb0");
#endif

    switch (ctx->pc) {
        case 0x16afc8u: goto label_16afc8;
        default: break;
    }

    ctx->pc = 0x16afb0u;

    // 0x16afb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16afb4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AFB4u;
    {
        const bool branch_taken_0x16afb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFB4u;
            // 0x16afb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afb4) {
            ctx->pc = 0x16AFD0u;
            goto label_16afd0;
        }
    }
    ctx->pc = 0x16AFBCu;
    // 0x16afbc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16afc0: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16AFC0u;
    SET_GPR_U32(ctx, 31, 0x16AFC8u);
    ctx->pc = 0x16AFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFC0u;
            // 0x16afc4: 0x24843ac0  addiu       $a0, $a0, 0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFC8u; }
        if (ctx->pc != 0x16AFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AFC8u; }
        if (ctx->pc != 0x16AFC8u) { return; }
    }
    ctx->pc = 0x16AFC8u;
label_16afc8:
    // 0x16afc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AFC8u;
    {
        const bool branch_taken_0x16afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFC8u;
            // 0x16afcc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afc8) {
            ctx->pc = 0x16AFD4u;
            goto label_16afd4;
        }
    }
    ctx->pc = 0x16AFD0u;
label_16afd0:
    // 0x16afd0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_16afd4:
    // 0x16afd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16afd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16afd8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFD8u;
            // 0x16afdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AFE0u;
}
