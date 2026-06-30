#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439BB0
// Address: 0x439bb0 - 0x439ca0
void sub_00439BB0_0x439bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439BB0_0x439bb0");
#endif

    switch (ctx->pc) {
        case 0x439bdcu: goto label_439bdc;
        case 0x439bf0u: goto label_439bf0;
        case 0x439c00u: goto label_439c00;
        case 0x439c14u: goto label_439c14;
        case 0x439c1cu: goto label_439c1c;
        case 0x439c24u: goto label_439c24;
        case 0x439c38u: goto label_439c38;
        case 0x439c60u: goto label_439c60;
        case 0x439c6cu: goto label_439c6c;
        default: break;
    }

    ctx->pc = 0x439bb0u;

    // 0x439bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x439bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x439bb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x439bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x439bb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x439bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x439bbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x439bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x439bc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x439bc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439bc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x439bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x439bc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x439bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x439bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x439bd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x439bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439bd8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x439bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_439bdc:
    // 0x439bdc: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x439bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x439be0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x439be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x439be4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x439be4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x439be8: 0xc0dc408  jal         func_371020
    ctx->pc = 0x439BE8u;
    SET_GPR_U32(ctx, 31, 0x439BF0u);
    ctx->pc = 0x439BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439BE8u;
            // 0x439bec: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439BF0u; }
        if (ctx->pc != 0x439BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439BF0u; }
        if (ctx->pc != 0x439BF0u) { return; }
    }
    ctx->pc = 0x439BF0u;
label_439bf0:
    // 0x439bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x439bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x439bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439bf8: 0xc0e1b0c  jal         func_386C30
    ctx->pc = 0x439BF8u;
    SET_GPR_U32(ctx, 31, 0x439C00u);
    ctx->pc = 0x439BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439BF8u;
            // 0x439bfc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C00u; }
        if (ctx->pc != 0x439C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C00u; }
        if (ctx->pc != 0x439C00u) { return; }
    }
    ctx->pc = 0x439C00u;
label_439c00:
    // 0x439c00: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x439c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x439c04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x439c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x439c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x439c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439c0c: 0xc10e74c  jal         func_439D30
    ctx->pc = 0x439C0Cu;
    SET_GPR_U32(ctx, 31, 0x439C14u);
    ctx->pc = 0x439C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439C0Cu;
            // 0x439c10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D30u;
    if (runtime->hasFunction(0x439D30u)) {
        auto targetFn = runtime->lookupFunction(0x439D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C14u; }
        if (ctx->pc != 0x439C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D30_0x439d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C14u; }
        if (ctx->pc != 0x439C14u) { return; }
    }
    ctx->pc = 0x439C14u;
label_439c14:
    // 0x439c14: 0xc10e748  jal         func_439D20
    ctx->pc = 0x439C14u;
    SET_GPR_U32(ctx, 31, 0x439C1Cu);
    ctx->pc = 0x439C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439C14u;
            // 0x439c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D20u;
    if (runtime->hasFunction(0x439D20u)) {
        auto targetFn = runtime->lookupFunction(0x439D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C1Cu; }
        if (ctx->pc != 0x439C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D20_0x439d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C1Cu; }
        if (ctx->pc != 0x439C1Cu) { return; }
    }
    ctx->pc = 0x439C1Cu;
label_439c1c:
    // 0x439c1c: 0xc10e744  jal         func_439D10
    ctx->pc = 0x439C1Cu;
    SET_GPR_U32(ctx, 31, 0x439C24u);
    ctx->pc = 0x439C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439C1Cu;
            // 0x439c20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439D10u;
    if (runtime->hasFunction(0x439D10u)) {
        auto targetFn = runtime->lookupFunction(0x439D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C24u; }
        if (ctx->pc != 0x439C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439D10_0x439d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C24u; }
        if (ctx->pc != 0x439C24u) { return; }
    }
    ctx->pc = 0x439C24u;
label_439c24:
    // 0x439c24: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x439c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x439c28: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x439C28u;
    {
        const bool branch_taken_0x439c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x439c28) {
            ctx->pc = 0x439C70u;
            goto label_439c70;
        }
    }
    ctx->pc = 0x439C30u;
    // 0x439c30: 0xc0e3b50  jal         func_38ED40
    ctx->pc = 0x439C30u;
    SET_GPR_U32(ctx, 31, 0x439C38u);
    ctx->pc = 0x439C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439C30u;
            // 0x439c34: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38ED40u;
    if (runtime->hasFunction(0x38ED40u)) {
        auto targetFn = runtime->lookupFunction(0x38ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C38u; }
        if (ctx->pc != 0x439C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038ED40_0x38ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C38u; }
        if (ctx->pc != 0x439C38u) { return; }
    }
    ctx->pc = 0x439C38u;
label_439c38:
    // 0x439c38: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x439C38u;
    {
        const bool branch_taken_0x439c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x439c38) {
            ctx->pc = 0x439C70u;
            goto label_439c70;
        }
    }
    ctx->pc = 0x439C40u;
    // 0x439c40: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x439c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x439c44: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x439c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x439c48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x439c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x439c4c: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x439c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x439c50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x439c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x439c54: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x439c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x439c58: 0xc10e73c  jal         func_439CF0
    ctx->pc = 0x439C58u;
    SET_GPR_U32(ctx, 31, 0x439C60u);
    ctx->pc = 0x439C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439C58u;
            // 0x439c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439CF0u;
    if (runtime->hasFunction(0x439CF0u)) {
        auto targetFn = runtime->lookupFunction(0x439CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C60u; }
        if (ctx->pc != 0x439C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439CF0_0x439cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C60u; }
        if (ctx->pc != 0x439C60u) { return; }
    }
    ctx->pc = 0x439C60u;
label_439c60:
    // 0x439c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x439c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439c64: 0xc10e728  jal         func_439CA0
    ctx->pc = 0x439C64u;
    SET_GPR_U32(ctx, 31, 0x439C6Cu);
    ctx->pc = 0x439C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439C64u;
            // 0x439c68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439CA0u;
    if (runtime->hasFunction(0x439CA0u)) {
        auto targetFn = runtime->lookupFunction(0x439CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C6Cu; }
        if (ctx->pc != 0x439C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439CA0_0x439ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439C6Cu; }
        if (ctx->pc != 0x439C6Cu) { return; }
    }
    ctx->pc = 0x439C6Cu;
label_439c6c:
    // 0x439c6c: 0x0  nop
    ctx->pc = 0x439c6cu;
    // NOP
label_439c70:
    // 0x439c70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x439c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x439c74: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x439c74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x439c78: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x439C78u;
    {
        const bool branch_taken_0x439c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439C78u;
            // 0x439c7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439c78) {
            ctx->pc = 0x439BDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439bdc;
        }
    }
    ctx->pc = 0x439C80u;
    // 0x439c80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x439c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x439c84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x439c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x439c88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x439c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x439c8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x439c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x439c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439c98: 0x3e00008  jr          $ra
    ctx->pc = 0x439C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439C98u;
            // 0x439c9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439CA0u;
}
