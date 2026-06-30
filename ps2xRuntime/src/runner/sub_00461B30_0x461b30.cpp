#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00461B30
// Address: 0x461b30 - 0x461d00
void sub_00461B30_0x461b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461B30_0x461b30");
#endif

    switch (ctx->pc) {
        case 0x461b30u: goto label_461b30;
        case 0x461b34u: goto label_461b34;
        case 0x461b38u: goto label_461b38;
        case 0x461b3cu: goto label_461b3c;
        case 0x461b40u: goto label_461b40;
        case 0x461b44u: goto label_461b44;
        case 0x461b48u: goto label_461b48;
        case 0x461b4cu: goto label_461b4c;
        case 0x461b50u: goto label_461b50;
        case 0x461b54u: goto label_461b54;
        case 0x461b58u: goto label_461b58;
        case 0x461b5cu: goto label_461b5c;
        case 0x461b60u: goto label_461b60;
        case 0x461b64u: goto label_461b64;
        case 0x461b68u: goto label_461b68;
        case 0x461b6cu: goto label_461b6c;
        case 0x461b70u: goto label_461b70;
        case 0x461b74u: goto label_461b74;
        case 0x461b78u: goto label_461b78;
        case 0x461b7cu: goto label_461b7c;
        case 0x461b80u: goto label_461b80;
        case 0x461b84u: goto label_461b84;
        case 0x461b88u: goto label_461b88;
        case 0x461b8cu: goto label_461b8c;
        case 0x461b90u: goto label_461b90;
        case 0x461b94u: goto label_461b94;
        case 0x461b98u: goto label_461b98;
        case 0x461b9cu: goto label_461b9c;
        case 0x461ba0u: goto label_461ba0;
        case 0x461ba4u: goto label_461ba4;
        case 0x461ba8u: goto label_461ba8;
        case 0x461bacu: goto label_461bac;
        case 0x461bb0u: goto label_461bb0;
        case 0x461bb4u: goto label_461bb4;
        case 0x461bb8u: goto label_461bb8;
        case 0x461bbcu: goto label_461bbc;
        case 0x461bc0u: goto label_461bc0;
        case 0x461bc4u: goto label_461bc4;
        case 0x461bc8u: goto label_461bc8;
        case 0x461bccu: goto label_461bcc;
        case 0x461bd0u: goto label_461bd0;
        case 0x461bd4u: goto label_461bd4;
        case 0x461bd8u: goto label_461bd8;
        case 0x461bdcu: goto label_461bdc;
        case 0x461be0u: goto label_461be0;
        case 0x461be4u: goto label_461be4;
        case 0x461be8u: goto label_461be8;
        case 0x461becu: goto label_461bec;
        case 0x461bf0u: goto label_461bf0;
        case 0x461bf4u: goto label_461bf4;
        case 0x461bf8u: goto label_461bf8;
        case 0x461bfcu: goto label_461bfc;
        case 0x461c00u: goto label_461c00;
        case 0x461c04u: goto label_461c04;
        case 0x461c08u: goto label_461c08;
        case 0x461c0cu: goto label_461c0c;
        case 0x461c10u: goto label_461c10;
        case 0x461c14u: goto label_461c14;
        case 0x461c18u: goto label_461c18;
        case 0x461c1cu: goto label_461c1c;
        case 0x461c20u: goto label_461c20;
        case 0x461c24u: goto label_461c24;
        case 0x461c28u: goto label_461c28;
        case 0x461c2cu: goto label_461c2c;
        case 0x461c30u: goto label_461c30;
        case 0x461c34u: goto label_461c34;
        case 0x461c38u: goto label_461c38;
        case 0x461c3cu: goto label_461c3c;
        case 0x461c40u: goto label_461c40;
        case 0x461c44u: goto label_461c44;
        case 0x461c48u: goto label_461c48;
        case 0x461c4cu: goto label_461c4c;
        case 0x461c50u: goto label_461c50;
        case 0x461c54u: goto label_461c54;
        case 0x461c58u: goto label_461c58;
        case 0x461c5cu: goto label_461c5c;
        case 0x461c60u: goto label_461c60;
        case 0x461c64u: goto label_461c64;
        case 0x461c68u: goto label_461c68;
        case 0x461c6cu: goto label_461c6c;
        case 0x461c70u: goto label_461c70;
        case 0x461c74u: goto label_461c74;
        case 0x461c78u: goto label_461c78;
        case 0x461c7cu: goto label_461c7c;
        case 0x461c80u: goto label_461c80;
        case 0x461c84u: goto label_461c84;
        case 0x461c88u: goto label_461c88;
        case 0x461c8cu: goto label_461c8c;
        case 0x461c90u: goto label_461c90;
        case 0x461c94u: goto label_461c94;
        case 0x461c98u: goto label_461c98;
        case 0x461c9cu: goto label_461c9c;
        case 0x461ca0u: goto label_461ca0;
        case 0x461ca4u: goto label_461ca4;
        case 0x461ca8u: goto label_461ca8;
        case 0x461cacu: goto label_461cac;
        case 0x461cb0u: goto label_461cb0;
        case 0x461cb4u: goto label_461cb4;
        case 0x461cb8u: goto label_461cb8;
        case 0x461cbcu: goto label_461cbc;
        case 0x461cc0u: goto label_461cc0;
        case 0x461cc4u: goto label_461cc4;
        case 0x461cc8u: goto label_461cc8;
        case 0x461cccu: goto label_461ccc;
        case 0x461cd0u: goto label_461cd0;
        case 0x461cd4u: goto label_461cd4;
        case 0x461cd8u: goto label_461cd8;
        case 0x461cdcu: goto label_461cdc;
        case 0x461ce0u: goto label_461ce0;
        case 0x461ce4u: goto label_461ce4;
        case 0x461ce8u: goto label_461ce8;
        case 0x461cecu: goto label_461cec;
        case 0x461cf0u: goto label_461cf0;
        case 0x461cf4u: goto label_461cf4;
        case 0x461cf8u: goto label_461cf8;
        case 0x461cfcu: goto label_461cfc;
        default: break;
    }

    ctx->pc = 0x461b30u;

label_461b30:
    // 0x461b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x461b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_461b34:
    // 0x461b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x461b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_461b38:
    // 0x461b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461b3c:
    // 0x461b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461b40:
    // 0x461b40: 0x90820ce1  lbu         $v0, 0xCE1($a0)
    ctx->pc = 0x461b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3297)));
label_461b44:
    // 0x461b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_461b48:
    if (ctx->pc == 0x461B48u) {
        ctx->pc = 0x461B48u;
            // 0x461b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461B4Cu;
        goto label_461b4c;
    }
    ctx->pc = 0x461B44u;
    {
        const bool branch_taken_0x461b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461B44u;
            // 0x461b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461b44) {
            ctx->pc = 0x461B58u;
            goto label_461b58;
        }
    }
    ctx->pc = 0x461B4Cu;
label_461b4c:
    // 0x461b4c: 0x92020ccd  lbu         $v0, 0xCCD($s0)
    ctx->pc = 0x461b4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3277)));
label_461b50:
    // 0x461b50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_461b54:
    if (ctx->pc == 0x461B54u) {
        ctx->pc = 0x461B54u;
            // 0x461b54: 0x8e050cbc  lw          $a1, 0xCBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3260)));
        ctx->pc = 0x461B58u;
        goto label_461b58;
    }
    ctx->pc = 0x461B50u;
    {
        const bool branch_taken_0x461b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461b50) {
            ctx->pc = 0x461B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461B50u;
            // 0x461b54: 0x8e050cbc  lw          $a1, 0xCBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461B64u;
            goto label_461b64;
        }
    }
    ctx->pc = 0x461B58u;
label_461b58:
    // 0x461b58: 0xa2000ce1  sb          $zero, 0xCE1($s0)
    ctx->pc = 0x461b58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 0));
label_461b5c:
    // 0x461b5c: 0x10000061  b           . + 4 + (0x61 << 2)
label_461b60:
    if (ctx->pc == 0x461B60u) {
        ctx->pc = 0x461B60u;
            // 0x461b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461B64u;
        goto label_461b64;
    }
    ctx->pc = 0x461B5Cu;
    {
        const bool branch_taken_0x461b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461B5Cu;
            // 0x461b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461b5c) {
            ctx->pc = 0x461CE4u;
            goto label_461ce4;
        }
    }
    ctx->pc = 0x461B64u;
label_461b64:
    // 0x461b64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x461b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_461b68:
    // 0x461b68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x461b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_461b6c:
    // 0x461b6c: 0x9042fd87  lbu         $v0, -0x279($v0)
    ctx->pc = 0x461b6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966663)));
label_461b70:
    // 0x461b70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_461b74:
    if (ctx->pc == 0x461B74u) {
        ctx->pc = 0x461B74u;
            // 0x461b74: 0x8e03095c  lw          $v1, 0x95C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2396)));
        ctx->pc = 0x461B78u;
        goto label_461b78;
    }
    ctx->pc = 0x461B70u;
    {
        const bool branch_taken_0x461b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b70) {
            ctx->pc = 0x461B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461B70u;
            // 0x461b74: 0x8e03095c  lw          $v1, 0x95C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461B84u;
            goto label_461b84;
        }
    }
    ctx->pc = 0x461B78u;
label_461b78:
    // 0x461b78: 0xa2000ce1  sb          $zero, 0xCE1($s0)
    ctx->pc = 0x461b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 0));
label_461b7c:
    // 0x461b7c: 0x10000059  b           . + 4 + (0x59 << 2)
label_461b80:
    if (ctx->pc == 0x461B80u) {
        ctx->pc = 0x461B80u;
            // 0x461b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461B84u;
        goto label_461b84;
    }
    ctx->pc = 0x461B7Cu;
    {
        const bool branch_taken_0x461b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461B7Cu;
            // 0x461b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461b7c) {
            ctx->pc = 0x461CE4u;
            goto label_461ce4;
        }
    }
    ctx->pc = 0x461B84u;
label_461b84:
    // 0x461b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461b88:
    // 0x461b88: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_461b8c:
    if (ctx->pc == 0x461B8Cu) {
        ctx->pc = 0x461B8Cu;
            // 0x461b8c: 0x8e040cdc  lw          $a0, 0xCDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3292)));
        ctx->pc = 0x461B90u;
        goto label_461b90;
    }
    ctx->pc = 0x461B88u;
    {
        const bool branch_taken_0x461b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x461b88) {
            ctx->pc = 0x461B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461B88u;
            // 0x461b8c: 0x8e040cdc  lw          $a0, 0xCDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461B98u;
            goto label_461b98;
        }
    }
    ctx->pc = 0x461B90u;
label_461b90:
    // 0x461b90: 0x10000054  b           . + 4 + (0x54 << 2)
label_461b94:
    if (ctx->pc == 0x461B94u) {
        ctx->pc = 0x461B94u;
            // 0x461b94: 0xa2000ce1  sb          $zero, 0xCE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461B98u;
        goto label_461b98;
    }
    ctx->pc = 0x461B90u;
    {
        const bool branch_taken_0x461b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461B90u;
            // 0x461b94: 0xa2000ce1  sb          $zero, 0xCE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461b90) {
            ctx->pc = 0x461CE4u;
            goto label_461ce4;
        }
    }
    ctx->pc = 0x461B98u;
label_461b98:
    // 0x461b98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x461b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_461b9c:
    // 0x461b9c: 0x50830051  beql        $a0, $v1, . + 4 + (0x51 << 2)
label_461ba0:
    if (ctx->pc == 0x461BA0u) {
        ctx->pc = 0x461BA0u;
            // 0x461ba0: 0xa2000ce1  sb          $zero, 0xCE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461BA4u;
        goto label_461ba4;
    }
    ctx->pc = 0x461B9Cu;
    {
        const bool branch_taken_0x461b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461b9c) {
            ctx->pc = 0x461BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461B9Cu;
            // 0x461ba0: 0xa2000ce1  sb          $zero, 0xCE1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3297), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461CE4u;
            goto label_461ce4;
        }
    }
    ctx->pc = 0x461BA4u;
label_461ba4:
    // 0x461ba4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x461ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461ba8:
    // 0x461ba8: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
label_461bac:
    if (ctx->pc == 0x461BACu) {
        ctx->pc = 0x461BB0u;
        goto label_461bb0;
    }
    ctx->pc = 0x461BA8u;
    {
        const bool branch_taken_0x461ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461ba8) {
            ctx->pc = 0x461C8Cu;
            goto label_461c8c;
        }
    }
    ctx->pc = 0x461BB0u;
label_461bb0:
    // 0x461bb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x461bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_461bb4:
    // 0x461bb4: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
label_461bb8:
    if (ctx->pc == 0x461BB8u) {
        ctx->pc = 0x461BB8u;
            // 0x461bb8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x461BBCu;
        goto label_461bbc;
    }
    ctx->pc = 0x461BB4u;
    {
        const bool branch_taken_0x461bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461bb4) {
            ctx->pc = 0x461BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461BB4u;
            // 0x461bb8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461C10u;
            goto label_461c10;
        }
    }
    ctx->pc = 0x461BBCu;
label_461bbc:
    // 0x461bbc: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_461bc0:
    if (ctx->pc == 0x461BC0u) {
        ctx->pc = 0x461BC0u;
            // 0x461bc0: 0xc6020cd8  lwc1        $f2, 0xCD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x461BC4u;
        goto label_461bc4;
    }
    ctx->pc = 0x461BBCu;
    {
        const bool branch_taken_0x461bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x461bbc) {
            ctx->pc = 0x461BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461BBCu;
            // 0x461bc0: 0xc6020cd8  lwc1        $f2, 0xCD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x461BD4u;
            goto label_461bd4;
        }
    }
    ctx->pc = 0x461BC4u;
label_461bc4:
    // 0x461bc4: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
label_461bc8:
    if (ctx->pc == 0x461BC8u) {
        ctx->pc = 0x461BC8u;
            // 0x461bc8: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->pc = 0x461BCCu;
        goto label_461bcc;
    }
    ctx->pc = 0x461BC4u;
    {
        const bool branch_taken_0x461bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x461bc4) {
            ctx->pc = 0x461BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461BC4u;
            // 0x461bc8: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461CE0u;
            goto label_461ce0;
        }
    }
    ctx->pc = 0x461BCCu;
label_461bcc:
    // 0x461bcc: 0x10000045  b           . + 4 + (0x45 << 2)
label_461bd0:
    if (ctx->pc == 0x461BD0u) {
        ctx->pc = 0x461BD0u;
            // 0x461bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461BD4u;
        goto label_461bd4;
    }
    ctx->pc = 0x461BCCu;
    {
        const bool branch_taken_0x461bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461BCCu;
            // 0x461bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461bcc) {
            ctx->pc = 0x461CE4u;
            goto label_461ce4;
        }
    }
    ctx->pc = 0x461BD4u;
label_461bd4:
    // 0x461bd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x461bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_461bd8:
    // 0x461bd8: 0x0  nop
    ctx->pc = 0x461bd8u;
    // NOP
label_461bdc:
    // 0x461bdc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x461bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_461be0:
    // 0x461be0: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_461be4:
    if (ctx->pc == 0x461BE4u) {
        ctx->pc = 0x461BE8u;
        goto label_461be8;
    }
    ctx->pc = 0x461BE0u;
    {
        const bool branch_taken_0x461be0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x461be0) {
            ctx->pc = 0x461CE0u;
            goto label_461ce0;
        }
    }
    ctx->pc = 0x461BE8u;
label_461be8:
    // 0x461be8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_461bec:
    // 0x461bec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x461becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_461bf0:
    // 0x461bf0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x461bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_461bf4:
    // 0x461bf4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x461bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_461bf8:
    // 0x461bf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x461bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_461bfc:
    // 0x461bfc: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_461c00:
    if (ctx->pc == 0x461C00u) {
        ctx->pc = 0x461C00u;
            // 0x461c00: 0xe6000cd8  swc1        $f0, 0xCD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3288), bits); }
        ctx->pc = 0x461C04u;
        goto label_461c04;
    }
    ctx->pc = 0x461BFCu;
    {
        const bool branch_taken_0x461bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x461C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461BFCu;
            // 0x461c00: 0xe6000cd8  swc1        $f0, 0xCD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x461bfc) {
            ctx->pc = 0x461CE0u;
            goto label_461ce0;
        }
    }
    ctx->pc = 0x461C04u;
label_461c04:
    // 0x461c04: 0xe6010cd8  swc1        $f1, 0xCD8($s0)
    ctx->pc = 0x461c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3288), bits); }
label_461c08:
    // 0x461c08: 0x10000035  b           . + 4 + (0x35 << 2)
label_461c0c:
    if (ctx->pc == 0x461C0Cu) {
        ctx->pc = 0x461C0Cu;
            // 0x461c0c: 0xae030cdc  sw          $v1, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 3));
        ctx->pc = 0x461C10u;
        goto label_461c10;
    }
    ctx->pc = 0x461C08u;
    {
        const bool branch_taken_0x461c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461C08u;
            // 0x461c0c: 0xae030cdc  sw          $v1, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461c08) {
            ctx->pc = 0x461CE0u;
            goto label_461ce0;
        }
    }
    ctx->pc = 0x461C10u;
label_461c10:
    // 0x461c10: 0xc040180  jal         func_100600
label_461c14:
    if (ctx->pc == 0x461C14u) {
        ctx->pc = 0x461C18u;
        goto label_461c18;
    }
    ctx->pc = 0x461C10u;
    SET_GPR_U32(ctx, 31, 0x461C18u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461C18u; }
        if (ctx->pc != 0x461C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461C18u; }
        if (ctx->pc != 0x461C18u) { return; }
    }
    ctx->pc = 0x461C18u;
label_461c18:
    // 0x461c18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x461c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461c1c:
    // 0x461c1c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_461c20:
    if (ctx->pc == 0x461C20u) {
        ctx->pc = 0x461C20u;
            // 0x461c20: 0x8e040cbc  lw          $a0, 0xCBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3260)));
        ctx->pc = 0x461C24u;
        goto label_461c24;
    }
    ctx->pc = 0x461C1Cu;
    {
        const bool branch_taken_0x461c1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x461c1c) {
            ctx->pc = 0x461C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461C1Cu;
            // 0x461c20: 0x8e040cbc  lw          $a0, 0xCBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461C4Cu;
            goto label_461c4c;
        }
    }
    ctx->pc = 0x461C24u;
label_461c24:
    // 0x461c24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461c28:
    // 0x461c28: 0x8e080968  lw          $t0, 0x968($s0)
    ctx->pc = 0x461c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_461c2c:
    // 0x461c2c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x461c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_461c30:
    // 0x461c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x461c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461c34:
    // 0x461c34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x461c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_461c38:
    // 0x461c38: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x461c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_461c3c:
    // 0x461c3c: 0xc151190  jal         func_544640
label_461c40:
    if (ctx->pc == 0x461C40u) {
        ctx->pc = 0x461C40u;
            // 0x461c40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461C44u;
        goto label_461c44;
    }
    ctx->pc = 0x461C3Cu;
    SET_GPR_U32(ctx, 31, 0x461C44u);
    ctx->pc = 0x461C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461C3Cu;
            // 0x461c40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461C44u; }
        if (ctx->pc != 0x461C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461C44u; }
        if (ctx->pc != 0x461C44u) { return; }
    }
    ctx->pc = 0x461C44u;
label_461c44:
    // 0x461c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x461c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461c48:
    // 0x461c48: 0x8e040cbc  lw          $a0, 0xCBC($s0)
    ctx->pc = 0x461c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3260)));
label_461c4c:
    // 0x461c4c: 0xc0dd00c  jal         func_374030
label_461c50:
    if (ctx->pc == 0x461C50u) {
        ctx->pc = 0x461C54u;
        goto label_461c54;
    }
    ctx->pc = 0x461C4Cu;
    SET_GPR_U32(ctx, 31, 0x461C54u);
    ctx->pc = 0x374030u;
    if (runtime->hasFunction(0x374030u)) {
        auto targetFn = runtime->lookupFunction(0x374030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461C54u; }
        if (ctx->pc != 0x461C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00374030_0x374030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461C54u; }
        if (ctx->pc != 0x461C54u) { return; }
    }
    ctx->pc = 0x461C54u;
label_461c54:
    // 0x461c54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x461c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_461c58:
    // 0x461c58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x461c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461c5c:
    // 0x461c5c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x461c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_461c60:
    // 0x461c60: 0x320f809  jalr        $t9
label_461c64:
    if (ctx->pc == 0x461C64u) {
        ctx->pc = 0x461C64u;
            // 0x461c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461C68u;
        goto label_461c68;
    }
    ctx->pc = 0x461C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x461C68u);
        ctx->pc = 0x461C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461C60u;
            // 0x461c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x461C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x461C68u; }
            if (ctx->pc != 0x461C68u) { return; }
        }
        }
    }
    ctx->pc = 0x461C68u;
label_461c68:
    // 0x461c68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x461c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_461c6c:
    // 0x461c6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x461c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_461c70:
    // 0x461c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x461c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461c74:
    // 0x461c74: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x461c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_461c78:
    // 0x461c78: 0x320f809  jalr        $t9
label_461c7c:
    if (ctx->pc == 0x461C7Cu) {
        ctx->pc = 0x461C7Cu;
            // 0x461c7c: 0x24a53fe0  addiu       $a1, $a1, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16352));
        ctx->pc = 0x461C80u;
        goto label_461c80;
    }
    ctx->pc = 0x461C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x461C80u);
        ctx->pc = 0x461C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461C78u;
            // 0x461c7c: 0x24a53fe0  addiu       $a1, $a1, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x461C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x461C80u; }
            if (ctx->pc != 0x461C80u) { return; }
        }
        }
    }
    ctx->pc = 0x461C80u;
label_461c80:
    // 0x461c80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x461c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461c84:
    // 0x461c84: 0x10000016  b           . + 4 + (0x16 << 2)
label_461c88:
    if (ctx->pc == 0x461C88u) {
        ctx->pc = 0x461C88u;
            // 0x461c88: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->pc = 0x461C8Cu;
        goto label_461c8c;
    }
    ctx->pc = 0x461C84u;
    {
        const bool branch_taken_0x461c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461C84u;
            // 0x461c88: 0xae020cdc  sw          $v0, 0xCDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461c84) {
            ctx->pc = 0x461CE0u;
            goto label_461ce0;
        }
    }
    ctx->pc = 0x461C8Cu;
label_461c8c:
    // 0x461c8c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461c90:
    // 0x461c90: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x461c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_461c94:
    // 0x461c94: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x461c94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_461c98:
    // 0x461c98: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_461c9c:
    if (ctx->pc == 0x461C9Cu) {
        ctx->pc = 0x461CA0u;
        goto label_461ca0;
    }
    ctx->pc = 0x461C98u;
    {
        const bool branch_taken_0x461c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x461c98) {
            ctx->pc = 0x461CE0u;
            goto label_461ce0;
        }
    }
    ctx->pc = 0x461CA0u;
label_461ca0:
    // 0x461ca0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x461ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_461ca4:
    // 0x461ca4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x461ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_461ca8:
    // 0x461ca8: 0x9063fd96  lbu         $v1, -0x26A($v1)
    ctx->pc = 0x461ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966678)));
label_461cac:
    // 0x461cac: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_461cb0:
    if (ctx->pc == 0x461CB0u) {
        ctx->pc = 0x461CB0u;
            // 0x461cb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x461CB4u;
        goto label_461cb4;
    }
    ctx->pc = 0x461CACu;
    {
        const bool branch_taken_0x461cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461cac) {
            ctx->pc = 0x461CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461CACu;
            // 0x461cb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461CDCu;
            goto label_461cdc;
        }
    }
    ctx->pc = 0x461CB4u;
label_461cb4:
    // 0x461cb4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x461cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_461cb8:
    // 0x461cb8: 0x8c63d000  lw          $v1, -0x3000($v1)
    ctx->pc = 0x461cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955008)));
label_461cbc:
    // 0x461cbc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_461cc0:
    if (ctx->pc == 0x461CC0u) {
        ctx->pc = 0x461CC4u;
        goto label_461cc4;
    }
    ctx->pc = 0x461CBCu;
    {
        const bool branch_taken_0x461cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x461cbc) {
            ctx->pc = 0x461CD0u;
            goto label_461cd0;
        }
    }
    ctx->pc = 0x461CC4u;
label_461cc4:
    // 0x461cc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461cc8:
    // 0x461cc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_461ccc:
    if (ctx->pc == 0x461CCCu) {
        ctx->pc = 0x461CCCu;
            // 0x461ccc: 0xa0626068  sb          $v0, 0x6068($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24680), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x461CD0u;
        goto label_461cd0;
    }
    ctx->pc = 0x461CC8u;
    {
        const bool branch_taken_0x461cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461CC8u;
            // 0x461ccc: 0xa0626068  sb          $v0, 0x6068($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24680), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461cc8) {
            ctx->pc = 0x461CD8u;
            goto label_461cd8;
        }
    }
    ctx->pc = 0x461CD0u;
label_461cd0:
    // 0x461cd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x461cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461cd4:
    // 0x461cd4: 0xa0406068  sb          $zero, 0x6068($v0)
    ctx->pc = 0x461cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24680), (uint8_t)GPR_U32(ctx, 0));
label_461cd8:
    // 0x461cd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x461cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_461cdc:
    // 0x461cdc: 0xae020cdc  sw          $v0, 0xCDC($s0)
    ctx->pc = 0x461cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3292), GPR_U32(ctx, 2));
label_461ce0:
    // 0x461ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x461ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461ce4:
    // 0x461ce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x461ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_461ce8:
    // 0x461ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461cec:
    // 0x461cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461cf0:
    // 0x461cf0: 0x3e00008  jr          $ra
label_461cf4:
    if (ctx->pc == 0x461CF4u) {
        ctx->pc = 0x461CF4u;
            // 0x461cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x461CF8u;
        goto label_461cf8;
    }
    ctx->pc = 0x461CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461CF0u;
            // 0x461cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461CF8u;
label_461cf8:
    // 0x461cf8: 0x0  nop
    ctx->pc = 0x461cf8u;
    // NOP
label_461cfc:
    // 0x461cfc: 0x0  nop
    ctx->pc = 0x461cfcu;
    // NOP
}
