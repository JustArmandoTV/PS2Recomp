#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B9820
// Address: 0x4b9820 - 0x4b9a10
void sub_004B9820_0x4b9820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9820_0x4b9820");
#endif

    switch (ctx->pc) {
        case 0x4b984cu: goto label_4b984c;
        case 0x4b98f4u: goto label_4b98f4;
        case 0x4b9910u: goto label_4b9910;
        case 0x4b994cu: goto label_4b994c;
        case 0x4b9968u: goto label_4b9968;
        case 0x4b9980u: goto label_4b9980;
        case 0x4b9998u: goto label_4b9998;
        case 0x4b99b8u: goto label_4b99b8;
        case 0x4b99dcu: goto label_4b99dc;
        default: break;
    }

    ctx->pc = 0x4b9820u;

    // 0x4b9820: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4b9820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x4b9824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b9828: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b9828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4b982c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4b9830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b9830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b9834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b9834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9838: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b9838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4b983c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b983cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9840: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4b9840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4b9844: 0xc0892d0  jal         func_224B40
    ctx->pc = 0x4B9844u;
    SET_GPR_U32(ctx, 31, 0x4B984Cu);
    ctx->pc = 0x4B9848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9844u;
            // 0x4b9848: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B984Cu; }
        if (ctx->pc != 0x4B984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B984Cu; }
        if (ctx->pc != 0x4B984Cu) { return; }
    }
    ctx->pc = 0x4B984Cu;
label_4b984c:
    // 0x4b984c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x4b984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x4b9850: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x4b9850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
    // 0x4b9854: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x4b9854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4b9858: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x4b9858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x4b985c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4b985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x4b9860: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4b9860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4b9864: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4b9864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x4b9868: 0xc440c900  lwc1        $f0, -0x3700($v0)
    ctx->pc = 0x4b9868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b986c: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x4b986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b9870: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x4b9870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b9874: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4b9874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b9878: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4b9878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b987c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x4b987cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4b9880: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4b9880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x4b9884: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x4b9884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4b9888: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x4b9888u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4b988c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4b988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b9890: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4b9890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b9894: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4b9894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b9898: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4b9898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b989c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4b989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4b98a0: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x4b98a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x4b98a4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4b98a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x4b98a8: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x4b98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x4b98ac: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x4b98acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x4b98b0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x4b98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x4b98b4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x4b98b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x4b98b8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x4b98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x4b98bc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x4B98BCu;
    {
        const bool branch_taken_0x4b98bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B98C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B98BCu;
            // 0x4b98c0: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98bc) {
            ctx->pc = 0x4B98D0u;
            goto label_4b98d0;
        }
    }
    ctx->pc = 0x4B98C4u;
    // 0x4b98c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b98c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B98C8u;
    {
        const bool branch_taken_0x4b98c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B98CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B98C8u;
            // 0x4b98cc: 0xa3a20100  sb          $v0, 0x100($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98c8) {
            ctx->pc = 0x4B98D8u;
            goto label_4b98d8;
        }
    }
    ctx->pc = 0x4B98D0u;
label_4b98d0:
    // 0x4b98d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b98d4: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x4b98d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_4b98d8:
    // 0x4b98d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b98dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b98e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4b98e4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4b98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x4b98e8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x4b98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x4b98ec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4B98ECu;
    SET_GPR_U32(ctx, 31, 0x4B98F4u);
    ctx->pc = 0x4B98F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B98ECu;
            // 0x4b98f0: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B98F4u; }
        if (ctx->pc != 0x4B98F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B98F4u; }
        if (ctx->pc != 0x4B98F4u) { return; }
    }
    ctx->pc = 0x4B98F4u;
label_4b98f4:
    // 0x4b98f4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4b98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x4b98f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b98f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b98fc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B98FCu;
    {
        const bool branch_taken_0x4b98fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B98FCu;
            // 0x4b9900: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b98fc) {
            ctx->pc = 0x4B994Cu;
            goto label_4b994c;
        }
    }
    ctx->pc = 0x4B9904u;
    // 0x4b9904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9908: 0xc088ef4  jal         func_223BD0
    ctx->pc = 0x4B9908u;
    SET_GPR_U32(ctx, 31, 0x4B9910u);
    ctx->pc = 0x4B990Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9908u;
            // 0x4b990c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9910u; }
        if (ctx->pc != 0x4B9910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9910u; }
        if (ctx->pc != 0x4B9910u) { return; }
    }
    ctx->pc = 0x4B9910u;
label_4b9910:
    // 0x4b9910: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b9910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b9914: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b9914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b9918: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4b9918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
    // 0x4b991c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4b991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
    // 0x4b9920: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b9920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b9924: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4b9924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x4b9928: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b9928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b992c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b992cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b9930: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4b9930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x4b9934: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4b9934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x4b9938: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4b9938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x4b993c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4b9940: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4b9940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4b9944: 0xc088b38  jal         func_222CE0
    ctx->pc = 0x4B9944u;
    SET_GPR_U32(ctx, 31, 0x4B994Cu);
    ctx->pc = 0x4B9948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9944u;
            // 0x4b9948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B994Cu; }
        if (ctx->pc != 0x4B994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B994Cu; }
        if (ctx->pc != 0x4B994Cu) { return; }
    }
    ctx->pc = 0x4B994Cu;
label_4b994c:
    // 0x4b994c: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x4b994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x4b9950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9954: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x4b9954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x4b9958: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4b9958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4b995c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b995cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b9960: 0xc08914c  jal         func_224530
    ctx->pc = 0x4B9960u;
    SET_GPR_U32(ctx, 31, 0x4B9968u);
    ctx->pc = 0x4B9964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9960u;
            // 0x4b9964: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9968u; }
        if (ctx->pc != 0x4B9968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9968u; }
        if (ctx->pc != 0x4B9968u) { return; }
    }
    ctx->pc = 0x4B9968u;
label_4b9968:
    // 0x4b9968: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b9968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b996c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9970: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4b9974: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b9974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4b9978: 0xc08c164  jal         func_230590
    ctx->pc = 0x4B9978u;
    SET_GPR_U32(ctx, 31, 0x4B9980u);
    ctx->pc = 0x4B997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9978u;
            // 0x4b997c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9980u; }
        if (ctx->pc != 0x4B9980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9980u; }
        if (ctx->pc != 0x4B9980u) { return; }
    }
    ctx->pc = 0x4B9980u;
label_4b9980:
    // 0x4b9980: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4b9980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
    // 0x4b9984: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b9984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b9988: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4b998c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4b998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4b9990: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4B9990u;
    SET_GPR_U32(ctx, 31, 0x4B9998u);
    ctx->pc = 0x4B9994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9990u;
            // 0x4b9994: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9998u; }
        if (ctx->pc != 0x4B9998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9998u; }
        if (ctx->pc != 0x4B9998u) { return; }
    }
    ctx->pc = 0x4B9998u;
label_4b9998:
    // 0x4b9998: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4b9998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4b999c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b999cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b99a0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B99A0u;
    {
        const bool branch_taken_0x4b99a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B99A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B99A0u;
            // 0x4b99a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b99a0) {
            ctx->pc = 0x4B99C4u;
            goto label_4b99c4;
        }
    }
    ctx->pc = 0x4B99A8u;
    // 0x4b99a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b99a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b99ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b99acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b99b0: 0xc0869d0  jal         func_21A740
    ctx->pc = 0x4B99B0u;
    SET_GPR_U32(ctx, 31, 0x4B99B8u);
    ctx->pc = 0x4B99B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B99B0u;
            // 0x4b99b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B99B8u; }
        if (ctx->pc != 0x4B99B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B99B8u; }
        if (ctx->pc != 0x4B99B8u) { return; }
    }
    ctx->pc = 0x4B99B8u;
label_4b99b8:
    // 0x4b99b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b99bc: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4b99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x4b99c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4b99c4:
    // 0x4b99c4: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4b99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
    // 0x4b99c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b99cc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4b99d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4b99d4: 0xc08c650  jal         func_231940
    ctx->pc = 0x4B99D4u;
    SET_GPR_U32(ctx, 31, 0x4B99DCu);
    ctx->pc = 0x4B99D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B99D4u;
            // 0x4b99d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B99DCu; }
        if (ctx->pc != 0x4B99DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B99DCu; }
        if (ctx->pc != 0x4B99DCu) { return; }
    }
    ctx->pc = 0x4B99DCu;
label_4b99dc:
    // 0x4b99dc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x4b99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x4b99e0: 0x2403fdfd  addiu       $v1, $zero, -0x203
    ctx->pc = 0x4b99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966781));
    // 0x4b99e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4b99e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b99e8: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x4b99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x4b99ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b99ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b99f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b99f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b99f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b99f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b99f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b99f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b99fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b99fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9a00: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A00u;
            // 0x4b9a04: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9A08u;
    // 0x4b9a08: 0x0  nop
    ctx->pc = 0x4b9a08u;
    // NOP
    // 0x4b9a0c: 0x0  nop
    ctx->pc = 0x4b9a0cu;
    // NOP
}
