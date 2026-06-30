#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185B18
// Address: 0x185b18 - 0x185d08
void sub_00185B18_0x185b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185B18_0x185b18");
#endif

    switch (ctx->pc) {
        case 0x185b18u: goto label_185b18;
        case 0x185b1cu: goto label_185b1c;
        case 0x185b20u: goto label_185b20;
        case 0x185b24u: goto label_185b24;
        case 0x185b28u: goto label_185b28;
        case 0x185b2cu: goto label_185b2c;
        case 0x185b30u: goto label_185b30;
        case 0x185b34u: goto label_185b34;
        case 0x185b38u: goto label_185b38;
        case 0x185b3cu: goto label_185b3c;
        case 0x185b40u: goto label_185b40;
        case 0x185b44u: goto label_185b44;
        case 0x185b48u: goto label_185b48;
        case 0x185b4cu: goto label_185b4c;
        case 0x185b50u: goto label_185b50;
        case 0x185b54u: goto label_185b54;
        case 0x185b58u: goto label_185b58;
        case 0x185b5cu: goto label_185b5c;
        case 0x185b60u: goto label_185b60;
        case 0x185b64u: goto label_185b64;
        case 0x185b68u: goto label_185b68;
        case 0x185b6cu: goto label_185b6c;
        case 0x185b70u: goto label_185b70;
        case 0x185b74u: goto label_185b74;
        case 0x185b78u: goto label_185b78;
        case 0x185b7cu: goto label_185b7c;
        case 0x185b80u: goto label_185b80;
        case 0x185b84u: goto label_185b84;
        case 0x185b88u: goto label_185b88;
        case 0x185b8cu: goto label_185b8c;
        case 0x185b90u: goto label_185b90;
        case 0x185b94u: goto label_185b94;
        case 0x185b98u: goto label_185b98;
        case 0x185b9cu: goto label_185b9c;
        case 0x185ba0u: goto label_185ba0;
        case 0x185ba4u: goto label_185ba4;
        case 0x185ba8u: goto label_185ba8;
        case 0x185bacu: goto label_185bac;
        case 0x185bb0u: goto label_185bb0;
        case 0x185bb4u: goto label_185bb4;
        case 0x185bb8u: goto label_185bb8;
        case 0x185bbcu: goto label_185bbc;
        case 0x185bc0u: goto label_185bc0;
        case 0x185bc4u: goto label_185bc4;
        case 0x185bc8u: goto label_185bc8;
        case 0x185bccu: goto label_185bcc;
        case 0x185bd0u: goto label_185bd0;
        case 0x185bd4u: goto label_185bd4;
        case 0x185bd8u: goto label_185bd8;
        case 0x185bdcu: goto label_185bdc;
        case 0x185be0u: goto label_185be0;
        case 0x185be4u: goto label_185be4;
        case 0x185be8u: goto label_185be8;
        case 0x185becu: goto label_185bec;
        case 0x185bf0u: goto label_185bf0;
        case 0x185bf4u: goto label_185bf4;
        case 0x185bf8u: goto label_185bf8;
        case 0x185bfcu: goto label_185bfc;
        case 0x185c00u: goto label_185c00;
        case 0x185c04u: goto label_185c04;
        case 0x185c08u: goto label_185c08;
        case 0x185c0cu: goto label_185c0c;
        case 0x185c10u: goto label_185c10;
        case 0x185c14u: goto label_185c14;
        case 0x185c18u: goto label_185c18;
        case 0x185c1cu: goto label_185c1c;
        case 0x185c20u: goto label_185c20;
        case 0x185c24u: goto label_185c24;
        case 0x185c28u: goto label_185c28;
        case 0x185c2cu: goto label_185c2c;
        case 0x185c30u: goto label_185c30;
        case 0x185c34u: goto label_185c34;
        case 0x185c38u: goto label_185c38;
        case 0x185c3cu: goto label_185c3c;
        case 0x185c40u: goto label_185c40;
        case 0x185c44u: goto label_185c44;
        case 0x185c48u: goto label_185c48;
        case 0x185c4cu: goto label_185c4c;
        case 0x185c50u: goto label_185c50;
        case 0x185c54u: goto label_185c54;
        case 0x185c58u: goto label_185c58;
        case 0x185c5cu: goto label_185c5c;
        case 0x185c60u: goto label_185c60;
        case 0x185c64u: goto label_185c64;
        case 0x185c68u: goto label_185c68;
        case 0x185c6cu: goto label_185c6c;
        case 0x185c70u: goto label_185c70;
        case 0x185c74u: goto label_185c74;
        case 0x185c78u: goto label_185c78;
        case 0x185c7cu: goto label_185c7c;
        case 0x185c80u: goto label_185c80;
        case 0x185c84u: goto label_185c84;
        case 0x185c88u: goto label_185c88;
        case 0x185c8cu: goto label_185c8c;
        case 0x185c90u: goto label_185c90;
        case 0x185c94u: goto label_185c94;
        case 0x185c98u: goto label_185c98;
        case 0x185c9cu: goto label_185c9c;
        case 0x185ca0u: goto label_185ca0;
        case 0x185ca4u: goto label_185ca4;
        case 0x185ca8u: goto label_185ca8;
        case 0x185cacu: goto label_185cac;
        case 0x185cb0u: goto label_185cb0;
        case 0x185cb4u: goto label_185cb4;
        case 0x185cb8u: goto label_185cb8;
        case 0x185cbcu: goto label_185cbc;
        case 0x185cc0u: goto label_185cc0;
        case 0x185cc4u: goto label_185cc4;
        case 0x185cc8u: goto label_185cc8;
        case 0x185cccu: goto label_185ccc;
        case 0x185cd0u: goto label_185cd0;
        case 0x185cd4u: goto label_185cd4;
        case 0x185cd8u: goto label_185cd8;
        case 0x185cdcu: goto label_185cdc;
        case 0x185ce0u: goto label_185ce0;
        case 0x185ce4u: goto label_185ce4;
        case 0x185ce8u: goto label_185ce8;
        case 0x185cecu: goto label_185cec;
        case 0x185cf0u: goto label_185cf0;
        case 0x185cf4u: goto label_185cf4;
        case 0x185cf8u: goto label_185cf8;
        case 0x185cfcu: goto label_185cfc;
        case 0x185d00u: goto label_185d00;
        case 0x185d04u: goto label_185d04;
        default: break;
    }

    ctx->pc = 0x185b18u;

label_185b18:
    // 0x185b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_185b1c:
    // 0x185b1c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x185b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185b20:
    // 0x185b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_185b24:
    // 0x185b24: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_185b28:
    if (ctx->pc == 0x185B28u) {
        ctx->pc = 0x185B28u;
            // 0x185b28: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185B2Cu;
        goto label_185b2c;
    }
    ctx->pc = 0x185B24u;
    {
        const bool branch_taken_0x185b24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B24u;
            // 0x185b28: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b24) {
            ctx->pc = 0x185B48u;
            goto label_185b48;
        }
    }
    ctx->pc = 0x185B2Cu;
label_185b2c:
    // 0x185b2c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185b30:
    // 0x185b30: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185b34:
    // 0x185b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185b38:
    // 0x185b38: 0x24847ba8  addiu       $a0, $a0, 0x7BA8
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31656));
label_185b3c:
    // 0x185b3c: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x185b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
label_185b40:
    // 0x185b40: 0x806151c  j           func_185470
label_185b44:
    if (ctx->pc == 0x185B44u) {
        ctx->pc = 0x185B44u;
            // 0x185b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185B48u;
        goto label_185b48;
    }
    ctx->pc = 0x185B40u;
    ctx->pc = 0x185B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B40u;
            // 0x185b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185B48u;
label_185b48:
    // 0x185b48: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x185b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_185b4c:
    // 0x185b4c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_185b50:
    if (ctx->pc == 0x185B50u) {
        ctx->pc = 0x185B50u;
            // 0x185b50: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->pc = 0x185B54u;
        goto label_185b54;
    }
    ctx->pc = 0x185B4Cu;
    {
        const bool branch_taken_0x185b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185b4c) {
            ctx->pc = 0x185B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185B4Cu;
            // 0x185b50: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185B70u;
            goto label_185b70;
        }
    }
    ctx->pc = 0x185B54u;
label_185b54:
    // 0x185b54: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185b58:
    // 0x185b58: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185b5c:
    // 0x185b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185b60:
    // 0x185b60: 0x24847bb8  addiu       $a0, $a0, 0x7BB8
    ctx->pc = 0x185b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31672));
label_185b64:
    // 0x185b64: 0x24a57b68  addiu       $a1, $a1, 0x7B68
    ctx->pc = 0x185b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31592));
label_185b68:
    // 0x185b68: 0x806151c  j           func_185470
label_185b6c:
    if (ctx->pc == 0x185B6Cu) {
        ctx->pc = 0x185B6Cu;
            // 0x185b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185B70u;
        goto label_185b70;
    }
    ctx->pc = 0x185B68u;
    ctx->pc = 0x185B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B68u;
            // 0x185b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185B70u;
label_185b70:
    // 0x185b70: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_185b74:
    if (ctx->pc == 0x185B74u) {
        ctx->pc = 0x185B74u;
            // 0x185b74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x185B78u;
        goto label_185b78;
    }
    ctx->pc = 0x185B70u;
    {
        const bool branch_taken_0x185b70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B70u;
            // 0x185b74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b70) {
            ctx->pc = 0x185B90u;
            goto label_185b90;
        }
    }
    ctx->pc = 0x185B78u;
label_185b78:
    // 0x185b78: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185b7c:
    // 0x185b7c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185b80:
    // 0x185b80: 0x24847bc8  addiu       $a0, $a0, 0x7BC8
    ctx->pc = 0x185b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31688));
label_185b84:
    // 0x185b84: 0x24a57bd8  addiu       $a1, $a1, 0x7BD8
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31704));
label_185b88:
    // 0x185b88: 0x806151c  j           func_185470
label_185b8c:
    if (ctx->pc == 0x185B8Cu) {
        ctx->pc = 0x185B8Cu;
            // 0x185b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185B90u;
        goto label_185b90;
    }
    ctx->pc = 0x185B88u;
    ctx->pc = 0x185B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185B88u;
            // 0x185b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185470u;
    if (runtime->hasFunction(0x185470u)) {
        auto targetFn = runtime->lookupFunction(0x185470u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185470_0x185470(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185B90u;
label_185b90:
    // 0x185b90: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_185b94:
    if (ctx->pc == 0x185B94u) {
        ctx->pc = 0x185B94u;
            // 0x185b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x185B98u;
        goto label_185b98;
    }
    ctx->pc = 0x185B90u;
    {
        const bool branch_taken_0x185b90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185B90u;
            // 0x185b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b90) {
            ctx->pc = 0x185C10u;
            goto label_185c10;
        }
    }
    ctx->pc = 0x185B98u;
label_185b98:
    // 0x185b98: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_185b9c:
    // 0x185b9c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_185ba0:
    // 0x185ba0: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x185ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_185ba4:
    // 0x185ba4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x185ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185ba8:
    // 0x185ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185bac:
    // 0x185bac: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x185bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_185bb0:
    // 0x185bb0: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x185bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_185bb4:
    // 0x185bb4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x185bb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_185bb8:
    // 0x185bb8: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x185bb8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_185bbc:
    // 0x185bbc: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x185bbcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_185bc0:
    // 0x185bc0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x185bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_185bc4:
    // 0x185bc4: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x185bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_185bc8:
    // 0x185bc8: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x185bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_185bcc:
    // 0x185bcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x185bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185bd0:
    // 0x185bd0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_185bd4:
    // 0x185bd4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x185bd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_185bd8:
    // 0x185bd8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x185bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_185bdc:
    // 0x185bdc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_185be0:
    if (ctx->pc == 0x185BE0u) {
        ctx->pc = 0x185BE0u;
            // 0x185be0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x185BE4u;
        goto label_185be4;
    }
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x185BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185BDCu;
            // 0x185be0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x185BE4u;
            goto label_185be4;
        }
    }
    ctx->pc = 0x185BE4u;
label_185be4:
    // 0x185be4: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x185be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_185be8:
    // 0x185be8: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_185bec:
    // 0x185bec: 0x2810  mfhi        $a1
    ctx->pc = 0x185becu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_185bf0:
    // 0x185bf0: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x185bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
label_185bf4:
    // 0x185bf4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_185bf8:
    // 0x185bf8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x185bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185bfc:
    // 0x185bfc: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x185bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_185c00:
    // 0x185c00: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_185c04:
    // 0x185c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_185c08:
    // 0x185c08: 0x10000027  b           . + 4 + (0x27 << 2)
label_185c0c:
    if (ctx->pc == 0x185C0Cu) {
        ctx->pc = 0x185C0Cu;
            // 0x185c0c: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x185C10u;
        goto label_185c10;
    }
    ctx->pc = 0x185C08u;
    {
        const bool branch_taken_0x185c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C08u;
            // 0x185c0c: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c08) {
            ctx->pc = 0x185CA8u;
            goto label_185ca8;
        }
    }
    ctx->pc = 0x185C10u;
label_185c10:
    // 0x185c10: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_185c14:
    if (ctx->pc == 0x185C14u) {
        ctx->pc = 0x185C14u;
            // 0x185c14: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->pc = 0x185C18u;
        goto label_185c18;
    }
    ctx->pc = 0x185C10u;
    {
        const bool branch_taken_0x185c10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x185c10) {
            ctx->pc = 0x185C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185C10u;
            // 0x185c14: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185C90u;
            goto label_185c90;
        }
    }
    ctx->pc = 0x185C18u;
label_185c18:
    // 0x185c18: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_185c1c:
    // 0x185c1c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x185c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_185c20:
    // 0x185c20: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x185c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_185c24:
    // 0x185c24: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x185c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185c28:
    // 0x185c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185c2c:
    // 0x185c2c: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x185c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_185c30:
    // 0x185c30: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_185c34:
    // 0x185c34: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x185c34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_185c38:
    // 0x185c38: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_185c3c:
    // 0x185c3c: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x185c3cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_185c40:
    // 0x185c40: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x185c40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_185c44:
    // 0x185c44: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_185c48:
    // 0x185c48: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x185c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_185c4c:
    // 0x185c4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185c50:
    // 0x185c50: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x185c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_185c54:
    // 0x185c54: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x185c54u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_185c58:
    // 0x185c58: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x185c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_185c5c:
    // 0x185c5c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_185c60:
    if (ctx->pc == 0x185C60u) {
        ctx->pc = 0x185C60u;
            // 0x185c60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x185C64u;
        goto label_185c64;
    }
    ctx->pc = 0x185C5Cu;
    {
        const bool branch_taken_0x185c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c5c) {
            ctx->pc = 0x185C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185C5Cu;
            // 0x185c60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x185C64u;
            goto label_185c64;
        }
    }
    ctx->pc = 0x185C64u;
label_185c64:
    // 0x185c64: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_185c68:
    // 0x185c68: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x185c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_185c6c:
    // 0x185c6c: 0x2810  mfhi        $a1
    ctx->pc = 0x185c6cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_185c70:
    // 0x185c70: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x185c70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
label_185c74:
    // 0x185c74: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_185c78:
    // 0x185c78: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x185c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_185c7c:
    // 0x185c7c: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x185c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_185c80:
    // 0x185c80: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x185c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_185c84:
    // 0x185c84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_185c88:
    // 0x185c88: 0x10000007  b           . + 4 + (0x7 << 2)
label_185c8c:
    if (ctx->pc == 0x185C8Cu) {
        ctx->pc = 0x185C8Cu;
            // 0x185c8c: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x185C90u;
        goto label_185c90;
    }
    ctx->pc = 0x185C88u;
    {
        const bool branch_taken_0x185c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C88u;
            // 0x185c8c: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c88) {
            ctx->pc = 0x185CA8u;
            goto label_185ca8;
        }
    }
    ctx->pc = 0x185C90u;
label_185c90:
    // 0x185c90: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x185c90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_185c94:
    // 0x185c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_185c98:
    if (ctx->pc == 0x185C98u) {
        ctx->pc = 0x185C98u;
            // 0x185c98: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x185C9Cu;
        goto label_185c9c;
    }
    ctx->pc = 0x185C94u;
    {
        const bool branch_taken_0x185c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C94u;
            // 0x185c98: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c94) {
            ctx->pc = 0x185CA8u;
            goto label_185ca8;
        }
    }
    ctx->pc = 0x185C9Cu;
label_185c9c:
    // 0x185c9c: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_185ca0:
    // 0x185ca0: 0x40f809  jalr        $v0
label_185ca4:
    if (ctx->pc == 0x185CA4u) {
        ctx->pc = 0x185CA4u;
            // 0x185ca4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x185CA8u;
        goto label_185ca8;
    }
    ctx->pc = 0x185CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185CA8u);
        ctx->pc = 0x185CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CA0u;
            // 0x185ca4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185CA8u; }
            if (ctx->pc != 0x185CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x185CA8u;
label_185ca8:
    // 0x185ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185cac:
    // 0x185cac: 0x3e00008  jr          $ra
label_185cb0:
    if (ctx->pc == 0x185CB0u) {
        ctx->pc = 0x185CB0u;
            // 0x185cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185CB4u;
        goto label_185cb4;
    }
    ctx->pc = 0x185CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CACu;
            // 0x185cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185CB4u;
label_185cb4:
    // 0x185cb4: 0x0  nop
    ctx->pc = 0x185cb4u;
    // NOP
label_185cb8:
    // 0x185cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185cbc:
    // 0x185cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185cc0:
    // 0x185cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185cc4:
    // 0x185cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185cc8:
    // 0x185cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185ccc:
    // 0x185ccc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x185cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_185cd0:
    // 0x185cd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x185cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_185cd4:
    // 0x185cd4: 0xc06127c  jal         func_1849F0
label_185cd8:
    if (ctx->pc == 0x185CD8u) {
        ctx->pc = 0x185CD8u;
            // 0x185cd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185CDCu;
        goto label_185cdc;
    }
    ctx->pc = 0x185CD4u;
    SET_GPR_U32(ctx, 31, 0x185CDCu);
    ctx->pc = 0x185CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CD4u;
            // 0x185cd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CDCu; }
        if (ctx->pc != 0x185CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CDCu; }
        if (ctx->pc != 0x185CDCu) { return; }
    }
    ctx->pc = 0x185CDCu;
label_185cdc:
    // 0x185cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185ce0:
    // 0x185ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185ce4:
    // 0x185ce4: 0xc061742  jal         func_185D08
label_185ce8:
    if (ctx->pc == 0x185CE8u) {
        ctx->pc = 0x185CE8u;
            // 0x185ce8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185CECu;
        goto label_185cec;
    }
    ctx->pc = 0x185CE4u;
    SET_GPR_U32(ctx, 31, 0x185CECu);
    ctx->pc = 0x185CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CE4u;
            // 0x185ce8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185D08u;
    if (runtime->hasFunction(0x185D08u)) {
        auto targetFn = runtime->lookupFunction(0x185D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CECu; }
        if (ctx->pc != 0x185CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185D08_0x185d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CECu; }
        if (ctx->pc != 0x185CECu) { return; }
    }
    ctx->pc = 0x185CECu;
label_185cec:
    // 0x185cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185cf0:
    // 0x185cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185cf4:
    // 0x185cf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185cf8:
    // 0x185cf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_185cfc:
    // 0x185cfc: 0x8061282  j           func_184A08
label_185d00:
    if (ctx->pc == 0x185D00u) {
        ctx->pc = 0x185D00u;
            // 0x185d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185D04u;
        goto label_185d04;
    }
    ctx->pc = 0x185CFCu;
    ctx->pc = 0x185D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CFCu;
            // 0x185d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185D04u;
label_185d04:
    // 0x185d04: 0x0  nop
    ctx->pc = 0x185d04u;
    // NOP
}
