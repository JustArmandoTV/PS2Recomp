#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239AF0
// Address: 0x239af0 - 0x239c00
void sub_00239AF0_0x239af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239AF0_0x239af0");
#endif

    switch (ctx->pc) {
        case 0x239af0u: goto label_239af0;
        case 0x239af4u: goto label_239af4;
        case 0x239af8u: goto label_239af8;
        case 0x239afcu: goto label_239afc;
        case 0x239b00u: goto label_239b00;
        case 0x239b04u: goto label_239b04;
        case 0x239b08u: goto label_239b08;
        case 0x239b0cu: goto label_239b0c;
        case 0x239b10u: goto label_239b10;
        case 0x239b14u: goto label_239b14;
        case 0x239b18u: goto label_239b18;
        case 0x239b1cu: goto label_239b1c;
        case 0x239b20u: goto label_239b20;
        case 0x239b24u: goto label_239b24;
        case 0x239b28u: goto label_239b28;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b30u: goto label_239b30;
        case 0x239b34u: goto label_239b34;
        case 0x239b38u: goto label_239b38;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b40u: goto label_239b40;
        case 0x239b44u: goto label_239b44;
        case 0x239b48u: goto label_239b48;
        case 0x239b4cu: goto label_239b4c;
        case 0x239b50u: goto label_239b50;
        case 0x239b54u: goto label_239b54;
        case 0x239b58u: goto label_239b58;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b60u: goto label_239b60;
        case 0x239b64u: goto label_239b64;
        case 0x239b68u: goto label_239b68;
        case 0x239b6cu: goto label_239b6c;
        case 0x239b70u: goto label_239b70;
        case 0x239b74u: goto label_239b74;
        case 0x239b78u: goto label_239b78;
        case 0x239b7cu: goto label_239b7c;
        case 0x239b80u: goto label_239b80;
        case 0x239b84u: goto label_239b84;
        case 0x239b88u: goto label_239b88;
        case 0x239b8cu: goto label_239b8c;
        case 0x239b90u: goto label_239b90;
        case 0x239b94u: goto label_239b94;
        case 0x239b98u: goto label_239b98;
        case 0x239b9cu: goto label_239b9c;
        case 0x239ba0u: goto label_239ba0;
        case 0x239ba4u: goto label_239ba4;
        case 0x239ba8u: goto label_239ba8;
        case 0x239bacu: goto label_239bac;
        case 0x239bb0u: goto label_239bb0;
        case 0x239bb4u: goto label_239bb4;
        case 0x239bb8u: goto label_239bb8;
        case 0x239bbcu: goto label_239bbc;
        case 0x239bc0u: goto label_239bc0;
        case 0x239bc4u: goto label_239bc4;
        case 0x239bc8u: goto label_239bc8;
        case 0x239bccu: goto label_239bcc;
        case 0x239bd0u: goto label_239bd0;
        case 0x239bd4u: goto label_239bd4;
        case 0x239bd8u: goto label_239bd8;
        case 0x239bdcu: goto label_239bdc;
        case 0x239be0u: goto label_239be0;
        case 0x239be4u: goto label_239be4;
        case 0x239be8u: goto label_239be8;
        case 0x239becu: goto label_239bec;
        case 0x239bf0u: goto label_239bf0;
        case 0x239bf4u: goto label_239bf4;
        case 0x239bf8u: goto label_239bf8;
        case 0x239bfcu: goto label_239bfc;
        default: break;
    }

    ctx->pc = 0x239af0u;

label_239af0:
    // 0x239af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239af4:
    // 0x239af4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239af8:
    // 0x239af8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_239afc:
    // 0x239afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239b00:
    // 0x239b00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239b04:
    // 0x239b04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239b08:
    // 0x239b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_239b0c:
    // 0x239b0c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x239b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_239b10:
    // 0x239b10: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x239b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_239b14:
    // 0x239b14: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239b18:
    // 0x239b18: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_239b1c:
    if (ctx->pc == 0x239B1Cu) {
        ctx->pc = 0x239B1Cu;
            // 0x239b1c: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->pc = 0x239B20u;
        goto label_239b20;
    }
    ctx->pc = 0x239B18u;
    {
        const bool branch_taken_0x239b18 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B18u;
            // 0x239b1c: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b18) {
            ctx->pc = 0x239B58u;
            goto label_239b58;
        }
    }
    ctx->pc = 0x239B20u;
label_239b20:
    // 0x239b20: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x239b20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239b24:
    // 0x239b24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239b28:
    // 0x239b28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_239b2c:
    // 0x239b2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239b30:
    // 0x239b30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_239b34:
    if (ctx->pc == 0x239B34u) {
        ctx->pc = 0x239B38u;
        goto label_239b38;
    }
    ctx->pc = 0x239B30u;
    {
        const bool branch_taken_0x239b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b30) {
            ctx->pc = 0x239B48u;
            goto label_239b48;
        }
    }
    ctx->pc = 0x239B38u;
label_239b38:
    // 0x239b38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239b3c:
    // 0x239b3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x239b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_239b40:
    // 0x239b40: 0x320f809  jalr        $t9
label_239b44:
    if (ctx->pc == 0x239B44u) {
        ctx->pc = 0x239B44u;
            // 0x239b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239B48u;
        goto label_239b48;
    }
    ctx->pc = 0x239B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239B48u);
        ctx->pc = 0x239B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B40u;
            // 0x239b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239B48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239B48u; }
            if (ctx->pc != 0x239B48u) { return; }
        }
        }
    }
    ctx->pc = 0x239B48u;
label_239b48:
    // 0x239b48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_239b4c:
    // 0x239b4c: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_239b50:
    if (ctx->pc == 0x239B50u) {
        ctx->pc = 0x239B50u;
            // 0x239b50: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239B54u;
        goto label_239b54;
    }
    ctx->pc = 0x239B4Cu;
    {
        const bool branch_taken_0x239b4c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B4Cu;
            // 0x239b50: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b4c) {
            ctx->pc = 0x239B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239b24;
        }
    }
    ctx->pc = 0x239B54u;
label_239b54:
    // 0x239b54: 0x0  nop
    ctx->pc = 0x239b54u;
    // NOP
label_239b58:
    // 0x239b58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239b5c:
    // 0x239b5c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x239b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239b60:
    // 0x239b60: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239b64:
    if (ctx->pc == 0x239B64u) {
        ctx->pc = 0x239B68u;
        goto label_239b68;
    }
    ctx->pc = 0x239B60u;
    {
        const bool branch_taken_0x239b60 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239b60) {
            ctx->pc = 0x239BD8u;
            goto label_239bd8;
        }
    }
    ctx->pc = 0x239B68u;
label_239b68:
    // 0x239b68: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239b68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239b6c:
    // 0x239b6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239b70:
    // 0x239b70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239b74:
    // 0x239b74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239b78:
    // 0x239b78: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_239b7c:
    if (ctx->pc == 0x239B7Cu) {
        ctx->pc = 0x239B80u;
        goto label_239b80;
    }
    ctx->pc = 0x239B78u;
    {
        const bool branch_taken_0x239b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239b78) {
            ctx->pc = 0x239BC8u;
            goto label_239bc8;
        }
    }
    ctx->pc = 0x239B80u;
label_239b80:
    // 0x239b80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239b84:
    // 0x239b84: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239b88:
    // 0x239b88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239b8c:
    // 0x239b8c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x239b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239b90:
    // 0x239b90: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239b94:
    if (ctx->pc == 0x239B94u) {
        ctx->pc = 0x239B94u;
            // 0x239b94: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239B98u;
        goto label_239b98;
    }
    ctx->pc = 0x239B90u;
    {
        const bool branch_taken_0x239b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B90u;
            // 0x239b94: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b90) {
            ctx->pc = 0x239BC8u;
            goto label_239bc8;
        }
    }
    ctx->pc = 0x239B98u;
label_239b98:
    // 0x239b98: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239b9c:
    // 0x239b9c: 0x0  nop
    ctx->pc = 0x239b9cu;
    // NOP
label_239ba0:
    // 0x239ba0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239ba4:
    // 0x239ba4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239ba8:
    // 0x239ba8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_239bac:
    // 0x239bac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239bb0:
    // 0x239bb0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239bb4:
    // 0x239bb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239bb8:
    // 0x239bb8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239bb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239bbc:
    // 0x239bbc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239bc0:
    if (ctx->pc == 0x239BC0u) {
        ctx->pc = 0x239BC0u;
            // 0x239bc0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239BC4u;
        goto label_239bc4;
    }
    ctx->pc = 0x239BBCu;
    {
        const bool branch_taken_0x239bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239BBCu;
            // 0x239bc0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239bbc) {
            ctx->pc = 0x239BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239ba0;
        }
    }
    ctx->pc = 0x239BC4u;
label_239bc4:
    // 0x239bc4: 0x0  nop
    ctx->pc = 0x239bc4u;
    // NOP
label_239bc8:
    // 0x239bc8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_239bcc:
    // 0x239bcc: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239bd0:
    if (ctx->pc == 0x239BD0u) {
        ctx->pc = 0x239BD0u;
            // 0x239bd0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239BD4u;
        goto label_239bd4;
    }
    ctx->pc = 0x239BCCu;
    {
        const bool branch_taken_0x239bcc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239BCCu;
            // 0x239bd0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239bcc) {
            ctx->pc = 0x239B6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239b6c;
        }
    }
    ctx->pc = 0x239BD4u;
label_239bd4:
    // 0x239bd4: 0x0  nop
    ctx->pc = 0x239bd4u;
    // NOP
label_239bd8:
    // 0x239bd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239bdc:
    // 0x239bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x239bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239be0:
    // 0x239be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239be4:
    // 0x239be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239be8:
    // 0x239be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_239bec:
    // 0x239bec: 0x3e00008  jr          $ra
label_239bf0:
    if (ctx->pc == 0x239BF0u) {
        ctx->pc = 0x239BF0u;
            // 0x239bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239BF4u;
        goto label_239bf4;
    }
    ctx->pc = 0x239BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239BECu;
            // 0x239bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239BF4u;
label_239bf4:
    // 0x239bf4: 0x0  nop
    ctx->pc = 0x239bf4u;
    // NOP
label_239bf8:
    // 0x239bf8: 0x0  nop
    ctx->pc = 0x239bf8u;
    // NOP
label_239bfc:
    // 0x239bfc: 0x0  nop
    ctx->pc = 0x239bfcu;
    // NOP
}
