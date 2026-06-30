#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EA30
// Address: 0x51ea30 - 0x51eb90
void sub_0051EA30_0x51ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EA30_0x51ea30");
#endif

    switch (ctx->pc) {
        case 0x51ea30u: goto label_51ea30;
        case 0x51ea34u: goto label_51ea34;
        case 0x51ea38u: goto label_51ea38;
        case 0x51ea3cu: goto label_51ea3c;
        case 0x51ea40u: goto label_51ea40;
        case 0x51ea44u: goto label_51ea44;
        case 0x51ea48u: goto label_51ea48;
        case 0x51ea4cu: goto label_51ea4c;
        case 0x51ea50u: goto label_51ea50;
        case 0x51ea54u: goto label_51ea54;
        case 0x51ea58u: goto label_51ea58;
        case 0x51ea5cu: goto label_51ea5c;
        case 0x51ea60u: goto label_51ea60;
        case 0x51ea64u: goto label_51ea64;
        case 0x51ea68u: goto label_51ea68;
        case 0x51ea6cu: goto label_51ea6c;
        case 0x51ea70u: goto label_51ea70;
        case 0x51ea74u: goto label_51ea74;
        case 0x51ea78u: goto label_51ea78;
        case 0x51ea7cu: goto label_51ea7c;
        case 0x51ea80u: goto label_51ea80;
        case 0x51ea84u: goto label_51ea84;
        case 0x51ea88u: goto label_51ea88;
        case 0x51ea8cu: goto label_51ea8c;
        case 0x51ea90u: goto label_51ea90;
        case 0x51ea94u: goto label_51ea94;
        case 0x51ea98u: goto label_51ea98;
        case 0x51ea9cu: goto label_51ea9c;
        case 0x51eaa0u: goto label_51eaa0;
        case 0x51eaa4u: goto label_51eaa4;
        case 0x51eaa8u: goto label_51eaa8;
        case 0x51eaacu: goto label_51eaac;
        case 0x51eab0u: goto label_51eab0;
        case 0x51eab4u: goto label_51eab4;
        case 0x51eab8u: goto label_51eab8;
        case 0x51eabcu: goto label_51eabc;
        case 0x51eac0u: goto label_51eac0;
        case 0x51eac4u: goto label_51eac4;
        case 0x51eac8u: goto label_51eac8;
        case 0x51eaccu: goto label_51eacc;
        case 0x51ead0u: goto label_51ead0;
        case 0x51ead4u: goto label_51ead4;
        case 0x51ead8u: goto label_51ead8;
        case 0x51eadcu: goto label_51eadc;
        case 0x51eae0u: goto label_51eae0;
        case 0x51eae4u: goto label_51eae4;
        case 0x51eae8u: goto label_51eae8;
        case 0x51eaecu: goto label_51eaec;
        case 0x51eaf0u: goto label_51eaf0;
        case 0x51eaf4u: goto label_51eaf4;
        case 0x51eaf8u: goto label_51eaf8;
        case 0x51eafcu: goto label_51eafc;
        case 0x51eb00u: goto label_51eb00;
        case 0x51eb04u: goto label_51eb04;
        case 0x51eb08u: goto label_51eb08;
        case 0x51eb0cu: goto label_51eb0c;
        case 0x51eb10u: goto label_51eb10;
        case 0x51eb14u: goto label_51eb14;
        case 0x51eb18u: goto label_51eb18;
        case 0x51eb1cu: goto label_51eb1c;
        case 0x51eb20u: goto label_51eb20;
        case 0x51eb24u: goto label_51eb24;
        case 0x51eb28u: goto label_51eb28;
        case 0x51eb2cu: goto label_51eb2c;
        case 0x51eb30u: goto label_51eb30;
        case 0x51eb34u: goto label_51eb34;
        case 0x51eb38u: goto label_51eb38;
        case 0x51eb3cu: goto label_51eb3c;
        case 0x51eb40u: goto label_51eb40;
        case 0x51eb44u: goto label_51eb44;
        case 0x51eb48u: goto label_51eb48;
        case 0x51eb4cu: goto label_51eb4c;
        case 0x51eb50u: goto label_51eb50;
        case 0x51eb54u: goto label_51eb54;
        case 0x51eb58u: goto label_51eb58;
        case 0x51eb5cu: goto label_51eb5c;
        case 0x51eb60u: goto label_51eb60;
        case 0x51eb64u: goto label_51eb64;
        case 0x51eb68u: goto label_51eb68;
        case 0x51eb6cu: goto label_51eb6c;
        case 0x51eb70u: goto label_51eb70;
        case 0x51eb74u: goto label_51eb74;
        case 0x51eb78u: goto label_51eb78;
        case 0x51eb7cu: goto label_51eb7c;
        case 0x51eb80u: goto label_51eb80;
        case 0x51eb84u: goto label_51eb84;
        case 0x51eb88u: goto label_51eb88;
        case 0x51eb8cu: goto label_51eb8c;
        default: break;
    }

    ctx->pc = 0x51ea30u;

label_51ea30:
    // 0x51ea30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x51ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_51ea34:
    // 0x51ea34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51ea38:
    // 0x51ea38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_51ea3c:
    // 0x51ea3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x51ea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_51ea40:
    // 0x51ea40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x51ea40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_51ea44:
    // 0x51ea44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x51ea44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51ea48:
    // 0x51ea48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51ea4c:
    // 0x51ea4c: 0x267201cc  addiu       $s2, $s3, 0x1CC
    ctx->pc = 0x51ea4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 460));
label_51ea50:
    // 0x51ea50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_51ea54:
    // 0x51ea54: 0x26710221  addiu       $s1, $s3, 0x221
    ctx->pc = 0x51ea54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 545));
label_51ea58:
    // 0x51ea58: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x51ea58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_51ea5c:
    // 0x51ea5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x51ea5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_51ea60:
    // 0x51ea60: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x51ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51ea64:
    // 0x51ea64: 0xc48001cc  lwc1        $f0, 0x1CC($a0)
    ctx->pc = 0x51ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51ea68:
    // 0x51ea68: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x51ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51ea6c:
    // 0x51ea6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x51ea6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_51ea70:
    // 0x51ea70: 0xe48001cc  swc1        $f0, 0x1CC($a0)
    ctx->pc = 0x51ea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
label_51ea74:
    // 0x51ea74: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x51ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_51ea78:
    // 0x51ea78: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_51ea7c:
    if (ctx->pc == 0x51EA7Cu) {
        ctx->pc = 0x51EA7Cu;
            // 0x51ea7c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51EA80u;
        goto label_51ea80;
    }
    ctx->pc = 0x51EA78u;
    {
        const bool branch_taken_0x51ea78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x51EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EA78u;
            // 0x51ea7c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ea78) {
            ctx->pc = 0x51EAF8u;
            goto label_51eaf8;
        }
    }
    ctx->pc = 0x51EA80u;
label_51ea80:
    // 0x51ea80: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x51ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51ea84:
    // 0x51ea84: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51ea88:
    // 0x51ea88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x51ea88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51ea8c:
    // 0x51ea8c: 0x24a5c540  addiu       $a1, $a1, -0x3AC0
    ctx->pc = 0x51ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
label_51ea90:
    // 0x51ea90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51ea94:
    // 0x51ea94: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x51ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51ea98:
    // 0x51ea98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x51ea98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51ea9c:
    // 0x51ea9c: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
label_51eaa0:
    if (ctx->pc == 0x51EAA0u) {
        ctx->pc = 0x51EAA0u;
            // 0x51eaa0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x51EAA4u;
        goto label_51eaa4;
    }
    ctx->pc = 0x51EA9Cu;
    {
        const bool branch_taken_0x51ea9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x51ea9c) {
            ctx->pc = 0x51EAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51EA9Cu;
            // 0x51eaa0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51EAECu;
            goto label_51eaec;
        }
    }
    ctx->pc = 0x51EAA4u;
label_51eaa4:
    // 0x51eaa4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x51eaa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_51eaa8:
    // 0x51eaa8: 0xc38004  sllv        $s0, $v1, $a2
    ctx->pc = 0x51eaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_51eaac:
    // 0x51eaac: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x51eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_51eab0:
    // 0x51eab0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x51eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_51eab4:
    // 0x51eab4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_51eab8:
    if (ctx->pc == 0x51EAB8u) {
        ctx->pc = 0x51EABCu;
        goto label_51eabc;
    }
    ctx->pc = 0x51EAB4u;
    {
        const bool branch_taken_0x51eab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51eab4) {
            ctx->pc = 0x51EAE8u;
            goto label_51eae8;
        }
    }
    ctx->pc = 0x51EABCu;
label_51eabc:
    // 0x51eabc: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x51eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_51eac0:
    // 0x51eac0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x51eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_51eac4:
    // 0x51eac4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x51eac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_51eac8:
    // 0x51eac8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x51eac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51eacc:
    // 0x51eacc: 0x320f809  jalr        $t9
label_51ead0:
    if (ctx->pc == 0x51EAD0u) {
        ctx->pc = 0x51EAD0u;
            // 0x51ead0: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->pc = 0x51EAD4u;
        goto label_51ead4;
    }
    ctx->pc = 0x51EACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51EAD4u);
        ctx->pc = 0x51EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EACCu;
            // 0x51ead0: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51EAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51EAD4u; }
            if (ctx->pc != 0x51EAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x51EAD4u;
label_51ead4:
    // 0x51ead4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x51ead4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_51ead8:
    // 0x51ead8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x51ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_51eadc:
    // 0x51eadc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x51eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_51eae0:
    // 0x51eae0: 0x10000005  b           . + 4 + (0x5 << 2)
label_51eae4:
    if (ctx->pc == 0x51EAE4u) {
        ctx->pc = 0x51EAE4u;
            // 0x51eae4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x51EAE8u;
        goto label_51eae8;
    }
    ctx->pc = 0x51EAE0u;
    {
        const bool branch_taken_0x51eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EAE0u;
            // 0x51eae4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51eae0) {
            ctx->pc = 0x51EAF8u;
            goto label_51eaf8;
        }
    }
    ctx->pc = 0x51EAE8u;
label_51eae8:
    // 0x51eae8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x51eae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_51eaec:
    // 0x51eaec: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x51eaecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_51eaf0:
    // 0x51eaf0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_51eaf4:
    if (ctx->pc == 0x51EAF4u) {
        ctx->pc = 0x51EAF4u;
            // 0x51eaf4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x51EAF8u;
        goto label_51eaf8;
    }
    ctx->pc = 0x51EAF0u;
    {
        const bool branch_taken_0x51eaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51EAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EAF0u;
            // 0x51eaf4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51eaf0) {
            ctx->pc = 0x51EA94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51ea94;
        }
    }
    ctx->pc = 0x51EAF8u;
label_51eaf8:
    // 0x51eaf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51eafc:
    // 0x51eafc: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x51eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51eb00:
    // 0x51eb00: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x51eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51eb04:
    // 0x51eb04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x51eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_51eb08:
    // 0x51eb08: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x51eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_51eb0c:
    // 0x51eb0c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x51eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51eb10:
    // 0x51eb10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51eb14:
    // 0x51eb14: 0x8c420d20  lw          $v0, 0xD20($v0)
    ctx->pc = 0x51eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
label_51eb18:
    // 0x51eb18: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x51eb18u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_51eb1c:
    // 0x51eb1c: 0xc04f278  jal         func_13C9E0
label_51eb20:
    if (ctx->pc == 0x51EB20u) {
        ctx->pc = 0x51EB20u;
            // 0x51eb20: 0x24500084  addiu       $s0, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->pc = 0x51EB24u;
        goto label_51eb24;
    }
    ctx->pc = 0x51EB1Cu;
    SET_GPR_U32(ctx, 31, 0x51EB24u);
    ctx->pc = 0x51EB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EB1Cu;
            // 0x51eb20: 0x24500084  addiu       $s0, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EB24u; }
        if (ctx->pc != 0x51EB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EB24u; }
        if (ctx->pc != 0x51EB24u) { return; }
    }
    ctx->pc = 0x51EB24u;
label_51eb24:
    // 0x51eb24: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x51eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_51eb28:
    // 0x51eb28: 0xc04ce80  jal         func_133A00
label_51eb2c:
    if (ctx->pc == 0x51EB2Cu) {
        ctx->pc = 0x51EB2Cu;
            // 0x51eb2c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x51EB30u;
        goto label_51eb30;
    }
    ctx->pc = 0x51EB28u;
    SET_GPR_U32(ctx, 31, 0x51EB30u);
    ctx->pc = 0x51EB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EB28u;
            // 0x51eb2c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EB30u; }
        if (ctx->pc != 0x51EB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EB30u; }
        if (ctx->pc != 0x51EB30u) { return; }
    }
    ctx->pc = 0x51EB30u;
label_51eb30:
    // 0x51eb30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x51eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51eb34:
    // 0x51eb34: 0x266401d0  addiu       $a0, $s3, 0x1D0
    ctx->pc = 0x51eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 464));
label_51eb38:
    // 0x51eb38: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x51eb38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_51eb3c:
    // 0x51eb3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x51eb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_51eb40:
    // 0x51eb40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x51eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51eb44:
    // 0x51eb44: 0xc05161c  jal         func_145870
label_51eb48:
    if (ctx->pc == 0x51EB48u) {
        ctx->pc = 0x51EB48u;
            // 0x51eb48: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x51EB4Cu;
        goto label_51eb4c;
    }
    ctx->pc = 0x51EB44u;
    SET_GPR_U32(ctx, 31, 0x51EB4Cu);
    ctx->pc = 0x51EB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EB44u;
            // 0x51eb48: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145870u;
    if (runtime->hasFunction(0x145870u)) {
        auto targetFn = runtime->lookupFunction(0x145870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EB4Cu; }
        if (ctx->pc != 0x51EB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145870_0x145870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51EB4Cu; }
        if (ctx->pc != 0x51EB4Cu) { return; }
    }
    ctx->pc = 0x51EB4Cu;
label_51eb4c:
    // 0x51eb4c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x51eb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51eb50:
    // 0x51eb50: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x51eb50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51eb54:
    // 0x51eb54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_51eb58:
    if (ctx->pc == 0x51EB58u) {
        ctx->pc = 0x51EB58u;
            // 0x51eb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51EB5Cu;
        goto label_51eb5c;
    }
    ctx->pc = 0x51EB54u;
    {
        const bool branch_taken_0x51eb54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x51EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EB54u;
            // 0x51eb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51eb54) {
            ctx->pc = 0x51EB60u;
            goto label_51eb60;
        }
    }
    ctx->pc = 0x51EB5Cu;
label_51eb5c:
    // 0x51eb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51eb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51eb60:
    // 0x51eb60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_51eb64:
    // 0x51eb64: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x51eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_51eb68:
    // 0x51eb68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x51eb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51eb6c:
    // 0x51eb6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x51eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51eb70:
    // 0x51eb70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x51eb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51eb74:
    // 0x51eb74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x51eb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51eb78:
    // 0x51eb78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51eb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51eb7c:
    // 0x51eb7c: 0x3e00008  jr          $ra
label_51eb80:
    if (ctx->pc == 0x51EB80u) {
        ctx->pc = 0x51EB80u;
            // 0x51eb80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51EB84u;
        goto label_51eb84;
    }
    ctx->pc = 0x51EB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51EB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EB7Cu;
            // 0x51eb80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51EB84u;
label_51eb84:
    // 0x51eb84: 0x0  nop
    ctx->pc = 0x51eb84u;
    // NOP
label_51eb88:
    // 0x51eb88: 0x0  nop
    ctx->pc = 0x51eb88u;
    // NOP
label_51eb8c:
    // 0x51eb8c: 0x0  nop
    ctx->pc = 0x51eb8cu;
    // NOP
}
