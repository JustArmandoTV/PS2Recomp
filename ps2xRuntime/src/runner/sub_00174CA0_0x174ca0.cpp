#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174CA0
// Address: 0x174ca0 - 0x174d00
void sub_00174CA0_0x174ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174CA0_0x174ca0");
#endif

    switch (ctx->pc) {
        case 0x174cb8u: goto label_174cb8;
        case 0x174ce4u: goto label_174ce4;
        case 0x174cecu: goto label_174cec;
        default: break;
    }

    ctx->pc = 0x174ca0u;

    // 0x174ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174ca4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174CA4u;
    {
        const bool branch_taken_0x174ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x174CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174CA4u;
            // 0x174ca8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca4) {
            ctx->pc = 0x174CC0u;
            goto label_174cc0;
        }
    }
    ctx->pc = 0x174CACu;
    // 0x174cac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x174cb0: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x174CB0u;
    SET_GPR_U32(ctx, 31, 0x174CB8u);
    ctx->pc = 0x174CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CB0u;
            // 0x174cb4: 0x24844610  addiu       $a0, $a0, 0x4610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CB8u; }
        if (ctx->pc != 0x174CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CB8u; }
        if (ctx->pc != 0x174CB8u) { return; }
    }
    ctx->pc = 0x174CB8u;
label_174cb8:
    // 0x174cb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174CB8u;
    {
        const bool branch_taken_0x174cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174CB8u;
            // 0x174cbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cb8) {
            ctx->pc = 0x174CC4u;
            goto label_174cc4;
        }
    }
    ctx->pc = 0x174CC0u;
label_174cc0:
    // 0x174cc0: 0x84820060  lh          $v0, 0x60($a0)
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_174cc4:
    // 0x174cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x174CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174CC8u;
            // 0x174ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174CD0u;
    // 0x174cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174cdc: 0xc0599de  jal         func_166778
    ctx->pc = 0x174CDCu;
    SET_GPR_U32(ctx, 31, 0x174CE4u);
    ctx->pc = 0x174CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CDCu;
            // 0x174ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CE4u; }
        if (ctx->pc != 0x174CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CE4u; }
        if (ctx->pc != 0x174CE4u) { return; }
    }
    ctx->pc = 0x174CE4u;
label_174ce4:
    // 0x174ce4: 0xc05d340  jal         func_174D00
    ctx->pc = 0x174CE4u;
    SET_GPR_U32(ctx, 31, 0x174CECu);
    ctx->pc = 0x174CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CE4u;
            // 0x174ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174D00u;
    if (runtime->hasFunction(0x174D00u)) {
        auto targetFn = runtime->lookupFunction(0x174D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CECu; }
        if (ctx->pc != 0x174CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174D00_0x174d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CECu; }
        if (ctx->pc != 0x174CECu) { return; }
    }
    ctx->pc = 0x174CECu;
label_174cec:
    // 0x174cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174cf4: 0x80599e0  j           func_166780
    ctx->pc = 0x174CF4u;
    ctx->pc = 0x174CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CF4u;
            // 0x174cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174CFCu;
    // 0x174cfc: 0x0  nop
    ctx->pc = 0x174cfcu;
    // NOP
}
