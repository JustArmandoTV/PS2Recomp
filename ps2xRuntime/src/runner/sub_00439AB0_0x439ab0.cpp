#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439AB0
// Address: 0x439ab0 - 0x439bb0
void sub_00439AB0_0x439ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439AB0_0x439ab0");
#endif

    switch (ctx->pc) {
        case 0x439adcu: goto label_439adc;
        case 0x439b00u: goto label_439b00;
        case 0x439b50u: goto label_439b50;
        case 0x439b7cu: goto label_439b7c;
        default: break;
    }

    ctx->pc = 0x439ab0u;

    // 0x439ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x439ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x439ab4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x439ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x439ab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x439ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x439abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x439abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x439ac0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x439ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439ac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x439ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x439ac8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x439ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x439ad0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x439ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439ad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x439ad8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x439ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_439adc:
    // 0x439adc: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x439adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x439ae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x439ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x439ae4: 0x8c42e410  lw          $v0, -0x1BF0($v0)
    ctx->pc = 0x439ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
    // 0x439ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x439ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439aec: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x439aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x439af0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x439af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x439af4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x439af4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x439af8: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x439af8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x439afc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x439afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_439b00:
    // 0x439b00: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x439b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x439b04: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x439b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x439b08: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x439b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x439b0c: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x439B0Cu;
    {
        const bool branch_taken_0x439b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x439b0c) {
            ctx->pc = 0x439B58u;
            goto label_439b58;
        }
    }
    ctx->pc = 0x439B14u;
    // 0x439b14: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x439b14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x439b18: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x439b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x439b1c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x439B1Cu;
    {
        const bool branch_taken_0x439b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x439b1c) {
            ctx->pc = 0x439B58u;
            goto label_439b58;
        }
    }
    ctx->pc = 0x439B24u;
    // 0x439b24: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x439b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x439b28: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x439b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x439b2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x439b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x439b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x439b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439b34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x439b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x439b38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x439b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x439b3c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x439b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x439b40: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x439b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x439b44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x439b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x439b48: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x439B48u;
    SET_GPR_U32(ctx, 31, 0x439B50u);
    ctx->pc = 0x439B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439B48u;
            // 0x439b4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439B50u; }
        if (ctx->pc != 0x439B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439B50u; }
        if (ctx->pc != 0x439B50u) { return; }
    }
    ctx->pc = 0x439B50u;
label_439b50:
    // 0x439b50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x439B50u;
    {
        const bool branch_taken_0x439b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x439b50) {
            ctx->pc = 0x439B68u;
            goto label_439b68;
        }
    }
    ctx->pc = 0x439B58u;
label_439b58:
    // 0x439b58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x439b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x439b5c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x439b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x439b60: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x439B60u;
    {
        const bool branch_taken_0x439b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439B60u;
            // 0x439b64: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b60) {
            ctx->pc = 0x439B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439b00;
        }
    }
    ctx->pc = 0x439B68u;
label_439b68:
    // 0x439b68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x439b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x439b6c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x439b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x439b70: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x439b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x439b74: 0xc0c2f44  jal         func_30BD10
    ctx->pc = 0x439B74u;
    SET_GPR_U32(ctx, 31, 0x439B7Cu);
    ctx->pc = 0x439B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439B74u;
            // 0x439b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BD10u;
    if (runtime->hasFunction(0x30BD10u)) {
        auto targetFn = runtime->lookupFunction(0x30BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439B7Cu; }
        if (ctx->pc != 0x439B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BD10_0x30bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439B7Cu; }
        if (ctx->pc != 0x439B7Cu) { return; }
    }
    ctx->pc = 0x439B7Cu;
label_439b7c:
    // 0x439b7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x439b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x439b80: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x439b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x439b84: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x439b84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x439b88: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x439B88u;
    {
        const bool branch_taken_0x439b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439B88u;
            // 0x439b8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b88) {
            ctx->pc = 0x439ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439adc;
        }
    }
    ctx->pc = 0x439B90u;
    // 0x439b90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x439b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x439b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x439b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x439b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x439b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x439b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x439b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x439ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x439BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439BA8u;
            // 0x439bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439BB0u;
}
