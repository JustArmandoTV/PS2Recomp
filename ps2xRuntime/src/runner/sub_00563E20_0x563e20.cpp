#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00563E20
// Address: 0x563e20 - 0x564560
void sub_00563E20_0x563e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00563E20_0x563e20");
#endif

    switch (ctx->pc) {
        case 0x563f0cu: goto label_563f0c;
        case 0x563f14u: goto label_563f14;
        case 0x563f20u: goto label_563f20;
        case 0x564124u: goto label_564124;
        case 0x564164u: goto label_564164;
        case 0x564174u: goto label_564174;
        case 0x564184u: goto label_564184;
        case 0x564194u: goto label_564194;
        case 0x5641a4u: goto label_5641a4;
        case 0x5641acu: goto label_5641ac;
        case 0x564334u: goto label_564334;
        case 0x564344u: goto label_564344;
        case 0x564530u: goto label_564530;
        case 0x564548u: goto label_564548;
        default: break;
    }

    ctx->pc = 0x563e20u;

    // 0x563e20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x563e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x563e24: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x563E24u;
    {
        const bool branch_taken_0x563e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x563E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E24u;
            // 0x563e28: 0xac8501a0  sw          $a1, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563e24) {
            ctx->pc = 0x563E6Cu;
            goto label_563e6c;
        }
    }
    ctx->pc = 0x563E2Cu;
    // 0x563e2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x563e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x563e30: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x563E30u;
    {
        const bool branch_taken_0x563e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x563e30) {
            ctx->pc = 0x563E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563E30u;
            // 0x563e34: 0x3c034396  lui         $v1, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563E64u;
            goto label_563e64;
        }
    }
    ctx->pc = 0x563E38u;
    // 0x563e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x563e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x563e3c: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x563E3Cu;
    {
        const bool branch_taken_0x563e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x563e3c) {
            ctx->pc = 0x563E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563E3Cu;
            // 0x563e40: 0x3c0342f0  lui         $v1, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563E5Cu;
            goto label_563e5c;
        }
    }
    ctx->pc = 0x563E44u;
    // 0x563e44: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x563E44u;
    {
        const bool branch_taken_0x563e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x563e44) {
            ctx->pc = 0x563E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563E44u;
            // 0x563e48: 0x3c0342f0  lui         $v1, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563E54u;
            goto label_563e54;
        }
    }
    ctx->pc = 0x563E4Cu;
    // 0x563e4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x563E4Cu;
    {
        const bool branch_taken_0x563e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E4Cu;
            // 0x563e50: 0xac8301a0  sw          $v1, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563e4c) {
            ctx->pc = 0x563E78u;
            goto label_563e78;
        }
    }
    ctx->pc = 0x563E54u;
label_563e54:
    // 0x563e54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x563E54u;
    {
        const bool branch_taken_0x563e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E54u;
            // 0x563e58: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563e54) {
            ctx->pc = 0x563E80u;
            goto label_563e80;
        }
    }
    ctx->pc = 0x563E5Cu;
label_563e5c:
    // 0x563e5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x563E5Cu;
    {
        const bool branch_taken_0x563e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E5Cu;
            // 0x563e60: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563e5c) {
            ctx->pc = 0x563E80u;
            goto label_563e80;
        }
    }
    ctx->pc = 0x563E64u;
label_563e64:
    // 0x563e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x563E64u;
    {
        const bool branch_taken_0x563e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E64u;
            // 0x563e68: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563e64) {
            ctx->pc = 0x563E80u;
            goto label_563e80;
        }
    }
    ctx->pc = 0x563E6Cu;
label_563e6c:
    // 0x563e6c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x563e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x563e70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x563E70u;
    {
        const bool branch_taken_0x563e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563E70u;
            // 0x563e74: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563e70) {
            ctx->pc = 0x563E80u;
            goto label_563e80;
        }
    }
    ctx->pc = 0x563E78u;
label_563e78:
    // 0x563e78: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x563e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x563e7c: 0xac8301a4  sw          $v1, 0x1A4($a0)
    ctx->pc = 0x563e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
label_563e80:
    // 0x563e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563e84: 0x0  nop
    ctx->pc = 0x563e84u;
    // NOP
    // 0x563e88: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x563e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563e8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x563E8Cu;
    {
        const bool branch_taken_0x563e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x563e8c) {
            ctx->pc = 0x563E98u;
            goto label_563e98;
        }
    }
    ctx->pc = 0x563E94u;
    // 0x563e94: 0xe48c01a4  swc1        $f12, 0x1A4($a0)
    ctx->pc = 0x563e94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
label_563e98:
    // 0x563e98: 0x3e00008  jr          $ra
    ctx->pc = 0x563E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x563EA0u;
    // 0x563ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x563ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x563ea4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x563ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x563ea8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x563ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x563eac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x563eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x563eb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x563eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x563eb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x563eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x563eb8: 0x94830096  lhu         $v1, 0x96($a0)
    ctx->pc = 0x563eb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x563ebc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x563EBCu;
    {
        const bool branch_taken_0x563ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x563EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563EBCu;
            // 0x563ec0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563ebc) {
            ctx->pc = 0x563ED4u;
            goto label_563ed4;
        }
    }
    ctx->pc = 0x563EC4u;
    // 0x563ec4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x563EC4u;
    {
        const bool branch_taken_0x563ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x563ec4) {
            ctx->pc = 0x563EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563EC4u;
            // 0x563ec8: 0xa6220096  sh          $v0, 0x96($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563ED4u;
            goto label_563ed4;
        }
    }
    ctx->pc = 0x563ECCu;
    // 0x563ecc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x563ECCu;
    {
        const bool branch_taken_0x563ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x563ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563ECCu;
            // 0x563ed0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563ecc) {
            ctx->pc = 0x5640F8u;
            goto label_5640f8;
        }
    }
    ctx->pc = 0x563ED4u;
label_563ed4:
    // 0x563ed4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x563ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x563ed8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x563ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x563edc: 0xc6210190  lwc1        $f1, 0x190($s1)
    ctx->pc = 0x563edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x563ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x563ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x563ee4: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x563ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x563ee8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x563ee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x563eec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x563eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563ef0: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x563EF0u;
    {
        const bool branch_taken_0x563ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x563EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563EF0u;
            // 0x563ef4: 0xe6210190  swc1        $f1, 0x190($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x563ef0) {
            ctx->pc = 0x5640F4u;
            goto label_5640f4;
        }
    }
    ctx->pc = 0x563EF8u;
    // 0x563ef8: 0x8e26018c  lw          $a2, 0x18C($s1)
    ctx->pc = 0x563ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x563efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x563efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x563f00: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x563f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x563f04: 0xc158ba8  jal         func_562EA0
    ctx->pc = 0x563F04u;
    SET_GPR_U32(ctx, 31, 0x563F0Cu);
    ctx->pc = 0x563F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563F04u;
            // 0x563f08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562EA0u;
    if (runtime->hasFunction(0x562EA0u)) {
        auto targetFn = runtime->lookupFunction(0x562EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563F0Cu; }
        if (ctx->pc != 0x563F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562EA0_0x562ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563F0Cu; }
        if (ctx->pc != 0x563F0Cu) { return; }
    }
    ctx->pc = 0x563F0Cu;
label_563f0c:
    // 0x563f0c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x563F0Cu;
    SET_GPR_U32(ctx, 31, 0x563F14u);
    ctx->pc = 0x563F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563F0Cu;
            // 0x563f10: 0xc7ac0048  lwc1        $f12, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563F14u; }
        if (ctx->pc != 0x563F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563F14u; }
        if (ctx->pc != 0x563F14u) { return; }
    }
    ctx->pc = 0x563F14u;
label_563f14:
    // 0x563f14: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x563f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x563f18: 0xc047740  jal         func_11DD00
    ctx->pc = 0x563F18u;
    SET_GPR_U32(ctx, 31, 0x563F20u);
    ctx->pc = 0x563F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x563F18u;
            // 0x563f1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563F20u; }
        if (ctx->pc != 0x563F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x563F20u; }
        if (ctx->pc != 0x563F20u) { return; }
    }
    ctx->pc = 0x563F20u;
label_563f20:
    // 0x563f20: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x563f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x563f24: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x563f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x563f28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x563f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x563f2c: 0x0  nop
    ctx->pc = 0x563f2cu;
    // NOP
    // 0x563f30: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x563f30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563f34: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x563F34u;
    {
        const bool branch_taken_0x563f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x563f34) {
            ctx->pc = 0x563F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x563F34u;
            // 0x563f38: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x563F9Cu;
            goto label_563f9c;
        }
    }
    ctx->pc = 0x563F3Cu;
    // 0x563f3c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x563f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x563f40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x563f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x563f44: 0x0  nop
    ctx->pc = 0x563f44u;
    // NOP
    // 0x563f48: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x563f48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563f4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x563F4Cu;
    {
        const bool branch_taken_0x563f4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x563F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563F4Cu;
            // 0x563f50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563f4c) {
            ctx->pc = 0x563F58u;
            goto label_563f58;
        }
    }
    ctx->pc = 0x563F54u;
    // 0x563f54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x563f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_563f58:
    // 0x563f58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x563f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x563f5c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x563f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x563f60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x563f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x563f64: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x563f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x563f68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x563f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563f6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x563f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x563f70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x563f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563f74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x563f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x563f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x563f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x563f7c: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x563f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x563f80: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x563f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x563f84: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x563f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x563f88: 0x40182a  slt         $v1, $v0, $zero
    ctx->pc = 0x563f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x563f8c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x563f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x563f90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x563f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x563f94: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x563f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x563f98: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x563f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_563f9c:
    // 0x563f9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x563f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x563fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x563fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x563fa4: 0x0  nop
    ctx->pc = 0x563fa4u;
    // NOP
    // 0x563fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x563fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563fac: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x563FACu;
    {
        const bool branch_taken_0x563fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x563fac) {
            ctx->pc = 0x564018u;
            goto label_564018;
        }
    }
    ctx->pc = 0x563FB4u;
    // 0x563fb4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x563fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x563fb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x563fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x563fbc: 0x0  nop
    ctx->pc = 0x563fbcu;
    // NOP
    // 0x563fc0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x563fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x563fc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x563FC4u;
    {
        const bool branch_taken_0x563fc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x563FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x563FC4u;
            // 0x563fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x563fc4) {
            ctx->pc = 0x563FD0u;
            goto label_563fd0;
        }
    }
    ctx->pc = 0x563FCCu;
    // 0x563fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x563fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_563fd0:
    // 0x563fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x563fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x563fd4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x563fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x563fd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x563fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x563fdc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x563fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x563fe0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x563fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563fe4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x563fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x563fe8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x563fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x563fec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x563fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x563ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x563ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x563ff4: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x563ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x563ff8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x563ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x563ffc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x563ffcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x564000: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x564000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x564004: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x564004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x564008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x564008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x56400c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x56400cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x564010: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x564010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x564014: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x564014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_564018:
    // 0x564018: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x564018u;
    {
        const bool branch_taken_0x564018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x564018) {
            ctx->pc = 0x56401Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564018u;
            // 0x56401c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564038u;
            goto label_564038;
        }
    }
    ctx->pc = 0x564020u;
    // 0x564020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x564020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x564024: 0x2001827  not         $v1, $s0
    ctx->pc = 0x564024u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x564028: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x564028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x56402c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x56402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x564030: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x564030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x564034: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x564034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_564038:
    // 0x564038: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x564038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x56403c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x56403cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x564040: 0x0  nop
    ctx->pc = 0x564040u;
    // NOP
    // 0x564044: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x564044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x564048: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x564048u;
    {
        const bool branch_taken_0x564048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x564048) {
            ctx->pc = 0x56404Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564048u;
            // 0x56404c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5640DCu;
            goto label_5640dc;
        }
    }
    ctx->pc = 0x564050u;
    // 0x564050: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x564050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x564054: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x564054u;
    {
        const bool branch_taken_0x564054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x564054) {
            ctx->pc = 0x5640D8u;
            goto label_5640d8;
        }
    }
    ctx->pc = 0x56405Cu;
    // 0x56405c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x56405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x564060: 0x8c428b18  lw          $v0, -0x74E8($v0)
    ctx->pc = 0x564060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937368)));
    // 0x564064: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x564064u;
    {
        const bool branch_taken_0x564064 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x564064) {
            ctx->pc = 0x564068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564064u;
            // 0x564068: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564078u;
            goto label_564078;
        }
    }
    ctx->pc = 0x56406Cu;
    // 0x56406c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56406cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x564070u;
    {
        const bool branch_taken_0x564070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564070u;
            // 0x564074: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564070) {
            ctx->pc = 0x564090u;
            goto label_564090;
        }
    }
    ctx->pc = 0x564078u;
label_564078:
    // 0x564078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x564078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x56407c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x564080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564084: 0x0  nop
    ctx->pc = 0x564084u;
    // NOP
    // 0x564088: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x564088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x56408c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x56408cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_564090:
    // 0x564090: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x564090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x564094: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x564094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x564098: 0x8c428b28  lw          $v0, -0x74D8($v0)
    ctx->pc = 0x564098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937384)));
    // 0x56409c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x56409Cu;
    {
        const bool branch_taken_0x56409c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5640A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56409Cu;
            // 0x5640a0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x56409c) {
            ctx->pc = 0x5640B0u;
            goto label_5640b0;
        }
    }
    ctx->pc = 0x5640A4u;
    // 0x5640a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5640a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5640a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5640A8u;
    {
        const bool branch_taken_0x5640a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5640ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5640A8u;
            // 0x5640ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5640a8) {
            ctx->pc = 0x5640CCu;
            goto label_5640cc;
        }
    }
    ctx->pc = 0x5640B0u;
label_5640b0:
    // 0x5640b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5640b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x5640b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5640b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x5640b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5640b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5640bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5640bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5640c0: 0x0  nop
    ctx->pc = 0x5640c0u;
    // NOP
    // 0x5640c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5640c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x5640c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x5640c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_5640cc:
    // 0x5640cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5640ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5640d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x5640D0u;
    {
        const bool branch_taken_0x5640d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5640d0) {
            ctx->pc = 0x5640F4u;
            goto label_5640f4;
        }
    }
    ctx->pc = 0x5640D8u;
label_5640d8:
    // 0x5640d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x5640d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5640dc:
    // 0x5640dc: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x5640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x5640e0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x5640e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5640e4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x5640e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x5640e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x5640e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x5640ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x5640ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5640f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5640f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5640f4:
    // 0x5640f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5640f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5640f8:
    // 0x5640f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5640f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5640fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5640fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x564100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x564100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x564104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x564108: 0x3e00008  jr          $ra
    ctx->pc = 0x564108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564108u;
            // 0x56410c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x564110u;
    // 0x564110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x564110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x564114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x564114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x564118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x564118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x56411c: 0xc158ce0  jal         func_563380
    ctx->pc = 0x56411Cu;
    SET_GPR_U32(ctx, 31, 0x564124u);
    ctx->pc = 0x564120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56411Cu;
            // 0x564120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x563380u;
    if (runtime->hasFunction(0x563380u)) {
        auto targetFn = runtime->lookupFunction(0x563380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564124u; }
        if (ctx->pc != 0x564124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00563380_0x563380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564124u; }
        if (ctx->pc != 0x564124u) { return; }
    }
    ctx->pc = 0x564124u;
label_564124:
    // 0x564124: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x564124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x564128: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x564128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x56412c: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x56412Cu;
    {
        const bool branch_taken_0x56412c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x56412c) {
            ctx->pc = 0x564130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56412Cu;
            // 0x564130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56418Cu;
            goto label_56418c;
        }
    }
    ctx->pc = 0x564134u;
    // 0x564134: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x564134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x564138: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x564138u;
    {
        const bool branch_taken_0x564138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x564138) {
            ctx->pc = 0x56413Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564138u;
            // 0x56413c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56417Cu;
            goto label_56417c;
        }
    }
    ctx->pc = 0x564140u;
    // 0x564140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x564140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x564144: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x564144u;
    {
        const bool branch_taken_0x564144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x564144) {
            ctx->pc = 0x564148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564144u;
            // 0x564148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56416Cu;
            goto label_56416c;
        }
    }
    ctx->pc = 0x56414Cu;
    // 0x56414c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x56414Cu;
    {
        const bool branch_taken_0x56414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x56414c) {
            ctx->pc = 0x564150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56414Cu;
            // 0x564150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56415Cu;
            goto label_56415c;
        }
    }
    ctx->pc = 0x564154u;
    // 0x564154: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x564154u;
    {
        const bool branch_taken_0x564154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564154u;
            // 0x564158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564154) {
            ctx->pc = 0x564198u;
            goto label_564198;
        }
    }
    ctx->pc = 0x56415Cu;
label_56415c:
    // 0x56415c: 0xc158a78  jal         func_5629E0
    ctx->pc = 0x56415Cu;
    SET_GPR_U32(ctx, 31, 0x564164u);
    ctx->pc = 0x564160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56415Cu;
            // 0x564160: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5629E0u;
    if (runtime->hasFunction(0x5629E0u)) {
        auto targetFn = runtime->lookupFunction(0x5629E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564164u; }
        if (ctx->pc != 0x564164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005629E0_0x5629e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564164u; }
        if (ctx->pc != 0x564164u) { return; }
    }
    ctx->pc = 0x564164u;
label_564164:
    // 0x564164: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x564164u;
    {
        const bool branch_taken_0x564164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x564164) {
            ctx->pc = 0x564194u;
            goto label_564194;
        }
    }
    ctx->pc = 0x56416Cu;
label_56416c:
    // 0x56416c: 0xc158ad0  jal         func_562B40
    ctx->pc = 0x56416Cu;
    SET_GPR_U32(ctx, 31, 0x564174u);
    ctx->pc = 0x564170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56416Cu;
            // 0x564170: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562B40u;
    if (runtime->hasFunction(0x562B40u)) {
        auto targetFn = runtime->lookupFunction(0x562B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564174u; }
        if (ctx->pc != 0x564174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562B40_0x562b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564174u; }
        if (ctx->pc != 0x564174u) { return; }
    }
    ctx->pc = 0x564174u;
label_564174:
    // 0x564174: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x564174u;
    {
        const bool branch_taken_0x564174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x564174) {
            ctx->pc = 0x564194u;
            goto label_564194;
        }
    }
    ctx->pc = 0x56417Cu;
label_56417c:
    // 0x56417c: 0xc158ad0  jal         func_562B40
    ctx->pc = 0x56417Cu;
    SET_GPR_U32(ctx, 31, 0x564184u);
    ctx->pc = 0x564180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56417Cu;
            // 0x564180: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562B40u;
    if (runtime->hasFunction(0x562B40u)) {
        auto targetFn = runtime->lookupFunction(0x562B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564184u; }
        if (ctx->pc != 0x564184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562B40_0x562b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564184u; }
        if (ctx->pc != 0x564184u) { return; }
    }
    ctx->pc = 0x564184u;
label_564184:
    // 0x564184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x564184u;
    {
        const bool branch_taken_0x564184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x564184) {
            ctx->pc = 0x564194u;
            goto label_564194;
        }
    }
    ctx->pc = 0x56418Cu;
label_56418c:
    // 0x56418c: 0xc158ad0  jal         func_562B40
    ctx->pc = 0x56418Cu;
    SET_GPR_U32(ctx, 31, 0x564194u);
    ctx->pc = 0x564190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56418Cu;
            // 0x564190: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562B40u;
    if (runtime->hasFunction(0x562B40u)) {
        auto targetFn = runtime->lookupFunction(0x562B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564194u; }
        if (ctx->pc != 0x564194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562B40_0x562b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564194u; }
        if (ctx->pc != 0x564194u) { return; }
    }
    ctx->pc = 0x564194u;
label_564194:
    // 0x564194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x564194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_564198:
    // 0x564198: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x564198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x56419c: 0xc158ba8  jal         func_562EA0
    ctx->pc = 0x56419Cu;
    SET_GPR_U32(ctx, 31, 0x5641A4u);
    ctx->pc = 0x5641A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56419Cu;
            // 0x5641a0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562EA0u;
    if (runtime->hasFunction(0x562EA0u)) {
        auto targetFn = runtime->lookupFunction(0x562EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5641A4u; }
        if (ctx->pc != 0x5641A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562EA0_0x562ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5641A4u; }
        if (ctx->pc != 0x5641A4u) { return; }
    }
    ctx->pc = 0x5641A4u;
label_5641a4:
    // 0x5641a4: 0xc047740  jal         func_11DD00
    ctx->pc = 0x5641A4u;
    SET_GPR_U32(ctx, 31, 0x5641ACu);
    ctx->pc = 0x5641A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5641A4u;
            // 0x5641a8: 0xc7ac0038  lwc1        $f12, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5641ACu; }
        if (ctx->pc != 0x5641ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5641ACu; }
        if (ctx->pc != 0x5641ACu) { return; }
    }
    ctx->pc = 0x5641ACu;
label_5641ac:
    // 0x5641ac: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x5641acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5641b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5641b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x5641b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5641b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5641b8: 0x0  nop
    ctx->pc = 0x5641b8u;
    // NOP
    // 0x5641bc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x5641bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5641c0: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x5641C0u;
    {
        const bool branch_taken_0x5641c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5641c0) {
            ctx->pc = 0x5641C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5641C0u;
            // 0x5641c4: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x564224u;
            goto label_564224;
        }
    }
    ctx->pc = 0x5641C8u;
    // 0x5641c8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x5641c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5641cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5641ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5641d0: 0x0  nop
    ctx->pc = 0x5641d0u;
    // NOP
    // 0x5641d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5641d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5641d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x5641D8u;
    {
        const bool branch_taken_0x5641d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5641DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5641D8u;
            // 0x5641dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5641d8) {
            ctx->pc = 0x5641E4u;
            goto label_5641e4;
        }
    }
    ctx->pc = 0x5641E0u;
    // 0x5641e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5641e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5641e4:
    // 0x5641e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x5641e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x5641e8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x5641e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x5641ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5641ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5641f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x5641f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x5641f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x5641f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5641f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x5641f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5641fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x5641fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x564200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x564200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x564204: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x564204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x564208: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x564208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x56420c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x56420cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x564210: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x564210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x564214: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x564214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x564218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x564218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x56421c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x56421Cu;
    {
        const bool branch_taken_0x56421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56421Cu;
            // 0x564220: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56421c) {
            ctx->pc = 0x5642B0u;
            goto label_5642b0;
        }
    }
    ctx->pc = 0x564224u;
label_564224:
    // 0x564224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x564224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564228: 0x0  nop
    ctx->pc = 0x564228u;
    // NOP
    // 0x56422c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x56422cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x564230: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x564230u;
    {
        const bool branch_taken_0x564230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x564234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564230u;
            // 0x564234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564230) {
            ctx->pc = 0x56423Cu;
            goto label_56423c;
        }
    }
    ctx->pc = 0x564238u;
    // 0x564238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x564238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56423c:
    // 0x56423c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x56423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x564240: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x564240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x564244: 0x21023  negu        $v0, $v0
    ctx->pc = 0x564244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x564248: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x564248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x56424c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x56424cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x564250: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x564250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x564254: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x564254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x564258: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x564258u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56425c: 0x0  nop
    ctx->pc = 0x56425cu;
    // NOP
    // 0x564260: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x564260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x564264: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x564264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564268: 0x0  nop
    ctx->pc = 0x564268u;
    // NOP
    // 0x56426c: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x56426cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x564270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564274: 0x0  nop
    ctx->pc = 0x564274u;
    // NOP
    // 0x564278: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x564278u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x56427c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56427cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564280: 0x0  nop
    ctx->pc = 0x564280u;
    // NOP
    // 0x564284: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x564284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x564288: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x564288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x56428c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56428cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x564290: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x564290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x564294: 0x0  nop
    ctx->pc = 0x564294u;
    // NOP
    // 0x564298: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x564298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x56429c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x56429cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x5642a0: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x5642a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x5642a4: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x5642a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x5642a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5642a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5642ac: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x5642acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5642b0:
    // 0x5642b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5642b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5642b4: 0x0  nop
    ctx->pc = 0x5642b4u;
    // NOP
    // 0x5642b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x5642b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5642bc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x5642BCu;
    {
        const bool branch_taken_0x5642bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5642bc) {
            ctx->pc = 0x5642C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5642BCu;
            // 0x5642c0: 0xa2040004  sb          $a0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5642CCu;
            goto label_5642cc;
        }
    }
    ctx->pc = 0x5642C4u;
    // 0x5642c4: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x5642c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x5642c8: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x5642c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
label_5642cc:
    // 0x5642cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5642ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5642d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5642d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5642d4: 0xa02027  not         $a0, $a1
    ctx->pc = 0x5642d4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x5642d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5642d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5642dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x5642dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x5642e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5642e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5642e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5642e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5642e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5642e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5642ec: 0x3e00008  jr          $ra
    ctx->pc = 0x5642ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5642F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5642ECu;
            // 0x5642f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5642F4u;
    // 0x5642f4: 0x0  nop
    ctx->pc = 0x5642f4u;
    // NOP
    // 0x5642f8: 0x0  nop
    ctx->pc = 0x5642f8u;
    // NOP
    // 0x5642fc: 0x0  nop
    ctx->pc = 0x5642fcu;
    // NOP
    // 0x564300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x564300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x564304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x564304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x564308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x564308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x56430c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x564310: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x564310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x564314: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x564314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
    // 0x564318: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x564318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x56431c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x56431Cu;
    {
        const bool branch_taken_0x56431c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x564320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56431Cu;
            // 0x564320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56431c) {
            ctx->pc = 0x56432Cu;
            goto label_56432c;
        }
    }
    ctx->pc = 0x564324u;
    // 0x564324: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x564324u;
    {
        const bool branch_taken_0x564324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564324u;
            // 0x564328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564324) {
            ctx->pc = 0x5644B8u;
            goto label_5644b8;
        }
    }
    ctx->pc = 0x56432Cu;
label_56432c:
    // 0x56432c: 0xc158a78  jal         func_5629E0
    ctx->pc = 0x56432Cu;
    SET_GPR_U32(ctx, 31, 0x564334u);
    ctx->pc = 0x564330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56432Cu;
            // 0x564330: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5629E0u;
    if (runtime->hasFunction(0x5629E0u)) {
        auto targetFn = runtime->lookupFunction(0x5629E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564334u; }
        if (ctx->pc != 0x564334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005629E0_0x5629e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564334u; }
        if (ctx->pc != 0x564334u) { return; }
    }
    ctx->pc = 0x564334u;
label_564334:
    // 0x564334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x564334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564338: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x564338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x56433c: 0xc158ba8  jal         func_562EA0
    ctx->pc = 0x56433Cu;
    SET_GPR_U32(ctx, 31, 0x564344u);
    ctx->pc = 0x564340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56433Cu;
            // 0x564340: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562EA0u;
    if (runtime->hasFunction(0x562EA0u)) {
        auto targetFn = runtime->lookupFunction(0x562EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564344u; }
        if (ctx->pc != 0x564344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00562EA0_0x562ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564344u; }
        if (ctx->pc != 0x564344u) { return; }
    }
    ctx->pc = 0x564344u;
label_564344:
    // 0x564344: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x564344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x564348: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x564348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x56434c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x56434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x564350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x564354: 0x0  nop
    ctx->pc = 0x564354u;
    // NOP
    // 0x564358: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x564358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x56435c: 0x4503003a  bc1tl       . + 4 + (0x3A << 2)
    ctx->pc = 0x56435Cu;
    {
        const bool branch_taken_0x56435c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x56435c) {
            ctx->pc = 0x564360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56435Cu;
            // 0x564360: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x564448u;
            goto label_564448;
        }
    }
    ctx->pc = 0x564364u;
    // 0x564364: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x564364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x564368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x564368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56436c: 0x0  nop
    ctx->pc = 0x56436cu;
    // NOP
    // 0x564370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x564370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x564374: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x564374u;
    {
        const bool branch_taken_0x564374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x564378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564374u;
            // 0x564378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564374) {
            ctx->pc = 0x564380u;
            goto label_564380;
        }
    }
    ctx->pc = 0x56437Cu;
    // 0x56437c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x56437cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564380:
    // 0x564380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x564380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x564384: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x564384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x564388: 0x22023  negu        $a0, $v0
    ctx->pc = 0x564388u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x56438c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x56438cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x564390: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x564390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x564394: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x564394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x564398: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x564398u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56439c: 0x0  nop
    ctx->pc = 0x56439cu;
    // NOP
    // 0x5643a0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5643a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x5643a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5643a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5643a8: 0x0  nop
    ctx->pc = 0x5643a8u;
    // NOP
    // 0x5643ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x5643acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x5643b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5643b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x5643b4: 0x0  nop
    ctx->pc = 0x5643b4u;
    // NOP
    // 0x5643b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x5643b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x5643bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x5643bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x5643c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5643c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x5643c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x5643c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x5643c8: 0x0  nop
    ctx->pc = 0x5643c8u;
    // NOP
    // 0x5643cc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x5643ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x5643d0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x5643d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x5643d4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x5643d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x5643d8: 0x40282a  slt         $a1, $v0, $zero
    ctx->pc = 0x5643d8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x5643dc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x5643dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x5643e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x5643e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5643e4: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x5643e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x5643e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5643e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5643ec: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x5643ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
    // 0x5643f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x5643f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x5643f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x5643f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x5643f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5643f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5643fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x5643fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x564400: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x564400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x564404: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x564404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x564408: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x564408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x56440c: 0x0  nop
    ctx->pc = 0x56440cu;
    // NOP
    // 0x564410: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x564410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x564414: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x564414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x564418: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x564418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x56441c: 0x40182a  slt         $v1, $v0, $zero
    ctx->pc = 0x56441cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x564420: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x564420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x564424: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x564424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x564428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x564428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x56442c: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x56442cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x564430: 0x621827  nor         $v1, $v1, $v0
    ctx->pc = 0x564430u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 2)));
    // 0x564434: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x564434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x564438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x564438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x56443c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x56443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x564440: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x564440u;
    {
        const bool branch_taken_0x564440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564440u;
            // 0x564444: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564440) {
            ctx->pc = 0x5644B4u;
            goto label_5644b4;
        }
    }
    ctx->pc = 0x564448u;
label_564448:
    // 0x564448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x564448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x56444c: 0x0  nop
    ctx->pc = 0x56444cu;
    // NOP
    // 0x564450: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x564450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x564454: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x564454u;
    {
        const bool branch_taken_0x564454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x564458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564454u;
            // 0x564458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564454) {
            ctx->pc = 0x564460u;
            goto label_564460;
        }
    }
    ctx->pc = 0x56445Cu;
    // 0x56445c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x56445cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564460:
    // 0x564460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x564460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x564464: 0x21023  negu        $v0, $v0
    ctx->pc = 0x564464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x564468: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x564468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x56446c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x56446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x564470: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x564470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x564474: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x564474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x564478: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x564478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x56447c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x56447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x564480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x564480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x564484: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x564484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x564488: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x564488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x56448c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x56448cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x564490: 0x40282a  slt         $a1, $v0, $zero
    ctx->pc = 0x564490u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x564494: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x564494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x564498: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x564498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x56449c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x56449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5644a0: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x5644a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x5644a4: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x5644a4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
    // 0x5644a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x5644a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x5644ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x5644acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x5644b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5644b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_5644b4:
    // 0x5644b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5644b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5644b8:
    // 0x5644b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5644b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5644bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5644bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5644c0: 0x3e00008  jr          $ra
    ctx->pc = 0x5644C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5644C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5644C0u;
            // 0x5644c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5644C8u;
    // 0x5644c8: 0x0  nop
    ctx->pc = 0x5644c8u;
    // NOP
    // 0x5644cc: 0x0  nop
    ctx->pc = 0x5644ccu;
    // NOP
    // 0x5644d0: 0x8158a74  j           func_5629D0
    ctx->pc = 0x5644D0u;
    ctx->pc = 0x5644D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5644D0u;
            // 0x5644d4: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5629D0u;
    {
        auto targetFn = runtime->lookupFunction(0x5629D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5644D8u;
    // 0x5644d8: 0x0  nop
    ctx->pc = 0x5644d8u;
    // NOP
    // 0x5644dc: 0x0  nop
    ctx->pc = 0x5644dcu;
    // NOP
    // 0x5644e0: 0x8158a4c  j           func_562930
    ctx->pc = 0x5644E0u;
    ctx->pc = 0x5644E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5644E0u;
            // 0x5644e4: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x562930u;
    {
        auto targetFn = runtime->lookupFunction(0x562930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5644E8u;
    // 0x5644e8: 0x0  nop
    ctx->pc = 0x5644e8u;
    // NOP
    // 0x5644ec: 0x0  nop
    ctx->pc = 0x5644ecu;
    // NOP
    // 0x5644f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5644f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5644f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5644f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5644f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5644f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5644fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5644fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x564500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x564500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564504: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x564504u;
    {
        const bool branch_taken_0x564504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x564508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564504u;
            // 0x564508: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564504) {
            ctx->pc = 0x564548u;
            goto label_564548;
        }
    }
    ctx->pc = 0x56450Cu;
    // 0x56450c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x56450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x564510: 0x24427ec0  addiu       $v0, $v0, 0x7EC0
    ctx->pc = 0x564510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32448));
    // 0x564514: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x564514u;
    {
        const bool branch_taken_0x564514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x564518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564514u;
            // 0x564518: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564514) {
            ctx->pc = 0x564530u;
            goto label_564530;
        }
    }
    ctx->pc = 0x56451Cu;
    // 0x56451c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x564520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x564520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x564524: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x564524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x564528: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x564528u;
    SET_GPR_U32(ctx, 31, 0x564530u);
    ctx->pc = 0x56452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564528u;
            // 0x56452c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564530u; }
        if (ctx->pc != 0x564530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564530u; }
        if (ctx->pc != 0x564530u) { return; }
    }
    ctx->pc = 0x564530u;
label_564530:
    // 0x564530: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x564530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x564534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x564534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x564538: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x564538u;
    {
        const bool branch_taken_0x564538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x564538) {
            ctx->pc = 0x56453Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564538u;
            // 0x56453c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56454Cu;
            goto label_56454c;
        }
    }
    ctx->pc = 0x564540u;
    // 0x564540: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x564540u;
    SET_GPR_U32(ctx, 31, 0x564548u);
    ctx->pc = 0x564544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564540u;
            // 0x564544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564548u; }
        if (ctx->pc != 0x564548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564548u; }
        if (ctx->pc != 0x564548u) { return; }
    }
    ctx->pc = 0x564548u;
label_564548:
    // 0x564548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x564548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56454c:
    // 0x56454c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x564550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x564550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x564554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x564554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x564558: 0x3e00008  jr          $ra
    ctx->pc = 0x564558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564558u;
            // 0x56455c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x564560u;
}
