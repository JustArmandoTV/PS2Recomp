#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAC78
// Address: 0x1bac78 - 0x1bae48
void sub_001BAC78_0x1bac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAC78_0x1bac78");
#endif

    switch (ctx->pc) {
        case 0x1baca8u: goto label_1baca8;
        case 0x1bacb8u: goto label_1bacb8;
        case 0x1bacf8u: goto label_1bacf8;
        case 0x1bad08u: goto label_1bad08;
        case 0x1bad48u: goto label_1bad48;
        case 0x1bad58u: goto label_1bad58;
        case 0x1bad94u: goto label_1bad94;
        case 0x1bade0u: goto label_1bade0;
        case 0x1bae30u: goto label_1bae30;
        default: break;
    }

    ctx->pc = 0x1bac78u;

    // 0x1bac78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bac80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bac84: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bac88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAC88u;
    {
        const bool branch_taken_0x1bac88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC88u;
            // 0x1bac8c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac88) {
            ctx->pc = 0x1BACA0u;
            goto label_1baca0;
        }
    }
    ctx->pc = 0x1BAC90u;
    // 0x1bac90: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAC90u;
    {
        const bool branch_taken_0x1bac90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC90u;
            // 0x1bac94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac90) {
            ctx->pc = 0x1BACB0u;
            goto label_1bacb0;
        }
    }
    ctx->pc = 0x1BAC98u;
    // 0x1bac98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAC98u;
    {
        const bool branch_taken_0x1bac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAC98u;
            // 0x1bac9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac98) {
            ctx->pc = 0x1BACBCu;
            goto label_1bacbc;
        }
    }
    ctx->pc = 0x1BACA0u;
label_1baca0:
    // 0x1baca0: 0xc06ef1c  jal         func_1BBC70
    ctx->pc = 0x1BACA0u;
    SET_GPR_U32(ctx, 31, 0x1BACA8u);
    ctx->pc = 0x1BBC70u;
    if (runtime->hasFunction(0x1BBC70u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACA8u; }
        if (ctx->pc != 0x1BACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBC70_0x1bbc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACA8u; }
        if (ctx->pc != 0x1BACA8u) { return; }
    }
    ctx->pc = 0x1BACA8u;
label_1baca8:
    // 0x1baca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BACA8u;
    {
        const bool branch_taken_0x1baca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACA8u;
            // 0x1bacac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baca8) {
            ctx->pc = 0x1BACBCu;
            goto label_1bacbc;
        }
    }
    ctx->pc = 0x1BACB0u;
label_1bacb0:
    // 0x1bacb0: 0xc06f2ae  jal         func_1BCAB8
    ctx->pc = 0x1BACB0u;
    SET_GPR_U32(ctx, 31, 0x1BACB8u);
    ctx->pc = 0x1BCAB8u;
    if (runtime->hasFunction(0x1BCAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BCAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACB8u; }
        if (ctx->pc != 0x1BACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCAB8_0x1bcab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACB8u; }
        if (ctx->pc != 0x1BACB8u) { return; }
    }
    ctx->pc = 0x1BACB8u;
label_1bacb8:
    // 0x1bacb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bacb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bacbc:
    // 0x1bacbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACBCu;
            // 0x1bacc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BACC4u;
    // 0x1bacc4: 0x0  nop
    ctx->pc = 0x1bacc4u;
    // NOP
    // 0x1bacc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bacc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baccc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bacccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bacd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bacd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bacd4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bacd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BACD8u;
    {
        const bool branch_taken_0x1bacd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BACDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACD8u;
            // 0x1bacdc: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacd8) {
            ctx->pc = 0x1BACF0u;
            goto label_1bacf0;
        }
    }
    ctx->pc = 0x1BACE0u;
    // 0x1bace0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BACE0u;
    {
        const bool branch_taken_0x1bace0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACE0u;
            // 0x1bace4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bace0) {
            ctx->pc = 0x1BAD00u;
            goto label_1bad00;
        }
    }
    ctx->pc = 0x1BACE8u;
    // 0x1bace8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BACE8u;
    {
        const bool branch_taken_0x1bace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACE8u;
            // 0x1bacec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bace8) {
            ctx->pc = 0x1BAD0Cu;
            goto label_1bad0c;
        }
    }
    ctx->pc = 0x1BACF0u;
label_1bacf0:
    // 0x1bacf0: 0xc06ef22  jal         func_1BBC88
    ctx->pc = 0x1BACF0u;
    SET_GPR_U32(ctx, 31, 0x1BACF8u);
    ctx->pc = 0x1BBC88u;
    if (runtime->hasFunction(0x1BBC88u)) {
        auto targetFn = runtime->lookupFunction(0x1BBC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACF8u; }
        if (ctx->pc != 0x1BACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBC88_0x1bbc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BACF8u; }
        if (ctx->pc != 0x1BACF8u) { return; }
    }
    ctx->pc = 0x1BACF8u;
label_1bacf8:
    // 0x1bacf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BACF8u;
    {
        const bool branch_taken_0x1bacf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BACF8u;
            // 0x1bacfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacf8) {
            ctx->pc = 0x1BAD0Cu;
            goto label_1bad0c;
        }
    }
    ctx->pc = 0x1BAD00u;
label_1bad00:
    // 0x1bad00: 0xc06f2bc  jal         func_1BCAF0
    ctx->pc = 0x1BAD00u;
    SET_GPR_U32(ctx, 31, 0x1BAD08u);
    ctx->pc = 0x1BCAF0u;
    if (runtime->hasFunction(0x1BCAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BCAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD08u; }
        if (ctx->pc != 0x1BAD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCAF0_0x1bcaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD08u; }
        if (ctx->pc != 0x1BAD08u) { return; }
    }
    ctx->pc = 0x1BAD08u;
label_1bad08:
    // 0x1bad08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bad08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bad0c:
    // 0x1bad0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD0Cu;
            // 0x1bad10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAD14u;
    // 0x1bad14: 0x0  nop
    ctx->pc = 0x1bad14u;
    // NOP
    // 0x1bad18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bad1c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bad20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bad24: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bad28: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAD28u;
    {
        const bool branch_taken_0x1bad28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD28u;
            // 0x1bad2c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad28) {
            ctx->pc = 0x1BAD40u;
            goto label_1bad40;
        }
    }
    ctx->pc = 0x1BAD30u;
    // 0x1bad30: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAD30u;
    {
        const bool branch_taken_0x1bad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD30u;
            // 0x1bad34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad30) {
            ctx->pc = 0x1BAD50u;
            goto label_1bad50;
        }
    }
    ctx->pc = 0x1BAD38u;
    // 0x1bad38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAD38u;
    {
        const bool branch_taken_0x1bad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD38u;
            // 0x1bad3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad38) {
            ctx->pc = 0x1BAD5Cu;
            goto label_1bad5c;
        }
    }
    ctx->pc = 0x1BAD40u;
label_1bad40:
    // 0x1bad40: 0xc06ef2c  jal         func_1BBCB0
    ctx->pc = 0x1BAD40u;
    SET_GPR_U32(ctx, 31, 0x1BAD48u);
    ctx->pc = 0x1BBCB0u;
    if (runtime->hasFunction(0x1BBCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD48u; }
        if (ctx->pc != 0x1BAD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCB0_0x1bbcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD48u; }
        if (ctx->pc != 0x1BAD48u) { return; }
    }
    ctx->pc = 0x1BAD48u;
label_1bad48:
    // 0x1bad48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAD48u;
    {
        const bool branch_taken_0x1bad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD48u;
            // 0x1bad4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad48) {
            ctx->pc = 0x1BAD5Cu;
            goto label_1bad5c;
        }
    }
    ctx->pc = 0x1BAD50u;
label_1bad50:
    // 0x1bad50: 0xc06f2ca  jal         func_1BCB28
    ctx->pc = 0x1BAD50u;
    SET_GPR_U32(ctx, 31, 0x1BAD58u);
    ctx->pc = 0x1BCB28u;
    if (runtime->hasFunction(0x1BCB28u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD58u; }
        if (ctx->pc != 0x1BAD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB28_0x1bcb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD58u; }
        if (ctx->pc != 0x1BAD58u) { return; }
    }
    ctx->pc = 0x1BAD58u;
label_1bad58:
    // 0x1bad58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bad5c:
    // 0x1bad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD5Cu;
            // 0x1bad60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAD64u;
    // 0x1bad64: 0x0  nop
    ctx->pc = 0x1bad64u;
    // NOP
    // 0x1bad68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bad6c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bad70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bad74: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1bad74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bad78: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAD78u;
    {
        const bool branch_taken_0x1bad78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD78u;
            // 0x1bad7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad78) {
            ctx->pc = 0x1BAD98u;
            goto label_1bad98;
        }
    }
    ctx->pc = 0x1BAD80u;
    // 0x1bad80: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bad84: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAD84u;
    {
        const bool branch_taken_0x1bad84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bad84) {
            ctx->pc = 0x1BAD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD84u;
            // 0x1bad88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAD9Cu;
            goto label_1bad9c;
        }
    }
    ctx->pc = 0x1BAD8Cu;
    // 0x1bad8c: 0xc06f2d8  jal         func_1BCB60
    ctx->pc = 0x1BAD8Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD94u);
    ctx->pc = 0x1BCB60u;
    if (runtime->hasFunction(0x1BCB60u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD94u; }
        if (ctx->pc != 0x1BAD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB60_0x1bcb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAD94u; }
        if (ctx->pc != 0x1BAD94u) { return; }
    }
    ctx->pc = 0x1BAD94u;
label_1bad94:
    // 0x1bad94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bad94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bad98:
    // 0x1bad98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bad9c:
    // 0x1bad9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bad9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bada0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BADA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADA0u;
            // 0x1bada4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BADA8u;
    // 0x1bada8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1badac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1badacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1badb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1badb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1badb4: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1badb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1badb8: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADB8u;
    {
        const bool branch_taken_0x1badb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADB8u;
            // 0x1badbc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badb8) {
            ctx->pc = 0x1BADD8u;
            goto label_1badd8;
        }
    }
    ctx->pc = 0x1BADC0u;
    // 0x1badc0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1badc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1badc4: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADC4u;
    {
        const bool branch_taken_0x1badc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADC4u;
            // 0x1badc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badc4) {
            ctx->pc = 0x1BADE4u;
            goto label_1bade4;
        }
    }
    ctx->pc = 0x1BADCCu;
    // 0x1badcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BADCCu;
    {
        const bool branch_taken_0x1badcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADCCu;
            // 0x1badd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badcc) {
            ctx->pc = 0x1BADE8u;
            goto label_1bade8;
        }
    }
    ctx->pc = 0x1BADD4u;
    // 0x1badd4: 0x0  nop
    ctx->pc = 0x1badd4u;
    // NOP
label_1badd8:
    // 0x1badd8: 0xc06ef4c  jal         func_1BBD30
    ctx->pc = 0x1BADD8u;
    SET_GPR_U32(ctx, 31, 0x1BADE0u);
    ctx->pc = 0x1BBD30u;
    if (runtime->hasFunction(0x1BBD30u)) {
        auto targetFn = runtime->lookupFunction(0x1BBD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADE0u; }
        if (ctx->pc != 0x1BADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBD30_0x1bbd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BADE0u; }
        if (ctx->pc != 0x1BADE0u) { return; }
    }
    ctx->pc = 0x1BADE0u;
label_1bade0:
    // 0x1bade0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bade0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bade4:
    // 0x1bade4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bade8:
    // 0x1bade8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bade8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1badec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BADECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADECu;
            // 0x1badf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BADF4u;
    // 0x1badf4: 0x0  nop
    ctx->pc = 0x1badf4u;
    // NOP
    // 0x1badf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1badf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1badfc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1badfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bae00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bae00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bae04: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bae08: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE08u;
    {
        const bool branch_taken_0x1bae08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE08u;
            // 0x1bae0c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae08) {
            ctx->pc = 0x1BAE28u;
            goto label_1bae28;
        }
    }
    ctx->pc = 0x1BAE10u;
    // 0x1bae10: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bae14: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE14u;
    {
        const bool branch_taken_0x1bae14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE14u;
            // 0x1bae18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae14) {
            ctx->pc = 0x1BAE34u;
            goto label_1bae34;
        }
    }
    ctx->pc = 0x1BAE1Cu;
    // 0x1bae1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAE1Cu;
    {
        const bool branch_taken_0x1bae1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE1Cu;
            // 0x1bae20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae1c) {
            ctx->pc = 0x1BAE38u;
            goto label_1bae38;
        }
    }
    ctx->pc = 0x1BAE24u;
    // 0x1bae24: 0x0  nop
    ctx->pc = 0x1bae24u;
    // NOP
label_1bae28:
    // 0x1bae28: 0xc06ef68  jal         func_1BBDA0
    ctx->pc = 0x1BAE28u;
    SET_GPR_U32(ctx, 31, 0x1BAE30u);
    ctx->pc = 0x1BBDA0u;
    if (runtime->hasFunction(0x1BBDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE30u; }
        if (ctx->pc != 0x1BAE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBDA0_0x1bbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE30u; }
        if (ctx->pc != 0x1BAE30u) { return; }
    }
    ctx->pc = 0x1BAE30u;
label_1bae30:
    // 0x1bae30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bae30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bae34:
    // 0x1bae34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bae38:
    // 0x1bae38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bae38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE3Cu;
            // 0x1bae40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAE44u;
    // 0x1bae44: 0x0  nop
    ctx->pc = 0x1bae44u;
    // NOP
}
