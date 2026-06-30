#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AB70
// Address: 0x26ab70 - 0x26ac90
void sub_0026AB70_0x26ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AB70_0x26ab70");
#endif

    switch (ctx->pc) {
        case 0x26ab94u: goto label_26ab94;
        case 0x26abb8u: goto label_26abb8;
        case 0x26abd8u: goto label_26abd8;
        default: break;
    }

    ctx->pc = 0x26ab70u;

    // 0x26ab70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26ab74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26ab78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ab7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ab80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26ab80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ab84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ab88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26ab88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab8c: 0xc09aacc  jal         func_26AB30
    ctx->pc = 0x26AB8Cu;
    SET_GPR_U32(ctx, 31, 0x26AB94u);
    ctx->pc = 0x26AB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB8Cu;
            // 0x26ab90: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AB30u;
    if (runtime->hasFunction(0x26AB30u)) {
        auto targetFn = runtime->lookupFunction(0x26AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB94u; }
        if (ctx->pc != 0x26AB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AB30_0x26ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AB94u; }
        if (ctx->pc != 0x26AB94u) { return; }
    }
    ctx->pc = 0x26AB94u;
label_26ab94:
    // 0x26ab94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab98: 0x1880002f  blez        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26AB98u;
    {
        const bool branch_taken_0x26ab98 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26AB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AB98u;
            // 0x26ab9c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab98) {
            ctx->pc = 0x26AC58u;
            goto label_26ac58;
        }
    }
    ctx->pc = 0x26ABA0u;
    // 0x26aba0: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x26aba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26aba4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ABA4u;
    {
        const bool branch_taken_0x26aba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aba4) {
            ctx->pc = 0x26ABB4u;
            goto label_26abb4;
        }
    }
    ctx->pc = 0x26ABACu;
    // 0x26abac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26ABACu;
    {
        const bool branch_taken_0x26abac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abac) {
            ctx->pc = 0x26ABB8u;
            goto label_26abb8;
        }
    }
    ctx->pc = 0x26ABB4u;
label_26abb4:
    // 0x26abb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26abb8:
    // 0x26abb8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x26abb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26abbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26abbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abc0: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x26abc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abc4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x26abc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abc8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x26abc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abcc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26abccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abd0: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x26abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26abd4: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x26abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_26abd8:
    // 0x26abd8: 0x8d660028  lw          $a2, 0x28($t3)
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x26abdc: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x26abe0: 0x8e4c0024  lw          $t4, 0x24($s2)
    ctx->pc = 0x26abe0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26abe4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x26abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x26abe8: 0x1853807  srav        $a3, $a1, $t4
    ctx->pc = 0x26abe8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x26abec: 0x1872804  sllv        $a1, $a3, $t4
    ctx->pc = 0x26abecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x26abf0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x26abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26abf4: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x26abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x26abf8: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x26abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x26abfc: 0x8d470010  lw          $a3, 0x10($t2)
    ctx->pc = 0x26abfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x26ac00: 0x8d260028  lw          $a2, 0x28($t1)
    ctx->pc = 0x26ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x26ac04: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x26ac08: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x26ac08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x26ac0c: 0xa62807  srav        $a1, $a2, $a1
    ctx->pc = 0x26ac0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x26ac10: 0x28a500ff  slti        $a1, $a1, 0xFF
    ctx->pc = 0x26ac10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x26ac14: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AC14u;
    {
        const bool branch_taken_0x26ac14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ac14) {
            ctx->pc = 0x26AC28u;
            goto label_26ac28;
        }
    }
    ctx->pc = 0x26AC1Cu;
    // 0x26ac1c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x26AC1Cu;
    {
        const bool branch_taken_0x26ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC1Cu;
            // 0x26ac20: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac1c) {
            ctx->pc = 0x26ABB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26abb8;
        }
    }
    ctx->pc = 0x26AC24u;
    // 0x26ac24: 0x0  nop
    ctx->pc = 0x26ac24u;
    // NOP
label_26ac28:
    // 0x26ac28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ac2c: 0x28650003  slti        $a1, $v1, 0x3
    ctx->pc = 0x26ac2cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26ac30: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x26ac30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x26ac34: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x26ac34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x26ac38: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x26ac38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x26ac3c: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x26AC3Cu;
    {
        const bool branch_taken_0x26ac3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC3Cu;
            // 0x26ac40: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac3c) {
            ctx->pc = 0x26ABD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26abd8;
        }
    }
    ctx->pc = 0x26AC44u;
    // 0x26ac44: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x26ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x26ac48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ac4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26AC4Cu;
    {
        const bool branch_taken_0x26ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC4Cu;
            // 0x26ac50: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac4c) {
            ctx->pc = 0x26AC78u;
            goto label_26ac78;
        }
    }
    ctx->pc = 0x26AC54u;
    // 0x26ac54: 0x0  nop
    ctx->pc = 0x26ac54u;
    // NOP
label_26ac58:
    // 0x26ac58: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x26ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26ac5c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x26ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x26ac60: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x26ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26ac64: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x26ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x26ac68: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x26ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x26ac6c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x26ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x26ac70: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x26ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x26ac74: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x26ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_26ac78:
    // 0x26ac78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26ac78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ac7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ac7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ac80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ac80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ac84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ac84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x26AC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AC88u;
            // 0x26ac8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AC90u;
}
