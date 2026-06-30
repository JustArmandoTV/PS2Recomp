#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140A10
// Address: 0x140a10 - 0x140d60
void sub_00140A10_0x140a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140A10_0x140a10");
#endif

    switch (ctx->pc) {
        case 0x140a10u: goto label_140a10;
        case 0x140a14u: goto label_140a14;
        case 0x140a18u: goto label_140a18;
        case 0x140a1cu: goto label_140a1c;
        case 0x140a20u: goto label_140a20;
        case 0x140a24u: goto label_140a24;
        case 0x140a28u: goto label_140a28;
        case 0x140a2cu: goto label_140a2c;
        case 0x140a30u: goto label_140a30;
        case 0x140a34u: goto label_140a34;
        case 0x140a38u: goto label_140a38;
        case 0x140a3cu: goto label_140a3c;
        case 0x140a40u: goto label_140a40;
        case 0x140a44u: goto label_140a44;
        case 0x140a48u: goto label_140a48;
        case 0x140a4cu: goto label_140a4c;
        case 0x140a50u: goto label_140a50;
        case 0x140a54u: goto label_140a54;
        case 0x140a58u: goto label_140a58;
        case 0x140a5cu: goto label_140a5c;
        case 0x140a60u: goto label_140a60;
        case 0x140a64u: goto label_140a64;
        case 0x140a68u: goto label_140a68;
        case 0x140a6cu: goto label_140a6c;
        case 0x140a70u: goto label_140a70;
        case 0x140a74u: goto label_140a74;
        case 0x140a78u: goto label_140a78;
        case 0x140a7cu: goto label_140a7c;
        case 0x140a80u: goto label_140a80;
        case 0x140a84u: goto label_140a84;
        case 0x140a88u: goto label_140a88;
        case 0x140a8cu: goto label_140a8c;
        case 0x140a90u: goto label_140a90;
        case 0x140a94u: goto label_140a94;
        case 0x140a98u: goto label_140a98;
        case 0x140a9cu: goto label_140a9c;
        case 0x140aa0u: goto label_140aa0;
        case 0x140aa4u: goto label_140aa4;
        case 0x140aa8u: goto label_140aa8;
        case 0x140aacu: goto label_140aac;
        case 0x140ab0u: goto label_140ab0;
        case 0x140ab4u: goto label_140ab4;
        case 0x140ab8u: goto label_140ab8;
        case 0x140abcu: goto label_140abc;
        case 0x140ac0u: goto label_140ac0;
        case 0x140ac4u: goto label_140ac4;
        case 0x140ac8u: goto label_140ac8;
        case 0x140accu: goto label_140acc;
        case 0x140ad0u: goto label_140ad0;
        case 0x140ad4u: goto label_140ad4;
        case 0x140ad8u: goto label_140ad8;
        case 0x140adcu: goto label_140adc;
        case 0x140ae0u: goto label_140ae0;
        case 0x140ae4u: goto label_140ae4;
        case 0x140ae8u: goto label_140ae8;
        case 0x140aecu: goto label_140aec;
        case 0x140af0u: goto label_140af0;
        case 0x140af4u: goto label_140af4;
        case 0x140af8u: goto label_140af8;
        case 0x140afcu: goto label_140afc;
        case 0x140b00u: goto label_140b00;
        case 0x140b04u: goto label_140b04;
        case 0x140b08u: goto label_140b08;
        case 0x140b0cu: goto label_140b0c;
        case 0x140b10u: goto label_140b10;
        case 0x140b14u: goto label_140b14;
        case 0x140b18u: goto label_140b18;
        case 0x140b1cu: goto label_140b1c;
        case 0x140b20u: goto label_140b20;
        case 0x140b24u: goto label_140b24;
        case 0x140b28u: goto label_140b28;
        case 0x140b2cu: goto label_140b2c;
        case 0x140b30u: goto label_140b30;
        case 0x140b34u: goto label_140b34;
        case 0x140b38u: goto label_140b38;
        case 0x140b3cu: goto label_140b3c;
        case 0x140b40u: goto label_140b40;
        case 0x140b44u: goto label_140b44;
        case 0x140b48u: goto label_140b48;
        case 0x140b4cu: goto label_140b4c;
        case 0x140b50u: goto label_140b50;
        case 0x140b54u: goto label_140b54;
        case 0x140b58u: goto label_140b58;
        case 0x140b5cu: goto label_140b5c;
        case 0x140b60u: goto label_140b60;
        case 0x140b64u: goto label_140b64;
        case 0x140b68u: goto label_140b68;
        case 0x140b6cu: goto label_140b6c;
        case 0x140b70u: goto label_140b70;
        case 0x140b74u: goto label_140b74;
        case 0x140b78u: goto label_140b78;
        case 0x140b7cu: goto label_140b7c;
        case 0x140b80u: goto label_140b80;
        case 0x140b84u: goto label_140b84;
        case 0x140b88u: goto label_140b88;
        case 0x140b8cu: goto label_140b8c;
        case 0x140b90u: goto label_140b90;
        case 0x140b94u: goto label_140b94;
        case 0x140b98u: goto label_140b98;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba0u: goto label_140ba0;
        case 0x140ba4u: goto label_140ba4;
        case 0x140ba8u: goto label_140ba8;
        case 0x140bacu: goto label_140bac;
        case 0x140bb0u: goto label_140bb0;
        case 0x140bb4u: goto label_140bb4;
        case 0x140bb8u: goto label_140bb8;
        case 0x140bbcu: goto label_140bbc;
        case 0x140bc0u: goto label_140bc0;
        case 0x140bc4u: goto label_140bc4;
        case 0x140bc8u: goto label_140bc8;
        case 0x140bccu: goto label_140bcc;
        case 0x140bd0u: goto label_140bd0;
        case 0x140bd4u: goto label_140bd4;
        case 0x140bd8u: goto label_140bd8;
        case 0x140bdcu: goto label_140bdc;
        case 0x140be0u: goto label_140be0;
        case 0x140be4u: goto label_140be4;
        case 0x140be8u: goto label_140be8;
        case 0x140becu: goto label_140bec;
        case 0x140bf0u: goto label_140bf0;
        case 0x140bf4u: goto label_140bf4;
        case 0x140bf8u: goto label_140bf8;
        case 0x140bfcu: goto label_140bfc;
        case 0x140c00u: goto label_140c00;
        case 0x140c04u: goto label_140c04;
        case 0x140c08u: goto label_140c08;
        case 0x140c0cu: goto label_140c0c;
        case 0x140c10u: goto label_140c10;
        case 0x140c14u: goto label_140c14;
        case 0x140c18u: goto label_140c18;
        case 0x140c1cu: goto label_140c1c;
        case 0x140c20u: goto label_140c20;
        case 0x140c24u: goto label_140c24;
        case 0x140c28u: goto label_140c28;
        case 0x140c2cu: goto label_140c2c;
        case 0x140c30u: goto label_140c30;
        case 0x140c34u: goto label_140c34;
        case 0x140c38u: goto label_140c38;
        case 0x140c3cu: goto label_140c3c;
        case 0x140c40u: goto label_140c40;
        case 0x140c44u: goto label_140c44;
        case 0x140c48u: goto label_140c48;
        case 0x140c4cu: goto label_140c4c;
        case 0x140c50u: goto label_140c50;
        case 0x140c54u: goto label_140c54;
        case 0x140c58u: goto label_140c58;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c60u: goto label_140c60;
        case 0x140c64u: goto label_140c64;
        case 0x140c68u: goto label_140c68;
        case 0x140c6cu: goto label_140c6c;
        case 0x140c70u: goto label_140c70;
        case 0x140c74u: goto label_140c74;
        case 0x140c78u: goto label_140c78;
        case 0x140c7cu: goto label_140c7c;
        case 0x140c80u: goto label_140c80;
        case 0x140c84u: goto label_140c84;
        case 0x140c88u: goto label_140c88;
        case 0x140c8cu: goto label_140c8c;
        case 0x140c90u: goto label_140c90;
        case 0x140c94u: goto label_140c94;
        case 0x140c98u: goto label_140c98;
        case 0x140c9cu: goto label_140c9c;
        case 0x140ca0u: goto label_140ca0;
        case 0x140ca4u: goto label_140ca4;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cacu: goto label_140cac;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cb8u: goto label_140cb8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cc8u: goto label_140cc8;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cd8u: goto label_140cd8;
        case 0x140cdcu: goto label_140cdc;
        case 0x140ce0u: goto label_140ce0;
        case 0x140ce4u: goto label_140ce4;
        case 0x140ce8u: goto label_140ce8;
        case 0x140cecu: goto label_140cec;
        case 0x140cf0u: goto label_140cf0;
        case 0x140cf4u: goto label_140cf4;
        case 0x140cf8u: goto label_140cf8;
        case 0x140cfcu: goto label_140cfc;
        case 0x140d00u: goto label_140d00;
        case 0x140d04u: goto label_140d04;
        case 0x140d08u: goto label_140d08;
        case 0x140d0cu: goto label_140d0c;
        case 0x140d10u: goto label_140d10;
        case 0x140d14u: goto label_140d14;
        case 0x140d18u: goto label_140d18;
        case 0x140d1cu: goto label_140d1c;
        case 0x140d20u: goto label_140d20;
        case 0x140d24u: goto label_140d24;
        case 0x140d28u: goto label_140d28;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d30u: goto label_140d30;
        case 0x140d34u: goto label_140d34;
        case 0x140d38u: goto label_140d38;
        case 0x140d3cu: goto label_140d3c;
        case 0x140d40u: goto label_140d40;
        case 0x140d44u: goto label_140d44;
        case 0x140d48u: goto label_140d48;
        case 0x140d4cu: goto label_140d4c;
        case 0x140d50u: goto label_140d50;
        case 0x140d54u: goto label_140d54;
        case 0x140d58u: goto label_140d58;
        case 0x140d5cu: goto label_140d5c;
        default: break;
    }

    ctx->pc = 0x140a10u;

label_140a10:
    // 0x140a10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x140a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_140a14:
    // 0x140a14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_140a18:
    // 0x140a18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_140a1c:
    // 0x140a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_140a20:
    // 0x140a20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x140a20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_140a24:
    // 0x140a24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x140a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_140a28:
    // 0x140a28: 0x8f828158  lw          $v0, -0x7EA8($gp)
    ctx->pc = 0x140a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_140a2c:
    // 0x140a2c: 0x94900006  lhu         $s0, 0x6($a0)
    ctx->pc = 0x140a2cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_140a30:
    // 0x140a30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_140a34:
    if (ctx->pc == 0x140A34u) {
        ctx->pc = 0x140A34u;
            // 0x140a34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140A38u;
        goto label_140a38;
    }
    ctx->pc = 0x140A30u;
    {
        const bool branch_taken_0x140a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A30u;
            // 0x140a34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a30) {
            ctx->pc = 0x140A40u;
            goto label_140a40;
        }
    }
    ctx->pc = 0x140A38u;
label_140a38:
    // 0x140a38: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_140a3c:
    if (ctx->pc == 0x140A3Cu) {
        ctx->pc = 0x140A3Cu;
            // 0x140a3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x140A40u;
        goto label_140a40;
    }
    ctx->pc = 0x140A38u;
    {
        const bool branch_taken_0x140a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A38u;
            // 0x140a3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a38) {
            ctx->pc = 0x140D3Cu;
            goto label_140d3c;
        }
    }
    ctx->pc = 0x140A40u;
label_140a40:
    // 0x140a40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x140a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_140a44:
    // 0x140a44: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_140a48:
    if (ctx->pc == 0x140A48u) {
        ctx->pc = 0x140A48u;
            // 0x140a48: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x140A4Cu;
        goto label_140a4c;
    }
    ctx->pc = 0x140A44u;
    {
        const bool branch_taken_0x140a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a44) {
            ctx->pc = 0x140A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140A44u;
            // 0x140a48: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140A54u;
            goto label_140a54;
        }
    }
    ctx->pc = 0x140A4Cu;
label_140a4c:
    // 0x140a4c: 0x100000bb  b           . + 4 + (0xBB << 2)
label_140a50:
    if (ctx->pc == 0x140A50u) {
        ctx->pc = 0x140A50u;
            // 0x140a50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x140A54u;
        goto label_140a54;
    }
    ctx->pc = 0x140A4Cu;
    {
        const bool branch_taken_0x140a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A4Cu;
            // 0x140a50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a4c) {
            ctx->pc = 0x140D3Cu;
            goto label_140d3c;
        }
    }
    ctx->pc = 0x140A54u;
label_140a54:
    // 0x140a54: 0x8f83819c  lw          $v1, -0x7E64($gp)
    ctx->pc = 0x140a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_140a58:
    // 0x140a58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x140a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_140a5c:
    // 0x140a5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_140a60:
    // 0x140a60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x140a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_140a64:
    // 0x140a64: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_140a68:
    if (ctx->pc == 0x140A68u) {
        ctx->pc = 0x140A68u;
            // 0x140a68: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x140A6Cu;
        goto label_140a6c;
    }
    ctx->pc = 0x140A64u;
    {
        const bool branch_taken_0x140a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A64u;
            // 0x140a68: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a64) {
            ctx->pc = 0x140ABCu;
            goto label_140abc;
        }
    }
    ctx->pc = 0x140A6Cu;
label_140a6c:
    // 0x140a6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140a70:
    // 0x140a70: 0x8c425854  lw          $v0, 0x5854($v0)
    ctx->pc = 0x140a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22612)));
label_140a74:
    // 0x140a74: 0x10500011  beq         $v0, $s0, . + 4 + (0x11 << 2)
label_140a78:
    if (ctx->pc == 0x140A78u) {
        ctx->pc = 0x140A7Cu;
        goto label_140a7c;
    }
    ctx->pc = 0x140A74u;
    {
        const bool branch_taken_0x140a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x140a74) {
            ctx->pc = 0x140ABCu;
            goto label_140abc;
        }
    }
    ctx->pc = 0x140A7Cu;
label_140a7c:
    // 0x140a7c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_140a80:
    // 0x140a80: 0x60f809  jalr        $v1
label_140a84:
    if (ctx->pc == 0x140A84u) {
        ctx->pc = 0x140A84u;
            // 0x140a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x140A88u;
        goto label_140a88;
    }
    ctx->pc = 0x140A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x140A88u);
        ctx->pc = 0x140A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A80u;
            // 0x140a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x140A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140A88u; }
            if (ctx->pc != 0x140A88u) { return; }
        }
        }
    }
    ctx->pc = 0x140A88u;
label_140a88:
    // 0x140a88: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_140a8c:
    if (ctx->pc == 0x140A8Cu) {
        ctx->pc = 0x140A8Cu;
            // 0x140a8c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x140A90u;
        goto label_140a90;
    }
    ctx->pc = 0x140A88u;
    {
        const bool branch_taken_0x140a88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x140a88) {
            ctx->pc = 0x140A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140A88u;
            // 0x140a8c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140A98u;
            goto label_140a98;
        }
    }
    ctx->pc = 0x140A90u;
label_140a90:
    // 0x140a90: 0x100000ab  b           . + 4 + (0xAB << 2)
label_140a94:
    if (ctx->pc == 0x140A94u) {
        ctx->pc = 0x140A94u;
            // 0x140a94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x140A98u;
        goto label_140a98;
    }
    ctx->pc = 0x140A90u;
    {
        const bool branch_taken_0x140a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140A90u;
            // 0x140a94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a90) {
            ctx->pc = 0x140D40u;
            goto label_140d40;
        }
    }
    ctx->pc = 0x140A98u;
label_140a98:
    // 0x140a98: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_140a9c:
    if (ctx->pc == 0x140A9Cu) {
        ctx->pc = 0x140AA0u;
        goto label_140aa0;
    }
    ctx->pc = 0x140A98u;
    {
        const bool branch_taken_0x140a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140a98) {
            ctx->pc = 0x140ABCu;
            goto label_140abc;
        }
    }
    ctx->pc = 0x140AA0u;
label_140aa0:
    // 0x140aa0: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140aa4:
    // 0x140aa4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_140aa8:
    // 0x140aa8: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_140aac:
    // 0x140aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140ab0:
    // 0x140ab0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x140ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140ab4:
    // 0x140ab4: 0xc057540  jal         func_15D500
label_140ab8:
    if (ctx->pc == 0x140AB8u) {
        ctx->pc = 0x140AB8u;
            // 0x140ab8: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x140ABCu;
        goto label_140abc;
    }
    ctx->pc = 0x140AB4u;
    SET_GPR_U32(ctx, 31, 0x140ABCu);
    ctx->pc = 0x140AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140AB4u;
            // 0x140ab8: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ABCu; }
        if (ctx->pc != 0x140ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140ABCu; }
        if (ctx->pc != 0x140ABCu) { return; }
    }
    ctx->pc = 0x140ABCu;
label_140abc:
    // 0x140abc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140ac0:
    // 0x140ac0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x140ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_140ac4:
    // 0x140ac4: 0xac505854  sw          $s0, 0x5854($v0)
    ctx->pc = 0x140ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 16));
label_140ac8:
    // 0x140ac8: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x140ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_140acc:
    // 0x140acc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140ad0:
    // 0x140ad0: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x140ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_140ad4:
    // 0x140ad4: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x140ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
label_140ad8:
    // 0x140ad8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x140ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_140adc:
    // 0x140adc: 0x9e240010  lwu         $a0, 0x10($s1)
    ctx->pc = 0x140adcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_140ae0:
    // 0x140ae0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_140ae4:
    // 0x140ae4: 0xdce90010  ld          $t1, 0x10($a3)
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_140ae8:
    // 0x140ae8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x140ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_140aec:
    // 0x140aec: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x140aecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
label_140af0:
    // 0x140af0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140af4:
    // 0x140af4: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140af8:
    // 0x140af8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x140af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_140afc:
    // 0x140afc: 0xffa90050  sd          $t1, 0x50($sp)
    ctx->pc = 0x140afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 9));
label_140b00:
    // 0x140b00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_140b04:
    // 0x140b04: 0xffa80048  sd          $t0, 0x48($sp)
    ctx->pc = 0x140b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 8));
label_140b08:
    // 0x140b08: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140b0c:
    // 0x140b0c: 0xaf8481d4  sw          $a0, -0x7E2C($gp)
    ctx->pc = 0x140b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 4));
label_140b10:
    // 0x140b10: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_140b14:
    // 0x140b14: 0xc057540  jal         func_15D500
label_140b18:
    if (ctx->pc == 0x140B18u) {
        ctx->pc = 0x140B18u;
            // 0x140b18: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x140B1Cu;
        goto label_140b1c;
    }
    ctx->pc = 0x140B14u;
    SET_GPR_U32(ctx, 31, 0x140B1Cu);
    ctx->pc = 0x140B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B14u;
            // 0x140b18: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B1Cu; }
        if (ctx->pc != 0x140B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B1Cu; }
        if (ctx->pc != 0x140B1Cu) { return; }
    }
    ctx->pc = 0x140B1Cu;
label_140b1c:
    // 0x140b1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x140b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140b20:
    // 0x140b20: 0xc050358  jal         func_140D60
label_140b24:
    if (ctx->pc == 0x140B24u) {
        ctx->pc = 0x140B24u;
            // 0x140b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140B28u;
        goto label_140b28;
    }
    ctx->pc = 0x140B20u;
    SET_GPR_U32(ctx, 31, 0x140B28u);
    ctx->pc = 0x140B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140B20u;
            // 0x140b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140D60u;
    if (runtime->hasFunction(0x140D60u)) {
        auto targetFn = runtime->lookupFunction(0x140D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B28u; }
        if (ctx->pc != 0x140B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140D60_0x140d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B28u; }
        if (ctx->pc != 0x140B28u) { return; }
    }
    ctx->pc = 0x140B28u;
label_140b28:
    // 0x140b28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x140b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140b2c:
    // 0x140b2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x140b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_140b30:
    // 0x140b30: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_140b34:
    if (ctx->pc == 0x140B34u) {
        ctx->pc = 0x140B34u;
            // 0x140b34: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x140B38u;
        goto label_140b38;
    }
    ctx->pc = 0x140B30u;
    {
        const bool branch_taken_0x140b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b30) {
            ctx->pc = 0x140B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140B30u;
            // 0x140b34: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140B58u;
            goto label_140b58;
        }
    }
    ctx->pc = 0x140B38u;
label_140b38:
    // 0x140b38: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x140b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_140b3c:
    // 0x140b3c: 0x93a4004c  lbu         $a0, 0x4C($sp)
    ctx->pc = 0x140b3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_140b40:
    // 0x140b40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x140b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_140b44:
    // 0x140b44: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x140b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_140b48:
    // 0x140b48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x140b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_140b4c:
    // 0x140b4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140b50:
    // 0x140b50: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x140b50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_140b54:
    // 0x140b54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140b58:
    // 0x140b58: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x140b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_140b5c:
    // 0x140b5c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_140b60:
    if (ctx->pc == 0x140B60u) {
        ctx->pc = 0x140B60u;
            // 0x140b60: 0x93a30050  lbu         $v1, 0x50($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x140B64u;
        goto label_140b64;
    }
    ctx->pc = 0x140B5Cu;
    {
        const bool branch_taken_0x140b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b5c) {
            ctx->pc = 0x140B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140B5Cu;
            // 0x140b60: 0x93a30050  lbu         $v1, 0x50($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140BACu;
            goto label_140bac;
        }
    }
    ctx->pc = 0x140B64u;
label_140b64:
    // 0x140b64: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x140b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_140b68:
    // 0x140b68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x140b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_140b6c:
    // 0x140b6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_140b70:
    if (ctx->pc == 0x140B70u) {
        ctx->pc = 0x140B70u;
            // 0x140b70: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x140B74u;
        goto label_140b74;
    }
    ctx->pc = 0x140B6Cu;
    {
        const bool branch_taken_0x140b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x140B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B6Cu;
            // 0x140b70: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b6c) {
            ctx->pc = 0x140B88u;
            goto label_140b88;
        }
    }
    ctx->pc = 0x140B74u;
label_140b74:
    // 0x140b74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140b78:
    // 0x140b78: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_140b7c:
    if (ctx->pc == 0x140B7Cu) {
        ctx->pc = 0x140B7Cu;
            // 0x140b7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x140B80u;
        goto label_140b80;
    }
    ctx->pc = 0x140B78u;
    {
        const bool branch_taken_0x140b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x140b78) {
            ctx->pc = 0x140B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140B78u;
            // 0x140b7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140B8Cu;
            goto label_140b8c;
        }
    }
    ctx->pc = 0x140B80u;
label_140b80:
    // 0x140b80: 0x10000003  b           . + 4 + (0x3 << 2)
label_140b84:
    if (ctx->pc == 0x140B84u) {
        ctx->pc = 0x140B84u;
            // 0x140b84: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x140B88u;
        goto label_140b88;
    }
    ctx->pc = 0x140B80u;
    {
        const bool branch_taken_0x140b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140B80u;
            // 0x140b84: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b80) {
            ctx->pc = 0x140B90u;
            goto label_140b90;
        }
    }
    ctx->pc = 0x140B88u;
label_140b88:
    // 0x140b88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140b8c:
    // 0x140b8c: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x140b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_140b90:
    // 0x140b90: 0x93a4004c  lbu         $a0, 0x4C($sp)
    ctx->pc = 0x140b90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_140b94:
    // 0x140b94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_140b98:
    // 0x140b98: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x140b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_140b9c:
    // 0x140b9c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x140b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_140ba0:
    // 0x140ba0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140ba4:
    // 0x140ba4: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x140ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_140ba8:
    // 0x140ba8: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x140ba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_140bac:
    // 0x140bac: 0x316fc  dsll32      $v0, $v1, 27
    ctx->pc = 0x140bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 27));
label_140bb0:
    // 0x140bb0: 0x2177e  dsrl32      $v0, $v0, 29
    ctx->pc = 0x140bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 29));
label_140bb4:
    // 0x140bb4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_140bb8:
    if (ctx->pc == 0x140BB8u) {
        ctx->pc = 0x140BB8u;
            // 0x140bb8: 0x8f8581d4  lw          $a1, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->pc = 0x140BBCu;
        goto label_140bbc;
    }
    ctx->pc = 0x140BB4u;
    {
        const bool branch_taken_0x140bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140bb4) {
            ctx->pc = 0x140BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140BB4u;
            // 0x140bb8: 0x8f8581d4  lw          $a1, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140C30u;
            goto label_140c30;
        }
    }
    ctx->pc = 0x140BBCu;
label_140bbc:
    // 0x140bbc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x140bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_140bc0:
    // 0x140bc0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x140bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_140bc4:
    // 0x140bc4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x140bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_140bc8:
    // 0x140bc8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_140bcc:
    if (ctx->pc == 0x140BCCu) {
        ctx->pc = 0x140BD0u;
        goto label_140bd0;
    }
    ctx->pc = 0x140BC8u;
    {
        const bool branch_taken_0x140bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bc8) {
            ctx->pc = 0x140C2Cu;
            goto label_140c2c;
        }
    }
    ctx->pc = 0x140BD0u;
label_140bd0:
    // 0x140bd0: 0x96240014  lhu         $a0, 0x14($s1)
    ctx->pc = 0x140bd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_140bd4:
    // 0x140bd4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x140bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_140bd8:
    // 0x140bd8: 0x93a50052  lbu         $a1, 0x52($sp)
    ctx->pc = 0x140bd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 82)));
label_140bdc:
    // 0x140bdc: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x140bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140be0:
    // 0x140be0: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x140be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_140be4:
    // 0x140be4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x140be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140be8:
    // 0x140be8: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x140be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_140bec:
    // 0x140bec: 0x86220016  lh          $v0, 0x16($s1)
    ctx->pc = 0x140becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_140bf0:
    // 0x140bf0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_140bf4:
    // 0x140bf4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x140bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_140bf8:
    // 0x140bf8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_140bfc:
    // 0x140bfc: 0x30e70040  andi        $a3, $a3, 0x40
    ctx->pc = 0x140bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_140c00:
    // 0x140c00: 0xa3a30052  sb          $v1, 0x52($sp)
    ctx->pc = 0x140c00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 3));
label_140c04:
    // 0x140c04: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x140c04u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
label_140c08:
    // 0x140c08: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x140c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_140c0c:
    // 0x140c0c: 0x97a40054  lhu         $a0, 0x54($sp)
    ctx->pc = 0x140c0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
label_140c10:
    // 0x140c10: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_140c14:
    // 0x140c14: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x140c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_140c18:
    // 0x140c18: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x140c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_140c1c:
    // 0x140c1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x140c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_140c20:
    // 0x140c20: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x140c20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_140c24:
    // 0x140c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_140c28:
    // 0x140c28: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x140c28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
label_140c2c:
    // 0x140c2c: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140c30:
    // 0x140c30: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_140c34:
    // 0x140c34: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_140c38:
    // 0x140c38: 0xdfa70050  ld          $a3, 0x50($sp)
    ctx->pc = 0x140c38u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_140c3c:
    // 0x140c3c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x140c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140c40:
    // 0x140c40: 0xc057540  jal         func_15D500
label_140c44:
    if (ctx->pc == 0x140C44u) {
        ctx->pc = 0x140C44u;
            // 0x140c44: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x140C48u;
        goto label_140c48;
    }
    ctx->pc = 0x140C40u;
    SET_GPR_U32(ctx, 31, 0x140C48u);
    ctx->pc = 0x140C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C40u;
            // 0x140c44: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C48u; }
        if (ctx->pc != 0x140C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C48u; }
        if (ctx->pc != 0x140C48u) { return; }
    }
    ctx->pc = 0x140C48u;
label_140c48:
    // 0x140c48: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140c4c:
    // 0x140c4c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x140c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_140c50:
    // 0x140c50: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
label_140c54:
    // 0x140c54: 0xdfa70048  ld          $a3, 0x48($sp)
    ctx->pc = 0x140c54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_140c58:
    // 0x140c58: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_140c5c:
    // 0x140c5c: 0xc057540  jal         func_15D500
label_140c60:
    if (ctx->pc == 0x140C60u) {
        ctx->pc = 0x140C60u;
            // 0x140c60: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->pc = 0x140C64u;
        goto label_140c64;
    }
    ctx->pc = 0x140C5Cu;
    SET_GPR_U32(ctx, 31, 0x140C64u);
    ctx->pc = 0x140C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140C5Cu;
            // 0x140c60: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C64u; }
        if (ctx->pc != 0x140C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140C64u; }
        if (ctx->pc != 0x140C64u) { return; }
    }
    ctx->pc = 0x140C64u;
label_140c64:
    // 0x140c64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140c68:
    // 0x140c68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_140c6c:
    // 0x140c6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140c70:
    // 0x140c70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140c74:
    if (ctx->pc == 0x140C74u) {
        ctx->pc = 0x140C74u;
            // 0x140c74: 0xc6340008  lwc1        $f20, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x140C78u;
        goto label_140c78;
    }
    ctx->pc = 0x140C70u;
    {
        const bool branch_taken_0x140c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c70) {
            ctx->pc = 0x140C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140C70u;
            // 0x140c74: 0xc6340008  lwc1        $f20, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x140C84u;
            goto label_140c84;
        }
    }
    ctx->pc = 0x140C78u;
label_140c78:
    // 0x140c78: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x140c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_140c7c:
    // 0x140c7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_140c80:
    if (ctx->pc == 0x140C80u) {
        ctx->pc = 0x140C80u;
            // 0x140c80: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x140C84u;
        goto label_140c84;
    }
    ctx->pc = 0x140C7Cu;
    {
        const bool branch_taken_0x140c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C7Cu;
            // 0x140c80: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c7c) {
            ctx->pc = 0x140C88u;
            goto label_140c88;
        }
    }
    ctx->pc = 0x140C84u;
label_140c84:
    // 0x140c84: 0xc635000c  lwc1        $f21, 0xC($s1)
    ctx->pc = 0x140c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_140c88:
    // 0x140c88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140c8c:
    // 0x140c8c: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x140c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_140c90:
    // 0x140c90: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x140c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_140c94:
    // 0x140c94: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_140c98:
    if (ctx->pc == 0x140C98u) {
        ctx->pc = 0x140C98u;
            // 0x140c98: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->pc = 0x140C9Cu;
        goto label_140c9c;
    }
    ctx->pc = 0x140C94u;
    {
        const bool branch_taken_0x140c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140C94u;
            // 0x140c98: 0xaf8081a8  sw          $zero, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c94) {
            ctx->pc = 0x140D14u;
            goto label_140d14;
        }
    }
    ctx->pc = 0x140C9Cu;
label_140c9c:
    // 0x140c9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140ca0:
    // 0x140ca0: 0xc4405864  lwc1        $f0, 0x5864($v0)
    ctx->pc = 0x140ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140ca4:
    // 0x140ca4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x140ca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140ca8:
    // 0x140ca8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_140cac:
    if (ctx->pc == 0x140CACu) {
        ctx->pc = 0x140CACu;
            // 0x140cac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x140CB0u;
        goto label_140cb0;
    }
    ctx->pc = 0x140CA8u;
    {
        const bool branch_taken_0x140ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140ca8) {
            ctx->pc = 0x140CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140CA8u;
            // 0x140cac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140CC8u;
            goto label_140cc8;
        }
    }
    ctx->pc = 0x140CB0u;
label_140cb0:
    // 0x140cb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140cb4:
    // 0x140cb4: 0xc4405868  lwc1        $f0, 0x5868($v0)
    ctx->pc = 0x140cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140cb8:
    // 0x140cb8: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x140cb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140cbc:
    // 0x140cbc: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_140cc0:
    if (ctx->pc == 0x140CC0u) {
        ctx->pc = 0x140CC0u;
            // 0x140cc0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x140CC4u;
        goto label_140cc4;
    }
    ctx->pc = 0x140CBCu;
    {
        const bool branch_taken_0x140cbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140cbc) {
            ctx->pc = 0x140CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140CBCu;
            // 0x140cc0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140CF8u;
            goto label_140cf8;
        }
    }
    ctx->pc = 0x140CC4u;
label_140cc4:
    // 0x140cc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x140cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_140cc8:
    // 0x140cc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x140cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_140ccc:
    // 0x140ccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x140cccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_140cd0:
    // 0x140cd0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x140cd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_140cd4:
    // 0x140cd4: 0xc057470  jal         func_15D1C0
label_140cd8:
    if (ctx->pc == 0x140CD8u) {
        ctx->pc = 0x140CD8u;
            // 0x140cd8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x140CDCu;
        goto label_140cdc;
    }
    ctx->pc = 0x140CD4u;
    SET_GPR_U32(ctx, 31, 0x140CDCu);
    ctx->pc = 0x140CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140CD4u;
            // 0x140cd8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CDCu; }
        if (ctx->pc != 0x140CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CDCu; }
        if (ctx->pc != 0x140CDCu) { return; }
    }
    ctx->pc = 0x140CDCu;
label_140cdc:
    // 0x140cdc: 0xc057480  jal         func_15D200
label_140ce0:
    if (ctx->pc == 0x140CE0u) {
        ctx->pc = 0x140CE4u;
        goto label_140ce4;
    }
    ctx->pc = 0x140CDCu;
    SET_GPR_U32(ctx, 31, 0x140CE4u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CE4u; }
        if (ctx->pc != 0x140CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140CE4u; }
        if (ctx->pc != 0x140CE4u) { return; }
    }
    ctx->pc = 0x140CE4u;
label_140ce4:
    // 0x140ce4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_140ce8:
    // 0x140ce8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_140cec:
    // 0x140cec: 0xe4745864  swc1        $f20, 0x5864($v1)
    ctx->pc = 0x140cecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 22628), bits); }
label_140cf0:
    // 0x140cf0: 0xe4555868  swc1        $f21, 0x5868($v0)
    ctx->pc = 0x140cf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22632), bits); }
label_140cf4:
    // 0x140cf4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140cf8:
    // 0x140cf8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x140cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_140cfc:
    // 0x140cfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140d00:
    // 0x140d00: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_140d04:
    if (ctx->pc == 0x140D04u) {
        ctx->pc = 0x140D04u;
            // 0x140d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x140D08u;
        goto label_140d08;
    }
    ctx->pc = 0x140D00u;
    {
        const bool branch_taken_0x140d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d00) {
            ctx->pc = 0x140D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140D00u;
            // 0x140d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140D3Cu;
            goto label_140d3c;
        }
    }
    ctx->pc = 0x140D08u;
label_140d08:
    // 0x140d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140d0c:
    // 0x140d0c: 0x1000000a  b           . + 4 + (0xA << 2)
label_140d10:
    if (ctx->pc == 0x140D10u) {
        ctx->pc = 0x140D10u;
            // 0x140d10: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->pc = 0x140D14u;
        goto label_140d14;
    }
    ctx->pc = 0x140D0Cu;
    {
        const bool branch_taken_0x140d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D0Cu;
            // 0x140d10: 0xaf8281a8  sw          $v0, -0x7E58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d0c) {
            ctx->pc = 0x140D38u;
            goto label_140d38;
        }
    }
    ctx->pc = 0x140D14u;
label_140d14:
    // 0x140d14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x140d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_140d18:
    // 0x140d18: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x140d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_140d1c:
    // 0x140d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x140d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140d20:
    // 0x140d20: 0x0  nop
    ctx->pc = 0x140d20u;
    // NOP
label_140d24:
    // 0x140d24: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x140d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_140d28:
    // 0x140d28: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x140d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_140d2c:
    // 0x140d2c: 0xe4604910  swc1        $f0, 0x4910($v1)
    ctx->pc = 0x140d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18704), bits); }
label_140d30:
    // 0x140d30: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x140d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_140d34:
    // 0x140d34: 0xe4404914  swc1        $f0, 0x4914($v0)
    ctx->pc = 0x140d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18708), bits); }
label_140d38:
    // 0x140d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140d3c:
    // 0x140d3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140d40:
    // 0x140d40: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x140d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_140d44:
    // 0x140d44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140d48:
    // 0x140d48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x140d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_140d4c:
    // 0x140d4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140d50:
    // 0x140d50: 0x3e00008  jr          $ra
label_140d54:
    if (ctx->pc == 0x140D54u) {
        ctx->pc = 0x140D54u;
            // 0x140d54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x140D58u;
        goto label_140d58;
    }
    ctx->pc = 0x140D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140D50u;
            // 0x140d54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140D58u;
label_140d58:
    // 0x140d58: 0x0  nop
    ctx->pc = 0x140d58u;
    // NOP
label_140d5c:
    // 0x140d5c: 0x0  nop
    ctx->pc = 0x140d5cu;
    // NOP
}
