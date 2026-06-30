#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037EA10
// Address: 0x37ea10 - 0x37ecd0
void sub_0037EA10_0x37ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037EA10_0x37ea10");
#endif

    switch (ctx->pc) {
        case 0x37ea10u: goto label_37ea10;
        case 0x37ea14u: goto label_37ea14;
        case 0x37ea18u: goto label_37ea18;
        case 0x37ea1cu: goto label_37ea1c;
        case 0x37ea20u: goto label_37ea20;
        case 0x37ea24u: goto label_37ea24;
        case 0x37ea28u: goto label_37ea28;
        case 0x37ea2cu: goto label_37ea2c;
        case 0x37ea30u: goto label_37ea30;
        case 0x37ea34u: goto label_37ea34;
        case 0x37ea38u: goto label_37ea38;
        case 0x37ea3cu: goto label_37ea3c;
        case 0x37ea40u: goto label_37ea40;
        case 0x37ea44u: goto label_37ea44;
        case 0x37ea48u: goto label_37ea48;
        case 0x37ea4cu: goto label_37ea4c;
        case 0x37ea50u: goto label_37ea50;
        case 0x37ea54u: goto label_37ea54;
        case 0x37ea58u: goto label_37ea58;
        case 0x37ea5cu: goto label_37ea5c;
        case 0x37ea60u: goto label_37ea60;
        case 0x37ea64u: goto label_37ea64;
        case 0x37ea68u: goto label_37ea68;
        case 0x37ea6cu: goto label_37ea6c;
        case 0x37ea70u: goto label_37ea70;
        case 0x37ea74u: goto label_37ea74;
        case 0x37ea78u: goto label_37ea78;
        case 0x37ea7cu: goto label_37ea7c;
        case 0x37ea80u: goto label_37ea80;
        case 0x37ea84u: goto label_37ea84;
        case 0x37ea88u: goto label_37ea88;
        case 0x37ea8cu: goto label_37ea8c;
        case 0x37ea90u: goto label_37ea90;
        case 0x37ea94u: goto label_37ea94;
        case 0x37ea98u: goto label_37ea98;
        case 0x37ea9cu: goto label_37ea9c;
        case 0x37eaa0u: goto label_37eaa0;
        case 0x37eaa4u: goto label_37eaa4;
        case 0x37eaa8u: goto label_37eaa8;
        case 0x37eaacu: goto label_37eaac;
        case 0x37eab0u: goto label_37eab0;
        case 0x37eab4u: goto label_37eab4;
        case 0x37eab8u: goto label_37eab8;
        case 0x37eabcu: goto label_37eabc;
        case 0x37eac0u: goto label_37eac0;
        case 0x37eac4u: goto label_37eac4;
        case 0x37eac8u: goto label_37eac8;
        case 0x37eaccu: goto label_37eacc;
        case 0x37ead0u: goto label_37ead0;
        case 0x37ead4u: goto label_37ead4;
        case 0x37ead8u: goto label_37ead8;
        case 0x37eadcu: goto label_37eadc;
        case 0x37eae0u: goto label_37eae0;
        case 0x37eae4u: goto label_37eae4;
        case 0x37eae8u: goto label_37eae8;
        case 0x37eaecu: goto label_37eaec;
        case 0x37eaf0u: goto label_37eaf0;
        case 0x37eaf4u: goto label_37eaf4;
        case 0x37eaf8u: goto label_37eaf8;
        case 0x37eafcu: goto label_37eafc;
        case 0x37eb00u: goto label_37eb00;
        case 0x37eb04u: goto label_37eb04;
        case 0x37eb08u: goto label_37eb08;
        case 0x37eb0cu: goto label_37eb0c;
        case 0x37eb10u: goto label_37eb10;
        case 0x37eb14u: goto label_37eb14;
        case 0x37eb18u: goto label_37eb18;
        case 0x37eb1cu: goto label_37eb1c;
        case 0x37eb20u: goto label_37eb20;
        case 0x37eb24u: goto label_37eb24;
        case 0x37eb28u: goto label_37eb28;
        case 0x37eb2cu: goto label_37eb2c;
        case 0x37eb30u: goto label_37eb30;
        case 0x37eb34u: goto label_37eb34;
        case 0x37eb38u: goto label_37eb38;
        case 0x37eb3cu: goto label_37eb3c;
        case 0x37eb40u: goto label_37eb40;
        case 0x37eb44u: goto label_37eb44;
        case 0x37eb48u: goto label_37eb48;
        case 0x37eb4cu: goto label_37eb4c;
        case 0x37eb50u: goto label_37eb50;
        case 0x37eb54u: goto label_37eb54;
        case 0x37eb58u: goto label_37eb58;
        case 0x37eb5cu: goto label_37eb5c;
        case 0x37eb60u: goto label_37eb60;
        case 0x37eb64u: goto label_37eb64;
        case 0x37eb68u: goto label_37eb68;
        case 0x37eb6cu: goto label_37eb6c;
        case 0x37eb70u: goto label_37eb70;
        case 0x37eb74u: goto label_37eb74;
        case 0x37eb78u: goto label_37eb78;
        case 0x37eb7cu: goto label_37eb7c;
        case 0x37eb80u: goto label_37eb80;
        case 0x37eb84u: goto label_37eb84;
        case 0x37eb88u: goto label_37eb88;
        case 0x37eb8cu: goto label_37eb8c;
        case 0x37eb90u: goto label_37eb90;
        case 0x37eb94u: goto label_37eb94;
        case 0x37eb98u: goto label_37eb98;
        case 0x37eb9cu: goto label_37eb9c;
        case 0x37eba0u: goto label_37eba0;
        case 0x37eba4u: goto label_37eba4;
        case 0x37eba8u: goto label_37eba8;
        case 0x37ebacu: goto label_37ebac;
        case 0x37ebb0u: goto label_37ebb0;
        case 0x37ebb4u: goto label_37ebb4;
        case 0x37ebb8u: goto label_37ebb8;
        case 0x37ebbcu: goto label_37ebbc;
        case 0x37ebc0u: goto label_37ebc0;
        case 0x37ebc4u: goto label_37ebc4;
        case 0x37ebc8u: goto label_37ebc8;
        case 0x37ebccu: goto label_37ebcc;
        case 0x37ebd0u: goto label_37ebd0;
        case 0x37ebd4u: goto label_37ebd4;
        case 0x37ebd8u: goto label_37ebd8;
        case 0x37ebdcu: goto label_37ebdc;
        case 0x37ebe0u: goto label_37ebe0;
        case 0x37ebe4u: goto label_37ebe4;
        case 0x37ebe8u: goto label_37ebe8;
        case 0x37ebecu: goto label_37ebec;
        case 0x37ebf0u: goto label_37ebf0;
        case 0x37ebf4u: goto label_37ebf4;
        case 0x37ebf8u: goto label_37ebf8;
        case 0x37ebfcu: goto label_37ebfc;
        case 0x37ec00u: goto label_37ec00;
        case 0x37ec04u: goto label_37ec04;
        case 0x37ec08u: goto label_37ec08;
        case 0x37ec0cu: goto label_37ec0c;
        case 0x37ec10u: goto label_37ec10;
        case 0x37ec14u: goto label_37ec14;
        case 0x37ec18u: goto label_37ec18;
        case 0x37ec1cu: goto label_37ec1c;
        case 0x37ec20u: goto label_37ec20;
        case 0x37ec24u: goto label_37ec24;
        case 0x37ec28u: goto label_37ec28;
        case 0x37ec2cu: goto label_37ec2c;
        case 0x37ec30u: goto label_37ec30;
        case 0x37ec34u: goto label_37ec34;
        case 0x37ec38u: goto label_37ec38;
        case 0x37ec3cu: goto label_37ec3c;
        case 0x37ec40u: goto label_37ec40;
        case 0x37ec44u: goto label_37ec44;
        case 0x37ec48u: goto label_37ec48;
        case 0x37ec4cu: goto label_37ec4c;
        case 0x37ec50u: goto label_37ec50;
        case 0x37ec54u: goto label_37ec54;
        case 0x37ec58u: goto label_37ec58;
        case 0x37ec5cu: goto label_37ec5c;
        case 0x37ec60u: goto label_37ec60;
        case 0x37ec64u: goto label_37ec64;
        case 0x37ec68u: goto label_37ec68;
        case 0x37ec6cu: goto label_37ec6c;
        case 0x37ec70u: goto label_37ec70;
        case 0x37ec74u: goto label_37ec74;
        case 0x37ec78u: goto label_37ec78;
        case 0x37ec7cu: goto label_37ec7c;
        case 0x37ec80u: goto label_37ec80;
        case 0x37ec84u: goto label_37ec84;
        case 0x37ec88u: goto label_37ec88;
        case 0x37ec8cu: goto label_37ec8c;
        case 0x37ec90u: goto label_37ec90;
        case 0x37ec94u: goto label_37ec94;
        case 0x37ec98u: goto label_37ec98;
        case 0x37ec9cu: goto label_37ec9c;
        case 0x37eca0u: goto label_37eca0;
        case 0x37eca4u: goto label_37eca4;
        case 0x37eca8u: goto label_37eca8;
        case 0x37ecacu: goto label_37ecac;
        case 0x37ecb0u: goto label_37ecb0;
        case 0x37ecb4u: goto label_37ecb4;
        case 0x37ecb8u: goto label_37ecb8;
        case 0x37ecbcu: goto label_37ecbc;
        case 0x37ecc0u: goto label_37ecc0;
        case 0x37ecc4u: goto label_37ecc4;
        case 0x37ecc8u: goto label_37ecc8;
        case 0x37ecccu: goto label_37eccc;
        default: break;
    }

    ctx->pc = 0x37ea10u;

label_37ea10:
    // 0x37ea10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37ea14:
    // 0x37ea14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37ea18:
    // 0x37ea18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37ea1c:
    // 0x37ea1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37ea20:
    // 0x37ea20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37ea24:
    // 0x37ea24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37ea28:
    // 0x37ea28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37ea28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37ea2c:
    // 0x37ea2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37ea30:
    // 0x37ea30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37ea34:
    // 0x37ea34: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x37ea34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_37ea38:
    // 0x37ea38: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37ea38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37ea3c:
    // 0x37ea3c: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x37ea3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_37ea40:
    // 0x37ea40: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37ea40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37ea44:
    // 0x37ea44: 0x26315740  addiu       $s1, $s1, 0x5740
    ctx->pc = 0x37ea44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22336));
label_37ea48:
    // 0x37ea48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37ea48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37ea4c:
    // 0x37ea4c: 0x26105730  addiu       $s0, $s0, 0x5730
    ctx->pc = 0x37ea4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22320));
label_37ea50:
    // 0x37ea50: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x37ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37ea54:
    // 0x37ea54: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x37ea54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37ea58:
    // 0x37ea58: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x37ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_37ea5c:
    // 0x37ea5c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x37ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37ea60:
    // 0x37ea60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ea60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ea64:
    // 0x37ea64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ea68:
    // 0x37ea68: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37ea68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37ea6c:
    // 0x37ea6c: 0x2483ffd3  addiu       $v1, $a0, -0x2D
    ctx->pc = 0x37ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
label_37ea70:
    // 0x37ea70: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37ea74:
    // 0x37ea74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ea74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ea78:
    // 0x37ea78: 0xc0506ac  jal         func_141AB0
label_37ea7c:
    if (ctx->pc == 0x37EA7Cu) {
        ctx->pc = 0x37EA7Cu;
            // 0x37ea7c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37EA80u;
        goto label_37ea80;
    }
    ctx->pc = 0x37EA78u;
    SET_GPR_U32(ctx, 31, 0x37EA80u);
    ctx->pc = 0x37EA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EA78u;
            // 0x37ea7c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EA80u; }
        if (ctx->pc != 0x37EA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EA80u; }
        if (ctx->pc != 0x37EA80u) { return; }
    }
    ctx->pc = 0x37EA80u;
label_37ea80:
    // 0x37ea80: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ea80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ea84:
    // 0x37ea84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ea88:
    // 0x37ea88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37ea88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37ea8c:
    // 0x37ea8c: 0x320f809  jalr        $t9
label_37ea90:
    if (ctx->pc == 0x37EA90u) {
        ctx->pc = 0x37EA90u;
            // 0x37ea90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37EA94u;
        goto label_37ea94;
    }
    ctx->pc = 0x37EA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EA94u);
        ctx->pc = 0x37EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EA8Cu;
            // 0x37ea90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EA94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EA94u; }
            if (ctx->pc != 0x37EA94u) { return; }
        }
        }
    }
    ctx->pc = 0x37EA94u;
label_37ea94:
    // 0x37ea94: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x37ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_37ea98:
    // 0x37ea98: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x37ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_37ea9c:
    // 0x37ea9c: 0x90630ce4  lbu         $v1, 0xCE4($v1)
    ctx->pc = 0x37ea9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3300)));
label_37eaa0:
    // 0x37eaa0: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_37eaa4:
    if (ctx->pc == 0x37EAA4u) {
        ctx->pc = 0x37EAA4u;
            // 0x37eaa4: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x37EAA8u;
        goto label_37eaa8;
    }
    ctx->pc = 0x37EAA0u;
    {
        const bool branch_taken_0x37eaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37eaa0) {
            ctx->pc = 0x37EAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37EAA0u;
            // 0x37eaa4: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37EAACu;
            goto label_37eaac;
        }
    }
    ctx->pc = 0x37EAA8u;
label_37eaa8:
    // 0x37eaa8: 0x262500d0  addiu       $a1, $s1, 0xD0
    ctx->pc = 0x37eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_37eaac:
    // 0x37eaac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37eab0:
    // 0x37eab0: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x37eab0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_37eab4:
    // 0x37eab4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37eab8:
    // 0x37eab8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37eabc:
    // 0x37eabc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x37eabcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_37eac0:
    // 0x37eac0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37eac4:
    // 0x37eac4: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37eac4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37eac8:
    // 0x37eac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37eac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37eacc:
    // 0x37eacc: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x37eaccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37ead0:
    // 0x37ead0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ead0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ead4:
    // 0x37ead4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x37ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37ead8:
    // 0x37ead8: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37ead8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37eadc:
    // 0x37eadc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37eadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37eae0:
    // 0x37eae0: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37eae0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37eae4:
    // 0x37eae4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37eae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37eae8:
    // 0x37eae8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x37eae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37eaec:
    // 0x37eaec: 0xc0bc284  jal         func_2F0A10
label_37eaf0:
    if (ctx->pc == 0x37EAF0u) {
        ctx->pc = 0x37EAF0u;
            // 0x37eaf0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37EAF4u;
        goto label_37eaf4;
    }
    ctx->pc = 0x37EAECu;
    SET_GPR_U32(ctx, 31, 0x37EAF4u);
    ctx->pc = 0x37EAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EAECu;
            // 0x37eaf0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EAF4u; }
        if (ctx->pc != 0x37EAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EAF4u; }
        if (ctx->pc != 0x37EAF4u) { return; }
    }
    ctx->pc = 0x37EAF4u;
label_37eaf4:
    // 0x37eaf4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37eaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37eaf8:
    // 0x37eaf8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37eaf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37eafc:
    // 0x37eafc: 0x320f809  jalr        $t9
label_37eb00:
    if (ctx->pc == 0x37EB00u) {
        ctx->pc = 0x37EB00u;
            // 0x37eb00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37EB04u;
        goto label_37eb04;
    }
    ctx->pc = 0x37EAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EB04u);
        ctx->pc = 0x37EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EAFCu;
            // 0x37eb00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EB04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EB04u; }
            if (ctx->pc != 0x37EB04u) { return; }
        }
        }
    }
    ctx->pc = 0x37EB04u;
label_37eb04:
    // 0x37eb04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37eb08:
    // 0x37eb08: 0x8e7000dc  lw          $s0, 0xDC($s3)
    ctx->pc = 0x37eb08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_37eb0c:
    // 0x37eb0c: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x37eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37eb10:
    // 0x37eb10: 0x8c510080  lw          $s1, 0x80($v0)
    ctx->pc = 0x37eb10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_37eb14:
    // 0x37eb14: 0xc157054  jal         func_55C150
label_37eb18:
    if (ctx->pc == 0x37EB18u) {
        ctx->pc = 0x37EB18u;
            // 0x37eb18: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37EB1Cu;
        goto label_37eb1c;
    }
    ctx->pc = 0x37EB14u;
    SET_GPR_U32(ctx, 31, 0x37EB1Cu);
    ctx->pc = 0x37EB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EB14u;
            // 0x37eb18: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EB1Cu; }
        if (ctx->pc != 0x37EB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EB1Cu; }
        if (ctx->pc != 0x37EB1Cu) { return; }
    }
    ctx->pc = 0x37EB1Cu;
label_37eb1c:
    // 0x37eb1c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x37eb1cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37eb20:
    // 0x37eb20: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37eb24:
    // 0x37eb24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37eb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37eb28:
    // 0x37eb28: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x37eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_37eb2c:
    // 0x37eb2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37eb2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37eb30:
    // 0x37eb30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37eb30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37eb34:
    // 0x37eb34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37eb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37eb38:
    // 0x37eb38: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37eb3c:
    // 0x37eb3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37eb3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37eb40:
    // 0x37eb40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37eb40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37eb44:
    // 0x37eb44: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x37eb44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_37eb48:
    // 0x37eb48: 0xc156fc8  jal         func_55BF20
label_37eb4c:
    if (ctx->pc == 0x37EB4Cu) {
        ctx->pc = 0x37EB4Cu;
            // 0x37eb4c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37EB50u;
        goto label_37eb50;
    }
    ctx->pc = 0x37EB48u;
    SET_GPR_U32(ctx, 31, 0x37EB50u);
    ctx->pc = 0x37EB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EB48u;
            // 0x37eb4c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EB50u; }
        if (ctx->pc != 0x37EB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EB50u; }
        if (ctx->pc != 0x37EB50u) { return; }
    }
    ctx->pc = 0x37EB50u;
label_37eb50:
    // 0x37eb50: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x37eb50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37eb54:
    // 0x37eb54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x37eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37eb58:
    // 0x37eb58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37eb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37eb5c:
    // 0x37eb5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37eb5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37eb60:
    // 0x37eb60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37eb60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37eb64:
    // 0x37eb64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37eb64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37eb68:
    // 0x37eb68: 0x0  nop
    ctx->pc = 0x37eb68u;
    // NOP
label_37eb6c:
    // 0x37eb6c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x37eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_37eb70:
    // 0x37eb70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37eb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37eb74:
    // 0x37eb74: 0x0  nop
    ctx->pc = 0x37eb74u;
    // NOP
label_37eb78:
    // 0x37eb78: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37eb78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37eb7c:
    // 0x37eb7c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37eb7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37eb80:
    // 0x37eb80: 0x0  nop
    ctx->pc = 0x37eb80u;
    // NOP
label_37eb84:
    // 0x37eb84: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37eb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_37eb88:
    // 0x37eb88: 0xc157054  jal         func_55C150
label_37eb8c:
    if (ctx->pc == 0x37EB8Cu) {
        ctx->pc = 0x37EB8Cu;
            // 0x37eb8c: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37EB90u;
        goto label_37eb90;
    }
    ctx->pc = 0x37EB88u;
    SET_GPR_U32(ctx, 31, 0x37EB90u);
    ctx->pc = 0x37EB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EB88u;
            // 0x37eb8c: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EB90u; }
        if (ctx->pc != 0x37EB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EB90u; }
        if (ctx->pc != 0x37EB90u) { return; }
    }
    ctx->pc = 0x37EB90u;
label_37eb90:
    // 0x37eb90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37eb94:
    // 0x37eb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37eb98:
    // 0x37eb98: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37eb9c:
    // 0x37eb9c: 0xc0506ac  jal         func_141AB0
label_37eba0:
    if (ctx->pc == 0x37EBA0u) {
        ctx->pc = 0x37EBA0u;
            // 0x37eba0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37EBA4u;
        goto label_37eba4;
    }
    ctx->pc = 0x37EB9Cu;
    SET_GPR_U32(ctx, 31, 0x37EBA4u);
    ctx->pc = 0x37EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EB9Cu;
            // 0x37eba0: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EBA4u; }
        if (ctx->pc != 0x37EBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EBA4u; }
        if (ctx->pc != 0x37EBA4u) { return; }
    }
    ctx->pc = 0x37EBA4u;
label_37eba4:
    // 0x37eba4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37eba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37eba8:
    // 0x37eba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37eba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ebac:
    // 0x37ebac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37ebacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37ebb0:
    // 0x37ebb0: 0x320f809  jalr        $t9
label_37ebb4:
    if (ctx->pc == 0x37EBB4u) {
        ctx->pc = 0x37EBB4u;
            // 0x37ebb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37EBB8u;
        goto label_37ebb8;
    }
    ctx->pc = 0x37EBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EBB8u);
        ctx->pc = 0x37EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EBB0u;
            // 0x37ebb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EBB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EBB8u; }
            if (ctx->pc != 0x37EBB8u) { return; }
        }
        }
    }
    ctx->pc = 0x37EBB8u;
label_37ebb8:
    // 0x37ebb8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37ebbc:
    // 0x37ebbc: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x37ebbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_37ebc0:
    // 0x37ebc0: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37ebc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37ebc4:
    // 0x37ebc4: 0x2610a210  addiu       $s0, $s0, -0x5DF0
    ctx->pc = 0x37ebc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943248));
label_37ebc8:
    // 0x37ebc8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x37ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ebcc:
    // 0x37ebcc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37ebd0:
    // 0x37ebd0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x37ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ebd4:
    // 0x37ebd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ebd8:
    // 0x37ebd8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37ebd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37ebdc:
    // 0x37ebdc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37ebe0:
    // 0x37ebe0: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37ebe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37ebe4:
    // 0x37ebe4: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37ebe4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37ebe8:
    // 0x37ebe8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ebec:
    // 0x37ebec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ebecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ebf0:
    // 0x37ebf0: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37ebf4:
    // 0x37ebf4: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37ebf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37ebf8:
    // 0x37ebf8: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x37ebf8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37ebfc:
    // 0x37ebfc: 0x0  nop
    ctx->pc = 0x37ebfcu;
    // NOP
label_37ec00:
    // 0x37ec00: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37ec00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37ec04:
    // 0x37ec04: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x37ec04u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_37ec08:
    // 0x37ec08: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37ec08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37ec0c:
    // 0x37ec0c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37ec0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37ec10:
    // 0x37ec10: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37ec10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37ec14:
    // 0x37ec14: 0xc0bc284  jal         func_2F0A10
label_37ec18:
    if (ctx->pc == 0x37EC18u) {
        ctx->pc = 0x37EC18u;
            // 0x37ec18: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37EC1Cu;
        goto label_37ec1c;
    }
    ctx->pc = 0x37EC14u;
    SET_GPR_U32(ctx, 31, 0x37EC1Cu);
    ctx->pc = 0x37EC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EC14u;
            // 0x37ec18: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EC1Cu; }
        if (ctx->pc != 0x37EC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EC1Cu; }
        if (ctx->pc != 0x37EC1Cu) { return; }
    }
    ctx->pc = 0x37EC1Cu;
label_37ec1c:
    // 0x37ec1c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ec20:
    // 0x37ec20: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ec20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ec24:
    // 0x37ec24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ec28:
    // 0x37ec28: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37ec28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37ec2c:
    // 0x37ec2c: 0x320f809  jalr        $t9
label_37ec30:
    if (ctx->pc == 0x37EC30u) {
        ctx->pc = 0x37EC30u;
            // 0x37ec30: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37EC34u;
        goto label_37ec34;
    }
    ctx->pc = 0x37EC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EC34u);
        ctx->pc = 0x37EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EC2Cu;
            // 0x37ec30: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EC34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EC34u; }
            if (ctx->pc != 0x37EC34u) { return; }
        }
        }
    }
    ctx->pc = 0x37EC34u;
label_37ec34:
    // 0x37ec34: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37ec38:
    // 0x37ec38: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37ec3c:
    // 0x37ec3c: 0xc4409c9c  lwc1        $f0, -0x6364($v0)
    ctx->pc = 0x37ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ec40:
    // 0x37ec40: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x37ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_37ec44:
    // 0x37ec44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37ec44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37ec48:
    // 0x37ec48: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37ec4c:
    // 0x37ec4c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37ec4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37ec50:
    // 0x37ec50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37ec54:
    // 0x37ec54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37ec54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37ec58:
    // 0x37ec58: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37ec5c:
    // 0x37ec5c: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37ec5cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37ec60:
    // 0x37ec60: 0xc156fdc  jal         func_55BF70
label_37ec64:
    if (ctx->pc == 0x37EC64u) {
        ctx->pc = 0x37EC64u;
            // 0x37ec64: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->pc = 0x37EC68u;
        goto label_37ec68;
    }
    ctx->pc = 0x37EC60u;
    SET_GPR_U32(ctx, 31, 0x37EC68u);
    ctx->pc = 0x37EC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EC60u;
            // 0x37ec64: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EC68u; }
        if (ctx->pc != 0x37EC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EC68u; }
        if (ctx->pc != 0x37EC68u) { return; }
    }
    ctx->pc = 0x37EC68u;
label_37ec68:
    // 0x37ec68: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x37ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_37ec6c:
    // 0x37ec6c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37ec70:
    // 0x37ec70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ec70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ec74:
    // 0x37ec74: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x37ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_37ec78:
    // 0x37ec78: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37ec78u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37ec7c:
    // 0x37ec7c: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37ec80:
    // 0x37ec80: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37ec84:
    // 0x37ec84: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37ec84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37ec88:
    // 0x37ec88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ec88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ec8c:
    // 0x37ec8c: 0xc66e00bc  lwc1        $f14, 0xBC($s3)
    ctx->pc = 0x37ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37ec90:
    // 0x37ec90: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37ec90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37ec94:
    // 0x37ec94: 0xc15706c  jal         func_55C1B0
label_37ec98:
    if (ctx->pc == 0x37EC98u) {
        ctx->pc = 0x37EC98u;
            // 0x37ec98: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x37EC9Cu;
        goto label_37ec9c;
    }
    ctx->pc = 0x37EC94u;
    SET_GPR_U32(ctx, 31, 0x37EC9Cu);
    ctx->pc = 0x37EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EC94u;
            // 0x37ec98: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EC9Cu; }
        if (ctx->pc != 0x37EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EC9Cu; }
        if (ctx->pc != 0x37EC9Cu) { return; }
    }
    ctx->pc = 0x37EC9Cu;
label_37ec9c:
    // 0x37ec9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37ec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37eca0:
    // 0x37eca0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37eca4:
    // 0x37eca4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37eca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37eca8:
    // 0x37eca8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37ecac:
    // 0x37ecac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37ecacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37ecb0:
    // 0x37ecb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37ecb4:
    // 0x37ecb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37ecb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37ecb8:
    // 0x37ecb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ecb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37ecbc:
    // 0x37ecbc: 0x3e00008  jr          $ra
label_37ecc0:
    if (ctx->pc == 0x37ECC0u) {
        ctx->pc = 0x37ECC0u;
            // 0x37ecc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37ECC4u;
        goto label_37ecc4;
    }
    ctx->pc = 0x37ECBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37ECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37ECBCu;
            // 0x37ecc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37ECC4u;
label_37ecc4:
    // 0x37ecc4: 0x0  nop
    ctx->pc = 0x37ecc4u;
    // NOP
label_37ecc8:
    // 0x37ecc8: 0x0  nop
    ctx->pc = 0x37ecc8u;
    // NOP
label_37eccc:
    // 0x37eccc: 0x0  nop
    ctx->pc = 0x37ecccu;
    // NOP
}
