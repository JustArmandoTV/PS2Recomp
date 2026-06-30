#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141B30
// Address: 0x141b30 - 0x141e00
void sub_00141B30_0x141b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141B30_0x141b30");
#endif

    switch (ctx->pc) {
        case 0x141b30u: goto label_141b30;
        case 0x141b34u: goto label_141b34;
        case 0x141b38u: goto label_141b38;
        case 0x141b3cu: goto label_141b3c;
        case 0x141b40u: goto label_141b40;
        case 0x141b44u: goto label_141b44;
        case 0x141b48u: goto label_141b48;
        case 0x141b4cu: goto label_141b4c;
        case 0x141b50u: goto label_141b50;
        case 0x141b54u: goto label_141b54;
        case 0x141b58u: goto label_141b58;
        case 0x141b5cu: goto label_141b5c;
        case 0x141b60u: goto label_141b60;
        case 0x141b64u: goto label_141b64;
        case 0x141b68u: goto label_141b68;
        case 0x141b6cu: goto label_141b6c;
        case 0x141b70u: goto label_141b70;
        case 0x141b74u: goto label_141b74;
        case 0x141b78u: goto label_141b78;
        case 0x141b7cu: goto label_141b7c;
        case 0x141b80u: goto label_141b80;
        case 0x141b84u: goto label_141b84;
        case 0x141b88u: goto label_141b88;
        case 0x141b8cu: goto label_141b8c;
        case 0x141b90u: goto label_141b90;
        case 0x141b94u: goto label_141b94;
        case 0x141b98u: goto label_141b98;
        case 0x141b9cu: goto label_141b9c;
        case 0x141ba0u: goto label_141ba0;
        case 0x141ba4u: goto label_141ba4;
        case 0x141ba8u: goto label_141ba8;
        case 0x141bacu: goto label_141bac;
        case 0x141bb0u: goto label_141bb0;
        case 0x141bb4u: goto label_141bb4;
        case 0x141bb8u: goto label_141bb8;
        case 0x141bbcu: goto label_141bbc;
        case 0x141bc0u: goto label_141bc0;
        case 0x141bc4u: goto label_141bc4;
        case 0x141bc8u: goto label_141bc8;
        case 0x141bccu: goto label_141bcc;
        case 0x141bd0u: goto label_141bd0;
        case 0x141bd4u: goto label_141bd4;
        case 0x141bd8u: goto label_141bd8;
        case 0x141bdcu: goto label_141bdc;
        case 0x141be0u: goto label_141be0;
        case 0x141be4u: goto label_141be4;
        case 0x141be8u: goto label_141be8;
        case 0x141becu: goto label_141bec;
        case 0x141bf0u: goto label_141bf0;
        case 0x141bf4u: goto label_141bf4;
        case 0x141bf8u: goto label_141bf8;
        case 0x141bfcu: goto label_141bfc;
        case 0x141c00u: goto label_141c00;
        case 0x141c04u: goto label_141c04;
        case 0x141c08u: goto label_141c08;
        case 0x141c0cu: goto label_141c0c;
        case 0x141c10u: goto label_141c10;
        case 0x141c14u: goto label_141c14;
        case 0x141c18u: goto label_141c18;
        case 0x141c1cu: goto label_141c1c;
        case 0x141c20u: goto label_141c20;
        case 0x141c24u: goto label_141c24;
        case 0x141c28u: goto label_141c28;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c30u: goto label_141c30;
        case 0x141c34u: goto label_141c34;
        case 0x141c38u: goto label_141c38;
        case 0x141c3cu: goto label_141c3c;
        case 0x141c40u: goto label_141c40;
        case 0x141c44u: goto label_141c44;
        case 0x141c48u: goto label_141c48;
        case 0x141c4cu: goto label_141c4c;
        case 0x141c50u: goto label_141c50;
        case 0x141c54u: goto label_141c54;
        case 0x141c58u: goto label_141c58;
        case 0x141c5cu: goto label_141c5c;
        case 0x141c60u: goto label_141c60;
        case 0x141c64u: goto label_141c64;
        case 0x141c68u: goto label_141c68;
        case 0x141c6cu: goto label_141c6c;
        case 0x141c70u: goto label_141c70;
        case 0x141c74u: goto label_141c74;
        case 0x141c78u: goto label_141c78;
        case 0x141c7cu: goto label_141c7c;
        case 0x141c80u: goto label_141c80;
        case 0x141c84u: goto label_141c84;
        case 0x141c88u: goto label_141c88;
        case 0x141c8cu: goto label_141c8c;
        case 0x141c90u: goto label_141c90;
        case 0x141c94u: goto label_141c94;
        case 0x141c98u: goto label_141c98;
        case 0x141c9cu: goto label_141c9c;
        case 0x141ca0u: goto label_141ca0;
        case 0x141ca4u: goto label_141ca4;
        case 0x141ca8u: goto label_141ca8;
        case 0x141cacu: goto label_141cac;
        case 0x141cb0u: goto label_141cb0;
        case 0x141cb4u: goto label_141cb4;
        case 0x141cb8u: goto label_141cb8;
        case 0x141cbcu: goto label_141cbc;
        case 0x141cc0u: goto label_141cc0;
        case 0x141cc4u: goto label_141cc4;
        case 0x141cc8u: goto label_141cc8;
        case 0x141cccu: goto label_141ccc;
        case 0x141cd0u: goto label_141cd0;
        case 0x141cd4u: goto label_141cd4;
        case 0x141cd8u: goto label_141cd8;
        case 0x141cdcu: goto label_141cdc;
        case 0x141ce0u: goto label_141ce0;
        case 0x141ce4u: goto label_141ce4;
        case 0x141ce8u: goto label_141ce8;
        case 0x141cecu: goto label_141cec;
        case 0x141cf0u: goto label_141cf0;
        case 0x141cf4u: goto label_141cf4;
        case 0x141cf8u: goto label_141cf8;
        case 0x141cfcu: goto label_141cfc;
        case 0x141d00u: goto label_141d00;
        case 0x141d04u: goto label_141d04;
        case 0x141d08u: goto label_141d08;
        case 0x141d0cu: goto label_141d0c;
        case 0x141d10u: goto label_141d10;
        case 0x141d14u: goto label_141d14;
        case 0x141d18u: goto label_141d18;
        case 0x141d1cu: goto label_141d1c;
        case 0x141d20u: goto label_141d20;
        case 0x141d24u: goto label_141d24;
        case 0x141d28u: goto label_141d28;
        case 0x141d2cu: goto label_141d2c;
        case 0x141d30u: goto label_141d30;
        case 0x141d34u: goto label_141d34;
        case 0x141d38u: goto label_141d38;
        case 0x141d3cu: goto label_141d3c;
        case 0x141d40u: goto label_141d40;
        case 0x141d44u: goto label_141d44;
        case 0x141d48u: goto label_141d48;
        case 0x141d4cu: goto label_141d4c;
        case 0x141d50u: goto label_141d50;
        case 0x141d54u: goto label_141d54;
        case 0x141d58u: goto label_141d58;
        case 0x141d5cu: goto label_141d5c;
        case 0x141d60u: goto label_141d60;
        case 0x141d64u: goto label_141d64;
        case 0x141d68u: goto label_141d68;
        case 0x141d6cu: goto label_141d6c;
        case 0x141d70u: goto label_141d70;
        case 0x141d74u: goto label_141d74;
        case 0x141d78u: goto label_141d78;
        case 0x141d7cu: goto label_141d7c;
        case 0x141d80u: goto label_141d80;
        case 0x141d84u: goto label_141d84;
        case 0x141d88u: goto label_141d88;
        case 0x141d8cu: goto label_141d8c;
        case 0x141d90u: goto label_141d90;
        case 0x141d94u: goto label_141d94;
        case 0x141d98u: goto label_141d98;
        case 0x141d9cu: goto label_141d9c;
        case 0x141da0u: goto label_141da0;
        case 0x141da4u: goto label_141da4;
        case 0x141da8u: goto label_141da8;
        case 0x141dacu: goto label_141dac;
        case 0x141db0u: goto label_141db0;
        case 0x141db4u: goto label_141db4;
        case 0x141db8u: goto label_141db8;
        case 0x141dbcu: goto label_141dbc;
        case 0x141dc0u: goto label_141dc0;
        case 0x141dc4u: goto label_141dc4;
        case 0x141dc8u: goto label_141dc8;
        case 0x141dccu: goto label_141dcc;
        case 0x141dd0u: goto label_141dd0;
        case 0x141dd4u: goto label_141dd4;
        case 0x141dd8u: goto label_141dd8;
        case 0x141ddcu: goto label_141ddc;
        case 0x141de0u: goto label_141de0;
        case 0x141de4u: goto label_141de4;
        case 0x141de8u: goto label_141de8;
        case 0x141decu: goto label_141dec;
        case 0x141df0u: goto label_141df0;
        case 0x141df4u: goto label_141df4;
        case 0x141df8u: goto label_141df8;
        case 0x141dfcu: goto label_141dfc;
        default: break;
    }

    ctx->pc = 0x141b30u;

label_141b30:
    // 0x141b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x141b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_141b34:
    // 0x141b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141b38:
    // 0x141b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141b3c:
    // 0x141b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141b40:
    // 0x141b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141b44:
    // 0x141b44: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
label_141b48:
    if (ctx->pc == 0x141B48u) {
        ctx->pc = 0x141B48u;
            // 0x141b48: 0xaf808294  sw          $zero, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 0));
        ctx->pc = 0x141B4Cu;
        goto label_141b4c;
    }
    ctx->pc = 0x141B44u;
    {
        const bool branch_taken_0x141b44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x141B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141B44u;
            // 0x141b48: 0xaf808294  sw          $zero, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b44) {
            ctx->pc = 0x141B78u;
            goto label_141b78;
        }
    }
    ctx->pc = 0x141B4Cu;
label_141b4c:
    // 0x141b4c: 0xaf828294  sw          $v0, -0x7D6C($gp)
    ctx->pc = 0x141b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
label_141b50:
    // 0x141b50: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141b54:
    // 0x141b54: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_141b58:
    // 0x141b58: 0xdf878048  ld          $a3, -0x7FB8($gp)
    ctx->pc = 0x141b58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294934600)));
label_141b5c:
    // 0x141b5c: 0xaf828254  sw          $v0, -0x7DAC($gp)
    ctx->pc = 0x141b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935124), GPR_U32(ctx, 2));
label_141b60:
    // 0x141b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141b64:
    // 0x141b64: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141b68:
    // 0x141b68: 0xc057540  jal         func_15D500
label_141b6c:
    if (ctx->pc == 0x141B6Cu) {
        ctx->pc = 0x141B6Cu;
            // 0x141b6c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->pc = 0x141B70u;
        goto label_141b70;
    }
    ctx->pc = 0x141B68u;
    SET_GPR_U32(ctx, 31, 0x141B70u);
    ctx->pc = 0x141B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141B68u;
            // 0x141b6c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B70u; }
        if (ctx->pc != 0x141B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141B70u; }
        if (ctx->pc != 0x141B70u) { return; }
    }
    ctx->pc = 0x141B70u;
label_141b70:
    // 0x141b70: 0x10000003  b           . + 4 + (0x3 << 2)
label_141b74:
    if (ctx->pc == 0x141B74u) {
        ctx->pc = 0x141B74u;
            // 0x141b74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x141B78u;
        goto label_141b78;
    }
    ctx->pc = 0x141B70u;
    {
        const bool branch_taken_0x141b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141B70u;
            // 0x141b74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b70) {
            ctx->pc = 0x141B80u;
            goto label_141b80;
        }
    }
    ctx->pc = 0x141B78u;
label_141b78:
    // 0x141b78: 0xaf808254  sw          $zero, -0x7DAC($gp)
    ctx->pc = 0x141b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935124), GPR_U32(ctx, 0));
label_141b7c:
    // 0x141b7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141b80:
    // 0x141b80: 0x56020068  bnel        $s0, $v0, . + 4 + (0x68 << 2)
label_141b84:
    if (ctx->pc == 0x141B84u) {
        ctx->pc = 0x141B84u;
            // 0x141b84: 0x8f828254  lw          $v0, -0x7DAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935124)));
        ctx->pc = 0x141B88u;
        goto label_141b88;
    }
    ctx->pc = 0x141B80u;
    {
        const bool branch_taken_0x141b80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x141b80) {
            ctx->pc = 0x141B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141B80u;
            // 0x141b84: 0x8f828254  lw          $v0, -0x7DAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141D24u;
            goto label_141d24;
        }
    }
    ctx->pc = 0x141B88u;
label_141b88:
    // 0x141b88: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x141b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_141b8c:
    // 0x141b8c: 0x8f85821c  lw          $a1, -0x7DE4($gp)
    ctx->pc = 0x141b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_141b90:
    // 0x141b90: 0x8f83819c  lw          $v1, -0x7E64($gp)
    ctx->pc = 0x141b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_141b94:
    // 0x141b94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x141b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_141b98:
    // 0x141b98: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x141b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_141b9c:
    // 0x141b9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x141b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_141ba0:
    // 0x141ba0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_141ba4:
    // 0x141ba4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141ba8:
    // 0x141ba8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_141bac:
    if (ctx->pc == 0x141BACu) {
        ctx->pc = 0x141BACu;
            // 0x141bac: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x141BB0u;
        goto label_141bb0;
    }
    ctx->pc = 0x141BA8u;
    {
        const bool branch_taken_0x141ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BA8u;
            // 0x141bac: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ba8) {
            ctx->pc = 0x141BF8u;
            goto label_141bf8;
        }
    }
    ctx->pc = 0x141BB0u;
label_141bb0:
    // 0x141bb0: 0x8f828220  lw          $v0, -0x7DE0($gp)
    ctx->pc = 0x141bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935072)));
label_141bb4:
    // 0x141bb4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_141bb8:
    if (ctx->pc == 0x141BB8u) {
        ctx->pc = 0x141BB8u;
            // 0x141bb8: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x141BBCu;
        goto label_141bbc;
    }
    ctx->pc = 0x141BB4u;
    {
        const bool branch_taken_0x141bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141bb4) {
            ctx->pc = 0x141BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141BB4u;
            // 0x141bb8: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141BFCu;
            goto label_141bfc;
        }
    }
    ctx->pc = 0x141BBCu;
label_141bbc:
    // 0x141bbc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x141bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_141bc0:
    // 0x141bc0: 0x60f809  jalr        $v1
label_141bc4:
    if (ctx->pc == 0x141BC4u) {
        ctx->pc = 0x141BC4u;
            // 0x141bc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x141BC8u;
        goto label_141bc8;
    }
    ctx->pc = 0x141BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141BC8u);
        ctx->pc = 0x141BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141BC0u;
            // 0x141bc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x141BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141BC8u; }
            if (ctx->pc != 0x141BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x141BC8u;
label_141bc8:
    // 0x141bc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x141bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141bcc:
    // 0x141bcc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_141bd0:
    if (ctx->pc == 0x141BD0u) {
        ctx->pc = 0x141BD0u;
            // 0x141bd0: 0xaf808220  sw          $zero, -0x7DE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 0));
        ctx->pc = 0x141BD4u;
        goto label_141bd4;
    }
    ctx->pc = 0x141BCCu;
    {
        const bool branch_taken_0x141bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x141bcc) {
            ctx->pc = 0x141BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141BCCu;
            // 0x141bd0: 0xaf808220  sw          $zero, -0x7DE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141BF8u;
            goto label_141bf8;
        }
    }
    ctx->pc = 0x141BD4u;
label_141bd4:
    // 0x141bd4: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141bd8:
    // 0x141bd8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141bdc:
    // 0x141bdc: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141be0:
    // 0x141be0: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x141be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_141be4:
    // 0x141be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141be8:
    // 0x141be8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141bec:
    // 0x141bec: 0xc057540  jal         func_15D500
label_141bf0:
    if (ctx->pc == 0x141BF0u) {
        ctx->pc = 0x141BF0u;
            // 0x141bf0: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141BF4u;
        goto label_141bf4;
    }
    ctx->pc = 0x141BECu;
    SET_GPR_U32(ctx, 31, 0x141BF4u);
    ctx->pc = 0x141BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141BECu;
            // 0x141bf0: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141BF4u; }
        if (ctx->pc != 0x141BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141BF4u; }
        if (ctx->pc != 0x141BF4u) { return; }
    }
    ctx->pc = 0x141BF4u;
label_141bf4:
    // 0x141bf4: 0xaf808220  sw          $zero, -0x7DE0($gp)
    ctx->pc = 0x141bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 0));
label_141bf8:
    // 0x141bf8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x141bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_141bfc:
    // 0x141bfc: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x141bfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_141c00:
    // 0x141c00: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x141c00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_141c04:
    // 0x141c04: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x141c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
label_141c08:
    // 0x141c08: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x141c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_141c0c:
    // 0x141c0c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x141c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_141c10:
    // 0x141c10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_141c14:
    if (ctx->pc == 0x141C14u) {
        ctx->pc = 0x141C14u;
            // 0x141c14: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->pc = 0x141C18u;
        goto label_141c18;
    }
    ctx->pc = 0x141C10u;
    {
        const bool branch_taken_0x141c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C10u;
            // 0x141c14: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c10) {
            ctx->pc = 0x141C48u;
            goto label_141c48;
        }
    }
    ctx->pc = 0x141C18u;
label_141c18:
    // 0x141c18: 0x93a70030  lbu         $a3, 0x30($sp)
    ctx->pc = 0x141c18u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_141c1c:
    // 0x141c1c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x141c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_141c20:
    // 0x141c20: 0x97a40034  lhu         $a0, 0x34($sp)
    ctx->pc = 0x141c20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
label_141c24:
    // 0x141c24: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x141c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_141c28:
    // 0x141c28: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x141c28u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_141c2c:
    // 0x141c2c: 0x30030fff  andi        $v1, $zero, 0xFFF
    ctx->pc = 0x141c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)4095);
label_141c30:
    // 0x141c30: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x141c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_141c34:
    // 0x141c34: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x141c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_141c38:
    // 0x141c38: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x141c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_141c3c:
    // 0x141c3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141c40:
    // 0x141c40: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x141c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
label_141c44:
    // 0x141c44: 0xa7a20034  sh          $v0, 0x34($sp)
    ctx->pc = 0x141c44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
label_141c48:
    // 0x141c48: 0x8f828224  lw          $v0, -0x7DDC($gp)
    ctx->pc = 0x141c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935076)));
label_141c4c:
    // 0x141c4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_141c50:
    if (ctx->pc == 0x141C50u) {
        ctx->pc = 0x141C50u;
            // 0x141c50: 0x93a4002c  lbu         $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x141C54u;
        goto label_141c54;
    }
    ctx->pc = 0x141C4Cu;
    {
        const bool branch_taken_0x141c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141c4c) {
            ctx->pc = 0x141C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141C4Cu;
            // 0x141c50: 0x93a4002c  lbu         $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141C74u;
            goto label_141c74;
        }
    }
    ctx->pc = 0x141C54u;
label_141c54:
    // 0x141c54: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x141c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_141c58:
    // 0x141c58: 0x93a4002c  lbu         $a0, 0x2C($sp)
    ctx->pc = 0x141c58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
label_141c5c:
    // 0x141c5c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x141c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_141c60:
    // 0x141c60: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x141c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_141c64:
    // 0x141c64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x141c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_141c68:
    // 0x141c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141c6c:
    // 0x141c6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_141c70:
    if (ctx->pc == 0x141C70u) {
        ctx->pc = 0x141C70u;
            // 0x141c70: 0xa3a2002c  sb          $v0, 0x2C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x141C74u;
        goto label_141c74;
    }
    ctx->pc = 0x141C6Cu;
    {
        const bool branch_taken_0x141c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C6Cu;
            // 0x141c70: 0xa3a2002c  sb          $v0, 0x2C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c6c) {
            ctx->pc = 0x141C88u;
            goto label_141c88;
        }
    }
    ctx->pc = 0x141C74u;
label_141c74:
    // 0x141c74: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x141c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_141c78:
    // 0x141c78: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x141c78u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_141c7c:
    // 0x141c7c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x141c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_141c80:
    // 0x141c80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x141c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141c84:
    // 0x141c84: 0xa3a2002c  sb          $v0, 0x2C($sp)
    ctx->pc = 0x141c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 2));
label_141c88:
    // 0x141c88: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141c8c:
    // 0x141c8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x141c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_141c90:
    // 0x141c90: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x141c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_141c94:
    // 0x141c94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141c98:
    // 0x141c98: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141c9c:
    // 0x141c9c: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x141c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_141ca0:
    // 0x141ca0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141ca4:
    // 0x141ca4: 0xc057540  jal         func_15D500
label_141ca8:
    if (ctx->pc == 0x141CA8u) {
        ctx->pc = 0x141CA8u;
            // 0x141ca8: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141CACu;
        goto label_141cac;
    }
    ctx->pc = 0x141CA4u;
    SET_GPR_U32(ctx, 31, 0x141CACu);
    ctx->pc = 0x141CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CA4u;
            // 0x141ca8: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CACu; }
        if (ctx->pc != 0x141CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CACu; }
        if (ctx->pc != 0x141CACu) { return; }
    }
    ctx->pc = 0x141CACu;
label_141cac:
    // 0x141cac: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141cb0:
    // 0x141cb0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141cb4:
    // 0x141cb4: 0xdfa70030  ld          $a3, 0x30($sp)
    ctx->pc = 0x141cb4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_141cb8:
    // 0x141cb8: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141cbc:
    // 0x141cbc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_141cc0:
    // 0x141cc0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141cc4:
    // 0x141cc4: 0xc057540  jal         func_15D500
label_141cc8:
    if (ctx->pc == 0x141CC8u) {
        ctx->pc = 0x141CC8u;
            // 0x141cc8: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141CCCu;
        goto label_141ccc;
    }
    ctx->pc = 0x141CC4u;
    SET_GPR_U32(ctx, 31, 0x141CCCu);
    ctx->pc = 0x141CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CC4u;
            // 0x141cc8: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CCCu; }
        if (ctx->pc != 0x141CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CCCu; }
        if (ctx->pc != 0x141CCCu) { return; }
    }
    ctx->pc = 0x141CCCu;
label_141ccc:
    // 0x141ccc: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141cd0:
    // 0x141cd0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141cd4:
    // 0x141cd4: 0xdfa70028  ld          $a3, 0x28($sp)
    ctx->pc = 0x141cd4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_141cd8:
    // 0x141cd8: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141cdc:
    // 0x141cdc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x141cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_141ce0:
    // 0x141ce0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141ce4:
    // 0x141ce4: 0xc057540  jal         func_15D500
label_141ce8:
    if (ctx->pc == 0x141CE8u) {
        ctx->pc = 0x141CE8u;
            // 0x141ce8: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141CECu;
        goto label_141cec;
    }
    ctx->pc = 0x141CE4u;
    SET_GPR_U32(ctx, 31, 0x141CECu);
    ctx->pc = 0x141CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CE4u;
            // 0x141ce8: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CECu; }
        if (ctx->pc != 0x141CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CECu; }
        if (ctx->pc != 0x141CECu) { return; }
    }
    ctx->pc = 0x141CECu;
label_141cec:
    // 0x141cec: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141cf0:
    // 0x141cf0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141cf4:
    // 0x141cf4: 0xdf878238  ld          $a3, -0x7DC8($gp)
    ctx->pc = 0x141cf4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294935096)));
label_141cf8:
    // 0x141cf8: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141cfc:
    // 0x141cfc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x141cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_141d00:
    // 0x141d00: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141d04:
    // 0x141d04: 0xc057540  jal         func_15D500
label_141d08:
    if (ctx->pc == 0x141D08u) {
        ctx->pc = 0x141D08u;
            // 0x141d08: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141D0Cu;
        goto label_141d0c;
    }
    ctx->pc = 0x141D04u;
    SET_GPR_U32(ctx, 31, 0x141D0Cu);
    ctx->pc = 0x141D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D04u;
            // 0x141d08: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D0Cu; }
        if (ctx->pc != 0x141D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D0Cu; }
        if (ctx->pc != 0x141D0Cu) { return; }
    }
    ctx->pc = 0x141D0Cu;
label_141d0c:
    // 0x141d0c: 0x8f828254  lw          $v0, -0x7DAC($gp)
    ctx->pc = 0x141d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935124)));
label_141d10:
    // 0x141d10: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x141d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_141d14:
    // 0x141d14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_141d18:
    // 0x141d18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x141d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_141d1c:
    // 0x141d1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_141d20:
    if (ctx->pc == 0x141D20u) {
        ctx->pc = 0x141D20u;
            // 0x141d20: 0xff828248  sd          $v0, -0x7DB8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935112), GPR_U64(ctx, 2));
        ctx->pc = 0x141D24u;
        goto label_141d24;
    }
    ctx->pc = 0x141D1Cu;
    {
        const bool branch_taken_0x141d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141D1Cu;
            // 0x141d20: 0xff828248  sd          $v0, -0x7DB8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d1c) {
            ctx->pc = 0x141D34u;
            goto label_141d34;
        }
    }
    ctx->pc = 0x141D24u;
label_141d24:
    // 0x141d24: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x141d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_141d28:
    // 0x141d28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_141d2c:
    // 0x141d2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x141d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_141d30:
    // 0x141d30: 0xff828248  sd          $v0, -0x7DB8($gp)
    ctx->pc = 0x141d30u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935112), GPR_U64(ctx, 2));
label_141d34:
    // 0x141d34: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141d38:
    // 0x141d38: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141d3c:
    // 0x141d3c: 0xdf878248  ld          $a3, -0x7DB8($gp)
    ctx->pc = 0x141d3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294935112)));
label_141d40:
    // 0x141d40: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141d44:
    // 0x141d44: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x141d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_141d48:
    // 0x141d48: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141d4c:
    // 0x141d4c: 0xc057540  jal         func_15D500
label_141d50:
    if (ctx->pc == 0x141D50u) {
        ctx->pc = 0x141D50u;
            // 0x141d50: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141D54u;
        goto label_141d54;
    }
    ctx->pc = 0x141D4Cu;
    SET_GPR_U32(ctx, 31, 0x141D54u);
    ctx->pc = 0x141D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D4Cu;
            // 0x141d50: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D54u; }
        if (ctx->pc != 0x141D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D54u; }
        if (ctx->pc != 0x141D54u) { return; }
    }
    ctx->pc = 0x141D54u;
label_141d54:
    // 0x141d54: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141d58:
    // 0x141d58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141d5c:
    // 0x141d5c: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141d60:
    // 0x141d60: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141d64:
    // 0x141d64: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x141d64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
label_141d68:
    // 0x141d68: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x141d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_141d6c:
    // 0x141d6c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141d70:
    // 0x141d70: 0xc057540  jal         func_15D500
label_141d74:
    if (ctx->pc == 0x141D74u) {
        ctx->pc = 0x141D74u;
            // 0x141d74: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->pc = 0x141D78u;
        goto label_141d78;
    }
    ctx->pc = 0x141D70u;
    SET_GPR_U32(ctx, 31, 0x141D78u);
    ctx->pc = 0x141D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D70u;
            // 0x141d74: 0xaf828294  sw          $v0, -0x7D6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D78u; }
        if (ctx->pc != 0x141D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D78u; }
        if (ctx->pc != 0x141D78u) { return; }
    }
    ctx->pc = 0x141D78u;
label_141d78:
    // 0x141d78: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141d7c:
    // 0x141d7c: 0x8f858294  lw          $a1, -0x7D6C($gp)
    ctx->pc = 0x141d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141d80:
    // 0x141d80: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x141d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
label_141d84:
    // 0x141d84: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141d88:
    // 0x141d88: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141d8c:
    // 0x141d8c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x141d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141d90:
    // 0x141d90: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_141d94:
    // 0x141d94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x141d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_141d98:
    // 0x141d98: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x141d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
label_141d9c:
    // 0x141d9c: 0xaf878294  sw          $a3, -0x7D6C($gp)
    ctx->pc = 0x141d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935188), GPR_U32(ctx, 7));
label_141da0:
    // 0x141da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141da4:
    // 0x141da4: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x141da4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_141da8:
    // 0x141da8: 0xc057540  jal         func_15D500
label_141dac:
    if (ctx->pc == 0x141DACu) {
        ctx->pc = 0x141DACu;
            // 0x141dac: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->pc = 0x141DB0u;
        goto label_141db0;
    }
    ctx->pc = 0x141DA8u;
    SET_GPR_U32(ctx, 31, 0x141DB0u);
    ctx->pc = 0x141DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DA8u;
            // 0x141dac: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DB0u; }
        if (ctx->pc != 0x141DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DB0u; }
        if (ctx->pc != 0x141DB0u) { return; }
    }
    ctx->pc = 0x141DB0u;
label_141db0:
    // 0x141db0: 0x8f868294  lw          $a2, -0x7D6C($gp)
    ctx->pc = 0x141db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_141db4:
    // 0x141db4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141db8:
    // 0x141db8: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x141db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
label_141dbc:
    // 0x141dbc: 0xc05750c  jal         func_15D430
label_141dc0:
    if (ctx->pc == 0x141DC0u) {
        ctx->pc = 0x141DC0u;
            // 0x141dc0: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x141DC4u;
        goto label_141dc4;
    }
    ctx->pc = 0x141DBCu;
    SET_GPR_U32(ctx, 31, 0x141DC4u);
    ctx->pc = 0x141DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DBCu;
            // 0x141dc0: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DC4u; }
        if (ctx->pc != 0x141DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DC4u; }
        if (ctx->pc != 0x141DC4u) { return; }
    }
    ctx->pc = 0x141DC4u;
label_141dc4:
    // 0x141dc4: 0xaf828290  sw          $v0, -0x7D70($gp)
    ctx->pc = 0x141dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935184), GPR_U32(ctx, 2));
label_141dc8:
    // 0x141dc8: 0xc057528  jal         func_15D4A0
label_141dcc:
    if (ctx->pc == 0x141DCCu) {
        ctx->pc = 0x141DCCu;
            // 0x141dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141DD0u;
        goto label_141dd0;
    }
    ctx->pc = 0x141DC8u;
    SET_GPR_U32(ctx, 31, 0x141DD0u);
    ctx->pc = 0x141DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DC8u;
            // 0x141dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DD0u; }
        if (ctx->pc != 0x141DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DD0u; }
        if (ctx->pc != 0x141DD0u) { return; }
    }
    ctx->pc = 0x141DD0u;
label_141dd0:
    // 0x141dd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141dd4:
    // 0x141dd4: 0xc056afc  jal         func_15ABF0
label_141dd8:
    if (ctx->pc == 0x141DD8u) {
        ctx->pc = 0x141DD8u;
            // 0x141dd8: 0xaf908240  sw          $s0, -0x7DC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935104), GPR_U32(ctx, 16));
        ctx->pc = 0x141DDCu;
        goto label_141ddc;
    }
    ctx->pc = 0x141DD4u;
    SET_GPR_U32(ctx, 31, 0x141DDCu);
    ctx->pc = 0x141DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DD4u;
            // 0x141dd8: 0xaf908240  sw          $s0, -0x7DC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935104), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DDCu; }
        if (ctx->pc != 0x141DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DDCu; }
        if (ctx->pc != 0x141DDCu) { return; }
    }
    ctx->pc = 0x141DDCu;
label_141ddc:
    // 0x141ddc: 0xaf828260  sw          $v0, -0x7DA0($gp)
    ctx->pc = 0x141ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935136), GPR_U32(ctx, 2));
label_141de0:
    // 0x141de0: 0xaf808264  sw          $zero, -0x7D9C($gp)
    ctx->pc = 0x141de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935140), GPR_U32(ctx, 0));
label_141de4:
    // 0x141de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141de8:
    // 0x141de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141dec:
    // 0x141dec: 0x3e00008  jr          $ra
label_141df0:
    if (ctx->pc == 0x141DF0u) {
        ctx->pc = 0x141DF0u;
            // 0x141df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x141DF4u;
        goto label_141df4;
    }
    ctx->pc = 0x141DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141DECu;
            // 0x141df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141DF4u;
label_141df4:
    // 0x141df4: 0x0  nop
    ctx->pc = 0x141df4u;
    // NOP
label_141df8:
    // 0x141df8: 0x0  nop
    ctx->pc = 0x141df8u;
    // NOP
label_141dfc:
    // 0x141dfc: 0x0  nop
    ctx->pc = 0x141dfcu;
    // NOP
}
