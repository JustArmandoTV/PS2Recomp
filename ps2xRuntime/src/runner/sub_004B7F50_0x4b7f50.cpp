#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7F50
// Address: 0x4b7f50 - 0x4b8040
void sub_004B7F50_0x4b7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7F50_0x4b7f50");
#endif

    switch (ctx->pc) {
        case 0x4b7f84u: goto label_4b7f84;
        case 0x4b7f94u: goto label_4b7f94;
        case 0x4b7fd4u: goto label_4b7fd4;
        case 0x4b7fdcu: goto label_4b7fdc;
        case 0x4b7fe8u: goto label_4b7fe8;
        case 0x4b8008u: goto label_4b8008;
        default: break;
    }

    ctx->pc = 0x4b7f50u;

    // 0x4b7f50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F50u;
            // 0x4b7f54: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7F58u;
    // 0x4b7f58: 0x0  nop
    ctx->pc = 0x4b7f58u;
    // NOP
    // 0x4b7f5c: 0x0  nop
    ctx->pc = 0x4b7f5cu;
    // NOP
    // 0x4b7f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b7f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b7f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b7f6c: 0x9082004d  lbu         $v0, 0x4D($a0)
    ctx->pc = 0x4b7f6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x4b7f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B7F70u;
    {
        const bool branch_taken_0x4b7f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F70u;
            // 0x4b7f74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f70) {
            ctx->pc = 0x4B7F84u;
            goto label_4b7f84;
        }
    }
    ctx->pc = 0x4B7F78u;
    // 0x4b7f78: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4b7f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4b7f7c: 0xc0ba938  jal         func_2EA4E0
    ctx->pc = 0x4B7F7Cu;
    SET_GPR_U32(ctx, 31, 0x4B7F84u);
    ctx->pc = 0x4B7F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F7Cu;
            // 0x4b7f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7F84u; }
        if (ctx->pc != 0x4B7F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7F84u; }
        if (ctx->pc != 0x4B7F84u) { return; }
    }
    ctx->pc = 0x4B7F84u;
label_4b7f84:
    // 0x4b7f84: 0x8e040168  lw          $a0, 0x168($s0)
    ctx->pc = 0x4b7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4b7f88: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4b7f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4b7f8c: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4B7F8Cu;
    SET_GPR_U32(ctx, 31, 0x4B7F94u);
    ctx->pc = 0x4B7F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F8Cu;
            // 0x4b7f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7F94u; }
        if (ctx->pc != 0x4B7F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7F94u; }
        if (ctx->pc != 0x4B7F94u) { return; }
    }
    ctx->pc = 0x4B7F94u;
label_4b7f94:
    // 0x4b7f94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b7f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b7f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7F9Cu;
            // 0x4b7fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7FA4u;
    // 0x4b7fa4: 0x0  nop
    ctx->pc = 0x4b7fa4u;
    // NOP
    // 0x4b7fa8: 0x0  nop
    ctx->pc = 0x4b7fa8u;
    // NOP
    // 0x4b7fac: 0x0  nop
    ctx->pc = 0x4b7facu;
    // NOP
    // 0x4b7fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b7fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b7fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b7fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b7fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b7fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b7fc0: 0x9082004d  lbu         $v0, 0x4D($a0)
    ctx->pc = 0x4b7fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x4b7fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7FC4u;
    {
        const bool branch_taken_0x4b7fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7FC4u;
            // 0x4b7fc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7fc4) {
            ctx->pc = 0x4B7FD4u;
            goto label_4b7fd4;
        }
    }
    ctx->pc = 0x4B7FCCu;
    // 0x4b7fcc: 0xc0e35e0  jal         func_38D780
    ctx->pc = 0x4B7FCCu;
    SET_GPR_U32(ctx, 31, 0x4B7FD4u);
    ctx->pc = 0x38D780u;
    if (runtime->hasFunction(0x38D780u)) {
        auto targetFn = runtime->lookupFunction(0x38D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7FD4u; }
        if (ctx->pc != 0x4B7FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D780_0x38d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7FD4u; }
        if (ctx->pc != 0x4B7FD4u) { return; }
    }
    ctx->pc = 0x4B7FD4u;
label_4b7fd4:
    // 0x4b7fd4: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x4B7FD4u;
    SET_GPR_U32(ctx, 31, 0x4B7FDCu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7FDCu; }
        if (ctx->pc != 0x4B7FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7FDCu; }
        if (ctx->pc != 0x4B7FDCu) { return; }
    }
    ctx->pc = 0x4B7FDCu;
label_4b7fdc:
    // 0x4b7fdc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4b7fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4b7fe0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x4B7FE0u;
    SET_GPR_U32(ctx, 31, 0x4B7FE8u);
    ctx->pc = 0x4B7FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7FE0u;
            // 0x4b7fe4: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7FE8u; }
        if (ctx->pc != 0x4B7FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B7FE8u; }
        if (ctx->pc != 0x4B7FE8u) { return; }
    }
    ctx->pc = 0x4B7FE8u;
label_4b7fe8:
    // 0x4b7fe8: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x4b7fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4b7fec: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4b7fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x4b7ff0: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B7FF0u;
    {
        const bool branch_taken_0x4b7ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7ff0) {
            ctx->pc = 0x4B7FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7FF0u;
            // 0x4b7ff4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B800Cu;
            goto label_4b800c;
        }
    }
    ctx->pc = 0x4B7FF8u;
    // 0x4b7ff8: 0x8e240168  lw          $a0, 0x168($s1)
    ctx->pc = 0x4b7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x4b7ffc: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4b7ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4b8000: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4B8000u;
    SET_GPR_U32(ctx, 31, 0x4B8008u);
    ctx->pc = 0x4B8004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8000u;
            // 0x4b8004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8008u; }
        if (ctx->pc != 0x4B8008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8008u; }
        if (ctx->pc != 0x4B8008u) { return; }
    }
    ctx->pc = 0x4B8008u;
label_4b8008:
    // 0x4b8008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b8008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b800c:
    // 0x4b800c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b800cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8014: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8014u;
            // 0x4b8018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B801Cu;
    // 0x4b801c: 0x0  nop
    ctx->pc = 0x4b801cu;
    // NOP
    // 0x4b8020: 0xa080017a  sb          $zero, 0x17A($a0)
    ctx->pc = 0x4b8020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 378), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b8024: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4b8024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4b8028: 0xa080017b  sb          $zero, 0x17B($a0)
    ctx->pc = 0x4b8028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 379), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b802c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B802Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B802Cu;
            // 0x4b8030: 0xac8300d4  sw          $v1, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8034u;
    // 0x4b8034: 0x0  nop
    ctx->pc = 0x4b8034u;
    // NOP
    // 0x4b8038: 0x0  nop
    ctx->pc = 0x4b8038u;
    // NOP
    // 0x4b803c: 0x0  nop
    ctx->pc = 0x4b803cu;
    // NOP
}
