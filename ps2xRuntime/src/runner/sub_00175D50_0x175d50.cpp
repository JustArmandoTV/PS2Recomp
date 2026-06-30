#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175D50
// Address: 0x175d50 - 0x175db0
void sub_00175D50_0x175d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175D50_0x175d50");
#endif

    switch (ctx->pc) {
        case 0x175d94u: goto label_175d94;
        case 0x175d9cu: goto label_175d9c;
        default: break;
    }

    ctx->pc = 0x175d50u;

    // 0x175d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175d54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175D54u;
    {
        const bool branch_taken_0x175d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D54u;
            // 0x175d58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d54) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D5Cu;
    // 0x175d5c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x175d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175d64: 0x248448a0  addiu       $a0, $a0, 0x48A0
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18592));
    // 0x175d68: 0x8059f4e  j           func_167D38
    ctx->pc = 0x175D68u;
    ctx->pc = 0x175D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D68u;
            // 0x175d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175D70u;
label_175d70:
    // 0x175d70: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175d78: 0x805bff0  j           func_16FFC0
    ctx->pc = 0x175D78u;
    ctx->pc = 0x175D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D78u;
            // 0x175d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175D80u;
    // 0x175d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175d8c: 0xc0599de  jal         func_166778
    ctx->pc = 0x175D8Cu;
    SET_GPR_U32(ctx, 31, 0x175D94u);
    ctx->pc = 0x175D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D8Cu;
            // 0x175d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D94u; }
        if (ctx->pc != 0x175D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D94u; }
        if (ctx->pc != 0x175D94u) { return; }
    }
    ctx->pc = 0x175D94u;
label_175d94:
    // 0x175d94: 0xc05d76c  jal         func_175DB0
    ctx->pc = 0x175D94u;
    SET_GPR_U32(ctx, 31, 0x175D9Cu);
    ctx->pc = 0x175D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D94u;
            // 0x175d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175DB0u;
    if (runtime->hasFunction(0x175DB0u)) {
        auto targetFn = runtime->lookupFunction(0x175DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D9Cu; }
        if (ctx->pc != 0x175D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175DB0_0x175db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D9Cu; }
        if (ctx->pc != 0x175D9Cu) { return; }
    }
    ctx->pc = 0x175D9Cu;
label_175d9c:
    // 0x175d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175da0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175da4: 0x80599e0  j           func_166780
    ctx->pc = 0x175DA4u;
    ctx->pc = 0x175DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DA4u;
            // 0x175da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175DACu;
    // 0x175dac: 0x0  nop
    ctx->pc = 0x175dacu;
    // NOP
}
