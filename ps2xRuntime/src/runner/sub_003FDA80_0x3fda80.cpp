#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FDA80
// Address: 0x3fda80 - 0x3fdb70
void sub_003FDA80_0x3fda80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDA80_0x3fda80");
#endif

    switch (ctx->pc) {
        case 0x3fdab0u: goto label_3fdab0;
        case 0x3fdad8u: goto label_3fdad8;
        case 0x3fdb00u: goto label_3fdb00;
        case 0x3fdb34u: goto label_3fdb34;
        default: break;
    }

    ctx->pc = 0x3fda80u;

    // 0x3fda80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3fda84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fda84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3fda88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fda88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3fda8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fda90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fda90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3fda94: 0x8c9100fc  lw          $s1, 0xFC($a0)
    ctx->pc = 0x3fda94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x3fda98: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x3fda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3fda9c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3fda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3fdaa0: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x3fdaa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3fdaa4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x3FDAA4u;
    {
        const bool branch_taken_0x3fdaa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDAA4u;
            // 0x3fdaa8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdaa4) {
            ctx->pc = 0x3FDB58u;
            goto label_3fdb58;
        }
    }
    ctx->pc = 0x3FDAACu;
    // 0x3fdaac: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x3fdaacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3fdab0:
    // 0x3fdab0: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x3fdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x3fdab4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdab8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdabc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3fdabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3fdac0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3fdac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fdac4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdac8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdacc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdad0: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDAD0u;
    SET_GPR_U32(ctx, 31, 0x3FDAD8u);
    ctx->pc = 0x3FDAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDAD0u;
            // 0x3fdad4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDAD8u; }
        if (ctx->pc != 0x3FDAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDAD8u; }
        if (ctx->pc != 0x3FDAD8u) { return; }
    }
    ctx->pc = 0x3FDAD8u;
label_3fdad8:
    // 0x3fdad8: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x3fdad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x3fdadc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdae0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdae4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3fdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3fdae8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3fdae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fdaec: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdaecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdaf0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdaf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdaf8: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDAF8u;
    SET_GPR_U32(ctx, 31, 0x3FDB00u);
    ctx->pc = 0x3FDAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDAF8u;
            // 0x3fdafc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDB00u; }
        if (ctx->pc != 0x3FDB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDB00u; }
        if (ctx->pc != 0x3FDB00u) { return; }
    }
    ctx->pc = 0x3FDB00u;
label_3fdb00:
    // 0x3fdb00: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x3fdb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x3fdb04: 0x1623000c  bne         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3FDB04u;
    {
        const bool branch_taken_0x3fdb04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fdb04) {
            ctx->pc = 0x3FDB38u;
            goto label_3fdb38;
        }
    }
    ctx->pc = 0x3FDB0Cu;
    // 0x3fdb0c: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x3fdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x3fdb10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdb14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fdb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fdb18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3fdb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3fdb1c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3fdb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fdb20: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdb20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdb24: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdb28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdb2c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDB2Cu;
    SET_GPR_U32(ctx, 31, 0x3FDB34u);
    ctx->pc = 0x3FDB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDB2Cu;
            // 0x3fdb30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDB34u; }
        if (ctx->pc != 0x3FDB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDB34u; }
        if (ctx->pc != 0x3FDB34u) { return; }
    }
    ctx->pc = 0x3FDB34u;
label_3fdb34:
    // 0x3fdb34: 0x0  nop
    ctx->pc = 0x3fdb34u;
    // NOP
label_3fdb38:
    // 0x3fdb38: 0x8e4400fc  lw          $a0, 0xFC($s2)
    ctx->pc = 0x3fdb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x3fdb3c: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x3fdb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x3fdb40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3fdb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3fdb44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3fdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3fdb48: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3fdb48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3fdb4c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3FDB4Cu;
    {
        const bool branch_taken_0x3fdb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDB4Cu;
            // 0x3fdb50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdb4c) {
            ctx->pc = 0x3FDAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fdab0;
        }
    }
    ctx->pc = 0x3FDB54u;
    // 0x3fdb54: 0x0  nop
    ctx->pc = 0x3fdb54u;
    // NOP
label_3fdb58:
    // 0x3fdb58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fdb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fdb5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fdb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fdb60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fdb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fdb64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fdb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdb68: 0x3e00008  jr          $ra
    ctx->pc = 0x3FDB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDB68u;
            // 0x3fdb6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FDB70u;
}
