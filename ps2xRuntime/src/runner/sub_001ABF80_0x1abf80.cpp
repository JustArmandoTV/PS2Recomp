#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABF80
// Address: 0x1abf80 - 0x1ac0e8
void sub_001ABF80_0x1abf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABF80_0x1abf80");
#endif

    switch (ctx->pc) {
        case 0x1abfd0u: goto label_1abfd0;
        case 0x1abfe8u: goto label_1abfe8;
        case 0x1ac038u: goto label_1ac038;
        case 0x1ac050u: goto label_1ac050;
        case 0x1ac060u: goto label_1ac060;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0b4u: goto label_1ac0b4;
        default: break;
    }

    ctx->pc = 0x1abf80u;

    // 0x1abf80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1abf84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1abf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1abf88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1abf88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf8c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1abf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1abf90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1abf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1abf94: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1abf94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abf9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1abf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1abfa0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1abfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1abfa4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1abfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1abfa8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1abfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1abfac: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1abfacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1abfb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1abfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1abfb4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1ABFB4u;
    {
        const bool branch_taken_0x1abfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFB4u;
            // 0x1abfb8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfb4) {
            ctx->pc = 0x1AC088u;
            goto label_1ac088;
        }
    }
    ctx->pc = 0x1ABFBCu;
    // 0x1abfbc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1abfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1abfc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfc4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1abfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfc8: 0xc064b88  jal         func_192E20
    ctx->pc = 0x1ABFC8u;
    SET_GPR_U32(ctx, 31, 0x1ABFD0u);
    ctx->pc = 0x1ABFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFC8u;
            // 0x1abfcc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192E20u;
    if (runtime->hasFunction(0x192E20u)) {
        auto targetFn = runtime->lookupFunction(0x192E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFD0u; }
        if (ctx->pc != 0x1ABFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192E20_0x192e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFD0u; }
        if (ctx->pc != 0x1ABFD0u) { return; }
    }
    ctx->pc = 0x1ABFD0u;
label_1abfd0:
    // 0x1abfd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1abfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfd4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABFD4u;
    {
        const bool branch_taken_0x1abfd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfd4) {
            ctx->pc = 0x1ABFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFD4u;
            // 0x1abfd8: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC000u;
            goto label_1ac000;
        }
    }
    ctx->pc = 0x1ABFDCu;
    // 0x1abfdc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1ABFDCu;
    {
        const bool branch_taken_0x1abfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfdc) {
            ctx->pc = 0x1AC0ACu;
            goto label_1ac0ac;
        }
    }
    ctx->pc = 0x1ABFE4u;
    // 0x1abfe4: 0x0  nop
    ctx->pc = 0x1abfe4u;
    // NOP
label_1abfe8:
    // 0x1abfe8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1abfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1abfec: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x1abfecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x1abff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1abff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1abff4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1abff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1abff8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1ABFF8u;
    {
        const bool branch_taken_0x1abff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFF8u;
            // 0x1abffc: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff8) {
            ctx->pc = 0x1AC0BCu;
            goto label_1ac0bc;
        }
    }
    ctx->pc = 0x1AC000u;
label_1ac000:
    // 0x1ac000: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1ac000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac004: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x1ac004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ac008: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ac008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac00c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1ac00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac010: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac014: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1ac014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ac018: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ac018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac01c: 0xe2980a  movz        $s3, $a3, $v0
    ctx->pc = 0x1ac01cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
    // 0x1ac020: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ac020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ac024: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ac024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ac028: 0xe2800a  movz        $s0, $a3, $v0
    ctx->pc = 0x1ac028u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x1ac02c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ac02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac030: 0xc04a508  jal         func_129420
    ctx->pc = 0x1AC030u;
    SET_GPR_U32(ctx, 31, 0x1AC038u);
    ctx->pc = 0x1AC034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC030u;
            // 0x1ac034: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC038u; }
        if (ctx->pc != 0x1AC038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC038u; }
        if (ctx->pc != 0x1AC038u) { return; }
    }
    ctx->pc = 0x1AC038u;
label_1ac038:
    // 0x1ac038: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1ac038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ac03c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ac03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac040: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1ac040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1ac044: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x1ac044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x1ac048: 0xc04a508  jal         func_129420
    ctx->pc = 0x1AC048u;
    SET_GPR_U32(ctx, 31, 0x1AC050u);
    ctx->pc = 0x1AC04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC048u;
            // 0x1ac04c: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC050u; }
        if (ctx->pc != 0x1AC050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC050u; }
        if (ctx->pc != 0x1AC050u) { return; }
    }
    ctx->pc = 0x1AC050u;
label_1ac050:
    // 0x1ac050: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1ac050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ac054: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC054u;
    {
        const bool branch_taken_0x1ac054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac054) {
            ctx->pc = 0x1AC058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC054u;
            // 0x1ac058: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC08Cu;
            goto label_1ac08c;
        }
    }
    ctx->pc = 0x1AC05Cu;
    // 0x1ac05c: 0x0  nop
    ctx->pc = 0x1ac05cu;
    // NOP
label_1ac060:
    // 0x1ac060: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1AC060u;
    SET_GPR_U32(ctx, 31, 0x1AC068u);
    ctx->pc = 0x1AC064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC060u;
            // 0x1ac064: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC068u; }
        if (ctx->pc != 0x1AC068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC068u; }
        if (ctx->pc != 0x1AC068u) { return; }
    }
    ctx->pc = 0x1AC068u;
label_1ac068:
    // 0x1ac068: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ac068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac06c: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x1ac06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1ac070: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1AC070u;
    {
        const bool branch_taken_0x1ac070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac070) {
            ctx->pc = 0x1AC074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC070u;
            // 0x1ac074: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1abfe8;
        }
    }
    ctx->pc = 0x1AC078u;
    // 0x1ac078: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ac07c: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x1ac07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ac080: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AC080u;
    {
        const bool branch_taken_0x1ac080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac080) {
            ctx->pc = 0x1AC060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac060;
        }
    }
    ctx->pc = 0x1AC088u;
label_1ac088:
    // 0x1ac088: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ac088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ac08c:
    // 0x1ac08c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ac08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac090: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ac090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac098: 0xc064b88  jal         func_192E20
    ctx->pc = 0x1AC098u;
    SET_GPR_U32(ctx, 31, 0x1AC0A0u);
    ctx->pc = 0x1AC09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC098u;
            // 0x1ac09c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192E20u;
    if (runtime->hasFunction(0x192E20u)) {
        auto targetFn = runtime->lookupFunction(0x192E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0A0u; }
        if (ctx->pc != 0x1AC0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192E20_0x192e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0A0u; }
        if (ctx->pc != 0x1AC0A0u) { return; }
    }
    ctx->pc = 0x1AC0A0u;
label_1ac0a0:
    // 0x1ac0a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ac0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0a4: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC0A4u;
    {
        const bool branch_taken_0x1ac0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac0a4) {
            ctx->pc = 0x1AC0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0A4u;
            // 0x1ac0a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC0C0u;
            goto label_1ac0c0;
        }
    }
    ctx->pc = 0x1AC0ACu;
label_1ac0ac:
    // 0x1ac0ac: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1AC0ACu;
    SET_GPR_U32(ctx, 31, 0x1AC0B4u);
    ctx->pc = 0x1AC0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0ACu;
            // 0x1ac0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0B4u; }
        if (ctx->pc != 0x1AC0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0B4u; }
        if (ctx->pc != 0x1AC0B4u) { return; }
    }
    ctx->pc = 0x1AC0B4u;
label_1ac0b4:
    // 0x1ac0b4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ac0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1ac0b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ac0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac0bc:
    // 0x1ac0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac0c0:
    // 0x1ac0c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac0c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac0c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac0cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ac0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac0d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ac0d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac0d4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1ac0d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac0d8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ac0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ac0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0DCu;
            // 0x1ac0e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC0E4u;
    // 0x1ac0e4: 0x0  nop
    ctx->pc = 0x1ac0e4u;
    // NOP
}
