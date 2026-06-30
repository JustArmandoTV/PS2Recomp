#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174FC0
// Address: 0x174fc0 - 0x175028
void sub_00174FC0_0x174fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174FC0_0x174fc0");
#endif

    switch (ctx->pc) {
        case 0x175004u: goto label_175004;
        case 0x17500cu: goto label_17500c;
        case 0x175014u: goto label_175014;
        default: break;
    }

    ctx->pc = 0x174fc0u;

    // 0x174fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174fc4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174FC4u;
    {
        const bool branch_taken_0x174fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FC4u;
            // 0x174fc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fc4) {
            ctx->pc = 0x174FE0u;
            goto label_174fe0;
        }
    }
    ctx->pc = 0x174FCCu;
    // 0x174fcc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174fd4: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x174fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x174fd8: 0x8059f4e  j           func_167D38
    ctx->pc = 0x174FD8u;
    ctx->pc = 0x174FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174FD8u;
            // 0x174fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174FE0u;
label_174fe0:
    // 0x174fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174fe4: 0xa0850070  sb          $a1, 0x70($a0)
    ctx->pc = 0x174fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x174fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x174FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FE8u;
            // 0x174fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174FF0u;
    // 0x174ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174ff8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174ffc: 0xc0599de  jal         func_166778
    ctx->pc = 0x174FFCu;
    SET_GPR_U32(ctx, 31, 0x175004u);
    ctx->pc = 0x175000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174FFCu;
            // 0x175000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175004u; }
        if (ctx->pc != 0x175004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175004u; }
        if (ctx->pc != 0x175004u) { return; }
    }
    ctx->pc = 0x175004u;
label_175004:
    // 0x175004: 0xc05d40a  jal         func_175028
    ctx->pc = 0x175004u;
    SET_GPR_U32(ctx, 31, 0x17500Cu);
    ctx->pc = 0x175008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175004u;
            // 0x175008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175028u;
    if (runtime->hasFunction(0x175028u)) {
        auto targetFn = runtime->lookupFunction(0x175028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17500Cu; }
        if (ctx->pc != 0x17500Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175028_0x175028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17500Cu; }
        if (ctx->pc != 0x17500Cu) { return; }
    }
    ctx->pc = 0x17500Cu;
label_17500c:
    // 0x17500c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17500Cu;
    SET_GPR_U32(ctx, 31, 0x175014u);
    ctx->pc = 0x175010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17500Cu;
            // 0x175010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175014u; }
        if (ctx->pc != 0x175014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175014u; }
        if (ctx->pc != 0x175014u) { return; }
    }
    ctx->pc = 0x175014u;
label_175014:
    // 0x175014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17501c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17501cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175020: 0x3e00008  jr          $ra
    ctx->pc = 0x175020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175020u;
            // 0x175024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175028u;
}
