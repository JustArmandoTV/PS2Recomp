#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174F50
// Address: 0x174f50 - 0x174fc0
void sub_00174F50_0x174f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174F50_0x174f50");
#endif

    switch (ctx->pc) {
        case 0x174f68u: goto label_174f68;
        case 0x174f9cu: goto label_174f9c;
        case 0x174fa8u: goto label_174fa8;
        default: break;
    }

    ctx->pc = 0x174f50u;

    // 0x174f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174f54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174F54u;
    {
        const bool branch_taken_0x174f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F54u;
            // 0x174f58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f54) {
            ctx->pc = 0x174F70u;
            goto label_174f70;
        }
    }
    ctx->pc = 0x174F5Cu;
    // 0x174f5c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174f60: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x174F60u;
    SET_GPR_U32(ctx, 31, 0x174F68u);
    ctx->pc = 0x174F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F60u;
            // 0x174f64: 0x248446d0  addiu       $a0, $a0, 0x46D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F68u; }
        if (ctx->pc != 0x174F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F68u; }
        if (ctx->pc != 0x174F68u) { return; }
    }
    ctx->pc = 0x174F68u;
label_174f68:
    // 0x174f68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174F68u;
    {
        const bool branch_taken_0x174f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F68u;
            // 0x174f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f68) {
            ctx->pc = 0x174F74u;
            goto label_174f74;
        }
    }
    ctx->pc = 0x174F70u;
label_174f70:
    // 0x174f70: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x174f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_174f74:
    // 0x174f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f78: 0x3e00008  jr          $ra
    ctx->pc = 0x174F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F78u;
            // 0x174f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174F80u;
    // 0x174f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174f94: 0xc0599de  jal         func_166778
    ctx->pc = 0x174F94u;
    SET_GPR_U32(ctx, 31, 0x174F9Cu);
    ctx->pc = 0x174F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F94u;
            // 0x174f98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F9Cu; }
        if (ctx->pc != 0x174F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F9Cu; }
        if (ctx->pc != 0x174F9Cu) { return; }
    }
    ctx->pc = 0x174F9Cu;
label_174f9c:
    // 0x174f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fa0: 0xc05d3f0  jal         func_174FC0
    ctx->pc = 0x174FA0u;
    SET_GPR_U32(ctx, 31, 0x174FA8u);
    ctx->pc = 0x174FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174FA0u;
            // 0x174fa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174FC0u;
    if (runtime->hasFunction(0x174FC0u)) {
        auto targetFn = runtime->lookupFunction(0x174FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FA8u; }
        if (ctx->pc != 0x174FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174FC0_0x174fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FA8u; }
        if (ctx->pc != 0x174FA8u) { return; }
    }
    ctx->pc = 0x174FA8u;
label_174fa8:
    // 0x174fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174fb4: 0x80599e0  j           func_166780
    ctx->pc = 0x174FB4u;
    ctx->pc = 0x174FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174FB4u;
            // 0x174fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174FBCu;
    // 0x174fbc: 0x0  nop
    ctx->pc = 0x174fbcu;
    // NOP
}
