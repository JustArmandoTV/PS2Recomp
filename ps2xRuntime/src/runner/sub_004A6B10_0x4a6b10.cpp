#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6B10
// Address: 0x4a6b10 - 0x4a6c60
void sub_004A6B10_0x4a6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6B10_0x4a6b10");
#endif

    switch (ctx->pc) {
        case 0x4a6b10u: goto label_4a6b10;
        case 0x4a6b14u: goto label_4a6b14;
        case 0x4a6b18u: goto label_4a6b18;
        case 0x4a6b1cu: goto label_4a6b1c;
        case 0x4a6b20u: goto label_4a6b20;
        case 0x4a6b24u: goto label_4a6b24;
        case 0x4a6b28u: goto label_4a6b28;
        case 0x4a6b2cu: goto label_4a6b2c;
        case 0x4a6b30u: goto label_4a6b30;
        case 0x4a6b34u: goto label_4a6b34;
        case 0x4a6b38u: goto label_4a6b38;
        case 0x4a6b3cu: goto label_4a6b3c;
        case 0x4a6b40u: goto label_4a6b40;
        case 0x4a6b44u: goto label_4a6b44;
        case 0x4a6b48u: goto label_4a6b48;
        case 0x4a6b4cu: goto label_4a6b4c;
        case 0x4a6b50u: goto label_4a6b50;
        case 0x4a6b54u: goto label_4a6b54;
        case 0x4a6b58u: goto label_4a6b58;
        case 0x4a6b5cu: goto label_4a6b5c;
        case 0x4a6b60u: goto label_4a6b60;
        case 0x4a6b64u: goto label_4a6b64;
        case 0x4a6b68u: goto label_4a6b68;
        case 0x4a6b6cu: goto label_4a6b6c;
        case 0x4a6b70u: goto label_4a6b70;
        case 0x4a6b74u: goto label_4a6b74;
        case 0x4a6b78u: goto label_4a6b78;
        case 0x4a6b7cu: goto label_4a6b7c;
        case 0x4a6b80u: goto label_4a6b80;
        case 0x4a6b84u: goto label_4a6b84;
        case 0x4a6b88u: goto label_4a6b88;
        case 0x4a6b8cu: goto label_4a6b8c;
        case 0x4a6b90u: goto label_4a6b90;
        case 0x4a6b94u: goto label_4a6b94;
        case 0x4a6b98u: goto label_4a6b98;
        case 0x4a6b9cu: goto label_4a6b9c;
        case 0x4a6ba0u: goto label_4a6ba0;
        case 0x4a6ba4u: goto label_4a6ba4;
        case 0x4a6ba8u: goto label_4a6ba8;
        case 0x4a6bacu: goto label_4a6bac;
        case 0x4a6bb0u: goto label_4a6bb0;
        case 0x4a6bb4u: goto label_4a6bb4;
        case 0x4a6bb8u: goto label_4a6bb8;
        case 0x4a6bbcu: goto label_4a6bbc;
        case 0x4a6bc0u: goto label_4a6bc0;
        case 0x4a6bc4u: goto label_4a6bc4;
        case 0x4a6bc8u: goto label_4a6bc8;
        case 0x4a6bccu: goto label_4a6bcc;
        case 0x4a6bd0u: goto label_4a6bd0;
        case 0x4a6bd4u: goto label_4a6bd4;
        case 0x4a6bd8u: goto label_4a6bd8;
        case 0x4a6bdcu: goto label_4a6bdc;
        case 0x4a6be0u: goto label_4a6be0;
        case 0x4a6be4u: goto label_4a6be4;
        case 0x4a6be8u: goto label_4a6be8;
        case 0x4a6becu: goto label_4a6bec;
        case 0x4a6bf0u: goto label_4a6bf0;
        case 0x4a6bf4u: goto label_4a6bf4;
        case 0x4a6bf8u: goto label_4a6bf8;
        case 0x4a6bfcu: goto label_4a6bfc;
        case 0x4a6c00u: goto label_4a6c00;
        case 0x4a6c04u: goto label_4a6c04;
        case 0x4a6c08u: goto label_4a6c08;
        case 0x4a6c0cu: goto label_4a6c0c;
        case 0x4a6c10u: goto label_4a6c10;
        case 0x4a6c14u: goto label_4a6c14;
        case 0x4a6c18u: goto label_4a6c18;
        case 0x4a6c1cu: goto label_4a6c1c;
        case 0x4a6c20u: goto label_4a6c20;
        case 0x4a6c24u: goto label_4a6c24;
        case 0x4a6c28u: goto label_4a6c28;
        case 0x4a6c2cu: goto label_4a6c2c;
        case 0x4a6c30u: goto label_4a6c30;
        case 0x4a6c34u: goto label_4a6c34;
        case 0x4a6c38u: goto label_4a6c38;
        case 0x4a6c3cu: goto label_4a6c3c;
        case 0x4a6c40u: goto label_4a6c40;
        case 0x4a6c44u: goto label_4a6c44;
        case 0x4a6c48u: goto label_4a6c48;
        case 0x4a6c4cu: goto label_4a6c4c;
        case 0x4a6c50u: goto label_4a6c50;
        case 0x4a6c54u: goto label_4a6c54;
        case 0x4a6c58u: goto label_4a6c58;
        case 0x4a6c5cu: goto label_4a6c5c;
        default: break;
    }

    ctx->pc = 0x4a6b10u;

label_4a6b10:
    // 0x4a6b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a6b14:
    // 0x4a6b14: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4a6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4a6b18:
    // 0x4a6b18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a6b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a6b1c:
    // 0x4a6b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6b20:
    // 0x4a6b20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a6b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a6b24:
    // 0x4a6b24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a6b28:
    // 0x4a6b28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a6b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a6b2c:
    // 0x4a6b2c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4a6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4a6b30:
    // 0x4a6b30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a6b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a6b34:
    // 0x4a6b34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a6b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b38:
    // 0x4a6b38: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a6b38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a6b3c:
    // 0x4a6b3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a6b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b40:
    // 0x4a6b40: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6b40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a6b44:
    // 0x4a6b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6b48:
    // 0x4a6b48: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6b48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a6b4c:
    // 0x4a6b4c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4a6b4cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_4a6b50:
    // 0x4a6b50: 0x46170540  add.s       $f21, $f0, $f23
    ctx->pc = 0x4a6b50u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a6b54:
    // 0x4a6b54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6b54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a6b58:
    // 0x4a6b58: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4a6b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a6b5c:
    // 0x4a6b5c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x4a6b5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_4a6b60:
    // 0x4a6b60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6b64:
    // 0x4a6b64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6b68:
    // 0x4a6b68: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6b6c:
    // 0x4a6b6c: 0xc0506ac  jal         func_141AB0
label_4a6b70:
    if (ctx->pc == 0x4A6B70u) {
        ctx->pc = 0x4A6B70u;
            // 0x4a6b70: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A6B74u;
        goto label_4a6b74;
    }
    ctx->pc = 0x4A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x4A6B74u);
    ctx->pc = 0x4A6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6B6Cu;
            // 0x4a6b70: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6B74u; }
        if (ctx->pc != 0x4A6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6B74u; }
        if (ctx->pc != 0x4A6B74u) { return; }
    }
    ctx->pc = 0x4A6B74u;
label_4a6b74:
    // 0x4a6b74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6b78:
    // 0x4a6b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a6b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b7c:
    // 0x4a6b7c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6b80:
    // 0x4a6b80: 0x320f809  jalr        $t9
label_4a6b84:
    if (ctx->pc == 0x4A6B84u) {
        ctx->pc = 0x4A6B84u;
            // 0x4a6b84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6B88u;
        goto label_4a6b88;
    }
    ctx->pc = 0x4A6B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6B88u);
        ctx->pc = 0x4A6B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6B80u;
            // 0x4a6b84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6B88u; }
            if (ctx->pc != 0x4A6B88u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6B88u;
label_4a6b88:
    // 0x4a6b88: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a6b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a6b8c:
    // 0x4a6b8c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6b90:
    // 0x4a6b90: 0x24a54f70  addiu       $a1, $a1, 0x4F70
    ctx->pc = 0x4a6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
label_4a6b94:
    // 0x4a6b94: 0x84444e78  lh          $a0, 0x4E78($v0)
    ctx->pc = 0x4a6b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a6b98:
    // 0x4a6b98: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a6b9c:
    // 0x4a6b9c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x4a6b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4a6ba0:
    // 0x4a6ba0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6ba4:
    // 0x4a6ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6ba8:
    // 0x4a6ba8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a6ba8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a6bac:
    // 0x4a6bac: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6bb0:
    // 0x4a6bb0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a6bb0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6bb4:
    // 0x4a6bb4: 0x84484e7a  lh          $t0, 0x4E7A($v0)
    ctx->pc = 0x4a6bb4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6bb8:
    // 0x4a6bb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6bbc:
    // 0x4a6bbc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a6bc0:
    // 0x4a6bc0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6bc0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6bc4:
    // 0x4a6bc4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a6bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a6bc8:
    // 0x4a6bc8: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a6bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6bcc:
    // 0x4a6bcc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6bd0:
    // 0x4a6bd0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6bd4:
    // 0x4a6bd4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a6bd4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a6bd8:
    // 0x4a6bd8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a6bd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a6bdc:
    // 0x4a6bdc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6be0:
    // 0x4a6be0: 0xc0bc284  jal         func_2F0A10
label_4a6be4:
    if (ctx->pc == 0x4A6BE4u) {
        ctx->pc = 0x4A6BE4u;
            // 0x4a6be4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6BE8u;
        goto label_4a6be8;
    }
    ctx->pc = 0x4A6BE0u;
    SET_GPR_U32(ctx, 31, 0x4A6BE8u);
    ctx->pc = 0x4A6BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6BE0u;
            // 0x4a6be4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6BE8u; }
        if (ctx->pc != 0x4A6BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6BE8u; }
        if (ctx->pc != 0x4A6BE8u) { return; }
    }
    ctx->pc = 0x4A6BE8u;
label_4a6be8:
    // 0x4a6be8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a6be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a6bec:
    // 0x4a6bec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6bf0:
    // 0x4a6bf0: 0x320f809  jalr        $t9
label_4a6bf4:
    if (ctx->pc == 0x4A6BF4u) {
        ctx->pc = 0x4A6BF4u;
            // 0x4a6bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6BF8u;
        goto label_4a6bf8;
    }
    ctx->pc = 0x4A6BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6BF8u);
        ctx->pc = 0x4A6BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6BF0u;
            // 0x4a6bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6BF8u; }
            if (ctx->pc != 0x4A6BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6BF8u;
label_4a6bf8:
    // 0x4a6bf8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x4a6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_4a6bfc:
    // 0x4a6bfc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a6c00:
    // 0x4a6c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6c04:
    // 0x4a6c04: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x4a6c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
label_4a6c08:
    // 0x4a6c08: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x4a6c08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a6c0c:
    // 0x4a6c0c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6c10:
    // 0x4a6c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c14:
    // 0x4a6c14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a6c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c18:
    // 0x4a6c18: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x4a6c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_4a6c1c:
    // 0x4a6c1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a6c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6c20:
    // 0x4a6c20: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6c20u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6c24:
    // 0x4a6c24: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a6c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a6c28:
    // 0x4a6c28: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a6c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a6c2c:
    // 0x4a6c2c: 0xc15706c  jal         func_55C1B0
label_4a6c30:
    if (ctx->pc == 0x4A6C30u) {
        ctx->pc = 0x4A6C30u;
            // 0x4a6c30: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A6C34u;
        goto label_4a6c34;
    }
    ctx->pc = 0x4A6C2Cu;
    SET_GPR_U32(ctx, 31, 0x4A6C34u);
    ctx->pc = 0x4A6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6C2Cu;
            // 0x4a6c30: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6C34u; }
        if (ctx->pc != 0x4A6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6C34u; }
        if (ctx->pc != 0x4A6C34u) { return; }
    }
    ctx->pc = 0x4A6C34u;
label_4a6c34:
    // 0x4a6c34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a6c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6c38:
    // 0x4a6c38: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a6c3c:
    // 0x4a6c3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a6c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6c40:
    // 0x4a6c40: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a6c44:
    // 0x4a6c44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6c48:
    // 0x4a6c48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a6c4c:
    // 0x4a6c4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a6c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6c50:
    // 0x4a6c50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a6c54:
    // 0x4a6c54: 0x3e00008  jr          $ra
label_4a6c58:
    if (ctx->pc == 0x4A6C58u) {
        ctx->pc = 0x4A6C58u;
            // 0x4a6c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A6C5Cu;
        goto label_4a6c5c;
    }
    ctx->pc = 0x4A6C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6C54u;
            // 0x4a6c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A6C5Cu;
label_4a6c5c:
    // 0x4a6c5c: 0x0  nop
    ctx->pc = 0x4a6c5cu;
    // NOP
}
