#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051ABA0
// Address: 0x51aba0 - 0x51acf0
void sub_0051ABA0_0x51aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051ABA0_0x51aba0");
#endif

    switch (ctx->pc) {
        case 0x51aba0u: goto label_51aba0;
        case 0x51aba4u: goto label_51aba4;
        case 0x51aba8u: goto label_51aba8;
        case 0x51abacu: goto label_51abac;
        case 0x51abb0u: goto label_51abb0;
        case 0x51abb4u: goto label_51abb4;
        case 0x51abb8u: goto label_51abb8;
        case 0x51abbcu: goto label_51abbc;
        case 0x51abc0u: goto label_51abc0;
        case 0x51abc4u: goto label_51abc4;
        case 0x51abc8u: goto label_51abc8;
        case 0x51abccu: goto label_51abcc;
        case 0x51abd0u: goto label_51abd0;
        case 0x51abd4u: goto label_51abd4;
        case 0x51abd8u: goto label_51abd8;
        case 0x51abdcu: goto label_51abdc;
        case 0x51abe0u: goto label_51abe0;
        case 0x51abe4u: goto label_51abe4;
        case 0x51abe8u: goto label_51abe8;
        case 0x51abecu: goto label_51abec;
        case 0x51abf0u: goto label_51abf0;
        case 0x51abf4u: goto label_51abf4;
        case 0x51abf8u: goto label_51abf8;
        case 0x51abfcu: goto label_51abfc;
        case 0x51ac00u: goto label_51ac00;
        case 0x51ac04u: goto label_51ac04;
        case 0x51ac08u: goto label_51ac08;
        case 0x51ac0cu: goto label_51ac0c;
        case 0x51ac10u: goto label_51ac10;
        case 0x51ac14u: goto label_51ac14;
        case 0x51ac18u: goto label_51ac18;
        case 0x51ac1cu: goto label_51ac1c;
        case 0x51ac20u: goto label_51ac20;
        case 0x51ac24u: goto label_51ac24;
        case 0x51ac28u: goto label_51ac28;
        case 0x51ac2cu: goto label_51ac2c;
        case 0x51ac30u: goto label_51ac30;
        case 0x51ac34u: goto label_51ac34;
        case 0x51ac38u: goto label_51ac38;
        case 0x51ac3cu: goto label_51ac3c;
        case 0x51ac40u: goto label_51ac40;
        case 0x51ac44u: goto label_51ac44;
        case 0x51ac48u: goto label_51ac48;
        case 0x51ac4cu: goto label_51ac4c;
        case 0x51ac50u: goto label_51ac50;
        case 0x51ac54u: goto label_51ac54;
        case 0x51ac58u: goto label_51ac58;
        case 0x51ac5cu: goto label_51ac5c;
        case 0x51ac60u: goto label_51ac60;
        case 0x51ac64u: goto label_51ac64;
        case 0x51ac68u: goto label_51ac68;
        case 0x51ac6cu: goto label_51ac6c;
        case 0x51ac70u: goto label_51ac70;
        case 0x51ac74u: goto label_51ac74;
        case 0x51ac78u: goto label_51ac78;
        case 0x51ac7cu: goto label_51ac7c;
        case 0x51ac80u: goto label_51ac80;
        case 0x51ac84u: goto label_51ac84;
        case 0x51ac88u: goto label_51ac88;
        case 0x51ac8cu: goto label_51ac8c;
        case 0x51ac90u: goto label_51ac90;
        case 0x51ac94u: goto label_51ac94;
        case 0x51ac98u: goto label_51ac98;
        case 0x51ac9cu: goto label_51ac9c;
        case 0x51aca0u: goto label_51aca0;
        case 0x51aca4u: goto label_51aca4;
        case 0x51aca8u: goto label_51aca8;
        case 0x51acacu: goto label_51acac;
        case 0x51acb0u: goto label_51acb0;
        case 0x51acb4u: goto label_51acb4;
        case 0x51acb8u: goto label_51acb8;
        case 0x51acbcu: goto label_51acbc;
        case 0x51acc0u: goto label_51acc0;
        case 0x51acc4u: goto label_51acc4;
        case 0x51acc8u: goto label_51acc8;
        case 0x51acccu: goto label_51accc;
        case 0x51acd0u: goto label_51acd0;
        case 0x51acd4u: goto label_51acd4;
        case 0x51acd8u: goto label_51acd8;
        case 0x51acdcu: goto label_51acdc;
        case 0x51ace0u: goto label_51ace0;
        case 0x51ace4u: goto label_51ace4;
        case 0x51ace8u: goto label_51ace8;
        case 0x51acecu: goto label_51acec;
        default: break;
    }

    ctx->pc = 0x51aba0u;

label_51aba0:
    // 0x51aba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x51aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_51aba4:
    // 0x51aba4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_51aba8:
    // 0x51aba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51abac:
    // 0x51abac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51abb0:
    // 0x51abb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x51abb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51abb4:
    // 0x51abb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51abb8:
    // 0x51abb8: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_51abbc:
    if (ctx->pc == 0x51ABBCu) {
        ctx->pc = 0x51ABBCu;
            // 0x51abbc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51ABC0u;
        goto label_51abc0;
    }
    ctx->pc = 0x51ABB8u;
    {
        const bool branch_taken_0x51abb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x51ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51ABB8u;
            // 0x51abbc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51abb8) {
            ctx->pc = 0x51ACCCu;
            goto label_51accc;
        }
    }
    ctx->pc = 0x51ABC0u;
label_51abc0:
    // 0x51abc0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51abc4:
    // 0x51abc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51abc8:
    // 0x51abc8: 0x24635ab0  addiu       $v1, $v1, 0x5AB0
    ctx->pc = 0x51abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23216));
label_51abcc:
    // 0x51abcc: 0x24425abc  addiu       $v0, $v0, 0x5ABC
    ctx->pc = 0x51abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23228));
label_51abd0:
    // 0x51abd0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x51abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_51abd4:
    // 0x51abd4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x51abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_51abd8:
    // 0x51abd8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x51abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_51abdc:
    // 0x51abdc: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x51abdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_51abe0:
    // 0x51abe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x51abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_51abe4:
    // 0x51abe4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x51abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_51abe8:
    // 0x51abe8: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x51abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_51abec:
    // 0x51abec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x51abecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_51abf0:
    // 0x51abf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x51abf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51abf4:
    // 0x51abf4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_51abf8:
    if (ctx->pc == 0x51ABF8u) {
        ctx->pc = 0x51ABFCu;
        goto label_51abfc;
    }
    ctx->pc = 0x51ABF4u;
    {
        const bool branch_taken_0x51abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51abf4) {
            ctx->pc = 0x51AC50u;
            goto label_51ac50;
        }
    }
    ctx->pc = 0x51ABFCu;
label_51abfc:
    // 0x51abfc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x51abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_51ac00:
    // 0x51ac00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x51ac00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_51ac04:
    // 0x51ac04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x51ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51ac08:
    // 0x51ac08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_51ac0c:
    if (ctx->pc == 0x51AC0Cu) {
        ctx->pc = 0x51AC10u;
        goto label_51ac10;
    }
    ctx->pc = 0x51AC08u;
    {
        const bool branch_taken_0x51ac08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ac08) {
            ctx->pc = 0x51AC20u;
            goto label_51ac20;
        }
    }
    ctx->pc = 0x51AC10u;
label_51ac10:
    // 0x51ac10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51ac10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51ac14:
    // 0x51ac14: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x51ac14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_51ac18:
    // 0x51ac18: 0x320f809  jalr        $t9
label_51ac1c:
    if (ctx->pc == 0x51AC1Cu) {
        ctx->pc = 0x51AC1Cu;
            // 0x51ac1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51AC20u;
        goto label_51ac20;
    }
    ctx->pc = 0x51AC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51AC20u);
        ctx->pc = 0x51AC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AC18u;
            // 0x51ac1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51AC20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51AC20u; }
            if (ctx->pc != 0x51AC20u) { return; }
        }
        }
    }
    ctx->pc = 0x51AC20u;
label_51ac20:
    // 0x51ac20: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x51ac20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_51ac24:
    // 0x51ac24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x51ac24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_51ac28:
    // 0x51ac28: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x51ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_51ac2c:
    // 0x51ac2c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x51ac2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_51ac30:
    // 0x51ac30: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x51ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_51ac34:
    // 0x51ac34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51ac38:
    // 0x51ac38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51ac3c:
    // 0x51ac3c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x51ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_51ac40:
    // 0x51ac40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x51ac40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_51ac44:
    // 0x51ac44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x51ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51ac48:
    // 0x51ac48: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_51ac4c:
    if (ctx->pc == 0x51AC4Cu) {
        ctx->pc = 0x51AC4Cu;
            // 0x51ac4c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x51AC50u;
        goto label_51ac50;
    }
    ctx->pc = 0x51AC48u;
    {
        const bool branch_taken_0x51ac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51ac48) {
            ctx->pc = 0x51AC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51AC48u;
            // 0x51ac4c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51AC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51ac00;
        }
    }
    ctx->pc = 0x51AC50u;
label_51ac50:
    // 0x51ac50: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x51ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_51ac54:
    // 0x51ac54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_51ac58:
    if (ctx->pc == 0x51AC58u) {
        ctx->pc = 0x51AC58u;
            // 0x51ac58: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x51AC5Cu;
        goto label_51ac5c;
    }
    ctx->pc = 0x51AC54u;
    {
        const bool branch_taken_0x51ac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AC54u;
            // 0x51ac58: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ac54) {
            ctx->pc = 0x51AC80u;
            goto label_51ac80;
        }
    }
    ctx->pc = 0x51AC5Cu;
label_51ac5c:
    // 0x51ac5c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_51ac60:
    if (ctx->pc == 0x51AC60u) {
        ctx->pc = 0x51AC60u;
            // 0x51ac60: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x51AC64u;
        goto label_51ac64;
    }
    ctx->pc = 0x51AC5Cu;
    {
        const bool branch_taken_0x51ac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ac5c) {
            ctx->pc = 0x51AC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51AC5Cu;
            // 0x51ac60: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51AC84u;
            goto label_51ac84;
        }
    }
    ctx->pc = 0x51AC64u;
label_51ac64:
    // 0x51ac64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_51ac68:
    if (ctx->pc == 0x51AC68u) {
        ctx->pc = 0x51AC6Cu;
        goto label_51ac6c;
    }
    ctx->pc = 0x51AC64u;
    {
        const bool branch_taken_0x51ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ac64) {
            ctx->pc = 0x51AC80u;
            goto label_51ac80;
        }
    }
    ctx->pc = 0x51AC6Cu;
label_51ac6c:
    // 0x51ac6c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x51ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_51ac70:
    // 0x51ac70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_51ac74:
    if (ctx->pc == 0x51AC74u) {
        ctx->pc = 0x51AC78u;
        goto label_51ac78;
    }
    ctx->pc = 0x51AC70u;
    {
        const bool branch_taken_0x51ac70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ac70) {
            ctx->pc = 0x51AC80u;
            goto label_51ac80;
        }
    }
    ctx->pc = 0x51AC78u;
label_51ac78:
    // 0x51ac78: 0xc0400a8  jal         func_1002A0
label_51ac7c:
    if (ctx->pc == 0x51AC7Cu) {
        ctx->pc = 0x51AC80u;
        goto label_51ac80;
    }
    ctx->pc = 0x51AC78u;
    SET_GPR_U32(ctx, 31, 0x51AC80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AC80u; }
        if (ctx->pc != 0x51AC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AC80u; }
        if (ctx->pc != 0x51AC80u) { return; }
    }
    ctx->pc = 0x51AC80u;
label_51ac80:
    // 0x51ac80: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x51ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_51ac84:
    // 0x51ac84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_51ac88:
    if (ctx->pc == 0x51AC88u) {
        ctx->pc = 0x51AC8Cu;
        goto label_51ac8c;
    }
    ctx->pc = 0x51AC84u;
    {
        const bool branch_taken_0x51ac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ac84) {
            ctx->pc = 0x51AC98u;
            goto label_51ac98;
        }
    }
    ctx->pc = 0x51AC8Cu;
label_51ac8c:
    // 0x51ac8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51ac90:
    // 0x51ac90: 0x24425a98  addiu       $v0, $v0, 0x5A98
    ctx->pc = 0x51ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23192));
label_51ac94:
    // 0x51ac94: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x51ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_51ac98:
    // 0x51ac98: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_51ac9c:
    if (ctx->pc == 0x51AC9Cu) {
        ctx->pc = 0x51AC9Cu;
            // 0x51ac9c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x51ACA0u;
        goto label_51aca0;
    }
    ctx->pc = 0x51AC98u;
    {
        const bool branch_taken_0x51ac98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ac98) {
            ctx->pc = 0x51AC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51AC98u;
            // 0x51ac9c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51ACB8u;
            goto label_51acb8;
        }
    }
    ctx->pc = 0x51ACA0u;
label_51aca0:
    // 0x51aca0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51aca4:
    // 0x51aca4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x51aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_51aca8:
    // 0x51aca8: 0x24635a88  addiu       $v1, $v1, 0x5A88
    ctx->pc = 0x51aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23176));
label_51acac:
    // 0x51acac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x51acacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_51acb0:
    // 0x51acb0: 0xac40d120  sw          $zero, -0x2EE0($v0)
    ctx->pc = 0x51acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955296), GPR_U32(ctx, 0));
label_51acb4:
    // 0x51acb4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x51acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_51acb8:
    // 0x51acb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51acb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_51acbc:
    // 0x51acbc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51acc0:
    if (ctx->pc == 0x51ACC0u) {
        ctx->pc = 0x51ACC0u;
            // 0x51acc0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51ACC4u;
        goto label_51acc4;
    }
    ctx->pc = 0x51ACBCu;
    {
        const bool branch_taken_0x51acbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51acbc) {
            ctx->pc = 0x51ACC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51ACBCu;
            // 0x51acc0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51ACD0u;
            goto label_51acd0;
        }
    }
    ctx->pc = 0x51ACC4u;
label_51acc4:
    // 0x51acc4: 0xc0400a8  jal         func_1002A0
label_51acc8:
    if (ctx->pc == 0x51ACC8u) {
        ctx->pc = 0x51ACC8u;
            // 0x51acc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51ACCCu;
        goto label_51accc;
    }
    ctx->pc = 0x51ACC4u;
    SET_GPR_U32(ctx, 31, 0x51ACCCu);
    ctx->pc = 0x51ACC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51ACC4u;
            // 0x51acc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ACCCu; }
        if (ctx->pc != 0x51ACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ACCCu; }
        if (ctx->pc != 0x51ACCCu) { return; }
    }
    ctx->pc = 0x51ACCCu;
label_51accc:
    // 0x51accc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x51acccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51acd0:
    // 0x51acd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51acd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51acd4:
    // 0x51acd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51acd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51acd8:
    // 0x51acd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51acd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51acdc:
    // 0x51acdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51acdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51ace0:
    // 0x51ace0: 0x3e00008  jr          $ra
label_51ace4:
    if (ctx->pc == 0x51ACE4u) {
        ctx->pc = 0x51ACE4u;
            // 0x51ace4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x51ACE8u;
        goto label_51ace8;
    }
    ctx->pc = 0x51ACE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51ACE0u;
            // 0x51ace4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51ACE8u;
label_51ace8:
    // 0x51ace8: 0x0  nop
    ctx->pc = 0x51ace8u;
    // NOP
label_51acec:
    // 0x51acec: 0x0  nop
    ctx->pc = 0x51acecu;
    // NOP
}
