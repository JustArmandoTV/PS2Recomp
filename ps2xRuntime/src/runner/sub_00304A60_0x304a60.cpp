#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304A60
// Address: 0x304a60 - 0x304cd0
void sub_00304A60_0x304a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304A60_0x304a60");
#endif

    switch (ctx->pc) {
        case 0x304a60u: goto label_304a60;
        case 0x304a64u: goto label_304a64;
        case 0x304a68u: goto label_304a68;
        case 0x304a6cu: goto label_304a6c;
        case 0x304a70u: goto label_304a70;
        case 0x304a74u: goto label_304a74;
        case 0x304a78u: goto label_304a78;
        case 0x304a7cu: goto label_304a7c;
        case 0x304a80u: goto label_304a80;
        case 0x304a84u: goto label_304a84;
        case 0x304a88u: goto label_304a88;
        case 0x304a8cu: goto label_304a8c;
        case 0x304a90u: goto label_304a90;
        case 0x304a94u: goto label_304a94;
        case 0x304a98u: goto label_304a98;
        case 0x304a9cu: goto label_304a9c;
        case 0x304aa0u: goto label_304aa0;
        case 0x304aa4u: goto label_304aa4;
        case 0x304aa8u: goto label_304aa8;
        case 0x304aacu: goto label_304aac;
        case 0x304ab0u: goto label_304ab0;
        case 0x304ab4u: goto label_304ab4;
        case 0x304ab8u: goto label_304ab8;
        case 0x304abcu: goto label_304abc;
        case 0x304ac0u: goto label_304ac0;
        case 0x304ac4u: goto label_304ac4;
        case 0x304ac8u: goto label_304ac8;
        case 0x304accu: goto label_304acc;
        case 0x304ad0u: goto label_304ad0;
        case 0x304ad4u: goto label_304ad4;
        case 0x304ad8u: goto label_304ad8;
        case 0x304adcu: goto label_304adc;
        case 0x304ae0u: goto label_304ae0;
        case 0x304ae4u: goto label_304ae4;
        case 0x304ae8u: goto label_304ae8;
        case 0x304aecu: goto label_304aec;
        case 0x304af0u: goto label_304af0;
        case 0x304af4u: goto label_304af4;
        case 0x304af8u: goto label_304af8;
        case 0x304afcu: goto label_304afc;
        case 0x304b00u: goto label_304b00;
        case 0x304b04u: goto label_304b04;
        case 0x304b08u: goto label_304b08;
        case 0x304b0cu: goto label_304b0c;
        case 0x304b10u: goto label_304b10;
        case 0x304b14u: goto label_304b14;
        case 0x304b18u: goto label_304b18;
        case 0x304b1cu: goto label_304b1c;
        case 0x304b20u: goto label_304b20;
        case 0x304b24u: goto label_304b24;
        case 0x304b28u: goto label_304b28;
        case 0x304b2cu: goto label_304b2c;
        case 0x304b30u: goto label_304b30;
        case 0x304b34u: goto label_304b34;
        case 0x304b38u: goto label_304b38;
        case 0x304b3cu: goto label_304b3c;
        case 0x304b40u: goto label_304b40;
        case 0x304b44u: goto label_304b44;
        case 0x304b48u: goto label_304b48;
        case 0x304b4cu: goto label_304b4c;
        case 0x304b50u: goto label_304b50;
        case 0x304b54u: goto label_304b54;
        case 0x304b58u: goto label_304b58;
        case 0x304b5cu: goto label_304b5c;
        case 0x304b60u: goto label_304b60;
        case 0x304b64u: goto label_304b64;
        case 0x304b68u: goto label_304b68;
        case 0x304b6cu: goto label_304b6c;
        case 0x304b70u: goto label_304b70;
        case 0x304b74u: goto label_304b74;
        case 0x304b78u: goto label_304b78;
        case 0x304b7cu: goto label_304b7c;
        case 0x304b80u: goto label_304b80;
        case 0x304b84u: goto label_304b84;
        case 0x304b88u: goto label_304b88;
        case 0x304b8cu: goto label_304b8c;
        case 0x304b90u: goto label_304b90;
        case 0x304b94u: goto label_304b94;
        case 0x304b98u: goto label_304b98;
        case 0x304b9cu: goto label_304b9c;
        case 0x304ba0u: goto label_304ba0;
        case 0x304ba4u: goto label_304ba4;
        case 0x304ba8u: goto label_304ba8;
        case 0x304bacu: goto label_304bac;
        case 0x304bb0u: goto label_304bb0;
        case 0x304bb4u: goto label_304bb4;
        case 0x304bb8u: goto label_304bb8;
        case 0x304bbcu: goto label_304bbc;
        case 0x304bc0u: goto label_304bc0;
        case 0x304bc4u: goto label_304bc4;
        case 0x304bc8u: goto label_304bc8;
        case 0x304bccu: goto label_304bcc;
        case 0x304bd0u: goto label_304bd0;
        case 0x304bd4u: goto label_304bd4;
        case 0x304bd8u: goto label_304bd8;
        case 0x304bdcu: goto label_304bdc;
        case 0x304be0u: goto label_304be0;
        case 0x304be4u: goto label_304be4;
        case 0x304be8u: goto label_304be8;
        case 0x304becu: goto label_304bec;
        case 0x304bf0u: goto label_304bf0;
        case 0x304bf4u: goto label_304bf4;
        case 0x304bf8u: goto label_304bf8;
        case 0x304bfcu: goto label_304bfc;
        case 0x304c00u: goto label_304c00;
        case 0x304c04u: goto label_304c04;
        case 0x304c08u: goto label_304c08;
        case 0x304c0cu: goto label_304c0c;
        case 0x304c10u: goto label_304c10;
        case 0x304c14u: goto label_304c14;
        case 0x304c18u: goto label_304c18;
        case 0x304c1cu: goto label_304c1c;
        case 0x304c20u: goto label_304c20;
        case 0x304c24u: goto label_304c24;
        case 0x304c28u: goto label_304c28;
        case 0x304c2cu: goto label_304c2c;
        case 0x304c30u: goto label_304c30;
        case 0x304c34u: goto label_304c34;
        case 0x304c38u: goto label_304c38;
        case 0x304c3cu: goto label_304c3c;
        case 0x304c40u: goto label_304c40;
        case 0x304c44u: goto label_304c44;
        case 0x304c48u: goto label_304c48;
        case 0x304c4cu: goto label_304c4c;
        case 0x304c50u: goto label_304c50;
        case 0x304c54u: goto label_304c54;
        case 0x304c58u: goto label_304c58;
        case 0x304c5cu: goto label_304c5c;
        case 0x304c60u: goto label_304c60;
        case 0x304c64u: goto label_304c64;
        case 0x304c68u: goto label_304c68;
        case 0x304c6cu: goto label_304c6c;
        case 0x304c70u: goto label_304c70;
        case 0x304c74u: goto label_304c74;
        case 0x304c78u: goto label_304c78;
        case 0x304c7cu: goto label_304c7c;
        case 0x304c80u: goto label_304c80;
        case 0x304c84u: goto label_304c84;
        case 0x304c88u: goto label_304c88;
        case 0x304c8cu: goto label_304c8c;
        case 0x304c90u: goto label_304c90;
        case 0x304c94u: goto label_304c94;
        case 0x304c98u: goto label_304c98;
        case 0x304c9cu: goto label_304c9c;
        case 0x304ca0u: goto label_304ca0;
        case 0x304ca4u: goto label_304ca4;
        case 0x304ca8u: goto label_304ca8;
        case 0x304cacu: goto label_304cac;
        case 0x304cb0u: goto label_304cb0;
        case 0x304cb4u: goto label_304cb4;
        case 0x304cb8u: goto label_304cb8;
        case 0x304cbcu: goto label_304cbc;
        case 0x304cc0u: goto label_304cc0;
        case 0x304cc4u: goto label_304cc4;
        case 0x304cc8u: goto label_304cc8;
        case 0x304cccu: goto label_304ccc;
        default: break;
    }

    ctx->pc = 0x304a60u;

label_304a60:
    // 0x304a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x304a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_304a64:
    // 0x304a64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x304a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_304a68:
    // 0x304a68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x304a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_304a6c:
    // 0x304a6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x304a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_304a70:
    // 0x304a70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x304a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_304a74:
    // 0x304a74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x304a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_304a78:
    // 0x304a78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304a7c:
    // 0x304a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_304a80:
    // 0x304a80: 0x8c910d70  lw          $s1, 0xD70($a0)
    ctx->pc = 0x304a80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_304a84:
    // 0x304a84: 0x8c840d74  lw          $a0, 0xD74($a0)
    ctx->pc = 0x304a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_304a88:
    // 0x304a88: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x304a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_304a8c:
    // 0x304a8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x304a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_304a90:
    // 0x304a90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x304a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_304a94:
    // 0x304a94: 0x24700280  addiu       $s0, $v1, 0x280
    ctx->pc = 0x304a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_304a98:
    // 0x304a98: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x304a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_304a9c:
    // 0x304a9c: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_304aa0:
    if (ctx->pc == 0x304AA0u) {
        ctx->pc = 0x304AA0u;
            // 0x304aa0: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->pc = 0x304AA4u;
        goto label_304aa4;
    }
    ctx->pc = 0x304A9Cu;
    {
        const bool branch_taken_0x304a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304a9c) {
            ctx->pc = 0x304AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304A9Cu;
            // 0x304aa0: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304B30u;
            goto label_304b30;
        }
    }
    ctx->pc = 0x304AA4u;
label_304aa4:
    // 0x304aa4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x304aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_304aa8:
    // 0x304aa8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_304aac:
    if (ctx->pc == 0x304AACu) {
        ctx->pc = 0x304AACu;
            // 0x304aac: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->pc = 0x304AB0u;
        goto label_304ab0;
    }
    ctx->pc = 0x304AA8u;
    {
        const bool branch_taken_0x304aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304aa8) {
            ctx->pc = 0x304AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304AA8u;
            // 0x304aac: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304AB8u;
            goto label_304ab8;
        }
    }
    ctx->pc = 0x304AB0u;
label_304ab0:
    // 0x304ab0: 0x10000038  b           . + 4 + (0x38 << 2)
label_304ab4:
    if (ctx->pc == 0x304AB4u) {
        ctx->pc = 0x304AB4u;
            // 0x304ab4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x304AB8u;
        goto label_304ab8;
    }
    ctx->pc = 0x304AB0u;
    {
        const bool branch_taken_0x304ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304AB0u;
            // 0x304ab4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ab0) {
            ctx->pc = 0x304B94u;
            goto label_304b94;
        }
    }
    ctx->pc = 0x304AB8u;
label_304ab8:
    // 0x304ab8: 0xc142c1c  jal         func_50B070
label_304abc:
    if (ctx->pc == 0x304ABCu) {
        ctx->pc = 0x304AC0u;
        goto label_304ac0;
    }
    ctx->pc = 0x304AB8u;
    SET_GPR_U32(ctx, 31, 0x304AC0u);
    ctx->pc = 0x50B070u;
    if (runtime->hasFunction(0x50B070u)) {
        auto targetFn = runtime->lookupFunction(0x50B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AC0u; }
        if (ctx->pc != 0x304AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B070_0x50b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AC0u; }
        if (ctx->pc != 0x304AC0u) { return; }
    }
    ctx->pc = 0x304AC0u;
label_304ac0:
    // 0x304ac0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_304ac4:
    if (ctx->pc == 0x304AC4u) {
        ctx->pc = 0x304AC4u;
            // 0x304ac4: 0x8e4411d4  lw          $a0, 0x11D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
        ctx->pc = 0x304AC8u;
        goto label_304ac8;
    }
    ctx->pc = 0x304AC0u;
    {
        const bool branch_taken_0x304ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ac0) {
            ctx->pc = 0x304AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304AC0u;
            // 0x304ac4: 0x8e4411d4  lw          $a0, 0x11D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304AE8u;
            goto label_304ae8;
        }
    }
    ctx->pc = 0x304AC8u;
label_304ac8:
    // 0x304ac8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x304ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_304acc:
    // 0x304acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304ad0:
    // 0x304ad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304ad4:
    // 0x304ad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304ad8:
    // 0x304ad8: 0xc0bdf9c  jal         func_2F7E70
label_304adc:
    if (ctx->pc == 0x304ADCu) {
        ctx->pc = 0x304ADCu;
            // 0x304adc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x304AE0u;
        goto label_304ae0;
    }
    ctx->pc = 0x304AD8u;
    SET_GPR_U32(ctx, 31, 0x304AE0u);
    ctx->pc = 0x304ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304AD8u;
            // 0x304adc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AE0u; }
        if (ctx->pc != 0x304AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AE0u; }
        if (ctx->pc != 0x304AE0u) { return; }
    }
    ctx->pc = 0x304AE0u;
label_304ae0:
    // 0x304ae0: 0x1000005e  b           . + 4 + (0x5E << 2)
label_304ae4:
    if (ctx->pc == 0x304AE4u) {
        ctx->pc = 0x304AE4u;
            // 0x304ae4: 0x92040001  lbu         $a0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x304AE8u;
        goto label_304ae8;
    }
    ctx->pc = 0x304AE0u;
    {
        const bool branch_taken_0x304ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304AE0u;
            // 0x304ae4: 0x92040001  lbu         $a0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ae0) {
            ctx->pc = 0x304C5Cu;
            goto label_304c5c;
        }
    }
    ctx->pc = 0x304AE8u;
label_304ae8:
    // 0x304ae8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x304ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_304aec:
    // 0x304aec: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_304af0:
    if (ctx->pc == 0x304AF0u) {
        ctx->pc = 0x304AF4u;
        goto label_304af4;
    }
    ctx->pc = 0x304AECu;
    {
        const bool branch_taken_0x304aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304aec) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304AF4u;
label_304af4:
    // 0x304af4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_304af8:
    // 0x304af8: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
label_304afc:
    if (ctx->pc == 0x304AFCu) {
        ctx->pc = 0x304B00u;
        goto label_304b00;
    }
    ctx->pc = 0x304AF8u;
    {
        const bool branch_taken_0x304af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304af8) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304B00u;
label_304b00:
    // 0x304b00: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_304b04:
    // 0x304b04: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x304b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_304b08:
    // 0x304b08: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_304b0c:
    if (ctx->pc == 0x304B0Cu) {
        ctx->pc = 0x304B10u;
        goto label_304b10;
    }
    ctx->pc = 0x304B08u;
    {
        const bool branch_taken_0x304b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304b08) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304B10u;
label_304b10:
    // 0x304b10: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x304b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_304b14:
    // 0x304b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304b18:
    // 0x304b18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304b1c:
    // 0x304b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304b20:
    // 0x304b20: 0xc0bdf9c  jal         func_2F7E70
label_304b24:
    if (ctx->pc == 0x304B24u) {
        ctx->pc = 0x304B24u;
            // 0x304b24: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x304B28u;
        goto label_304b28;
    }
    ctx->pc = 0x304B20u;
    SET_GPR_U32(ctx, 31, 0x304B28u);
    ctx->pc = 0x304B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304B20u;
            // 0x304b24: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B28u; }
        if (ctx->pc != 0x304B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B28u; }
        if (ctx->pc != 0x304B28u) { return; }
    }
    ctx->pc = 0x304B28u;
label_304b28:
    // 0x304b28: 0x1000004b  b           . + 4 + (0x4B << 2)
label_304b2c:
    if (ctx->pc == 0x304B2Cu) {
        ctx->pc = 0x304B30u;
        goto label_304b30;
    }
    ctx->pc = 0x304B28u;
    {
        const bool branch_taken_0x304b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b28) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304B30u;
label_304b30:
    // 0x304b30: 0xc142c1c  jal         func_50B070
label_304b34:
    if (ctx->pc == 0x304B34u) {
        ctx->pc = 0x304B38u;
        goto label_304b38;
    }
    ctx->pc = 0x304B30u;
    SET_GPR_U32(ctx, 31, 0x304B38u);
    ctx->pc = 0x50B070u;
    if (runtime->hasFunction(0x50B070u)) {
        auto targetFn = runtime->lookupFunction(0x50B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B38u; }
        if (ctx->pc != 0x304B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B070_0x50b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B38u; }
        if (ctx->pc != 0x304B38u) { return; }
    }
    ctx->pc = 0x304B38u;
label_304b38:
    // 0x304b38: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_304b3c:
    if (ctx->pc == 0x304B3Cu) {
        ctx->pc = 0x304B3Cu;
            // 0x304b3c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x304B40u;
        goto label_304b40;
    }
    ctx->pc = 0x304B38u;
    {
        const bool branch_taken_0x304b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b38) {
            ctx->pc = 0x304B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304B38u;
            // 0x304b3c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304B78u;
            goto label_304b78;
        }
    }
    ctx->pc = 0x304B40u;
label_304b40:
    // 0x304b40: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x304b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_304b44:
    // 0x304b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304b48:
    // 0x304b48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304b4c:
    // 0x304b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304b50:
    // 0x304b50: 0xc0bdf9c  jal         func_2F7E70
label_304b54:
    if (ctx->pc == 0x304B54u) {
        ctx->pc = 0x304B54u;
            // 0x304b54: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x304B58u;
        goto label_304b58;
    }
    ctx->pc = 0x304B50u;
    SET_GPR_U32(ctx, 31, 0x304B58u);
    ctx->pc = 0x304B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304B50u;
            // 0x304b54: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B58u; }
        if (ctx->pc != 0x304B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B58u; }
        if (ctx->pc != 0x304B58u) { return; }
    }
    ctx->pc = 0x304B58u;
label_304b58:
    // 0x304b58: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x304b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_304b5c:
    // 0x304b5c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x304b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_304b60:
    // 0x304b60: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x304b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_304b64:
    // 0x304b64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x304b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_304b68:
    // 0x304b68: 0x320f809  jalr        $t9
label_304b6c:
    if (ctx->pc == 0x304B6Cu) {
        ctx->pc = 0x304B6Cu;
            // 0x304b6c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x304B70u;
        goto label_304b70;
    }
    ctx->pc = 0x304B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x304B70u);
        ctx->pc = 0x304B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304B68u;
            // 0x304b6c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x304B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x304B70u; }
            if (ctx->pc != 0x304B70u) { return; }
        }
        }
    }
    ctx->pc = 0x304B70u;
label_304b70:
    // 0x304b70: 0x10000039  b           . + 4 + (0x39 << 2)
label_304b74:
    if (ctx->pc == 0x304B74u) {
        ctx->pc = 0x304B78u;
        goto label_304b78;
    }
    ctx->pc = 0x304B70u;
    {
        const bool branch_taken_0x304b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b70) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304B78u;
label_304b78:
    // 0x304b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304b7c:
    // 0x304b7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304b80:
    // 0x304b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304b84:
    // 0x304b84: 0xc0bdf9c  jal         func_2F7E70
label_304b88:
    if (ctx->pc == 0x304B88u) {
        ctx->pc = 0x304B88u;
            // 0x304b88: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x304B8Cu;
        goto label_304b8c;
    }
    ctx->pc = 0x304B84u;
    SET_GPR_U32(ctx, 31, 0x304B8Cu);
    ctx->pc = 0x304B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304B84u;
            // 0x304b88: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B8Cu; }
        if (ctx->pc != 0x304B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B8Cu; }
        if (ctx->pc != 0x304B8Cu) { return; }
    }
    ctx->pc = 0x304B8Cu;
label_304b8c:
    // 0x304b8c: 0x10000032  b           . + 4 + (0x32 << 2)
label_304b90:
    if (ctx->pc == 0x304B90u) {
        ctx->pc = 0x304B94u;
        goto label_304b94;
    }
    ctx->pc = 0x304B8Cu;
    {
        const bool branch_taken_0x304b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b8c) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304B94u;
label_304b94:
    // 0x304b94: 0xc0754b4  jal         func_1D52D0
label_304b98:
    if (ctx->pc == 0x304B98u) {
        ctx->pc = 0x304B9Cu;
        goto label_304b9c;
    }
    ctx->pc = 0x304B94u;
    SET_GPR_U32(ctx, 31, 0x304B9Cu);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B9Cu; }
        if (ctx->pc != 0x304B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B9Cu; }
        if (ctx->pc != 0x304B9Cu) { return; }
    }
    ctx->pc = 0x304B9Cu;
label_304b9c:
    // 0x304b9c: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x304b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_304ba0:
    // 0x304ba0: 0xc0bd780  jal         func_2F5E00
label_304ba4:
    if (ctx->pc == 0x304BA4u) {
        ctx->pc = 0x304BA4u;
            // 0x304ba4: 0x8c530030  lw          $s3, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->pc = 0x304BA8u;
        goto label_304ba8;
    }
    ctx->pc = 0x304BA0u;
    SET_GPR_U32(ctx, 31, 0x304BA8u);
    ctx->pc = 0x304BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304BA0u;
            // 0x304ba4: 0x8c530030  lw          $s3, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304BA8u; }
        if (ctx->pc != 0x304BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304BA8u; }
        if (ctx->pc != 0x304BA8u) { return; }
    }
    ctx->pc = 0x304BA8u;
label_304ba8:
    // 0x304ba8: 0x38440004  xori        $a0, $v0, 0x4
    ctx->pc = 0x304ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_304bac:
    // 0x304bac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x304bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_304bb0:
    // 0x304bb0: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x304bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_304bb4:
    // 0x304bb4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x304bb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_304bb8:
    // 0x304bb8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x304bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_304bbc:
    // 0x304bbc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_304bc0:
    if (ctx->pc == 0x304BC0u) {
        ctx->pc = 0x304BC0u;
            // 0x304bc0: 0x8e4411d4  lw          $a0, 0x11D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
        ctx->pc = 0x304BC4u;
        goto label_304bc4;
    }
    ctx->pc = 0x304BBCu;
    {
        const bool branch_taken_0x304bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304bbc) {
            ctx->pc = 0x304BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304BBCu;
            // 0x304bc0: 0x8e4411d4  lw          $a0, 0x11D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304C18u;
            goto label_304c18;
        }
    }
    ctx->pc = 0x304BC4u;
label_304bc4:
    // 0x304bc4: 0x3c033ebd  lui         $v1, 0x3EBD
    ctx->pc = 0x304bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
label_304bc8:
    // 0x304bc8: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x304bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_304bcc:
    // 0x304bcc: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x304bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304bd0:
    // 0x304bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304bd4:
    // 0x304bd4: 0x0  nop
    ctx->pc = 0x304bd4u;
    // NOP
label_304bd8:
    // 0x304bd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x304bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304bdc:
    // 0x304bdc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_304be0:
    if (ctx->pc == 0x304BE0u) {
        ctx->pc = 0x304BE4u;
        goto label_304be4;
    }
    ctx->pc = 0x304BDCu;
    {
        const bool branch_taken_0x304bdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304bdc) {
            ctx->pc = 0x304C14u;
            goto label_304c14;
        }
    }
    ctx->pc = 0x304BE4u;
label_304be4:
    // 0x304be4: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x304be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_304be8:
    // 0x304be8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x304be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_304bec:
    // 0x304bec: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_304bf0:
    if (ctx->pc == 0x304BF0u) {
        ctx->pc = 0x304BF4u;
        goto label_304bf4;
    }
    ctx->pc = 0x304BECu;
    {
        const bool branch_taken_0x304bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304bec) {
            ctx->pc = 0x304C14u;
            goto label_304c14;
        }
    }
    ctx->pc = 0x304BF4u;
label_304bf4:
    // 0x304bf4: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x304bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_304bf8:
    // 0x304bf8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x304bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_304bfc:
    // 0x304bfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304c00:
    // 0x304c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304c04:
    // 0x304c04: 0xc0bdf9c  jal         func_2F7E70
label_304c08:
    if (ctx->pc == 0x304C08u) {
        ctx->pc = 0x304C08u;
            // 0x304c08: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x304C0Cu;
        goto label_304c0c;
    }
    ctx->pc = 0x304C04u;
    SET_GPR_U32(ctx, 31, 0x304C0Cu);
    ctx->pc = 0x304C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304C04u;
            // 0x304c08: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304C0Cu; }
        if (ctx->pc != 0x304C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304C0Cu; }
        if (ctx->pc != 0x304C0Cu) { return; }
    }
    ctx->pc = 0x304C0Cu;
label_304c0c:
    // 0x304c0c: 0x10000012  b           . + 4 + (0x12 << 2)
label_304c10:
    if (ctx->pc == 0x304C10u) {
        ctx->pc = 0x304C14u;
        goto label_304c14;
    }
    ctx->pc = 0x304C0Cu;
    {
        const bool branch_taken_0x304c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304c0c) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304C14u;
label_304c14:
    // 0x304c14: 0x8e4411d4  lw          $a0, 0x11D4($s2)
    ctx->pc = 0x304c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
label_304c18:
    // 0x304c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x304c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_304c1c:
    // 0x304c1c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_304c20:
    if (ctx->pc == 0x304C20u) {
        ctx->pc = 0x304C24u;
        goto label_304c24;
    }
    ctx->pc = 0x304C1Cu;
    {
        const bool branch_taken_0x304c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c1c) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304C24u;
label_304c24:
    // 0x304c24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x304c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_304c28:
    // 0x304c28: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_304c2c:
    if (ctx->pc == 0x304C2Cu) {
        ctx->pc = 0x304C30u;
        goto label_304c30;
    }
    ctx->pc = 0x304C28u;
    {
        const bool branch_taken_0x304c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c28) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304C30u;
label_304c30:
    // 0x304c30: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x304c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_304c34:
    // 0x304c34: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x304c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_304c38:
    // 0x304c38: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_304c3c:
    if (ctx->pc == 0x304C3Cu) {
        ctx->pc = 0x304C40u;
        goto label_304c40;
    }
    ctx->pc = 0x304C38u;
    {
        const bool branch_taken_0x304c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c38) {
            ctx->pc = 0x304C58u;
            goto label_304c58;
        }
    }
    ctx->pc = 0x304C40u;
label_304c40:
    // 0x304c40: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x304c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_304c44:
    // 0x304c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304c48:
    // 0x304c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304c4c:
    // 0x304c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304c50:
    // 0x304c50: 0xc0bdf9c  jal         func_2F7E70
label_304c54:
    if (ctx->pc == 0x304C54u) {
        ctx->pc = 0x304C54u;
            // 0x304c54: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x304C58u;
        goto label_304c58;
    }
    ctx->pc = 0x304C50u;
    SET_GPR_U32(ctx, 31, 0x304C58u);
    ctx->pc = 0x304C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304C50u;
            // 0x304c54: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304C58u; }
        if (ctx->pc != 0x304C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304C58u; }
        if (ctx->pc != 0x304C58u) { return; }
    }
    ctx->pc = 0x304C58u;
label_304c58:
    // 0x304c58: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x304c58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_304c5c:
    // 0x304c5c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x304c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_304c60:
    // 0x304c60: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
label_304c64:
    if (ctx->pc == 0x304C64u) {
        ctx->pc = 0x304C64u;
            // 0x304c64: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x304C68u;
        goto label_304c68;
    }
    ctx->pc = 0x304C60u;
    {
        const bool branch_taken_0x304c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c60) {
            ctx->pc = 0x304C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304C60u;
            // 0x304c64: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304CB0u;
            goto label_304cb0;
        }
    }
    ctx->pc = 0x304C68u;
label_304c68:
    // 0x304c68: 0x8e4411d4  lw          $a0, 0x11D4($s2)
    ctx->pc = 0x304c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
label_304c6c:
    // 0x304c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x304c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_304c70:
    // 0x304c70: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_304c74:
    if (ctx->pc == 0x304C74u) {
        ctx->pc = 0x304C78u;
        goto label_304c78;
    }
    ctx->pc = 0x304C70u;
    {
        const bool branch_taken_0x304c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c70) {
            ctx->pc = 0x304CACu;
            goto label_304cac;
        }
    }
    ctx->pc = 0x304C78u;
label_304c78:
    // 0x304c78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x304c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_304c7c:
    // 0x304c7c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_304c80:
    if (ctx->pc == 0x304C80u) {
        ctx->pc = 0x304C84u;
        goto label_304c84;
    }
    ctx->pc = 0x304C7Cu;
    {
        const bool branch_taken_0x304c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c7c) {
            ctx->pc = 0x304CACu;
            goto label_304cac;
        }
    }
    ctx->pc = 0x304C84u;
label_304c84:
    // 0x304c84: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x304c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_304c88:
    // 0x304c88: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x304c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_304c8c:
    // 0x304c8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_304c90:
    if (ctx->pc == 0x304C90u) {
        ctx->pc = 0x304C94u;
        goto label_304c94;
    }
    ctx->pc = 0x304C8Cu;
    {
        const bool branch_taken_0x304c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304c8c) {
            ctx->pc = 0x304CACu;
            goto label_304cac;
        }
    }
    ctx->pc = 0x304C94u;
label_304c94:
    // 0x304c94: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x304c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_304c98:
    // 0x304c98: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x304c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_304c9c:
    // 0x304c9c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x304c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_304ca0:
    // 0x304ca0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x304ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_304ca4:
    // 0x304ca4: 0x320f809  jalr        $t9
label_304ca8:
    if (ctx->pc == 0x304CA8u) {
        ctx->pc = 0x304CA8u;
            // 0x304ca8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x304CACu;
        goto label_304cac;
    }
    ctx->pc = 0x304CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x304CACu);
        ctx->pc = 0x304CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304CA4u;
            // 0x304ca8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x304CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x304CACu; }
            if (ctx->pc != 0x304CACu) { return; }
        }
        }
    }
    ctx->pc = 0x304CACu;
label_304cac:
    // 0x304cac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x304cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_304cb0:
    // 0x304cb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x304cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304cb4:
    // 0x304cb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x304cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304cb8:
    // 0x304cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304cbc:
    // 0x304cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_304cc0:
    // 0x304cc0: 0x3e00008  jr          $ra
label_304cc4:
    if (ctx->pc == 0x304CC4u) {
        ctx->pc = 0x304CC4u;
            // 0x304cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x304CC8u;
        goto label_304cc8;
    }
    ctx->pc = 0x304CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304CC0u;
            // 0x304cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304CC8u;
label_304cc8:
    // 0x304cc8: 0x0  nop
    ctx->pc = 0x304cc8u;
    // NOP
label_304ccc:
    // 0x304ccc: 0x0  nop
    ctx->pc = 0x304cccu;
    // NOP
}
