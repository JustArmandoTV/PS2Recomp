#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324AF0
// Address: 0x324af0 - 0x324cd0
void sub_00324AF0_0x324af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324AF0_0x324af0");
#endif

    switch (ctx->pc) {
        case 0x324b3cu: goto label_324b3c;
        case 0x324b54u: goto label_324b54;
        case 0x324b6cu: goto label_324b6c;
        case 0x324b84u: goto label_324b84;
        case 0x324b9cu: goto label_324b9c;
        case 0x324bb4u: goto label_324bb4;
        case 0x324bc4u: goto label_324bc4;
        case 0x324be0u: goto label_324be0;
        case 0x324bf4u: goto label_324bf4;
        case 0x324c0cu: goto label_324c0c;
        case 0x324c20u: goto label_324c20;
        case 0x324c34u: goto label_324c34;
        case 0x324c44u: goto label_324c44;
        case 0x324c60u: goto label_324c60;
        case 0x324c74u: goto label_324c74;
        case 0x324c8cu: goto label_324c8c;
        case 0x324ca0u: goto label_324ca0;
        default: break;
    }

    ctx->pc = 0x324af0u;

    // 0x324af0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x324af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x324af4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324af8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x324af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x324afc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x324afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x324b00: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x324b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x324b04: 0x24a5ca80  addiu       $a1, $a1, -0x3580
    ctx->pc = 0x324b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
    // 0x324b08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x324b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x324b0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x324b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x324b10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x324b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x324b14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x324b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x324b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x324b24: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x324b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x324b28: 0x24900234  addiu       $s0, $a0, 0x234
    ctx->pc = 0x324b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 564));
    // 0x324b2c: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x324b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x324b30: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x324b30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324b34: 0xc123944  jal         func_48E510
    ctx->pc = 0x324B34u;
    SET_GPR_U32(ctx, 31, 0x324B3Cu);
    ctx->pc = 0x324B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324B34u;
            // 0x324b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B3Cu; }
        if (ctx->pc != 0x324B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B3Cu; }
        if (ctx->pc != 0x324B3Cu) { return; }
    }
    ctx->pc = 0x324B3Cu;
label_324b3c:
    // 0x324b3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324b40: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324b44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x324b44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b48: 0x24a5ca90  addiu       $a1, $a1, -0x3570
    ctx->pc = 0x324b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
    // 0x324b4c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324B4Cu;
    SET_GPR_U32(ctx, 31, 0x324B54u);
    ctx->pc = 0x324B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324B4Cu;
            // 0x324b50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B54u; }
        if (ctx->pc != 0x324B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B54u; }
        if (ctx->pc != 0x324B54u) { return; }
    }
    ctx->pc = 0x324B54u;
label_324b54:
    // 0x324b54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324b58: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324b5c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x324b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b60: 0x24a5caa0  addiu       $a1, $a1, -0x3560
    ctx->pc = 0x324b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
    // 0x324b64: 0xc123944  jal         func_48E510
    ctx->pc = 0x324B64u;
    SET_GPR_U32(ctx, 31, 0x324B6Cu);
    ctx->pc = 0x324B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324B64u;
            // 0x324b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B6Cu; }
        if (ctx->pc != 0x324B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B6Cu; }
        if (ctx->pc != 0x324B6Cu) { return; }
    }
    ctx->pc = 0x324B6Cu;
label_324b6c:
    // 0x324b6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324b70: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324b74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x324b74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b78: 0x24a5caa8  addiu       $a1, $a1, -0x3558
    ctx->pc = 0x324b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953640));
    // 0x324b7c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324B7Cu;
    SET_GPR_U32(ctx, 31, 0x324B84u);
    ctx->pc = 0x324B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324B7Cu;
            // 0x324b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B84u; }
        if (ctx->pc != 0x324B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B84u; }
        if (ctx->pc != 0x324B84u) { return; }
    }
    ctx->pc = 0x324B84u;
label_324b84:
    // 0x324b84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324b88: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324b8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x324b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324b90: 0x24a5cab0  addiu       $a1, $a1, -0x3550
    ctx->pc = 0x324b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953648));
    // 0x324b94: 0xc123944  jal         func_48E510
    ctx->pc = 0x324B94u;
    SET_GPR_U32(ctx, 31, 0x324B9Cu);
    ctx->pc = 0x324B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324B94u;
            // 0x324b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B9Cu; }
        if (ctx->pc != 0x324B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324B9Cu; }
        if (ctx->pc != 0x324B9Cu) { return; }
    }
    ctx->pc = 0x324B9Cu;
label_324b9c:
    // 0x324b9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324ba0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324ba4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x324ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ba8: 0x24a5cac0  addiu       $a1, $a1, -0x3540
    ctx->pc = 0x324ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953664));
    // 0x324bac: 0xc123944  jal         func_48E510
    ctx->pc = 0x324BACu;
    SET_GPR_U32(ctx, 31, 0x324BB4u);
    ctx->pc = 0x324BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324BACu;
            // 0x324bb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BB4u; }
        if (ctx->pc != 0x324BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BB4u; }
        if (ctx->pc != 0x324BB4u) { return; }
    }
    ctx->pc = 0x324BB4u;
label_324bb4:
    // 0x324bb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bb8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x324bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x324bbc: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x324BBCu;
    SET_GPR_U32(ctx, 31, 0x324BC4u);
    ctx->pc = 0x324BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324BBCu;
            // 0x324bc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BC4u; }
        if (ctx->pc != 0x324BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BC4u; }
        if (ctx->pc != 0x324BC4u) { return; }
    }
    ctx->pc = 0x324BC4u;
label_324bc4:
    // 0x324bc4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x324BC4u;
    {
        const bool branch_taken_0x324bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324bc4) {
            ctx->pc = 0x324BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324BC4u;
            // 0x324bc8: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324BFCu;
            goto label_324bfc;
        }
    }
    ctx->pc = 0x324BCCu;
    // 0x324bcc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x324bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x324bd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x324bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bd4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x324bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bd8: 0xc123654  jal         func_48D950
    ctx->pc = 0x324BD8u;
    SET_GPR_U32(ctx, 31, 0x324BE0u);
    ctx->pc = 0x324BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324BD8u;
            // 0x324bdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BE0u; }
        if (ctx->pc != 0x324BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BE0u; }
        if (ctx->pc != 0x324BE0u) { return; }
    }
    ctx->pc = 0x324BE0u;
label_324be0:
    // 0x324be0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x324be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x324be4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x324be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324be8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x324be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bec: 0xc123654  jal         func_48D950
    ctx->pc = 0x324BECu;
    SET_GPR_U32(ctx, 31, 0x324BF4u);
    ctx->pc = 0x324BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324BECu;
            // 0x324bf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BF4u; }
        if (ctx->pc != 0x324BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324BF4u; }
        if (ctx->pc != 0x324BF4u) { return; }
    }
    ctx->pc = 0x324BF4u;
label_324bf4:
    // 0x324bf4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x324BF4u;
    {
        const bool branch_taken_0x324bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324BF4u;
            // 0x324bf8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bf4) {
            ctx->pc = 0x324C24u;
            goto label_324c24;
        }
    }
    ctx->pc = 0x324BFCu;
label_324bfc:
    // 0x324bfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x324bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x324c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c04: 0xc123654  jal         func_48D950
    ctx->pc = 0x324C04u;
    SET_GPR_U32(ctx, 31, 0x324C0Cu);
    ctx->pc = 0x324C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C04u;
            // 0x324c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C0Cu; }
        if (ctx->pc != 0x324C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C0Cu; }
        if (ctx->pc != 0x324C0Cu) { return; }
    }
    ctx->pc = 0x324C0Cu;
label_324c0c:
    // 0x324c0c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x324c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x324c10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x324c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x324c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c18: 0xc123654  jal         func_48D950
    ctx->pc = 0x324C18u;
    SET_GPR_U32(ctx, 31, 0x324C20u);
    ctx->pc = 0x324C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C18u;
            // 0x324c1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C20u; }
        if (ctx->pc != 0x324C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C20u; }
        if (ctx->pc != 0x324C20u) { return; }
    }
    ctx->pc = 0x324C20u;
label_324c20:
    // 0x324c20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_324c24:
    // 0x324c24: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324c28: 0x24a5cad0  addiu       $a1, $a1, -0x3530
    ctx->pc = 0x324c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
    // 0x324c2c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324C2Cu;
    SET_GPR_U32(ctx, 31, 0x324C34u);
    ctx->pc = 0x324C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C2Cu;
            // 0x324c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C34u; }
        if (ctx->pc != 0x324C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C34u; }
        if (ctx->pc != 0x324C34u) { return; }
    }
    ctx->pc = 0x324C34u;
label_324c34:
    // 0x324c34: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x324c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x324c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c3c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x324C3Cu;
    SET_GPR_U32(ctx, 31, 0x324C44u);
    ctx->pc = 0x324C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C3Cu;
            // 0x324c40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C44u; }
        if (ctx->pc != 0x324C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C44u; }
        if (ctx->pc != 0x324C44u) { return; }
    }
    ctx->pc = 0x324C44u;
label_324c44:
    // 0x324c44: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x324C44u;
    {
        const bool branch_taken_0x324c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324c44) {
            ctx->pc = 0x324C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x324C44u;
            // 0x324c48: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324C7Cu;
            goto label_324c7c;
        }
    }
    ctx->pc = 0x324C4Cu;
    // 0x324c4c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x324c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x324c50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x324c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c58: 0xc123654  jal         func_48D950
    ctx->pc = 0x324C58u;
    SET_GPR_U32(ctx, 31, 0x324C60u);
    ctx->pc = 0x324C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C58u;
            // 0x324c5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C60u; }
        if (ctx->pc != 0x324C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C60u; }
        if (ctx->pc != 0x324C60u) { return; }
    }
    ctx->pc = 0x324C60u;
label_324c60:
    // 0x324c60: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x324c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x324c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c68: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x324c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c6c: 0xc123654  jal         func_48D950
    ctx->pc = 0x324C6Cu;
    SET_GPR_U32(ctx, 31, 0x324C74u);
    ctx->pc = 0x324C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C6Cu;
            // 0x324c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C74u; }
        if (ctx->pc != 0x324C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C74u; }
        if (ctx->pc != 0x324C74u) { return; }
    }
    ctx->pc = 0x324C74u;
label_324c74:
    // 0x324c74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x324C74u;
    {
        const bool branch_taken_0x324c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324C74u;
            // 0x324c78: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c74) {
            ctx->pc = 0x324CA4u;
            goto label_324ca4;
        }
    }
    ctx->pc = 0x324C7Cu;
label_324c7c:
    // 0x324c7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x324c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c84: 0xc123654  jal         func_48D950
    ctx->pc = 0x324C84u;
    SET_GPR_U32(ctx, 31, 0x324C8Cu);
    ctx->pc = 0x324C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C84u;
            // 0x324c88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C8Cu; }
        if (ctx->pc != 0x324C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324C8Cu; }
        if (ctx->pc != 0x324C8Cu) { return; }
    }
    ctx->pc = 0x324C8Cu;
label_324c8c:
    // 0x324c8c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x324c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x324c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x324c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c98: 0xc123654  jal         func_48D950
    ctx->pc = 0x324C98u;
    SET_GPR_U32(ctx, 31, 0x324CA0u);
    ctx->pc = 0x324C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324C98u;
            // 0x324c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324CA0u; }
        if (ctx->pc != 0x324CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324CA0u; }
        if (ctx->pc != 0x324CA0u) { return; }
    }
    ctx->pc = 0x324CA0u;
label_324ca0:
    // 0x324ca0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x324ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_324ca4:
    // 0x324ca4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x324ca4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324ca8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x324ca8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324cac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x324cacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324cb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x324cb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324cb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x324cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x324CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324CC4u;
            // 0x324cc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324CCCu;
    // 0x324ccc: 0x0  nop
    ctx->pc = 0x324cccu;
    // NOP
}
