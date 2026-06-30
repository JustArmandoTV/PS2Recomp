#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAB88
// Address: 0x1bab88 - 0x1bac78
void sub_001BAB88_0x1bab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAB88_0x1bab88");
#endif

    switch (ctx->pc) {
        case 0x1babb8u: goto label_1babb8;
        case 0x1babc8u: goto label_1babc8;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac68u: goto label_1bac68;
        default: break;
    }

    ctx->pc = 0x1bab88u;

    // 0x1bab88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bab8c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bab90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bab94: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bab98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAB98u;
    {
        const bool branch_taken_0x1bab98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB98u;
            // 0x1bab9c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab98) {
            ctx->pc = 0x1BABB0u;
            goto label_1babb0;
        }
    }
    ctx->pc = 0x1BABA0u;
    // 0x1baba0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BABA0u;
    {
        const bool branch_taken_0x1baba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABA0u;
            // 0x1baba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baba0) {
            ctx->pc = 0x1BABC0u;
            goto label_1babc0;
        }
    }
    ctx->pc = 0x1BABA8u;
    // 0x1baba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BABA8u;
    {
        const bool branch_taken_0x1baba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABA8u;
            // 0x1babac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baba8) {
            ctx->pc = 0x1BABCCu;
            goto label_1babcc;
        }
    }
    ctx->pc = 0x1BABB0u;
label_1babb0:
    // 0x1babb0: 0xc06ef06  jal         func_1BBC18
    ctx->pc = 0x1BABB0u;
    SET_GPR_U32(ctx, 31, 0x1BABB8u);
    ctx->pc = 0x1BBC18u;
    if (runtime->hasFunction(0x1BBC18u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABB8u; }
        if (ctx->pc != 0x1BABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBC18_0x1bbc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABB8u; }
        if (ctx->pc != 0x1BABB8u) { return; }
    }
    ctx->pc = 0x1BABB8u;
label_1babb8:
    // 0x1babb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BABB8u;
    {
        const bool branch_taken_0x1babb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABB8u;
            // 0x1babbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babb8) {
            ctx->pc = 0x1BABCCu;
            goto label_1babcc;
        }
    }
    ctx->pc = 0x1BABC0u;
label_1babc0:
    // 0x1babc0: 0xc06f284  jal         func_1BCA10
    ctx->pc = 0x1BABC0u;
    SET_GPR_U32(ctx, 31, 0x1BABC8u);
    ctx->pc = 0x1BCA10u;
    if (runtime->hasFunction(0x1BCA10u)) {
        auto targetFn = runtime->lookupFunction(0x1BCA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABC8u; }
        if (ctx->pc != 0x1BABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCA10_0x1bca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABC8u; }
        if (ctx->pc != 0x1BABC8u) { return; }
    }
    ctx->pc = 0x1BABC8u;
label_1babc8:
    // 0x1babc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1babc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1babcc:
    // 0x1babcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABCCu;
            // 0x1babd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BABD4u;
    // 0x1babd4: 0x0  nop
    ctx->pc = 0x1babd4u;
    // NOP
    // 0x1babd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1babd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1babdc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1babdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1babe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1babe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1babe4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1babe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1babe8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BABE8u;
    {
        const bool branch_taken_0x1babe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABE8u;
            // 0x1babec: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babe8) {
            ctx->pc = 0x1BAC00u;
            goto label_1bac00;
        }
    }
    ctx->pc = 0x1BABF0u;
    // 0x1babf0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BABF0u;
    {
        const bool branch_taken_0x1babf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABF0u;
            // 0x1babf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babf0) {
            ctx->pc = 0x1BAC10u;
            goto label_1bac10;
        }
    }
    ctx->pc = 0x1BABF8u;
    // 0x1babf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BABF8u;
    {
        const bool branch_taken_0x1babf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABF8u;
            // 0x1babfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babf8) {
            ctx->pc = 0x1BAC1Cu;
            goto label_1bac1c;
        }
    }
    ctx->pc = 0x1BAC00u;
label_1bac00:
    // 0x1bac00: 0xc06ef10  jal         func_1BBC40
    ctx->pc = 0x1BAC00u;
    SET_GPR_U32(ctx, 31, 0x1BAC08u);
    ctx->pc = 0x1BBC40u;
    if (runtime->hasFunction(0x1BBC40u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC08u; }
        if (ctx->pc != 0x1BAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBC40_0x1bbc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC08u; }
        if (ctx->pc != 0x1BAC08u) { return; }
    }
    ctx->pc = 0x1BAC08u;
label_1bac08:
    // 0x1bac08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAC08u;
    {
        const bool branch_taken_0x1bac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC08u;
            // 0x1bac0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac08) {
            ctx->pc = 0x1BAC1Cu;
            goto label_1bac1c;
        }
    }
    ctx->pc = 0x1BAC10u;
label_1bac10:
    // 0x1bac10: 0xc06f292  jal         func_1BCA48
    ctx->pc = 0x1BAC10u;
    SET_GPR_U32(ctx, 31, 0x1BAC18u);
    ctx->pc = 0x1BCA48u;
    if (runtime->hasFunction(0x1BCA48u)) {
        auto targetFn = runtime->lookupFunction(0x1BCA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC18u; }
        if (ctx->pc != 0x1BAC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCA48_0x1bca48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC18u; }
        if (ctx->pc != 0x1BAC18u) { return; }
    }
    ctx->pc = 0x1BAC18u;
label_1bac18:
    // 0x1bac18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bac1c:
    // 0x1bac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC1Cu;
            // 0x1bac20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAC24u;
    // 0x1bac24: 0x0  nop
    ctx->pc = 0x1bac24u;
    // NOP
    // 0x1bac28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac2c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bac30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bac34: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bac38: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAC38u;
    {
        const bool branch_taken_0x1bac38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC38u;
            // 0x1bac3c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac38) {
            ctx->pc = 0x1BAC50u;
            goto label_1bac50;
        }
    }
    ctx->pc = 0x1BAC40u;
    // 0x1bac40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAC40u;
    {
        const bool branch_taken_0x1bac40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC40u;
            // 0x1bac44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac40) {
            ctx->pc = 0x1BAC60u;
            goto label_1bac60;
        }
    }
    ctx->pc = 0x1BAC48u;
    // 0x1bac48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAC48u;
    {
        const bool branch_taken_0x1bac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC48u;
            // 0x1bac4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac48) {
            ctx->pc = 0x1BAC6Cu;
            goto label_1bac6c;
        }
    }
    ctx->pc = 0x1BAC50u;
label_1bac50:
    // 0x1bac50: 0xc06ef16  jal         func_1BBC58
    ctx->pc = 0x1BAC50u;
    SET_GPR_U32(ctx, 31, 0x1BAC58u);
    ctx->pc = 0x1BBC58u;
    if (runtime->hasFunction(0x1BBC58u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC58u; }
        if (ctx->pc != 0x1BAC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBC58_0x1bbc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC58u; }
        if (ctx->pc != 0x1BAC58u) { return; }
    }
    ctx->pc = 0x1BAC58u;
label_1bac58:
    // 0x1bac58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAC58u;
    {
        const bool branch_taken_0x1bac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC58u;
            // 0x1bac5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac58) {
            ctx->pc = 0x1BAC6Cu;
            goto label_1bac6c;
        }
    }
    ctx->pc = 0x1BAC60u;
label_1bac60:
    // 0x1bac60: 0xc06f2a0  jal         func_1BCA80
    ctx->pc = 0x1BAC60u;
    SET_GPR_U32(ctx, 31, 0x1BAC68u);
    ctx->pc = 0x1BCA80u;
    if (runtime->hasFunction(0x1BCA80u)) {
        auto targetFn = runtime->lookupFunction(0x1BCA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC68u; }
        if (ctx->pc != 0x1BAC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCA80_0x1bca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAC68u; }
        if (ctx->pc != 0x1BAC68u) { return; }
    }
    ctx->pc = 0x1BAC68u;
label_1bac68:
    // 0x1bac68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bac68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bac6c:
    // 0x1bac6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC6Cu;
            // 0x1bac70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAC74u;
    // 0x1bac74: 0x0  nop
    ctx->pc = 0x1bac74u;
    // NOP
}
