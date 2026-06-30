#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CDD8
// Address: 0x19cdd8 - 0x19ce70
void sub_0019CDD8_0x19cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CDD8_0x19cdd8");
#endif

    switch (ctx->pc) {
        case 0x19cdecu: goto label_19cdec;
        case 0x19cdf8u: goto label_19cdf8;
        case 0x19ce04u: goto label_19ce04;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce44u: goto label_19ce44;
        default: break;
    }

    ctx->pc = 0x19cdd8u;

    // 0x19cdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cde0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19cde4: 0xc040eb6  jal         func_103AD8
    ctx->pc = 0x19CDE4u;
    SET_GPR_U32(ctx, 31, 0x19CDECu);
    ctx->pc = 0x103AD8u;
    if (runtime->hasFunction(0x103AD8u)) {
        auto targetFn = runtime->lookupFunction(0x103AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDECu; }
        if (ctx->pc != 0x19CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AD8_0x103ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDECu; }
        if (ctx->pc != 0x19CDECu) { return; }
    }
    ctx->pc = 0x19CDECu;
label_19cdec:
    // 0x19cdec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19cdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cdf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cdf4: 0x0  nop
    ctx->pc = 0x19cdf4u;
    // NOP
label_19cdf8:
    // 0x19cdf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cdfc: 0xc04102a  jal         func_1040A8
    ctx->pc = 0x19CDFCu;
    SET_GPR_U32(ctx, 31, 0x19CE04u);
    ctx->pc = 0x19CE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDFCu;
            // 0x19ce00: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1040A8u;
    if (runtime->hasFunction(0x1040A8u)) {
        auto targetFn = runtime->lookupFunction(0x1040A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE04u; }
        if (ctx->pc != 0x19CE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001040A8_0x1040a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE04u; }
        if (ctx->pc != 0x19CE04u) { return; }
    }
    ctx->pc = 0x19CE04u;
label_19ce04:
    // 0x19ce04: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19CE04u;
    {
        const bool branch_taken_0x19ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE04u;
            // 0x19ce08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce04) {
            ctx->pc = 0x19CDF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19cdf8;
        }
    }
    ctx->pc = 0x19CE0Cu;
    // 0x19ce0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ce0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ce10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ce14: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE14u;
            // 0x19ce18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CE1Cu;
    // 0x19ce1c: 0x0  nop
    ctx->pc = 0x19ce1cu;
    // NOP
    // 0x19ce20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ce24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ce28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19ce2c: 0xc040eb6  jal         func_103AD8
    ctx->pc = 0x19CE2Cu;
    SET_GPR_U32(ctx, 31, 0x19CE34u);
    ctx->pc = 0x19CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE2Cu;
            // 0x19ce30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AD8u;
    if (runtime->hasFunction(0x103AD8u)) {
        auto targetFn = runtime->lookupFunction(0x103AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE34u; }
        if (ctx->pc != 0x19CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AD8_0x103ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE34u; }
        if (ctx->pc != 0x19CE34u) { return; }
    }
    ctx->pc = 0x19CE34u;
label_19ce34:
    // 0x19ce34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ce3c: 0xc04102a  jal         func_1040A8
    ctx->pc = 0x19CE3Cu;
    SET_GPR_U32(ctx, 31, 0x19CE44u);
    ctx->pc = 0x19CE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE3Cu;
            // 0x19ce40: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1040A8u;
    if (runtime->hasFunction(0x1040A8u)) {
        auto targetFn = runtime->lookupFunction(0x1040A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE44u; }
        if (ctx->pc != 0x19CE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001040A8_0x1040a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE44u; }
        if (ctx->pc != 0x19CE44u) { return; }
    }
    ctx->pc = 0x19CE44u;
label_19ce44:
    // 0x19ce44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19ce48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ce4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ce4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE50u;
            // 0x19ce54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CE58u;
    // 0x19ce58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ce5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ce5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ce60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ce60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce64: 0x805b7c6  j           func_16DF18
    ctx->pc = 0x19CE64u;
    ctx->pc = 0x19CE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE64u;
            // 0x19ce68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DF18u;
    if (runtime->hasFunction(0x16DF18u)) {
        auto targetFn = runtime->lookupFunction(0x16DF18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016DF18_0x16df18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CE6Cu;
    // 0x19ce6c: 0x0  nop
    ctx->pc = 0x19ce6cu;
    // NOP
}
