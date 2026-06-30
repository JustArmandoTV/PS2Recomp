#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7AC0
// Address: 0x2f7ac0 - 0x2f7c20
void sub_002F7AC0_0x2f7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7AC0_0x2f7ac0");
#endif

    switch (ctx->pc) {
        case 0x2f7ae8u: goto label_2f7ae8;
        case 0x2f7b10u: goto label_2f7b10;
        case 0x2f7b28u: goto label_2f7b28;
        case 0x2f7b7cu: goto label_2f7b7c;
        case 0x2f7bacu: goto label_2f7bac;
        default: break;
    }

    ctx->pc = 0x2f7ac0u;

    // 0x2f7ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7acc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f7accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f7ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f7ad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f7ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f7ad8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7adc: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x2f7adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2f7ae0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2F7AE0u;
    SET_GPR_U32(ctx, 31, 0x2F7AE8u);
    ctx->pc = 0x2F7AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AE0u;
            // 0x2f7ae4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AE8u; }
        if (ctx->pc != 0x2F7AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7AE8u; }
        if (ctx->pc != 0x2F7AE8u) { return; }
    }
    ctx->pc = 0x2F7AE8u;
label_2f7ae8:
    // 0x2f7ae8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2f7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2f7aec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7af0: 0x5483002c  bnel        $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F7AF0u;
    {
        const bool branch_taken_0x2f7af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7af0) {
            ctx->pc = 0x2F7AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AF0u;
            // 0x2f7af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7BA4u;
            goto label_2f7ba4;
        }
    }
    ctx->pc = 0x2F7AF8u;
    // 0x2f7af8: 0x922700d8  lbu         $a3, 0xD8($s1)
    ctx->pc = 0x2f7af8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2f7afc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f7afcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b00: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2f7b04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f7b04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f7b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7b10:
    // 0x2f7b10: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7B10u;
    {
        const bool branch_taken_0x2f7b10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b10) {
            ctx->pc = 0x2F7B58u;
            goto label_2f7b58;
        }
    }
    ctx->pc = 0x2F7B18u;
    // 0x2f7b18: 0x2281821  addu        $v1, $s1, $t0
    ctx->pc = 0x2f7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2f7b1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f7b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b20: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2f7b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f7b24: 0x0  nop
    ctx->pc = 0x2f7b24u;
    // NOP
label_2f7b28:
    // 0x2f7b28: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x2f7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2f7b2c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7B2Cu;
    {
        const bool branch_taken_0x2f7b2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7b2c) {
            ctx->pc = 0x2F7B48u;
            goto label_2f7b48;
        }
    }
    ctx->pc = 0x2F7B34u;
    // 0x2f7b34: 0x1441804  sllv        $v1, $a0, $t2
    ctx->pc = 0x2f7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x2f7b38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7b3c: 0x1631825  or          $v1, $t3, $v1
    ctx->pc = 0x2f7b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x2f7b40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7B40u;
    {
        const bool branch_taken_0x2f7b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B40u;
            // 0x2f7b44: 0x306b00ff  andi        $t3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b40) {
            ctx->pc = 0x2F7B58u;
            goto label_2f7b58;
        }
    }
    ctx->pc = 0x2F7B48u;
label_2f7b48:
    // 0x2f7b48: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2f7b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2f7b4c: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x2f7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2f7b50: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F7B50u;
    {
        const bool branch_taken_0x2f7b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b50) {
            ctx->pc = 0x2F7B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7b28;
        }
    }
    ctx->pc = 0x2F7B58u;
label_2f7b58:
    // 0x2f7b58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2f7b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2f7b5c: 0x147182a  slt         $v1, $t2, $a3
    ctx->pc = 0x2f7b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f7b60: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F7B60u;
    {
        const bool branch_taken_0x2f7b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B60u;
            // 0x2f7b64: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b60) {
            ctx->pc = 0x2F7B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7b10;
        }
    }
    ctx->pc = 0x2F7B68u;
    // 0x2f7b68: 0x922600d8  lbu         $a2, 0xD8($s1)
    ctx->pc = 0x2f7b68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2f7b6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f7b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7b70: 0x316700ff  andi        $a3, $t3, 0xFF
    ctx->pc = 0x2f7b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x2f7b74: 0x2629001d  addiu       $t1, $s1, 0x1D
    ctx->pc = 0x2f7b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 29));
    // 0x2f7b78: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2f7b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b7c:
    // 0x2f7b7c: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x2f7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x2f7b80: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2f7b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2f7b84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f7b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f7b88: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x2f7b88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f7b8c: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x2f7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7b90: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x2f7b90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2f7b94: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F7B94u;
    {
        const bool branch_taken_0x2f7b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7B94u;
            // 0x2f7b98: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b94) {
            ctx->pc = 0x2F7B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7b7c;
        }
    }
    ctx->pc = 0x2F7B9Cu;
    // 0x2f7b9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F7B9Cu;
    {
        const bool branch_taken_0x2f7b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b9c) {
            ctx->pc = 0x2F7C08u;
            goto label_2f7c08;
        }
    }
    ctx->pc = 0x2F7BA4u;
label_2f7ba4:
    // 0x2f7ba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7ba8: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2f7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f7bac:
    // 0x2f7bac: 0x90630018  lbu         $v1, 0x18($v1)
    ctx->pc = 0x2f7bacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f7bb0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F7BB0u;
    {
        const bool branch_taken_0x2f7bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7bb0) {
            ctx->pc = 0x2F7BF0u;
            goto label_2f7bf0;
        }
    }
    ctx->pc = 0x2F7BB8u;
    // 0x2f7bb8: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x2f7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2f7bbc: 0x9063004c  lbu         $v1, 0x4C($v1)
    ctx->pc = 0x2f7bbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2f7bc0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F7BC0u;
    {
        const bool branch_taken_0x2f7bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7bc0) {
            ctx->pc = 0x2F7BF0u;
            goto label_2f7bf0;
        }
    }
    ctx->pc = 0x2F7BC8u;
    // 0x2f7bc8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f7bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7bcc: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x2f7bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2f7bd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7BD0u;
    {
        const bool branch_taken_0x2f7bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7bd0) {
            ctx->pc = 0x2F7BE0u;
            goto label_2f7be0;
        }
    }
    ctx->pc = 0x2F7BD8u;
    // 0x2f7bd8: 0xa224001e  sb          $a0, 0x1E($s1)
    ctx->pc = 0x2f7bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7bdc: 0x0  nop
    ctx->pc = 0x2f7bdcu;
    // NOP
label_2f7be0:
    // 0x2f7be0: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x2f7be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x2f7be4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7BE4u;
    {
        const bool branch_taken_0x2f7be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7be4) {
            ctx->pc = 0x2F7BF0u;
            goto label_2f7bf0;
        }
    }
    ctx->pc = 0x2F7BECu;
    // 0x2f7bec: 0xa224001f  sb          $a0, 0x1F($s1)
    ctx->pc = 0x2f7becu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 4));
label_2f7bf0:
    // 0x2f7bf0: 0x922300d8  lbu         $v1, 0xD8($s1)
    ctx->pc = 0x2f7bf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x2f7bf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f7bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f7bf8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2f7bf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f7bfc: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F7BFCu;
    {
        const bool branch_taken_0x2f7bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7bfc) {
            ctx->pc = 0x2F7C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7BFCu;
            // 0x2f7c00: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7bac;
        }
    }
    ctx->pc = 0x2F7C04u;
    // 0x2f7c04: 0x0  nop
    ctx->pc = 0x2f7c04u;
    // NOP
label_2f7c08:
    // 0x2f7c08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f7c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C14u;
            // 0x2f7c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7C1Cu;
    // 0x2f7c1c: 0x0  nop
    ctx->pc = 0x2f7c1cu;
    // NOP
}
