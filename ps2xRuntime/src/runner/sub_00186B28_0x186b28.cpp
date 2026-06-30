#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186B28
// Address: 0x186b28 - 0x186ca0
void sub_00186B28_0x186b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186B28_0x186b28");
#endif

    switch (ctx->pc) {
        case 0x186b28u: goto label_186b28;
        case 0x186b2cu: goto label_186b2c;
        case 0x186b30u: goto label_186b30;
        case 0x186b34u: goto label_186b34;
        case 0x186b38u: goto label_186b38;
        case 0x186b3cu: goto label_186b3c;
        case 0x186b40u: goto label_186b40;
        case 0x186b44u: goto label_186b44;
        case 0x186b48u: goto label_186b48;
        case 0x186b4cu: goto label_186b4c;
        case 0x186b50u: goto label_186b50;
        case 0x186b54u: goto label_186b54;
        case 0x186b58u: goto label_186b58;
        case 0x186b5cu: goto label_186b5c;
        case 0x186b60u: goto label_186b60;
        case 0x186b64u: goto label_186b64;
        case 0x186b68u: goto label_186b68;
        case 0x186b6cu: goto label_186b6c;
        case 0x186b70u: goto label_186b70;
        case 0x186b74u: goto label_186b74;
        case 0x186b78u: goto label_186b78;
        case 0x186b7cu: goto label_186b7c;
        case 0x186b80u: goto label_186b80;
        case 0x186b84u: goto label_186b84;
        case 0x186b88u: goto label_186b88;
        case 0x186b8cu: goto label_186b8c;
        case 0x186b90u: goto label_186b90;
        case 0x186b94u: goto label_186b94;
        case 0x186b98u: goto label_186b98;
        case 0x186b9cu: goto label_186b9c;
        case 0x186ba0u: goto label_186ba0;
        case 0x186ba4u: goto label_186ba4;
        case 0x186ba8u: goto label_186ba8;
        case 0x186bacu: goto label_186bac;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bb8u: goto label_186bb8;
        case 0x186bbcu: goto label_186bbc;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bc4u: goto label_186bc4;
        case 0x186bc8u: goto label_186bc8;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd0u: goto label_186bd0;
        case 0x186bd4u: goto label_186bd4;
        case 0x186bd8u: goto label_186bd8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186be0u: goto label_186be0;
        case 0x186be4u: goto label_186be4;
        case 0x186be8u: goto label_186be8;
        case 0x186becu: goto label_186bec;
        case 0x186bf0u: goto label_186bf0;
        case 0x186bf4u: goto label_186bf4;
        case 0x186bf8u: goto label_186bf8;
        case 0x186bfcu: goto label_186bfc;
        case 0x186c00u: goto label_186c00;
        case 0x186c04u: goto label_186c04;
        case 0x186c08u: goto label_186c08;
        case 0x186c0cu: goto label_186c0c;
        case 0x186c10u: goto label_186c10;
        case 0x186c14u: goto label_186c14;
        case 0x186c18u: goto label_186c18;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c20u: goto label_186c20;
        case 0x186c24u: goto label_186c24;
        case 0x186c28u: goto label_186c28;
        case 0x186c2cu: goto label_186c2c;
        case 0x186c30u: goto label_186c30;
        case 0x186c34u: goto label_186c34;
        case 0x186c38u: goto label_186c38;
        case 0x186c3cu: goto label_186c3c;
        case 0x186c40u: goto label_186c40;
        case 0x186c44u: goto label_186c44;
        case 0x186c48u: goto label_186c48;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c50u: goto label_186c50;
        case 0x186c54u: goto label_186c54;
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        default: break;
    }

    ctx->pc = 0x186b28u;

label_186b28:
    // 0x186b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_186b2c:
    // 0x186b2c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_186b30:
    if (ctx->pc == 0x186B30u) {
        ctx->pc = 0x186B30u;
            // 0x186b30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x186B34u;
        goto label_186b34;
    }
    ctx->pc = 0x186B2Cu;
    {
        const bool branch_taken_0x186b2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B2Cu;
            // 0x186b30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b2c) {
            ctx->pc = 0x186B50u;
            goto label_186b50;
        }
    }
    ctx->pc = 0x186B34u;
label_186b34:
    // 0x186b34: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186b38:
    // 0x186b38: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186b3c:
    // 0x186b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186b40:
    // 0x186b40: 0x24847d80  addiu       $a0, $a0, 0x7D80
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32128));
label_186b44:
    // 0x186b44: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x186b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
label_186b48:
    // 0x186b48: 0x80618a8  j           func_1862A0
label_186b4c:
    if (ctx->pc == 0x186B4Cu) {
        ctx->pc = 0x186B4Cu;
            // 0x186b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186B50u;
        goto label_186b50;
    }
    ctx->pc = 0x186B48u;
    ctx->pc = 0x186B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B48u;
            // 0x186b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186B50u;
label_186b50:
    // 0x186b50: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x186b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_186b54:
    // 0x186b54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_186b58:
    if (ctx->pc == 0x186B58u) {
        ctx->pc = 0x186B58u;
            // 0x186b58: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x186B5Cu;
        goto label_186b5c;
    }
    ctx->pc = 0x186B54u;
    {
        const bool branch_taken_0x186b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B54u;
            // 0x186b58: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b54) {
            ctx->pc = 0x186B78u;
            goto label_186b78;
        }
    }
    ctx->pc = 0x186B5Cu;
label_186b5c:
    // 0x186b5c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186b60:
    // 0x186b60: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186b64:
    // 0x186b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186b68:
    // 0x186b68: 0x24847d90  addiu       $a0, $a0, 0x7D90
    ctx->pc = 0x186b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32144));
label_186b6c:
    // 0x186b6c: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_186b70:
    // 0x186b70: 0x80618a8  j           func_1862A0
label_186b74:
    if (ctx->pc == 0x186B74u) {
        ctx->pc = 0x186B74u;
            // 0x186b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186B78u;
        goto label_186b78;
    }
    ctx->pc = 0x186B70u;
    ctx->pc = 0x186B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B70u;
            // 0x186b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186B78u;
label_186b78:
    // 0x186b78: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_186b7c:
    if (ctx->pc == 0x186B7Cu) {
        ctx->pc = 0x186B7Cu;
            // 0x186b7c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = 0x186B80u;
        goto label_186b80;
    }
    ctx->pc = 0x186B78u;
    {
        const bool branch_taken_0x186b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b78) {
            ctx->pc = 0x186B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186B78u;
            // 0x186b7c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186C0Cu;
            goto label_186c0c;
        }
    }
    ctx->pc = 0x186B80u;
label_186b80:
    // 0x186b80: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x186b80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_186b84:
    // 0x186b84: 0x19200030  blez        $t1, . + 4 + (0x30 << 2)
label_186b88:
    if (ctx->pc == 0x186B88u) {
        ctx->pc = 0x186B88u;
            // 0x186b88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x186B8Cu;
        goto label_186b8c;
    }
    ctx->pc = 0x186B84u;
    {
        const bool branch_taken_0x186b84 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x186B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B84u;
            // 0x186b88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b84) {
            ctx->pc = 0x186C48u;
            goto label_186c48;
        }
    }
    ctx->pc = 0x186B8Cu;
label_186b8c:
    // 0x186b8c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x186b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186b90:
    // 0x186b90: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
label_186b94:
    if (ctx->pc == 0x186B94u) {
        ctx->pc = 0x186B94u;
            // 0x186b94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x186B98u;
        goto label_186b98;
    }
    ctx->pc = 0x186B90u;
    {
        const bool branch_taken_0x186b90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B90u;
            // 0x186b94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b90) {
            ctx->pc = 0x186C48u;
            goto label_186c48;
        }
    }
    ctx->pc = 0x186B98u;
label_186b98:
    // 0x186b98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x186b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_186b9c:
    // 0x186b9c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x186b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_186ba0:
    // 0x186ba0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x186ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_186ba4:
    // 0x186ba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_186ba8:
    if (ctx->pc == 0x186BA8u) {
        ctx->pc = 0x186BA8u;
            // 0x186ba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186BACu;
        goto label_186bac;
    }
    ctx->pc = 0x186BA4u;
    {
        const bool branch_taken_0x186ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186BA4u;
            // 0x186ba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ba4) {
            ctx->pc = 0x186BC8u;
            goto label_186bc8;
        }
    }
    ctx->pc = 0x186BACu;
label_186bac:
    // 0x186bac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x186bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186bb0:
    // 0x186bb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_186bb4:
    // 0x186bb4: 0x0  nop
    ctx->pc = 0x186bb4u;
    // NOP
label_186bb8:
    // 0x186bb8: 0x0  nop
    ctx->pc = 0x186bb8u;
    // NOP
label_186bbc:
    // 0x186bbc: 0x0  nop
    ctx->pc = 0x186bbcu;
    // NOP
label_186bc0:
    // 0x186bc0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_186bc4:
    if (ctx->pc == 0x186BC4u) {
        ctx->pc = 0x186BC4u;
            // 0x186bc4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186BC8u;
        goto label_186bc8;
    }
    ctx->pc = 0x186BC0u;
    {
        const bool branch_taken_0x186bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186BC0u;
            // 0x186bc4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bc0) {
            ctx->pc = 0x186BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_186bac;
        }
    }
    ctx->pc = 0x186BC8u;
label_186bc8:
    // 0x186bc8: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x186bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_186bcc:
    // 0x186bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186bd0:
    // 0x186bd0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_186bd4:
    if (ctx->pc == 0x186BD4u) {
        ctx->pc = 0x186BD4u;
            // 0x186bd4: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x186BD8u;
        goto label_186bd8;
    }
    ctx->pc = 0x186BD0u;
    {
        const bool branch_taken_0x186bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186bd0) {
            ctx->pc = 0x186BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186BD0u;
            // 0x186bd4: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186C00u;
            goto label_186c00;
        }
    }
    ctx->pc = 0x186BD8u;
label_186bd8:
    // 0x186bd8: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
label_186bdc:
    if (ctx->pc == 0x186BDCu) {
        ctx->pc = 0x186BDCu;
            // 0x186bdc: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x186BE0u;
        goto label_186be0;
    }
    ctx->pc = 0x186BD8u;
    {
        const bool branch_taken_0x186bd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bd8) {
            ctx->pc = 0x186BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186BD8u;
            // 0x186bdc: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186C00u;
            goto label_186c00;
        }
    }
    ctx->pc = 0x186BE0u;
label_186be0:
    // 0x186be0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x186be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_186be4:
    // 0x186be4: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x186be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186be8:
    // 0x186be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_186bec:
    // 0x186bec: 0x54480004  bnel        $v0, $t0, . + 4 + (0x4 << 2)
label_186bf0:
    if (ctx->pc == 0x186BF0u) {
        ctx->pc = 0x186BF0u;
            // 0x186bf0: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x186BF4u;
        goto label_186bf4;
    }
    ctx->pc = 0x186BECu;
    {
        const bool branch_taken_0x186bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x186bec) {
            ctx->pc = 0x186BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186BECu;
            // 0x186bf0: 0x8c870014  lw          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186C00u;
            goto label_186c00;
        }
    }
    ctx->pc = 0x186BF4u;
label_186bf4:
    // 0x186bf4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x186bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_186bf8:
    // 0x186bf8: 0x10000012  b           . + 4 + (0x12 << 2)
label_186bfc:
    if (ctx->pc == 0x186BFCu) {
        ctx->pc = 0x186BFCu;
            // 0x186bfc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x186C00u;
        goto label_186c00;
    }
    ctx->pc = 0x186BF8u;
    {
        const bool branch_taken_0x186bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186BF8u;
            // 0x186bfc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bf8) {
            ctx->pc = 0x186C44u;
            goto label_186c44;
        }
    }
    ctx->pc = 0x186C00u;
label_186c00:
    // 0x186c00: 0x54e00009  bnel        $a3, $zero, . + 4 + (0x9 << 2)
label_186c04:
    if (ctx->pc == 0x186C04u) {
        ctx->pc = 0x186C04u;
            // 0x186c04: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x186C08u;
        goto label_186c08;
    }
    ctx->pc = 0x186C00u;
    {
        const bool branch_taken_0x186c00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c00) {
            ctx->pc = 0x186C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186C00u;
            // 0x186c04: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186C28u;
            goto label_186c28;
        }
    }
    ctx->pc = 0x186C08u;
label_186c08:
    // 0x186c08: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x186c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_186c0c:
    // 0x186c0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_186c10:
    if (ctx->pc == 0x186C10u) {
        ctx->pc = 0x186C10u;
            // 0x186c10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x186C14u;
        goto label_186c14;
    }
    ctx->pc = 0x186C0Cu;
    {
        const bool branch_taken_0x186c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C0Cu;
            // 0x186c10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c0c) {
            ctx->pc = 0x186C48u;
            goto label_186c48;
        }
    }
    ctx->pc = 0x186C14u;
label_186c14:
    // 0x186c14: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x186c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_186c18:
    // 0x186c18: 0x40f809  jalr        $v0
label_186c1c:
    if (ctx->pc == 0x186C1Cu) {
        ctx->pc = 0x186C1Cu;
            // 0x186c1c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186C20u;
        goto label_186c20;
    }
    ctx->pc = 0x186C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186C20u);
        ctx->pc = 0x186C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C18u;
            // 0x186c1c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186C20u; }
            if (ctx->pc != 0x186C20u) { return; }
        }
        }
    }
    ctx->pc = 0x186C20u;
label_186c20:
    // 0x186c20: 0x10000009  b           . + 4 + (0x9 << 2)
label_186c24:
    if (ctx->pc == 0x186C24u) {
        ctx->pc = 0x186C24u;
            // 0x186c24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x186C28u;
        goto label_186c28;
    }
    ctx->pc = 0x186C20u;
    {
        const bool branch_taken_0x186c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C20u;
            // 0x186c24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c20) {
            ctx->pc = 0x186C48u;
            goto label_186c48;
        }
    }
    ctx->pc = 0x186C28u;
label_186c28:
    // 0x186c28: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x186c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_186c2c:
    // 0x186c2c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x186c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_186c30:
    // 0x186c30: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x186c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186c34:
    // 0x186c34: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x186c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186c38:
    // 0x186c38: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x186c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_186c3c:
    // 0x186c3c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x186c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_186c40:
    // 0x186c40: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x186c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_186c44:
    // 0x186c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186c48:
    // 0x186c48: 0x3e00008  jr          $ra
label_186c4c:
    if (ctx->pc == 0x186C4Cu) {
        ctx->pc = 0x186C4Cu;
            // 0x186c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186C50u;
        goto label_186c50;
    }
    ctx->pc = 0x186C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186C48u;
            // 0x186c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186C50u;
label_186c50:
    // 0x186c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186c54:
    // 0x186c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186c58:
    // 0x186c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186c5c:
    // 0x186c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186c60:
    // 0x186c60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186c64:
    // 0x186c64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186c68:
    // 0x186c68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_186c6c:
    // 0x186c6c: 0xc06127c  jal         func_1849F0
label_186c70:
    if (ctx->pc == 0x186C70u) {
        ctx->pc = 0x186C70u;
            // 0x186c70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186C74u;
        goto label_186c74;
    }
    ctx->pc = 0x186C6Cu;
    SET_GPR_U32(ctx, 31, 0x186C74u);
    ctx->pc = 0x186C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C6Cu;
            // 0x186c70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C74u; }
        if (ctx->pc != 0x186C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C74u; }
        if (ctx->pc != 0x186C74u) { return; }
    }
    ctx->pc = 0x186C74u;
label_186c74:
    // 0x186c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186c78:
    // 0x186c78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186c7c:
    // 0x186c7c: 0xc061b28  jal         func_186CA0
label_186c80:
    if (ctx->pc == 0x186C80u) {
        ctx->pc = 0x186C80u;
            // 0x186c80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186C84u;
        goto label_186c84;
    }
    ctx->pc = 0x186C7Cu;
    SET_GPR_U32(ctx, 31, 0x186C84u);
    ctx->pc = 0x186C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C7Cu;
            // 0x186c80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CA0u;
    if (runtime->hasFunction(0x186CA0u)) {
        auto targetFn = runtime->lookupFunction(0x186CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C84u; }
        if (ctx->pc != 0x186C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186CA0_0x186ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C84u; }
        if (ctx->pc != 0x186C84u) { return; }
    }
    ctx->pc = 0x186C84u;
label_186c84:
    // 0x186c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186c88:
    // 0x186c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186c8c:
    // 0x186c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186c90:
    // 0x186c90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186c94:
    // 0x186c94: 0x8061282  j           func_184A08
label_186c98:
    if (ctx->pc == 0x186C98u) {
        ctx->pc = 0x186C98u;
            // 0x186c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x186C9Cu;
        goto label_186c9c;
    }
    ctx->pc = 0x186C94u;
    ctx->pc = 0x186C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186C94u;
            // 0x186c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186C9Cu;
label_186c9c:
    // 0x186c9c: 0x0  nop
    ctx->pc = 0x186c9cu;
    // NOP
}
