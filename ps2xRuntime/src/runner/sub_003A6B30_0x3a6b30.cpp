#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A6B30
// Address: 0x3a6b30 - 0x3a6d10
void sub_003A6B30_0x3a6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6B30_0x3a6b30");
#endif

    switch (ctx->pc) {
        case 0x3a6b30u: goto label_3a6b30;
        case 0x3a6b34u: goto label_3a6b34;
        case 0x3a6b38u: goto label_3a6b38;
        case 0x3a6b3cu: goto label_3a6b3c;
        case 0x3a6b40u: goto label_3a6b40;
        case 0x3a6b44u: goto label_3a6b44;
        case 0x3a6b48u: goto label_3a6b48;
        case 0x3a6b4cu: goto label_3a6b4c;
        case 0x3a6b50u: goto label_3a6b50;
        case 0x3a6b54u: goto label_3a6b54;
        case 0x3a6b58u: goto label_3a6b58;
        case 0x3a6b5cu: goto label_3a6b5c;
        case 0x3a6b60u: goto label_3a6b60;
        case 0x3a6b64u: goto label_3a6b64;
        case 0x3a6b68u: goto label_3a6b68;
        case 0x3a6b6cu: goto label_3a6b6c;
        case 0x3a6b70u: goto label_3a6b70;
        case 0x3a6b74u: goto label_3a6b74;
        case 0x3a6b78u: goto label_3a6b78;
        case 0x3a6b7cu: goto label_3a6b7c;
        case 0x3a6b80u: goto label_3a6b80;
        case 0x3a6b84u: goto label_3a6b84;
        case 0x3a6b88u: goto label_3a6b88;
        case 0x3a6b8cu: goto label_3a6b8c;
        case 0x3a6b90u: goto label_3a6b90;
        case 0x3a6b94u: goto label_3a6b94;
        case 0x3a6b98u: goto label_3a6b98;
        case 0x3a6b9cu: goto label_3a6b9c;
        case 0x3a6ba0u: goto label_3a6ba0;
        case 0x3a6ba4u: goto label_3a6ba4;
        case 0x3a6ba8u: goto label_3a6ba8;
        case 0x3a6bacu: goto label_3a6bac;
        case 0x3a6bb0u: goto label_3a6bb0;
        case 0x3a6bb4u: goto label_3a6bb4;
        case 0x3a6bb8u: goto label_3a6bb8;
        case 0x3a6bbcu: goto label_3a6bbc;
        case 0x3a6bc0u: goto label_3a6bc0;
        case 0x3a6bc4u: goto label_3a6bc4;
        case 0x3a6bc8u: goto label_3a6bc8;
        case 0x3a6bccu: goto label_3a6bcc;
        case 0x3a6bd0u: goto label_3a6bd0;
        case 0x3a6bd4u: goto label_3a6bd4;
        case 0x3a6bd8u: goto label_3a6bd8;
        case 0x3a6bdcu: goto label_3a6bdc;
        case 0x3a6be0u: goto label_3a6be0;
        case 0x3a6be4u: goto label_3a6be4;
        case 0x3a6be8u: goto label_3a6be8;
        case 0x3a6becu: goto label_3a6bec;
        case 0x3a6bf0u: goto label_3a6bf0;
        case 0x3a6bf4u: goto label_3a6bf4;
        case 0x3a6bf8u: goto label_3a6bf8;
        case 0x3a6bfcu: goto label_3a6bfc;
        case 0x3a6c00u: goto label_3a6c00;
        case 0x3a6c04u: goto label_3a6c04;
        case 0x3a6c08u: goto label_3a6c08;
        case 0x3a6c0cu: goto label_3a6c0c;
        case 0x3a6c10u: goto label_3a6c10;
        case 0x3a6c14u: goto label_3a6c14;
        case 0x3a6c18u: goto label_3a6c18;
        case 0x3a6c1cu: goto label_3a6c1c;
        case 0x3a6c20u: goto label_3a6c20;
        case 0x3a6c24u: goto label_3a6c24;
        case 0x3a6c28u: goto label_3a6c28;
        case 0x3a6c2cu: goto label_3a6c2c;
        case 0x3a6c30u: goto label_3a6c30;
        case 0x3a6c34u: goto label_3a6c34;
        case 0x3a6c38u: goto label_3a6c38;
        case 0x3a6c3cu: goto label_3a6c3c;
        case 0x3a6c40u: goto label_3a6c40;
        case 0x3a6c44u: goto label_3a6c44;
        case 0x3a6c48u: goto label_3a6c48;
        case 0x3a6c4cu: goto label_3a6c4c;
        case 0x3a6c50u: goto label_3a6c50;
        case 0x3a6c54u: goto label_3a6c54;
        case 0x3a6c58u: goto label_3a6c58;
        case 0x3a6c5cu: goto label_3a6c5c;
        case 0x3a6c60u: goto label_3a6c60;
        case 0x3a6c64u: goto label_3a6c64;
        case 0x3a6c68u: goto label_3a6c68;
        case 0x3a6c6cu: goto label_3a6c6c;
        case 0x3a6c70u: goto label_3a6c70;
        case 0x3a6c74u: goto label_3a6c74;
        case 0x3a6c78u: goto label_3a6c78;
        case 0x3a6c7cu: goto label_3a6c7c;
        case 0x3a6c80u: goto label_3a6c80;
        case 0x3a6c84u: goto label_3a6c84;
        case 0x3a6c88u: goto label_3a6c88;
        case 0x3a6c8cu: goto label_3a6c8c;
        case 0x3a6c90u: goto label_3a6c90;
        case 0x3a6c94u: goto label_3a6c94;
        case 0x3a6c98u: goto label_3a6c98;
        case 0x3a6c9cu: goto label_3a6c9c;
        case 0x3a6ca0u: goto label_3a6ca0;
        case 0x3a6ca4u: goto label_3a6ca4;
        case 0x3a6ca8u: goto label_3a6ca8;
        case 0x3a6cacu: goto label_3a6cac;
        case 0x3a6cb0u: goto label_3a6cb0;
        case 0x3a6cb4u: goto label_3a6cb4;
        case 0x3a6cb8u: goto label_3a6cb8;
        case 0x3a6cbcu: goto label_3a6cbc;
        case 0x3a6cc0u: goto label_3a6cc0;
        case 0x3a6cc4u: goto label_3a6cc4;
        case 0x3a6cc8u: goto label_3a6cc8;
        case 0x3a6cccu: goto label_3a6ccc;
        case 0x3a6cd0u: goto label_3a6cd0;
        case 0x3a6cd4u: goto label_3a6cd4;
        case 0x3a6cd8u: goto label_3a6cd8;
        case 0x3a6cdcu: goto label_3a6cdc;
        case 0x3a6ce0u: goto label_3a6ce0;
        case 0x3a6ce4u: goto label_3a6ce4;
        case 0x3a6ce8u: goto label_3a6ce8;
        case 0x3a6cecu: goto label_3a6cec;
        case 0x3a6cf0u: goto label_3a6cf0;
        case 0x3a6cf4u: goto label_3a6cf4;
        case 0x3a6cf8u: goto label_3a6cf8;
        case 0x3a6cfcu: goto label_3a6cfc;
        case 0x3a6d00u: goto label_3a6d00;
        case 0x3a6d04u: goto label_3a6d04;
        case 0x3a6d08u: goto label_3a6d08;
        case 0x3a6d0cu: goto label_3a6d0c;
        default: break;
    }

    ctx->pc = 0x3a6b30u;

label_3a6b30:
    // 0x3a6b30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a6b34:
    // 0x3a6b34: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3a6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_3a6b38:
    // 0x3a6b38: 0x8c488a08  lw          $t0, -0x75F8($v0)
    ctx->pc = 0x3a6b38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3a6b3c:
    // 0x3a6b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6b40:
    // 0x3a6b40: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a6b44:
    // 0x3a6b44: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3a6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3a6b48:
    // 0x3a6b48: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3a6b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3a6b4c:
    // 0x3a6b4c: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x3a6b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a6b50:
    // 0x3a6b50: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3a6b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a6b54:
    // 0x3a6b54: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x3a6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_3a6b58:
    // 0x3a6b58: 0x8cc6078c  lw          $a2, 0x78C($a2)
    ctx->pc = 0x3a6b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1932)));
label_3a6b5c:
    // 0x3a6b5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a6b60:
    // 0x3a6b60: 0x10a30065  beq         $a1, $v1, . + 4 + (0x65 << 2)
label_3a6b64:
    if (ctx->pc == 0x3A6B64u) {
        ctx->pc = 0x3A6B64u;
            // 0x3a6b64: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3A6B68u;
        goto label_3a6b68;
    }
    ctx->pc = 0x3A6B60u;
    {
        const bool branch_taken_0x3a6b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A6B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B60u;
            // 0x3a6b64: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b60) {
            ctx->pc = 0x3A6CF8u;
            goto label_3a6cf8;
        }
    }
    ctx->pc = 0x3A6B68u;
label_3a6b68:
    // 0x3a6b68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a6b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a6b6c:
    // 0x3a6b6c: 0x50a3002d  beql        $a1, $v1, . + 4 + (0x2D << 2)
label_3a6b70:
    if (ctx->pc == 0x3A6B70u) {
        ctx->pc = 0x3A6B70u;
            // 0x3a6b70: 0x9043001c  lbu         $v1, 0x1C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->pc = 0x3A6B74u;
        goto label_3a6b74;
    }
    ctx->pc = 0x3A6B6Cu;
    {
        const bool branch_taken_0x3a6b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a6b6c) {
            ctx->pc = 0x3A6B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B6Cu;
            // 0x3a6b70: 0x9043001c  lbu         $v1, 0x1C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6C24u;
            goto label_3a6c24;
        }
    }
    ctx->pc = 0x3A6B74u;
label_3a6b74:
    // 0x3a6b74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a6b78:
    // 0x3a6b78: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
label_3a6b7c:
    if (ctx->pc == 0x3A6B7Cu) {
        ctx->pc = 0x3A6B7Cu;
            // 0x3a6b7c: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3A6B80u;
        goto label_3a6b80;
    }
    ctx->pc = 0x3A6B78u;
    {
        const bool branch_taken_0x3a6b78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a6b78) {
            ctx->pc = 0x3A6B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B78u;
            // 0x3a6b7c: 0xc4400018  lwc1        $f0, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6BD4u;
            goto label_3a6bd4;
        }
    }
    ctx->pc = 0x3A6B80u;
label_3a6b80:
    // 0x3a6b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6b84:
    // 0x3a6b84: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_3a6b88:
    if (ctx->pc == 0x3A6B88u) {
        ctx->pc = 0x3A6B88u;
            // 0x3a6b88: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3A6B8Cu;
        goto label_3a6b8c;
    }
    ctx->pc = 0x3A6B84u;
    {
        const bool branch_taken_0x3a6b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a6b84) {
            ctx->pc = 0x3A6B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B84u;
            // 0x3a6b88: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6BA4u;
            goto label_3a6ba4;
        }
    }
    ctx->pc = 0x3A6B8Cu;
label_3a6b8c:
    // 0x3a6b8c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3a6b90:
    if (ctx->pc == 0x3A6B90u) {
        ctx->pc = 0x3A6B90u;
            // 0x3a6b90: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3A6B94u;
        goto label_3a6b94;
    }
    ctx->pc = 0x3A6B8Cu;
    {
        const bool branch_taken_0x3a6b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6b8c) {
            ctx->pc = 0x3A6B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B8Cu;
            // 0x3a6b90: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6B9Cu;
            goto label_3a6b9c;
        }
    }
    ctx->pc = 0x3A6B94u;
label_3a6b94:
    // 0x3a6b94: 0x10000059  b           . + 4 + (0x59 << 2)
label_3a6b98:
    if (ctx->pc == 0x3A6B98u) {
        ctx->pc = 0x3A6B98u;
            // 0x3a6b98: 0x8c99006c  lw          $t9, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->pc = 0x3A6B9Cu;
        goto label_3a6b9c;
    }
    ctx->pc = 0x3A6B94u;
    {
        const bool branch_taken_0x3a6b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6B94u;
            // 0x3a6b98: 0x8c99006c  lw          $t9, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b94) {
            ctx->pc = 0x3A6CFCu;
            goto label_3a6cfc;
        }
    }
    ctx->pc = 0x3A6B9Cu;
label_3a6b9c:
    // 0x3a6b9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a6b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a6ba0:
    // 0x3a6ba0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3a6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a6ba4:
    // 0x3a6ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a6ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6ba8:
    // 0x3a6ba8: 0x0  nop
    ctx->pc = 0x3a6ba8u;
    // NOP
label_3a6bac:
    // 0x3a6bac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3a6bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a6bb0:
    // 0x3a6bb0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3a6bb4:
    if (ctx->pc == 0x3A6BB4u) {
        ctx->pc = 0x3A6BB4u;
            // 0x3a6bb4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3A6BB8u;
        goto label_3a6bb8;
    }
    ctx->pc = 0x3A6BB0u;
    {
        const bool branch_taken_0x3a6bb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6bb0) {
            ctx->pc = 0x3A6BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6BB0u;
            // 0x3a6bb4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6BC8u;
            goto label_3a6bc8;
        }
    }
    ctx->pc = 0x3A6BB8u;
label_3a6bb8:
    // 0x3a6bb8: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x3a6bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a6bbc:
    // 0x3a6bbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3a6bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a6bc0:
    // 0x3a6bc0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_3a6bc4:
    if (ctx->pc == 0x3A6BC4u) {
        ctx->pc = 0x3A6BC4u;
            // 0x3a6bc4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->pc = 0x3A6BC8u;
        goto label_3a6bc8;
    }
    ctx->pc = 0x3A6BC0u;
    {
        const bool branch_taken_0x3a6bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6BC0u;
            // 0x3a6bc4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6bc0) {
            ctx->pc = 0x3A6CF8u;
            goto label_3a6cf8;
        }
    }
    ctx->pc = 0x3A6BC8u;
label_3a6bc8:
    // 0x3a6bc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a6bcc:
    // 0x3a6bcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a6bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a6bd0:
    // 0x3a6bd0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3a6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a6bd4:
    // 0x3a6bd4: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x3a6bd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_3a6bd8:
    // 0x3a6bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a6bdc:
    // 0x3a6bdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a6bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3a6be0:
    // 0x3a6be0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a6be0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a6be4:
    // 0x3a6be4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a6be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a6be8:
    // 0x3a6be8: 0x0  nop
    ctx->pc = 0x3a6be8u;
    // NOP
label_3a6bec:
    // 0x3a6bec: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x3a6becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_3a6bf0:
    // 0x3a6bf0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_3a6bf4:
    if (ctx->pc == 0x3A6BF4u) {
        ctx->pc = 0x3A6BF4u;
            // 0x3a6bf4: 0x84e50008  lh          $a1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->pc = 0x3A6BF8u;
        goto label_3a6bf8;
    }
    ctx->pc = 0x3A6BF0u;
    {
        const bool branch_taken_0x3a6bf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6BF0u;
            // 0x3a6bf4: 0x84e50008  lh          $a1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6bf0) {
            ctx->pc = 0x3A6C00u;
            goto label_3a6c00;
        }
    }
    ctx->pc = 0x3A6BF8u;
label_3a6bf8:
    // 0x3a6bf8: 0x84e3000c  lh          $v1, 0xC($a3)
    ctx->pc = 0x3a6bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_3a6bfc:
    // 0x3a6bfc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3a6bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a6c00:
    // 0x3a6c00: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3a6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3a6c04:
    // 0x3a6c04: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3a6c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3a6c08:
    // 0x3a6c08: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_3a6c0c:
    if (ctx->pc == 0x3A6C0Cu) {
        ctx->pc = 0x3A6C10u;
        goto label_3a6c10;
    }
    ctx->pc = 0x3A6C08u;
    {
        const bool branch_taken_0x3a6c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6c08) {
            ctx->pc = 0x3A6CF8u;
            goto label_3a6cf8;
        }
    }
    ctx->pc = 0x3A6C10u;
label_3a6c10:
    // 0x3a6c10: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x3a6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_3a6c14:
    // 0x3a6c14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a6c18:
    // 0x3a6c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a6c1c:
    // 0x3a6c1c: 0x10000036  b           . + 4 + (0x36 << 2)
label_3a6c20:
    if (ctx->pc == 0x3A6C20u) {
        ctx->pc = 0x3A6C20u;
            // 0x3a6c20: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A6C24u;
        goto label_3a6c24;
    }
    ctx->pc = 0x3A6C1Cu;
    {
        const bool branch_taken_0x3a6c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6C1Cu;
            // 0x3a6c20: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c1c) {
            ctx->pc = 0x3A6CF8u;
            goto label_3a6cf8;
        }
    }
    ctx->pc = 0x3A6C24u;
label_3a6c24:
    // 0x3a6c24: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3a6c28:
    if (ctx->pc == 0x3A6C28u) {
        ctx->pc = 0x3A6C28u;
            // 0x3a6c28: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3A6C2Cu;
        goto label_3a6c2c;
    }
    ctx->pc = 0x3A6C24u;
    {
        const bool branch_taken_0x3a6c24 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3a6c24) {
            ctx->pc = 0x3A6C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6C24u;
            // 0x3a6c28: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6C38u;
            goto label_3a6c38;
        }
    }
    ctx->pc = 0x3A6C2Cu;
label_3a6c2c:
    // 0x3a6c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6c30:
    // 0x3a6c30: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a6c34:
    if (ctx->pc == 0x3A6C34u) {
        ctx->pc = 0x3A6C34u;
            // 0x3a6c34: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A6C38u;
        goto label_3a6c38;
    }
    ctx->pc = 0x3A6C30u;
    {
        const bool branch_taken_0x3a6c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6C30u;
            // 0x3a6c34: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c30) {
            ctx->pc = 0x3A6C50u;
            goto label_3a6c50;
        }
    }
    ctx->pc = 0x3A6C38u;
label_3a6c38:
    // 0x3a6c38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a6c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3a6c3c:
    // 0x3a6c3c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a6c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3a6c40:
    // 0x3a6c40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a6c40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6c44:
    // 0x3a6c44: 0x0  nop
    ctx->pc = 0x3a6c44u;
    // NOP
label_3a6c48:
    // 0x3a6c48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a6c4c:
    // 0x3a6c4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6c50:
    // 0x3a6c50: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x3a6c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3a6c54:
    // 0x3a6c54: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3a6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_3a6c58:
    // 0x3a6c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6c5c:
    // 0x3a6c5c: 0x0  nop
    ctx->pc = 0x3a6c5cu;
    // NOP
label_3a6c60:
    // 0x3a6c60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a6c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a6c64:
    // 0x3a6c64: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_3a6c68:
    if (ctx->pc == 0x3A6C68u) {
        ctx->pc = 0x3A6C68u;
            // 0x3a6c68: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x3A6C6Cu;
        goto label_3a6c6c;
    }
    ctx->pc = 0x3A6C64u;
    {
        const bool branch_taken_0x3a6c64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6c64) {
            ctx->pc = 0x3A6C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6C64u;
            // 0x3a6c68: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6CE8u;
            goto label_3a6ce8;
        }
    }
    ctx->pc = 0x3A6C6Cu;
label_3a6c6c:
    // 0x3a6c6c: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x3a6c6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
label_3a6c70:
    // 0x3a6c70: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3a6c74:
    if (ctx->pc == 0x3A6C74u) {
        ctx->pc = 0x3A6C74u;
            // 0x3a6c74: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3A6C78u;
        goto label_3a6c78;
    }
    ctx->pc = 0x3A6C70u;
    {
        const bool branch_taken_0x3a6c70 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3a6c70) {
            ctx->pc = 0x3A6C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6C70u;
            // 0x3a6c74: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6C84u;
            goto label_3a6c84;
        }
    }
    ctx->pc = 0x3A6C78u;
label_3a6c78:
    // 0x3a6c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6c7c:
    // 0x3a6c7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a6c80:
    if (ctx->pc == 0x3A6C80u) {
        ctx->pc = 0x3A6C80u;
            // 0x3a6c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A6C84u;
        goto label_3a6c84;
    }
    ctx->pc = 0x3A6C7Cu;
    {
        const bool branch_taken_0x3a6c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6C7Cu;
            // 0x3a6c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c7c) {
            ctx->pc = 0x3A6C9Cu;
            goto label_3a6c9c;
        }
    }
    ctx->pc = 0x3A6C84u;
label_3a6c84:
    // 0x3a6c84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a6c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3a6c88:
    // 0x3a6c88: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a6c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3a6c8c:
    // 0x3a6c8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a6c8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6c90:
    // 0x3a6c90: 0x0  nop
    ctx->pc = 0x3a6c90u;
    // NOP
label_3a6c94:
    // 0x3a6c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a6c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a6c98:
    // 0x3a6c98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a6c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a6c9c:
    // 0x3a6c9c: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x3a6c9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3a6ca0:
    // 0x3a6ca0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3a6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3a6ca4:
    // 0x3a6ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a6ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a6ca8:
    // 0x3a6ca8: 0x0  nop
    ctx->pc = 0x3a6ca8u;
    // NOP
label_3a6cac:
    // 0x3a6cac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a6cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a6cb0:
    // 0x3a6cb0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3a6cb4:
    if (ctx->pc == 0x3A6CB4u) {
        ctx->pc = 0x3A6CB4u;
            // 0x3a6cb4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A6CB8u;
        goto label_3a6cb8;
    }
    ctx->pc = 0x3A6CB0u;
    {
        const bool branch_taken_0x3a6cb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a6cb0) {
            ctx->pc = 0x3A6CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6CB0u;
            // 0x3a6cb4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A6CC8u;
            goto label_3a6cc8;
        }
    }
    ctx->pc = 0x3A6CB8u;
label_3a6cb8:
    // 0x3a6cb8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a6cb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a6cbc:
    // 0x3a6cbc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a6cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a6cc0:
    // 0x3a6cc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a6cc4:
    if (ctx->pc == 0x3A6CC4u) {
        ctx->pc = 0x3A6CC4u;
            // 0x3a6cc4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3A6CC8u;
        goto label_3a6cc8;
    }
    ctx->pc = 0x3A6CC0u;
    {
        const bool branch_taken_0x3a6cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6CC0u;
            // 0x3a6cc4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6cc0) {
            ctx->pc = 0x3A6CE0u;
            goto label_3a6ce0;
        }
    }
    ctx->pc = 0x3A6CC8u;
label_3a6cc8:
    // 0x3a6cc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3a6ccc:
    // 0x3a6ccc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a6cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a6cd0:
    // 0x3a6cd0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a6cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a6cd4:
    // 0x3a6cd4: 0x0  nop
    ctx->pc = 0x3a6cd4u;
    // NOP
label_3a6cd8:
    // 0x3a6cd8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a6cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3a6cdc:
    // 0x3a6cdc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3a6cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3a6ce0:
    // 0x3a6ce0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a6ce4:
    if (ctx->pc == 0x3A6CE4u) {
        ctx->pc = 0x3A6CE4u;
            // 0x3a6ce4: 0xa045001c  sb          $a1, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x3A6CE8u;
        goto label_3a6ce8;
    }
    ctx->pc = 0x3A6CE0u;
    {
        const bool branch_taken_0x3a6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6CE0u;
            // 0x3a6ce4: 0xa045001c  sb          $a1, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ce0) {
            ctx->pc = 0x3A6CF8u;
            goto label_3a6cf8;
        }
    }
    ctx->pc = 0x3A6CE8u;
label_3a6ce8:
    // 0x3a6ce8: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x3a6ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
label_3a6cec:
    // 0x3a6cec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a6cf0:
    // 0x3a6cf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a6cf4:
    // 0x3a6cf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a6cf8:
    // 0x3a6cf8: 0x8c99006c  lw          $t9, 0x6C($a0)
    ctx->pc = 0x3a6cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3a6cfc:
    // 0x3a6cfc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a6cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a6d00:
    // 0x3a6d00: 0x3200008  jr          $t9
label_3a6d04:
    if (ctx->pc == 0x3A6D04u) {
        ctx->pc = 0x3A6D08u;
        goto label_3a6d08;
    }
    ctx->pc = 0x3A6D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6D08u;
label_3a6d08:
    // 0x3a6d08: 0x0  nop
    ctx->pc = 0x3a6d08u;
    // NOP
label_3a6d0c:
    // 0x3a6d0c: 0x0  nop
    ctx->pc = 0x3a6d0cu;
    // NOP
}
