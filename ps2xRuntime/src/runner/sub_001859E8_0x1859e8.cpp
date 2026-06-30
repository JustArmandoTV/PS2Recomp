#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001859E8
// Address: 0x1859e8 - 0x185b18
void sub_001859E8_0x1859e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001859E8_0x1859e8");
#endif

    switch (ctx->pc) {
        case 0x1859e8u: goto label_1859e8;
        case 0x1859ecu: goto label_1859ec;
        case 0x1859f0u: goto label_1859f0;
        case 0x1859f4u: goto label_1859f4;
        case 0x1859f8u: goto label_1859f8;
        case 0x1859fcu: goto label_1859fc;
        case 0x185a00u: goto label_185a00;
        case 0x185a04u: goto label_185a04;
        case 0x185a08u: goto label_185a08;
        case 0x185a0cu: goto label_185a0c;
        case 0x185a10u: goto label_185a10;
        case 0x185a14u: goto label_185a14;
        case 0x185a18u: goto label_185a18;
        case 0x185a1cu: goto label_185a1c;
        case 0x185a20u: goto label_185a20;
        case 0x185a24u: goto label_185a24;
        case 0x185a28u: goto label_185a28;
        case 0x185a2cu: goto label_185a2c;
        case 0x185a30u: goto label_185a30;
        case 0x185a34u: goto label_185a34;
        case 0x185a38u: goto label_185a38;
        case 0x185a3cu: goto label_185a3c;
        case 0x185a40u: goto label_185a40;
        case 0x185a44u: goto label_185a44;
        case 0x185a48u: goto label_185a48;
        case 0x185a4cu: goto label_185a4c;
        case 0x185a50u: goto label_185a50;
        case 0x185a54u: goto label_185a54;
        case 0x185a58u: goto label_185a58;
        case 0x185a5cu: goto label_185a5c;
        case 0x185a60u: goto label_185a60;
        case 0x185a64u: goto label_185a64;
        case 0x185a68u: goto label_185a68;
        case 0x185a6cu: goto label_185a6c;
        case 0x185a70u: goto label_185a70;
        case 0x185a74u: goto label_185a74;
        case 0x185a78u: goto label_185a78;
        case 0x185a7cu: goto label_185a7c;
        case 0x185a80u: goto label_185a80;
        case 0x185a84u: goto label_185a84;
        case 0x185a88u: goto label_185a88;
        case 0x185a8cu: goto label_185a8c;
        case 0x185a90u: goto label_185a90;
        case 0x185a94u: goto label_185a94;
        case 0x185a98u: goto label_185a98;
        case 0x185a9cu: goto label_185a9c;
        case 0x185aa0u: goto label_185aa0;
        case 0x185aa4u: goto label_185aa4;
        case 0x185aa8u: goto label_185aa8;
        case 0x185aacu: goto label_185aac;
        case 0x185ab0u: goto label_185ab0;
        case 0x185ab4u: goto label_185ab4;
        case 0x185ab8u: goto label_185ab8;
        case 0x185abcu: goto label_185abc;
        case 0x185ac0u: goto label_185ac0;
        case 0x185ac4u: goto label_185ac4;
        case 0x185ac8u: goto label_185ac8;
        case 0x185accu: goto label_185acc;
        case 0x185ad0u: goto label_185ad0;
        case 0x185ad4u: goto label_185ad4;
        case 0x185ad8u: goto label_185ad8;
        case 0x185adcu: goto label_185adc;
        case 0x185ae0u: goto label_185ae0;
        case 0x185ae4u: goto label_185ae4;
        case 0x185ae8u: goto label_185ae8;
        case 0x185aecu: goto label_185aec;
        case 0x185af0u: goto label_185af0;
        case 0x185af4u: goto label_185af4;
        case 0x185af8u: goto label_185af8;
        case 0x185afcu: goto label_185afc;
        case 0x185b00u: goto label_185b00;
        case 0x185b04u: goto label_185b04;
        case 0x185b08u: goto label_185b08;
        case 0x185b0cu: goto label_185b0c;
        case 0x185b10u: goto label_185b10;
        case 0x185b14u: goto label_185b14;
        default: break;
    }

    ctx->pc = 0x1859e8u;

label_1859e8:
    // 0x1859e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1859e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1859ec:
    // 0x1859ec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1859f0:
    if (ctx->pc == 0x1859F0u) {
        ctx->pc = 0x1859F0u;
            // 0x1859f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1859F4u;
        goto label_1859f4;
    }
    ctx->pc = 0x1859ECu;
    {
        const bool branch_taken_0x1859ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1859ECu;
            // 0x1859f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859ec) {
            ctx->pc = 0x185A10u;
            goto label_185a10;
        }
    }
    ctx->pc = 0x1859F4u;
label_1859f4:
    // 0x1859f4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1859f8:
    // 0x1859f8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1859f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1859fc:
    // 0x1859fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1859fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185a00:
    // 0x185a00: 0x24847b88  addiu       $a0, $a0, 0x7B88
    ctx->pc = 0x185a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31624));
label_185a04:
    // 0x185a04: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x185a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
label_185a08:
    // 0x185a08: 0x806151c  j           func_185470
label_185a0c:
    if (ctx->pc == 0x185A0Cu) {
        ctx->pc = 0x185A0Cu;
            // 0x185a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185A10u;
        goto label_185a10;
    }
    ctx->pc = 0x185A08u;
    ctx->pc = 0x185A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185A08u;
            // 0x185a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185A10u;
label_185a10:
    // 0x185a10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_185a14:
    // 0x185a14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_185a18:
    if (ctx->pc == 0x185A18u) {
        ctx->pc = 0x185A18u;
            // 0x185a18: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x185A1Cu;
        goto label_185a1c;
    }
    ctx->pc = 0x185A14u;
    {
        const bool branch_taken_0x185a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a14) {
            ctx->pc = 0x185A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185A14u;
            // 0x185a18: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185A38u;
            goto label_185a38;
        }
    }
    ctx->pc = 0x185A1Cu;
label_185a1c:
    // 0x185a1c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185a20:
    // 0x185a20: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185a24:
    // 0x185a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185a28:
    // 0x185a28: 0x24847b98  addiu       $a0, $a0, 0x7B98
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31640));
label_185a2c:
    // 0x185a2c: 0x24a57b68  addiu       $a1, $a1, 0x7B68
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31592));
label_185a30:
    // 0x185a30: 0x806151c  j           func_185470
label_185a34:
    if (ctx->pc == 0x185A34u) {
        ctx->pc = 0x185A34u;
            // 0x185a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185A38u;
        goto label_185a38;
    }
    ctx->pc = 0x185A30u;
    ctx->pc = 0x185A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185A30u;
            // 0x185a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185A38u;
label_185a38:
    // 0x185a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185a3c:
    // 0x185a3c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x185a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_185a40:
    // 0x185a40: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x185a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_185a44:
    // 0x185a44: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x185a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_185a48:
    // 0x185a48: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x185a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_185a4c:
    // 0x185a4c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x185a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_185a50:
    // 0x185a50: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x185a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_185a54:
    // 0x185a54: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x185a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_185a58:
    // 0x185a58: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x185a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_185a5c:
    // 0x185a5c: 0x3e00008  jr          $ra
label_185a60:
    if (ctx->pc == 0x185A60u) {
        ctx->pc = 0x185A60u;
            // 0x185a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185A64u;
        goto label_185a64;
    }
    ctx->pc = 0x185A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A5Cu;
            // 0x185a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185A64u;
label_185a64:
    // 0x185a64: 0x0  nop
    ctx->pc = 0x185a64u;
    // NOP
label_185a68:
    // 0x185a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_185a6c:
    // 0x185a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185a70:
    // 0x185a70: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_185a74:
    if (ctx->pc == 0x185A74u) {
        ctx->pc = 0x185A74u;
            // 0x185a74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x185A78u;
        goto label_185a78;
    }
    ctx->pc = 0x185A70u;
    {
        const bool branch_taken_0x185a70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x185A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A70u;
            // 0x185a74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a70) {
            ctx->pc = 0x185A80u;
            goto label_185a80;
        }
    }
    ctx->pc = 0x185A78u;
label_185a78:
    // 0x185a78: 0x1000000b  b           . + 4 + (0xB << 2)
label_185a7c:
    if (ctx->pc == 0x185A7Cu) {
        ctx->pc = 0x185A7Cu;
            // 0x185a7c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x185A80u;
        goto label_185a80;
    }
    ctx->pc = 0x185A78u;
    {
        const bool branch_taken_0x185a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A78u;
            // 0x185a7c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a78) {
            ctx->pc = 0x185AA8u;
            goto label_185aa8;
        }
    }
    ctx->pc = 0x185A80u;
label_185a80:
    // 0x185a80: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_185a84:
    if (ctx->pc == 0x185A84u) {
        ctx->pc = 0x185A84u;
            // 0x185a84: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x185A88u;
        goto label_185a88;
    }
    ctx->pc = 0x185A80u;
    {
        const bool branch_taken_0x185a80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a80) {
            ctx->pc = 0x185A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185A80u;
            // 0x185a84: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185A90u;
            goto label_185a90;
        }
    }
    ctx->pc = 0x185A88u;
label_185a88:
    // 0x185a88: 0x10000007  b           . + 4 + (0x7 << 2)
label_185a8c:
    if (ctx->pc == 0x185A8Cu) {
        ctx->pc = 0x185A8Cu;
            // 0x185a8c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x185A90u;
        goto label_185a90;
    }
    ctx->pc = 0x185A88u;
    {
        const bool branch_taken_0x185a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A88u;
            // 0x185a8c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a88) {
            ctx->pc = 0x185AA8u;
            goto label_185aa8;
        }
    }
    ctx->pc = 0x185A90u;
label_185a90:
    // 0x185a90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_185a94:
    if (ctx->pc == 0x185A94u) {
        ctx->pc = 0x185A94u;
            // 0x185a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185A98u;
        goto label_185a98;
    }
    ctx->pc = 0x185A90u;
    {
        const bool branch_taken_0x185a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a90) {
            ctx->pc = 0x185A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185A90u;
            // 0x185a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185AA8u;
            goto label_185aa8;
        }
    }
    ctx->pc = 0x185A98u;
label_185a98:
    // 0x185a98: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_185a9c:
    // 0x185a9c: 0x40f809  jalr        $v0
label_185aa0:
    if (ctx->pc == 0x185AA0u) {
        ctx->pc = 0x185AA0u;
            // 0x185aa0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x185AA4u;
        goto label_185aa4;
    }
    ctx->pc = 0x185A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185AA4u);
        ctx->pc = 0x185AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185A9Cu;
            // 0x185aa0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185AA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185AA4u; }
            if (ctx->pc != 0x185AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x185AA4u;
label_185aa4:
    // 0x185aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185aa8:
    // 0x185aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185aac:
    // 0x185aac: 0x3e00008  jr          $ra
label_185ab0:
    if (ctx->pc == 0x185AB0u) {
        ctx->pc = 0x185AB0u;
            // 0x185ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185AB4u;
        goto label_185ab4;
    }
    ctx->pc = 0x185AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185AACu;
            // 0x185ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185AB4u;
label_185ab4:
    // 0x185ab4: 0x0  nop
    ctx->pc = 0x185ab4u;
    // NOP
label_185ab8:
    // 0x185ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_185abc:
    // 0x185abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185ac0:
    // 0x185ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185ac4:
    // 0x185ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185ac8:
    // 0x185ac8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185acc:
    // 0x185acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x185accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_185ad0:
    // 0x185ad0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x185ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185ad4:
    // 0x185ad4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_185ad8:
    // 0x185ad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_185adc:
    // 0x185adc: 0xc06127c  jal         func_1849F0
label_185ae0:
    if (ctx->pc == 0x185AE0u) {
        ctx->pc = 0x185AE0u;
            // 0x185ae0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185AE4u;
        goto label_185ae4;
    }
    ctx->pc = 0x185ADCu;
    SET_GPR_U32(ctx, 31, 0x185AE4u);
    ctx->pc = 0x185AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185ADCu;
            // 0x185ae0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AE4u; }
        if (ctx->pc != 0x185AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AE4u; }
        if (ctx->pc != 0x185AE4u) { return; }
    }
    ctx->pc = 0x185AE4u;
label_185ae4:
    // 0x185ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185ae8:
    // 0x185ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185aec:
    // 0x185aec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x185aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185af0:
    // 0x185af0: 0xc0616c6  jal         func_185B18
label_185af4:
    if (ctx->pc == 0x185AF4u) {
        ctx->pc = 0x185AF4u;
            // 0x185af4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185AF8u;
        goto label_185af8;
    }
    ctx->pc = 0x185AF0u;
    SET_GPR_U32(ctx, 31, 0x185AF8u);
    ctx->pc = 0x185AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185AF0u;
            // 0x185af4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185B18u;
    if (runtime->hasFunction(0x185B18u)) {
        auto targetFn = runtime->lookupFunction(0x185B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AF8u; }
        if (ctx->pc != 0x185AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185B18_0x185b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AF8u; }
        if (ctx->pc != 0x185AF8u) { return; }
    }
    ctx->pc = 0x185AF8u;
label_185af8:
    // 0x185af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185afc:
    // 0x185afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185b00:
    // 0x185b00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185b04:
    // 0x185b04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x185b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_185b08:
    // 0x185b08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185b0c:
    // 0x185b0c: 0x8061282  j           func_184A08
label_185b10:
    if (ctx->pc == 0x185B10u) {
        ctx->pc = 0x185B10u;
            // 0x185b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x185B14u;
        goto label_185b14;
    }
    ctx->pc = 0x185B0Cu;
    ctx->pc = 0x185B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B0Cu;
            // 0x185b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185B14u;
label_185b14:
    // 0x185b14: 0x0  nop
    ctx->pc = 0x185b14u;
    // NOP
}
