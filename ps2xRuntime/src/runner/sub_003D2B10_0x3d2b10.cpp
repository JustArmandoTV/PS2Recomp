#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2B10
// Address: 0x3d2b10 - 0x3d2be0
void sub_003D2B10_0x3d2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2B10_0x3d2b10");
#endif

    switch (ctx->pc) {
        case 0x3d2b10u: goto label_3d2b10;
        case 0x3d2b14u: goto label_3d2b14;
        case 0x3d2b18u: goto label_3d2b18;
        case 0x3d2b1cu: goto label_3d2b1c;
        case 0x3d2b20u: goto label_3d2b20;
        case 0x3d2b24u: goto label_3d2b24;
        case 0x3d2b28u: goto label_3d2b28;
        case 0x3d2b2cu: goto label_3d2b2c;
        case 0x3d2b30u: goto label_3d2b30;
        case 0x3d2b34u: goto label_3d2b34;
        case 0x3d2b38u: goto label_3d2b38;
        case 0x3d2b3cu: goto label_3d2b3c;
        case 0x3d2b40u: goto label_3d2b40;
        case 0x3d2b44u: goto label_3d2b44;
        case 0x3d2b48u: goto label_3d2b48;
        case 0x3d2b4cu: goto label_3d2b4c;
        case 0x3d2b50u: goto label_3d2b50;
        case 0x3d2b54u: goto label_3d2b54;
        case 0x3d2b58u: goto label_3d2b58;
        case 0x3d2b5cu: goto label_3d2b5c;
        case 0x3d2b60u: goto label_3d2b60;
        case 0x3d2b64u: goto label_3d2b64;
        case 0x3d2b68u: goto label_3d2b68;
        case 0x3d2b6cu: goto label_3d2b6c;
        case 0x3d2b70u: goto label_3d2b70;
        case 0x3d2b74u: goto label_3d2b74;
        case 0x3d2b78u: goto label_3d2b78;
        case 0x3d2b7cu: goto label_3d2b7c;
        case 0x3d2b80u: goto label_3d2b80;
        case 0x3d2b84u: goto label_3d2b84;
        case 0x3d2b88u: goto label_3d2b88;
        case 0x3d2b8cu: goto label_3d2b8c;
        case 0x3d2b90u: goto label_3d2b90;
        case 0x3d2b94u: goto label_3d2b94;
        case 0x3d2b98u: goto label_3d2b98;
        case 0x3d2b9cu: goto label_3d2b9c;
        case 0x3d2ba0u: goto label_3d2ba0;
        case 0x3d2ba4u: goto label_3d2ba4;
        case 0x3d2ba8u: goto label_3d2ba8;
        case 0x3d2bacu: goto label_3d2bac;
        case 0x3d2bb0u: goto label_3d2bb0;
        case 0x3d2bb4u: goto label_3d2bb4;
        case 0x3d2bb8u: goto label_3d2bb8;
        case 0x3d2bbcu: goto label_3d2bbc;
        case 0x3d2bc0u: goto label_3d2bc0;
        case 0x3d2bc4u: goto label_3d2bc4;
        case 0x3d2bc8u: goto label_3d2bc8;
        case 0x3d2bccu: goto label_3d2bcc;
        case 0x3d2bd0u: goto label_3d2bd0;
        case 0x3d2bd4u: goto label_3d2bd4;
        case 0x3d2bd8u: goto label_3d2bd8;
        case 0x3d2bdcu: goto label_3d2bdc;
        default: break;
    }

    ctx->pc = 0x3d2b10u;

label_3d2b10:
    // 0x3d2b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d2b14:
    // 0x3d2b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2b18:
    // 0x3d2b18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d2b1c:
    // 0x3d2b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d2b20:
    // 0x3d2b20: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x3d2b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3d2b24:
    // 0x3d2b24: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
label_3d2b28:
    if (ctx->pc == 0x3D2B28u) {
        ctx->pc = 0x3D2B28u;
            // 0x3d2b28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B2Cu;
        goto label_3d2b2c;
    }
    ctx->pc = 0x3D2B24u;
    {
        const bool branch_taken_0x3d2b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D2B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2B24u;
            // 0x3d2b28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b24) {
            ctx->pc = 0x3D2BC4u;
            goto label_3d2bc4;
        }
    }
    ctx->pc = 0x3D2B2Cu;
label_3d2b2c:
    // 0x3d2b2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d2b30:
    // 0x3d2b30: 0x50a30025  beql        $a1, $v1, . + 4 + (0x25 << 2)
label_3d2b34:
    if (ctx->pc == 0x3D2B34u) {
        ctx->pc = 0x3D2B34u;
            // 0x3d2b34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D2B38u;
        goto label_3d2b38;
    }
    ctx->pc = 0x3D2B30u;
    {
        const bool branch_taken_0x3d2b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d2b30) {
            ctx->pc = 0x3D2B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2B30u;
            // 0x3d2b34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2BC8u;
            goto label_3d2bc8;
        }
    }
    ctx->pc = 0x3D2B38u;
label_3d2b38:
    // 0x3d2b38: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x3d2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2b3c:
    // 0x3d2b3c: 0xc6000204  lwc1        $f0, 0x204($s0)
    ctx->pc = 0x3d2b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2b40:
    // 0x3d2b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d2b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2b44:
    // 0x3d2b44: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_3d2b48:
    if (ctx->pc == 0x3D2B48u) {
        ctx->pc = 0x3D2B4Cu;
        goto label_3d2b4c;
    }
    ctx->pc = 0x3D2B44u;
    {
        const bool branch_taken_0x3d2b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2b44) {
            ctx->pc = 0x3D2BC4u;
            goto label_3d2bc4;
        }
    }
    ctx->pc = 0x3D2B4Cu;
label_3d2b4c:
    // 0x3d2b4c: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x3d2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_3d2b50:
    // 0x3d2b50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d2b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d2b54:
    // 0x3d2b54: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x3d2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_3d2b58:
    // 0x3d2b58: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
label_3d2b5c:
    if (ctx->pc == 0x3D2B5Cu) {
        ctx->pc = 0x3D2B60u;
        goto label_3d2b60;
    }
    ctx->pc = 0x3D2B58u;
    {
        const bool branch_taken_0x3d2b58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d2b58) {
            ctx->pc = 0x3D2BC4u;
            goto label_3d2bc4;
        }
    }
    ctx->pc = 0x3D2B60u;
label_3d2b60:
    // 0x3d2b60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d2b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2b64:
    // 0x3d2b64: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3d2b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3d2b68:
    // 0x3d2b68: 0x320f809  jalr        $t9
label_3d2b6c:
    if (ctx->pc == 0x3D2B6Cu) {
        ctx->pc = 0x3D2B70u;
        goto label_3d2b70;
    }
    ctx->pc = 0x3D2B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2B70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2B70u; }
            if (ctx->pc != 0x3D2B70u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2B70u;
label_3d2b70:
    // 0x3d2b70: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d2b74:
    // 0x3d2b74: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x3d2b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2b78:
    // 0x3d2b78: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3d2b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2b7c:
    // 0x3d2b7c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d2b80:
    // 0x3d2b80: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3d2b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2b84:
    // 0x3d2b84: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d2b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d2b88:
    // 0x3d2b88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d2b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d2b8c:
    // 0x3d2b8c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3d2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3d2b90:
    // 0x3d2b90: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d2b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d2b94:
    // 0x3d2b94: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3d2b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3d2b98:
    // 0x3d2b98: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x3d2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d2b9c:
    // 0x3d2b9c: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x3d2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2ba0:
    // 0x3d2ba0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3d2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2ba4:
    // 0x3d2ba4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3d2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2ba8:
    // 0x3d2ba8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d2ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d2bac:
    // 0x3d2bac: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3d2bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3d2bb0:
    // 0x3d2bb0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3d2bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3d2bb4:
    // 0x3d2bb4: 0xc0892b0  jal         func_224AC0
label_3d2bb8:
    if (ctx->pc == 0x3D2BB8u) {
        ctx->pc = 0x3D2BB8u;
            // 0x3d2bb8: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x3D2BBCu;
        goto label_3d2bbc;
    }
    ctx->pc = 0x3D2BB4u;
    SET_GPR_U32(ctx, 31, 0x3D2BBCu);
    ctx->pc = 0x3D2BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2BB4u;
            // 0x3d2bb8: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2BBCu; }
        if (ctx->pc != 0x3D2BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2BBCu; }
        if (ctx->pc != 0x3D2BBCu) { return; }
    }
    ctx->pc = 0x3D2BBCu;
label_3d2bbc:
    // 0x3d2bbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d2bc0:
    // 0x3d2bc0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3d2bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_3d2bc4:
    // 0x3d2bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2bc8:
    // 0x3d2bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2bcc:
    // 0x3d2bcc: 0x3e00008  jr          $ra
label_3d2bd0:
    if (ctx->pc == 0x3D2BD0u) {
        ctx->pc = 0x3D2BD0u;
            // 0x3d2bd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3D2BD4u;
        goto label_3d2bd4;
    }
    ctx->pc = 0x3D2BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2BCCu;
            // 0x3d2bd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D2BD4u;
label_3d2bd4:
    // 0x3d2bd4: 0x0  nop
    ctx->pc = 0x3d2bd4u;
    // NOP
label_3d2bd8:
    // 0x3d2bd8: 0x0  nop
    ctx->pc = 0x3d2bd8u;
    // NOP
label_3d2bdc:
    // 0x3d2bdc: 0x0  nop
    ctx->pc = 0x3d2bdcu;
    // NOP
}
