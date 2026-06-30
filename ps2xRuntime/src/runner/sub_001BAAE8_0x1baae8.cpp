#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAAE8
// Address: 0x1baae8 - 0x1bab88
void sub_001BAAE8_0x1baae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAAE8_0x1baae8");
#endif

    switch (ctx->pc) {
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab28u: goto label_1bab28;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab78u: goto label_1bab78;
        default: break;
    }

    ctx->pc = 0x1baae8u;

    // 0x1baae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baaec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1baaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baaf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baaf4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1baaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1baaf8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAAF8u;
    {
        const bool branch_taken_0x1baaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAF8u;
            // 0x1baafc: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baaf8) {
            ctx->pc = 0x1BAB10u;
            goto label_1bab10;
        }
    }
    ctx->pc = 0x1BAB00u;
    // 0x1bab00: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAB00u;
    {
        const bool branch_taken_0x1bab00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB00u;
            // 0x1bab04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab00) {
            ctx->pc = 0x1BAB20u;
            goto label_1bab20;
        }
    }
    ctx->pc = 0x1BAB08u;
    // 0x1bab08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAB08u;
    {
        const bool branch_taken_0x1bab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB08u;
            // 0x1bab0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab08) {
            ctx->pc = 0x1BAB2Cu;
            goto label_1bab2c;
        }
    }
    ctx->pc = 0x1BAB10u;
label_1bab10:
    // 0x1bab10: 0xc06eefa  jal         func_1BBBE8
    ctx->pc = 0x1BAB10u;
    SET_GPR_U32(ctx, 31, 0x1BAB18u);
    ctx->pc = 0x1BBBE8u;
    if (runtime->hasFunction(0x1BBBE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB18u; }
        if (ctx->pc != 0x1BAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBBE8_0x1bbbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB18u; }
        if (ctx->pc != 0x1BAB18u) { return; }
    }
    ctx->pc = 0x1BAB18u;
label_1bab18:
    // 0x1bab18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAB18u;
    {
        const bool branch_taken_0x1bab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB18u;
            // 0x1bab1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab18) {
            ctx->pc = 0x1BAB2Cu;
            goto label_1bab2c;
        }
    }
    ctx->pc = 0x1BAB20u;
label_1bab20:
    // 0x1bab20: 0xc06f278  jal         func_1BC9E0
    ctx->pc = 0x1BAB20u;
    SET_GPR_U32(ctx, 31, 0x1BAB28u);
    ctx->pc = 0x1BC9E0u;
    if (runtime->hasFunction(0x1BC9E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB28u; }
        if (ctx->pc != 0x1BAB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC9E0_0x1bc9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB28u; }
        if (ctx->pc != 0x1BAB28u) { return; }
    }
    ctx->pc = 0x1BAB28u;
label_1bab28:
    // 0x1bab28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bab2c:
    // 0x1bab2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB2Cu;
            // 0x1bab30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAB34u;
    // 0x1bab34: 0x0  nop
    ctx->pc = 0x1bab34u;
    // NOP
    // 0x1bab38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bab3c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bab40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bab44: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bab48: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAB48u;
    {
        const bool branch_taken_0x1bab48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB48u;
            // 0x1bab4c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab48) {
            ctx->pc = 0x1BAB60u;
            goto label_1bab60;
        }
    }
    ctx->pc = 0x1BAB50u;
    // 0x1bab50: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAB50u;
    {
        const bool branch_taken_0x1bab50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB50u;
            // 0x1bab54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab50) {
            ctx->pc = 0x1BAB70u;
            goto label_1bab70;
        }
    }
    ctx->pc = 0x1BAB58u;
    // 0x1bab58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAB58u;
    {
        const bool branch_taken_0x1bab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB58u;
            // 0x1bab5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab58) {
            ctx->pc = 0x1BAB7Cu;
            goto label_1bab7c;
        }
    }
    ctx->pc = 0x1BAB60u;
label_1bab60:
    // 0x1bab60: 0xc06ef00  jal         func_1BBC00
    ctx->pc = 0x1BAB60u;
    SET_GPR_U32(ctx, 31, 0x1BAB68u);
    ctx->pc = 0x1BBC00u;
    if (runtime->hasFunction(0x1BBC00u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB68u; }
        if (ctx->pc != 0x1BAB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBC00_0x1bbc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB68u; }
        if (ctx->pc != 0x1BAB68u) { return; }
    }
    ctx->pc = 0x1BAB68u;
label_1bab68:
    // 0x1bab68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAB68u;
    {
        const bool branch_taken_0x1bab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB68u;
            // 0x1bab6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab68) {
            ctx->pc = 0x1BAB7Cu;
            goto label_1bab7c;
        }
    }
    ctx->pc = 0x1BAB70u;
label_1bab70:
    // 0x1bab70: 0xc06f27e  jal         func_1BC9F8
    ctx->pc = 0x1BAB70u;
    SET_GPR_U32(ctx, 31, 0x1BAB78u);
    ctx->pc = 0x1BC9F8u;
    if (runtime->hasFunction(0x1BC9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB78u; }
        if (ctx->pc != 0x1BAB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC9F8_0x1bc9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB78u; }
        if (ctx->pc != 0x1BAB78u) { return; }
    }
    ctx->pc = 0x1BAB78u;
label_1bab78:
    // 0x1bab78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bab7c:
    // 0x1bab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB7Cu;
            // 0x1bab80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAB84u;
    // 0x1bab84: 0x0  nop
    ctx->pc = 0x1bab84u;
    // NOP
}
