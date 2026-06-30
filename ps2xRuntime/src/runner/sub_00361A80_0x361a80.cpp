#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361A80
// Address: 0x361a80 - 0x361d70
void sub_00361A80_0x361a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361A80_0x361a80");
#endif

    switch (ctx->pc) {
        case 0x361ab8u: goto label_361ab8;
        case 0x361aecu: goto label_361aec;
        case 0x361b0cu: goto label_361b0c;
        case 0x361b20u: goto label_361b20;
        case 0x361becu: goto label_361bec;
        case 0x361c08u: goto label_361c08;
        case 0x361ca4u: goto label_361ca4;
        default: break;
    }

    ctx->pc = 0x361a80u;

    // 0x361a80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x361a84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x361a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x361a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x361a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x361a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x361a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x361a90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x361a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x361a98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x361a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361aa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x361aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361aa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361aa8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x361aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x361aac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361ab0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361AB0u;
    {
        const bool branch_taken_0x361ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361AB0u;
            // 0x361ab4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ab0) {
            ctx->pc = 0x361AD8u;
            goto label_361ad8;
        }
    }
    ctx->pc = 0x361AB8u;
label_361ab8:
    // 0x361ab8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x361ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361abc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x361abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x361ac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361ac4: 0x0  nop
    ctx->pc = 0x361ac4u;
    // NOP
    // 0x361ac8: 0x0  nop
    ctx->pc = 0x361ac8u;
    // NOP
    // 0x361acc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x361ACCu;
    {
        const bool branch_taken_0x361acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361acc) {
            ctx->pc = 0x361AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_361ab8;
        }
    }
    ctx->pc = 0x361AD4u;
    // 0x361ad4: 0x0  nop
    ctx->pc = 0x361ad4u;
    // NOP
label_361ad8:
    // 0x361ad8: 0x48842  srl         $s1, $a0, 1
    ctx->pc = 0x361ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x361adc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x361adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x361ae0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x361ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x361ae4: 0xc040138  jal         func_1004E0
    ctx->pc = 0x361AE4u;
    SET_GPR_U32(ctx, 31, 0x361AECu);
    ctx->pc = 0x361AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361AE4u;
            // 0x361ae8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361AECu; }
        if (ctx->pc != 0x361AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361AECu; }
        if (ctx->pc != 0x361AECu) { return; }
    }
    ctx->pc = 0x361AECu;
label_361aec:
    // 0x361aec: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x361aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x361af0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x361af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x361af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361af8: 0x24a53440  addiu       $a1, $a1, 0x3440
    ctx->pc = 0x361af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
    // 0x361afc: 0x24c633e0  addiu       $a2, $a2, 0x33E0
    ctx->pc = 0x361afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13280));
    // 0x361b00: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x361b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x361b04: 0xc040840  jal         func_102100
    ctx->pc = 0x361B04u;
    SET_GPR_U32(ctx, 31, 0x361B0Cu);
    ctx->pc = 0x361B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361B04u;
            // 0x361b08: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361B0Cu; }
        if (ctx->pc != 0x361B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361B0Cu; }
        if (ctx->pc != 0x361B0Cu) { return; }
    }
    ctx->pc = 0x361B0Cu;
label_361b0c:
    // 0x361b0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b10: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x361b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x361b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b18: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x361B18u;
    SET_GPR_U32(ctx, 31, 0x361B20u);
    ctx->pc = 0x361B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361B18u;
            // 0x361b1c: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361B20u; }
        if (ctx->pc != 0x361B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361B20u; }
        if (ctx->pc != 0x361B20u) { return; }
    }
    ctx->pc = 0x361B20u;
label_361b20:
    // 0x361b20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b28: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x361b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x361b2c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x361b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x361b30: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361b30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361b34: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361B34u;
    {
        const bool branch_taken_0x361b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361b34) {
            ctx->pc = 0x361B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361B34u;
            // 0x361b38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361B48u;
            goto label_361b48;
        }
    }
    ctx->pc = 0x361B3Cu;
    // 0x361b3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b40: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x361b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x361b44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361b48:
    // 0x361b48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b4c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361b50: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361b54: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361b54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361b58: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361B58u;
    {
        const bool branch_taken_0x361b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361b58) {
            ctx->pc = 0x361B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361B58u;
            // 0x361b5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361B6Cu;
            goto label_361b6c;
        }
    }
    ctx->pc = 0x361B60u;
    // 0x361b60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b64: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361b68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361b6c:
    // 0x361b6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b70: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361b74: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361b78: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361b78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361b7c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361B7Cu;
    {
        const bool branch_taken_0x361b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361b7c) {
            ctx->pc = 0x361B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361B7Cu;
            // 0x361b80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361B90u;
            goto label_361b90;
        }
    }
    ctx->pc = 0x361B84u;
    // 0x361b84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b88: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x361b8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361b90:
    // 0x361b90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361b94: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361b98: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361b9c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361ba0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361ba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361ba4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361BA4u;
    {
        const bool branch_taken_0x361ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ba4) {
            ctx->pc = 0x361BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361BA4u;
            // 0x361ba8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361BB8u;
            goto label_361bb8;
        }
    }
    ctx->pc = 0x361BACu;
    // 0x361bac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361bb0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361bb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361bb8:
    // 0x361bb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361bbc: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361bc0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361bc4: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361bc8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361bcc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361BCCu;
    {
        const bool branch_taken_0x361bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361bcc) {
            ctx->pc = 0x361BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361BCCu;
            // 0x361bd0: 0x26120008  addiu       $s2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361BE0u;
            goto label_361be0;
        }
    }
    ctx->pc = 0x361BD4u;
    // 0x361bd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361bd8: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x361bdc: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x361bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_361be0:
    // 0x361be0: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x361be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x361be4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x361BE4u;
    {
        const bool branch_taken_0x361be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x361be4) {
            ctx->pc = 0x361D10u;
            goto label_361d10;
        }
    }
    ctx->pc = 0x361BECu;
label_361bec:
    // 0x361bec: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x361becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361bf4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x361bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361bfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x361bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361c00: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x361C00u;
    SET_GPR_U32(ctx, 31, 0x361C08u);
    ctx->pc = 0x361C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361C00u;
            // 0x361c04: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361C08u; }
        if (ctx->pc != 0x361C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361C08u; }
        if (ctx->pc != 0x361C08u) { return; }
    }
    ctx->pc = 0x361C08u;
label_361c08:
    // 0x361c08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361c0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361c10: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x361c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x361c14: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x361c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x361c18: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361c18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x361c1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361C1Cu;
    {
        const bool branch_taken_0x361c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c1c) {
            ctx->pc = 0x361C30u;
            goto label_361c30;
        }
    }
    ctx->pc = 0x361C24u;
    // 0x361c24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361c28: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x361c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x361c2c: 0x0  nop
    ctx->pc = 0x361c2cu;
    // NOP
label_361c30:
    // 0x361c30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361c34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361c38: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x361c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x361c3c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x361c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x361c40: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361c40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x361c44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361C44u;
    {
        const bool branch_taken_0x361c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c44) {
            ctx->pc = 0x361C58u;
            goto label_361c58;
        }
    }
    ctx->pc = 0x361C4Cu;
    // 0x361c4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361c50: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x361c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x361c54: 0x0  nop
    ctx->pc = 0x361c54u;
    // NOP
label_361c58:
    // 0x361c58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361c5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361c60: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x361c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x361c64: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x361c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x361c68: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x361c6c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361C6Cu;
    {
        const bool branch_taken_0x361c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361c6c) {
            ctx->pc = 0x361C80u;
            goto label_361c80;
        }
    }
    ctx->pc = 0x361C74u;
    // 0x361c74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361c78: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x361c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x361c7c: 0x0  nop
    ctx->pc = 0x361c7cu;
    // NOP
label_361c80:
    // 0x361c80: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361c84: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x361c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x361c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c8c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x361c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361c90: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x361c90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361c94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361c98: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x361c9c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x361C9Cu;
    SET_GPR_U32(ctx, 31, 0x361CA4u);
    ctx->pc = 0x361CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361C9Cu;
            // 0x361ca0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361CA4u; }
        if (ctx->pc != 0x361CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361CA4u; }
        if (ctx->pc != 0x361CA4u) { return; }
    }
    ctx->pc = 0x361CA4u;
label_361ca4:
    // 0x361ca4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361ca8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361cac: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361cb0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361cb4: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361cb8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361cb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361cbc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361CBCu;
    {
        const bool branch_taken_0x361cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361cbc) {
            ctx->pc = 0x361CD0u;
            goto label_361cd0;
        }
    }
    ctx->pc = 0x361CC4u;
    // 0x361cc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361cc8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361ccc: 0x0  nop
    ctx->pc = 0x361cccu;
    // NOP
label_361cd0:
    // 0x361cd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361cd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361cd8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361cdc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361ce0: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361ce4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361ce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361ce8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361CE8u;
    {
        const bool branch_taken_0x361ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ce8) {
            ctx->pc = 0x361CF8u;
            goto label_361cf8;
        }
    }
    ctx->pc = 0x361CF0u;
    // 0x361cf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361cf4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_361cf8:
    // 0x361cf8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361cfc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x361cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x361d00: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x361d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x361d04: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x361d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361d08: 0x1600ffb8  bnez        $s0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x361D08u;
    {
        const bool branch_taken_0x361d08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x361D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361D08u;
            // 0x361d0c: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d08) {
            ctx->pc = 0x361BECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_361bec;
        }
    }
    ctx->pc = 0x361D10u;
label_361d10:
    // 0x361d10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361d14: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x361d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x361d18: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x361d18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x361d1c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361D1Cu;
    {
        const bool branch_taken_0x361d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361d1c) {
            ctx->pc = 0x361D2Cu;
            goto label_361d2c;
        }
    }
    ctx->pc = 0x361D24u;
    // 0x361d24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361d28: 0xac73e3c8  sw          $s3, -0x1C38($v1)
    ctx->pc = 0x361d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 19));
label_361d2c:
    // 0x361d2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361d30: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x361d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x361d34: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x361d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x361d38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361D38u;
    {
        const bool branch_taken_0x361d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361d38) {
            ctx->pc = 0x361D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361D38u;
            // 0x361d3c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361D4Cu;
            goto label_361d4c;
        }
    }
    ctx->pc = 0x361D40u;
    // 0x361d40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361d44: 0xac73e3d0  sw          $s3, -0x1C30($v1)
    ctx->pc = 0x361d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 19));
    // 0x361d48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x361d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_361d4c:
    // 0x361d4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x361d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361d50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x361d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361d60: 0x3e00008  jr          $ra
    ctx->pc = 0x361D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361D60u;
            // 0x361d64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361D68u;
    // 0x361d68: 0x0  nop
    ctx->pc = 0x361d68u;
    // NOP
    // 0x361d6c: 0x0  nop
    ctx->pc = 0x361d6cu;
    // NOP
}
