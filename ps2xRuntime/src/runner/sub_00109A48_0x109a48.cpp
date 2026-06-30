#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109A48
// Address: 0x109a48 - 0x109c10
void sub_00109A48_0x109a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109A48_0x109a48");
#endif

    switch (ctx->pc) {
        case 0x109a48u: goto label_109a48;
        case 0x109a4cu: goto label_109a4c;
        case 0x109a50u: goto label_109a50;
        case 0x109a54u: goto label_109a54;
        case 0x109a58u: goto label_109a58;
        case 0x109a5cu: goto label_109a5c;
        case 0x109a60u: goto label_109a60;
        case 0x109a64u: goto label_109a64;
        case 0x109a68u: goto label_109a68;
        case 0x109a6cu: goto label_109a6c;
        case 0x109a70u: goto label_109a70;
        case 0x109a74u: goto label_109a74;
        case 0x109a78u: goto label_109a78;
        case 0x109a7cu: goto label_109a7c;
        case 0x109a80u: goto label_109a80;
        case 0x109a84u: goto label_109a84;
        case 0x109a88u: goto label_109a88;
        case 0x109a8cu: goto label_109a8c;
        case 0x109a90u: goto label_109a90;
        case 0x109a94u: goto label_109a94;
        case 0x109a98u: goto label_109a98;
        case 0x109a9cu: goto label_109a9c;
        case 0x109aa0u: goto label_109aa0;
        case 0x109aa4u: goto label_109aa4;
        case 0x109aa8u: goto label_109aa8;
        case 0x109aacu: goto label_109aac;
        case 0x109ab0u: goto label_109ab0;
        case 0x109ab4u: goto label_109ab4;
        case 0x109ab8u: goto label_109ab8;
        case 0x109abcu: goto label_109abc;
        case 0x109ac0u: goto label_109ac0;
        case 0x109ac4u: goto label_109ac4;
        case 0x109ac8u: goto label_109ac8;
        case 0x109accu: goto label_109acc;
        case 0x109ad0u: goto label_109ad0;
        case 0x109ad4u: goto label_109ad4;
        case 0x109ad8u: goto label_109ad8;
        case 0x109adcu: goto label_109adc;
        case 0x109ae0u: goto label_109ae0;
        case 0x109ae4u: goto label_109ae4;
        case 0x109ae8u: goto label_109ae8;
        case 0x109aecu: goto label_109aec;
        case 0x109af0u: goto label_109af0;
        case 0x109af4u: goto label_109af4;
        case 0x109af8u: goto label_109af8;
        case 0x109afcu: goto label_109afc;
        case 0x109b00u: goto label_109b00;
        case 0x109b04u: goto label_109b04;
        case 0x109b08u: goto label_109b08;
        case 0x109b0cu: goto label_109b0c;
        case 0x109b10u: goto label_109b10;
        case 0x109b14u: goto label_109b14;
        case 0x109b18u: goto label_109b18;
        case 0x109b1cu: goto label_109b1c;
        case 0x109b20u: goto label_109b20;
        case 0x109b24u: goto label_109b24;
        case 0x109b28u: goto label_109b28;
        case 0x109b2cu: goto label_109b2c;
        case 0x109b30u: goto label_109b30;
        case 0x109b34u: goto label_109b34;
        case 0x109b38u: goto label_109b38;
        case 0x109b3cu: goto label_109b3c;
        case 0x109b40u: goto label_109b40;
        case 0x109b44u: goto label_109b44;
        case 0x109b48u: goto label_109b48;
        case 0x109b4cu: goto label_109b4c;
        case 0x109b50u: goto label_109b50;
        case 0x109b54u: goto label_109b54;
        case 0x109b58u: goto label_109b58;
        case 0x109b5cu: goto label_109b5c;
        case 0x109b60u: goto label_109b60;
        case 0x109b64u: goto label_109b64;
        case 0x109b68u: goto label_109b68;
        case 0x109b6cu: goto label_109b6c;
        case 0x109b70u: goto label_109b70;
        case 0x109b74u: goto label_109b74;
        case 0x109b78u: goto label_109b78;
        case 0x109b7cu: goto label_109b7c;
        case 0x109b80u: goto label_109b80;
        case 0x109b84u: goto label_109b84;
        case 0x109b88u: goto label_109b88;
        case 0x109b8cu: goto label_109b8c;
        case 0x109b90u: goto label_109b90;
        case 0x109b94u: goto label_109b94;
        case 0x109b98u: goto label_109b98;
        case 0x109b9cu: goto label_109b9c;
        case 0x109ba0u: goto label_109ba0;
        case 0x109ba4u: goto label_109ba4;
        case 0x109ba8u: goto label_109ba8;
        case 0x109bacu: goto label_109bac;
        case 0x109bb0u: goto label_109bb0;
        case 0x109bb4u: goto label_109bb4;
        case 0x109bb8u: goto label_109bb8;
        case 0x109bbcu: goto label_109bbc;
        case 0x109bc0u: goto label_109bc0;
        case 0x109bc4u: goto label_109bc4;
        case 0x109bc8u: goto label_109bc8;
        case 0x109bccu: goto label_109bcc;
        case 0x109bd0u: goto label_109bd0;
        case 0x109bd4u: goto label_109bd4;
        case 0x109bd8u: goto label_109bd8;
        case 0x109bdcu: goto label_109bdc;
        case 0x109be0u: goto label_109be0;
        case 0x109be4u: goto label_109be4;
        case 0x109be8u: goto label_109be8;
        case 0x109becu: goto label_109bec;
        case 0x109bf0u: goto label_109bf0;
        case 0x109bf4u: goto label_109bf4;
        case 0x109bf8u: goto label_109bf8;
        case 0x109bfcu: goto label_109bfc;
        case 0x109c00u: goto label_109c00;
        case 0x109c04u: goto label_109c04;
        case 0x109c08u: goto label_109c08;
        case 0x109c0cu: goto label_109c0c;
        default: break;
    }

    ctx->pc = 0x109a48u;

label_109a48:
    // 0x109a48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x109a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_109a4c:
    // 0x109a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109a50:
    // 0x109a50: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x109a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_109a54:
    // 0x109a54: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x109a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_109a58:
    // 0x109a58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x109a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a5c:
    // 0x109a5c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x109a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_109a60:
    // 0x109a60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109a64:
    // 0x109a64: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x109a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_109a68:
    // 0x109a68: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x109a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_109a6c:
    // 0x109a6c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x109a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_109a70:
    // 0x109a70: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x109a70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_109a74:
    // 0x109a74: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_109a78:
    if (ctx->pc == 0x109A78u) {
        ctx->pc = 0x109A78u;
            // 0x109a78: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->pc = 0x109A7Cu;
        goto label_109a7c;
    }
    ctx->pc = 0x109A74u;
    {
        const bool branch_taken_0x109a74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x109A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A74u;
            // 0x109a78: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a74) {
            ctx->pc = 0x109A88u;
            goto label_109a88;
        }
    }
    ctx->pc = 0x109A7Cu;
label_109a7c:
    // 0x109a7c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x109a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_109a80:
    // 0x109a80: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_109a84:
    if (ctx->pc == 0x109A84u) {
        ctx->pc = 0x109A84u;
            // 0x109a84: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x109A88u;
        goto label_109a88;
    }
    ctx->pc = 0x109A80u;
    {
        const bool branch_taken_0x109a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a80) {
            ctx->pc = 0x109A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109A80u;
            // 0x109a84: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109A90u;
            goto label_109a90;
        }
    }
    ctx->pc = 0x109A88u;
label_109a88:
    // 0x109a88: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x109a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109a8c:
    // 0x109a8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x109a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_109a90:
    // 0x109a90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_109a94:
    if (ctx->pc == 0x109A94u) {
        ctx->pc = 0x109A94u;
            // 0x109a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109A98u;
        goto label_109a98;
    }
    ctx->pc = 0x109A90u;
    {
        const bool branch_taken_0x109a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A90u;
            // 0x109a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a90) {
            ctx->pc = 0x109AA4u;
            goto label_109aa4;
        }
    }
    ctx->pc = 0x109A98u;
label_109a98:
    // 0x109a98: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x109a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_109a9c:
    // 0x109a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109aa0:
    // 0x109aa0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x109aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_109aa4:
    // 0x109aa4: 0xc042588  jal         func_109620
label_109aa8:
    if (ctx->pc == 0x109AA8u) {
        ctx->pc = 0x109AA8u;
            // 0x109aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109AACu;
        goto label_109aac;
    }
    ctx->pc = 0x109AA4u;
    SET_GPR_U32(ctx, 31, 0x109AACu);
    ctx->pc = 0x109AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109AA4u;
            // 0x109aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109620u;
    if (runtime->hasFunction(0x109620u)) {
        auto targetFn = runtime->lookupFunction(0x109620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AACu; }
        if (ctx->pc != 0x109AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109620_0x109620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AACu; }
        if (ctx->pc != 0x109AACu) { return; }
    }
    ctx->pc = 0x109AACu;
label_109aac:
    // 0x109aac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_109ab0:
    if (ctx->pc == 0x109AB0u) {
        ctx->pc = 0x109AB0u;
            // 0x109ab0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->pc = 0x109AB4u;
        goto label_109ab4;
    }
    ctx->pc = 0x109AACu;
    {
        const bool branch_taken_0x109aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109aac) {
            ctx->pc = 0x109AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109AACu;
            // 0x109ab0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109AC8u;
            goto label_109ac8;
        }
    }
    ctx->pc = 0x109AB4u;
label_109ab4:
    // 0x109ab4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_109ab8:
    if (ctx->pc == 0x109AB8u) {
        ctx->pc = 0x109AB8u;
            // 0x109ab8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->pc = 0x109ABCu;
        goto label_109abc;
    }
    ctx->pc = 0x109AB4u;
    {
        const bool branch_taken_0x109ab4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x109ab4) {
            ctx->pc = 0x109AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109AB4u;
            // 0x109ab8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109AC8u;
            goto label_109ac8;
        }
    }
    ctx->pc = 0x109ABCu;
label_109abc:
    // 0x109abc: 0xc042862  jal         func_10A188
label_109ac0:
    if (ctx->pc == 0x109AC0u) {
        ctx->pc = 0x109AC0u;
            // 0x109ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109AC4u;
        goto label_109ac4;
    }
    ctx->pc = 0x109ABCu;
    SET_GPR_U32(ctx, 31, 0x109AC4u);
    ctx->pc = 0x109AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109ABCu;
            // 0x109ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A188u;
    if (runtime->hasFunction(0x10A188u)) {
        auto targetFn = runtime->lookupFunction(0x10A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AC4u; }
        if (ctx->pc != 0x109AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A188_0x10a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AC4u; }
        if (ctx->pc != 0x109AC4u) { return; }
    }
    ctx->pc = 0x109AC4u;
label_109ac4:
    // 0x109ac4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_109ac8:
    // 0x109ac8: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_109acc:
    if (ctx->pc == 0x109ACCu) {
        ctx->pc = 0x109ACCu;
            // 0x109acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109AD0u;
        goto label_109ad0;
    }
    ctx->pc = 0x109AC8u;
    {
        const bool branch_taken_0x109ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109AC8u;
            // 0x109acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ac8) {
            ctx->pc = 0x109BECu;
            goto label_109bec;
        }
    }
    ctx->pc = 0x109AD0u;
label_109ad0:
    // 0x109ad0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x109ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109ad4:
    // 0x109ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109ad8:
    // 0x109ad8: 0xc0422f2  jal         func_108BC8
label_109adc:
    if (ctx->pc == 0x109ADCu) {
        ctx->pc = 0x109ADCu;
            // 0x109adc: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->pc = 0x109AE0u;
        goto label_109ae0;
    }
    ctx->pc = 0x109AD8u;
    SET_GPR_U32(ctx, 31, 0x109AE0u);
    ctx->pc = 0x109ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109AD8u;
            // 0x109adc: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC8u;
    if (runtime->hasFunction(0x108BC8u)) {
        auto targetFn = runtime->lookupFunction(0x108BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AE0u; }
        if (ctx->pc != 0x109AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC8_0x108bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AE0u; }
        if (ctx->pc != 0x109AE0u) { return; }
    }
    ctx->pc = 0x109AE0u;
label_109ae0:
    // 0x109ae0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_109ae4:
    if (ctx->pc == 0x109AE4u) {
        ctx->pc = 0x109AE4u;
            // 0x109ae4: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->pc = 0x109AE8u;
        goto label_109ae8;
    }
    ctx->pc = 0x109AE0u;
    {
        const bool branch_taken_0x109ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109ae0) {
            ctx->pc = 0x109AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109AE0u;
            // 0x109ae4: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109AFCu;
            goto label_109afc;
        }
    }
    ctx->pc = 0x109AE8u;
label_109ae8:
    // 0x109ae8: 0xc042b36  jal         func_10ACD8
label_109aec:
    if (ctx->pc == 0x109AECu) {
        ctx->pc = 0x109AECu;
            // 0x109aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109AF0u;
        goto label_109af0;
    }
    ctx->pc = 0x109AE8u;
    SET_GPR_U32(ctx, 31, 0x109AF0u);
    ctx->pc = 0x109AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109AE8u;
            // 0x109aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (runtime->hasFunction(0x10ACD8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AF0u; }
        if (ctx->pc != 0x109AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACD8_0x10acd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109AF0u; }
        if (ctx->pc != 0x109AF0u) { return; }
    }
    ctx->pc = 0x109AF0u;
label_109af0:
    // 0x109af0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x109af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_109af4:
    // 0x109af4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_109af8:
    if (ctx->pc == 0x109AF8u) {
        ctx->pc = 0x109AF8u;
            // 0x109af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109AFCu;
        goto label_109afc;
    }
    ctx->pc = 0x109AF4u;
    {
        const bool branch_taken_0x109af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109AF4u;
            // 0x109af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109af4) {
            ctx->pc = 0x109BECu;
            goto label_109bec;
        }
    }
    ctx->pc = 0x109AFCu;
label_109afc:
    // 0x109afc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x109afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_109b00:
    // 0x109b00: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x109b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_109b04:
    // 0x109b04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x109b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_109b08:
    // 0x109b08: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x109b08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_109b0c:
    // 0x109b0c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_109b10:
    if (ctx->pc == 0x109B10u) {
        ctx->pc = 0x109B10u;
            // 0x109b10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x109B14u;
        goto label_109b14;
    }
    ctx->pc = 0x109B0Cu;
    {
        const bool branch_taken_0x109b0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x109B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B0Cu;
            // 0x109b10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b0c) {
            ctx->pc = 0x109BECu;
            goto label_109bec;
        }
    }
    ctx->pc = 0x109B14u;
label_109b14:
    // 0x109b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109b18:
    // 0x109b18: 0xc042588  jal         func_109620
label_109b1c:
    if (ctx->pc == 0x109B1Cu) {
        ctx->pc = 0x109B1Cu;
            // 0x109b1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x109B20u;
        goto label_109b20;
    }
    ctx->pc = 0x109B18u;
    SET_GPR_U32(ctx, 31, 0x109B20u);
    ctx->pc = 0x109B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109B18u;
            // 0x109b1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109620u;
    if (runtime->hasFunction(0x109620u)) {
        auto targetFn = runtime->lookupFunction(0x109620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B20u; }
        if (ctx->pc != 0x109B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109620_0x109620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B20u; }
        if (ctx->pc != 0x109B20u) { return; }
    }
    ctx->pc = 0x109B20u;
label_109b20:
    // 0x109b20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x109b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109b24:
    // 0x109b24: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x109b24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_109b28:
    // 0x109b28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_109b2c:
    if (ctx->pc == 0x109B2Cu) {
        ctx->pc = 0x109B2Cu;
            // 0x109b2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109B30u;
        goto label_109b30;
    }
    ctx->pc = 0x109B28u;
    {
        const bool branch_taken_0x109b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B28u;
            // 0x109b2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b28) {
            ctx->pc = 0x109B44u;
            goto label_109b44;
        }
    }
    ctx->pc = 0x109B30u;
label_109b30:
    // 0x109b30: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_109b34:
    if (ctx->pc == 0x109B34u) {
        ctx->pc = 0x109B34u;
            // 0x109b34: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->pc = 0x109B38u;
        goto label_109b38;
    }
    ctx->pc = 0x109B30u;
    {
        const bool branch_taken_0x109b30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x109b30) {
            ctx->pc = 0x109B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109B30u;
            // 0x109b34: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109B48u;
            goto label_109b48;
        }
    }
    ctx->pc = 0x109B38u;
label_109b38:
    // 0x109b38: 0xc042862  jal         func_10A188
label_109b3c:
    if (ctx->pc == 0x109B3Cu) {
        ctx->pc = 0x109B3Cu;
            // 0x109b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109B40u;
        goto label_109b40;
    }
    ctx->pc = 0x109B38u;
    SET_GPR_U32(ctx, 31, 0x109B40u);
    ctx->pc = 0x109B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109B38u;
            // 0x109b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A188u;
    if (runtime->hasFunction(0x10A188u)) {
        auto targetFn = runtime->lookupFunction(0x10A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B40u; }
        if (ctx->pc != 0x109B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A188_0x10a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B40u; }
        if (ctx->pc != 0x109B40u) { return; }
    }
    ctx->pc = 0x109B40u;
label_109b40:
    // 0x109b40: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x109b40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_109b44:
    // 0x109b44: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_109b48:
    // 0x109b48: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_109b4c:
    if (ctx->pc == 0x109B4Cu) {
        ctx->pc = 0x109B4Cu;
            // 0x109b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109B50u;
        goto label_109b50;
    }
    ctx->pc = 0x109B48u;
    {
        const bool branch_taken_0x109b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B48u;
            // 0x109b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b48) {
            ctx->pc = 0x109BECu;
            goto label_109bec;
        }
    }
    ctx->pc = 0x109B50u;
label_109b50:
    // 0x109b50: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x109b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_109b54:
    // 0x109b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109b58:
    // 0x109b58: 0xc042b66  jal         func_10AD98
label_109b5c:
    if (ctx->pc == 0x109B5Cu) {
        ctx->pc = 0x109B5Cu;
            // 0x109b5c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x109B60u;
        goto label_109b60;
    }
    ctx->pc = 0x109B58u;
    SET_GPR_U32(ctx, 31, 0x109B60u);
    ctx->pc = 0x109B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109B58u;
            // 0x109b5c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AD98u;
    if (runtime->hasFunction(0x10AD98u)) {
        auto targetFn = runtime->lookupFunction(0x10AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B60u; }
        if (ctx->pc != 0x109B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AD98_0x10ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B60u; }
        if (ctx->pc != 0x109B60u) { return; }
    }
    ctx->pc = 0x109B60u;
label_109b60:
    // 0x109b60: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_109b64:
    // 0x109b64: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x109b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_109b68:
    // 0x109b68: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x109b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_109b6c:
    // 0x109b6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109b70:
    // 0x109b70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x109b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_109b74:
    // 0x109b74: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x109b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_109b78:
    // 0x109b78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x109b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109b7c:
    // 0x109b7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_109b80:
    // 0x109b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109b84:
    // 0x109b84: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x109b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_109b88:
    // 0x109b88: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_109b8c:
    if (ctx->pc == 0x109B8Cu) {
        ctx->pc = 0x109B8Cu;
            // 0x109b8c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x109B90u;
        goto label_109b90;
    }
    ctx->pc = 0x109B88u;
    {
        const bool branch_taken_0x109b88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x109B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B88u;
            // 0x109b8c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b88) {
            ctx->pc = 0x109BE8u;
            goto label_109be8;
        }
    }
    ctx->pc = 0x109B90u;
label_109b90:
    // 0x109b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109b94:
    // 0x109b94: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_109b98:
    if (ctx->pc == 0x109B98u) {
        ctx->pc = 0x109B98u;
            // 0x109b98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x109B9Cu;
        goto label_109b9c;
    }
    ctx->pc = 0x109B94u;
    {
        const bool branch_taken_0x109b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B94u;
            // 0x109b98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b94) {
            ctx->pc = 0x109BE8u;
            goto label_109be8;
        }
    }
    ctx->pc = 0x109B9Cu;
label_109b9c:
    // 0x109b9c: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x109b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_109ba0:
    // 0x109ba0: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_109ba4:
    if (ctx->pc == 0x109BA4u) {
        ctx->pc = 0x109BA4u;
            // 0x109ba4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109BA8u;
        goto label_109ba8;
    }
    ctx->pc = 0x109BA0u;
    {
        const bool branch_taken_0x109ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BA0u;
            // 0x109ba4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ba0) {
            ctx->pc = 0x109BECu;
            goto label_109bec;
        }
    }
    ctx->pc = 0x109BA8u;
label_109ba8:
    // 0x109ba8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x109ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_109bac:
    // 0x109bac: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_109bb0:
    if (ctx->pc == 0x109BB0u) {
        ctx->pc = 0x109BB0u;
            // 0x109bb0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x109BB4u;
        goto label_109bb4;
    }
    ctx->pc = 0x109BACu;
    {
        const bool branch_taken_0x109bac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BACu;
            // 0x109bb0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bac) {
            ctx->pc = 0x109BF0u;
            goto label_109bf0;
        }
    }
    ctx->pc = 0x109BB4u;
label_109bb4:
    // 0x109bb4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_109bb8:
    // 0x109bb8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x109bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109bbc:
    // 0x109bbc: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x109bbcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109bc0:
    // 0x109bc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109bc4:
    // 0x109bc4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x109bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_109bc8:
    // 0x109bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109bcc:
    // 0x109bcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_109bd0:
    // 0x109bd0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x109bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_109bd4:
    // 0x109bd4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x109bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_109bd8:
    // 0x109bd8: 0xe0f809  jalr        $a3
label_109bdc:
    if (ctx->pc == 0x109BDCu) {
        ctx->pc = 0x109BDCu;
            // 0x109bdc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x109BE0u;
        goto label_109be0;
    }
    ctx->pc = 0x109BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x109BE0u);
        ctx->pc = 0x109BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BD8u;
            // 0x109bdc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x109BE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x109BE0u; }
            if (ctx->pc != 0x109BE0u) { return; }
        }
        }
    }
    ctx->pc = 0x109BE0u;
label_109be0:
    // 0x109be0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x109be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109be4:
    // 0x109be4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109be8:
    // 0x109be8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x109be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_109bec:
    // 0x109bec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x109becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_109bf0:
    // 0x109bf0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x109bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_109bf4:
    // 0x109bf4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x109bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_109bf8:
    // 0x109bf8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x109bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_109bfc:
    // 0x109bfc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x109bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_109c00:
    // 0x109c00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x109c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109c04:
    // 0x109c04: 0x3e00008  jr          $ra
label_109c08:
    if (ctx->pc == 0x109C08u) {
        ctx->pc = 0x109C08u;
            // 0x109c08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x109C0Cu;
        goto label_109c0c;
    }
    ctx->pc = 0x109C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C04u;
            // 0x109c08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109C0Cu;
label_109c0c:
    // 0x109c0c: 0x0  nop
    ctx->pc = 0x109c0cu;
    // NOP
}
