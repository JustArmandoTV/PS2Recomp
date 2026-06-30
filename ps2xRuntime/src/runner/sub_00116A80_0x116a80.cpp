#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116A80
// Address: 0x116a80 - 0x116b98
void sub_00116A80_0x116a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116A80_0x116a80");
#endif

    switch (ctx->pc) {
        case 0x116ad4u: goto label_116ad4;
        case 0x116af0u: goto label_116af0;
        case 0x116afcu: goto label_116afc;
        case 0x116b10u: goto label_116b10;
        case 0x116b28u: goto label_116b28;
        case 0x116b3cu: goto label_116b3c;
        case 0x116b48u: goto label_116b48;
        case 0x116b60u: goto label_116b60;
        default: break;
    }

    ctx->pc = 0x116a80u;

    // 0x116a80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x116a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x116a84: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x116a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x116a88: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x116a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x116a8c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x116a90: 0x8c53e7e0  lw          $s3, -0x1820($v0)
    ctx->pc = 0x116a90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961120)));
    // 0x116a94: 0x2467f298  addiu       $a3, $v1, -0xD68
    ctx->pc = 0x116a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963864));
    // 0x116a98: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x116a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x116a9c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x116a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x116aa0: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x116aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x116aa4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x116aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x116aa8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x116aa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x116aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x116ab0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x116ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ab4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116ab8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x116ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116abc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x116abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x116ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ac4: 0x8c64f298  lw          $a0, -0xD68($v1)
    ctx->pc = 0x116ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963864)));
    // 0x116ac8: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x116acc: 0xc045a9c  jal         func_116A70
    ctx->pc = 0x116ACCu;
    SET_GPR_U32(ctx, 31, 0x116AD4u);
    ctx->pc = 0x116AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116ACCu;
            // 0x116ad0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A70u;
    if (runtime->hasFunction(0x116A70u)) {
        auto targetFn = runtime->lookupFunction(0x116A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116AD4u; }
        if (ctx->pc != 0x116AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A70_0x116a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116AD4u; }
        if (ctx->pc != 0x116AD4u) { return; }
    }
    ctx->pc = 0x116AD4u;
label_116ad4:
    // 0x116ad4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x116ad4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x116ad8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x116adc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x116adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ae0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x116ae0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x116ae4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x116ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ae8: 0xc045a8c  jal         func_116A30
    ctx->pc = 0x116AE8u;
    SET_GPR_U32(ctx, 31, 0x116AF0u);
    ctx->pc = 0x116AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116AE8u;
            // 0x116aec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A30u;
    if (runtime->hasFunction(0x116A30u)) {
        auto targetFn = runtime->lookupFunction(0x116A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116AF0u; }
        if (ctx->pc != 0x116AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A30_0x116a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116AF0u; }
        if (ctx->pc != 0x116AF0u) { return; }
    }
    ctx->pc = 0x116AF0u;
label_116af0:
    // 0x116af0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x116af4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x116AF4u;
    SET_GPR_U32(ctx, 31, 0x116AFCu);
    ctx->pc = 0x116AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116AF4u;
            // 0x116af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116AFCu; }
        if (ctx->pc != 0x116AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116AFCu; }
        if (ctx->pc != 0x116AFCu) { return; }
    }
    ctx->pc = 0x116AFCu;
label_116afc:
    // 0x116afc: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116b00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b08: 0xc045a8c  jal         func_116A30
    ctx->pc = 0x116B08u;
    SET_GPR_U32(ctx, 31, 0x116B10u);
    ctx->pc = 0x116B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116B08u;
            // 0x116b0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A30u;
    if (runtime->hasFunction(0x116A30u)) {
        auto targetFn = runtime->lookupFunction(0x116A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B10u; }
        if (ctx->pc != 0x116B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A30_0x116a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B10u; }
        if (ctx->pc != 0x116B10u) { return; }
    }
    ctx->pc = 0x116B10u;
label_116b10:
    // 0x116b10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x116b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b14: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x116b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x116b18: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x116B18u;
    {
        const bool branch_taken_0x116b18 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x116B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B18u;
            // 0x116b1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b18) {
            ctx->pc = 0x116B70u;
            goto label_116b70;
        }
    }
    ctx->pc = 0x116B20u;
    // 0x116b20: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x116b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b24: 0x0  nop
    ctx->pc = 0x116b24u;
    // NOP
label_116b28:
    // 0x116b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x116b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x116b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116b34: 0xc045a8c  jal         func_116A30
    ctx->pc = 0x116B34u;
    SET_GPR_U32(ctx, 31, 0x116B3Cu);
    ctx->pc = 0x116B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116B34u;
            // 0x116b38: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A30u;
    if (runtime->hasFunction(0x116A30u)) {
        auto targetFn = runtime->lookupFunction(0x116A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B3Cu; }
        if (ctx->pc != 0x116B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A30_0x116a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B3Cu; }
        if (ctx->pc != 0x116B3Cu) { return; }
    }
    ctx->pc = 0x116B3Cu;
label_116b3c:
    // 0x116b3c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x116b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x116b40: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x116B40u;
    SET_GPR_U32(ctx, 31, 0x116B48u);
    ctx->pc = 0x116B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116B40u;
            // 0x116b44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B48u; }
        if (ctx->pc != 0x116B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B48u; }
        if (ctx->pc != 0x116B48u) { return; }
    }
    ctx->pc = 0x116B48u;
label_116b48:
    // 0x116b48: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116b4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116b50: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x116b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b58: 0xc045a8c  jal         func_116A30
    ctx->pc = 0x116B58u;
    SET_GPR_U32(ctx, 31, 0x116B60u);
    ctx->pc = 0x116B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116B58u;
            // 0x116b5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116A30u;
    if (runtime->hasFunction(0x116A30u)) {
        auto targetFn = runtime->lookupFunction(0x116A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B60u; }
        if (ctx->pc != 0x116B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116A30_0x116a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116B60u; }
        if (ctx->pc != 0x116B60u) { return; }
    }
    ctx->pc = 0x116B60u;
label_116b60:
    // 0x116b60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x116b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x116b68: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x116B68u;
    {
        const bool branch_taken_0x116b68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B68u;
            // 0x116b6c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b68) {
            ctx->pc = 0x116B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116b28;
        }
    }
    ctx->pc = 0x116B70u;
label_116b70:
    // 0x116b70: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x116b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x116b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116b78: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x116b78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116b7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x116b7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b80: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x116b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116b84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x116b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116b88: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116b8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116b90: 0x3e00008  jr          $ra
    ctx->pc = 0x116B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116B90u;
            // 0x116b94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116B98u;
}
