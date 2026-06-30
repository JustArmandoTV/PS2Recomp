#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AEC0
// Address: 0x16aec0 - 0x16af10
void sub_0016AEC0_0x16aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AEC0_0x16aec0");
#endif

    switch (ctx->pc) {
        case 0x16aee0u: goto label_16aee0;
        default: break;
    }

    ctx->pc = 0x16aec0u;

    // 0x16aec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16aec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aec8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16aec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aecc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16AECCu;
    {
        const bool branch_taken_0x16aecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AECCu;
            // 0x16aed0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aecc) {
            ctx->pc = 0x16AEF0u;
            goto label_16aef0;
        }
    }
    ctx->pc = 0x16AED4u;
    // 0x16aed4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16aed8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16AED8u;
    SET_GPR_U32(ctx, 31, 0x16AEE0u);
    ctx->pc = 0x16AEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AED8u;
            // 0x16aedc: 0x24843a60  addiu       $a0, $a0, 0x3A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE0u; }
        if (ctx->pc != 0x16AEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE0u; }
        if (ctx->pc != 0x16AEE0u) { return; }
    }
    ctx->pc = 0x16AEE0u;
label_16aee0:
    // 0x16aee0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16aee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16AEE4u;
    {
        const bool branch_taken_0x16aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEE4u;
            // 0x16aee8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aee4) {
            ctx->pc = 0x16AEFCu;
            goto label_16aefc;
        }
    }
    ctx->pc = 0x16AEECu;
    // 0x16aeec: 0x0  nop
    ctx->pc = 0x16aeecu;
    // NOP
label_16aef0:
    // 0x16aef0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x16aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16aef4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16aef8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16aefc:
    // 0x16aefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16af00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16af00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16af04: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AF04u;
            // 0x16af08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AF0Cu;
    // 0x16af0c: 0x0  nop
    ctx->pc = 0x16af0cu;
    // NOP
}
