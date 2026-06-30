#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2970
// Address: 0x1e2970 - 0x1e2a50
void sub_001E2970_0x1e2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2970_0x1e2970");
#endif

    switch (ctx->pc) {
        case 0x1e2970u: goto label_1e2970;
        case 0x1e2974u: goto label_1e2974;
        case 0x1e2978u: goto label_1e2978;
        case 0x1e297cu: goto label_1e297c;
        case 0x1e2980u: goto label_1e2980;
        case 0x1e2984u: goto label_1e2984;
        case 0x1e2988u: goto label_1e2988;
        case 0x1e298cu: goto label_1e298c;
        case 0x1e2990u: goto label_1e2990;
        case 0x1e2994u: goto label_1e2994;
        case 0x1e2998u: goto label_1e2998;
        case 0x1e299cu: goto label_1e299c;
        case 0x1e29a0u: goto label_1e29a0;
        case 0x1e29a4u: goto label_1e29a4;
        case 0x1e29a8u: goto label_1e29a8;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e29b0u: goto label_1e29b0;
        case 0x1e29b4u: goto label_1e29b4;
        case 0x1e29b8u: goto label_1e29b8;
        case 0x1e29bcu: goto label_1e29bc;
        case 0x1e29c0u: goto label_1e29c0;
        case 0x1e29c4u: goto label_1e29c4;
        case 0x1e29c8u: goto label_1e29c8;
        case 0x1e29ccu: goto label_1e29cc;
        case 0x1e29d0u: goto label_1e29d0;
        case 0x1e29d4u: goto label_1e29d4;
        case 0x1e29d8u: goto label_1e29d8;
        case 0x1e29dcu: goto label_1e29dc;
        case 0x1e29e0u: goto label_1e29e0;
        case 0x1e29e4u: goto label_1e29e4;
        case 0x1e29e8u: goto label_1e29e8;
        case 0x1e29ecu: goto label_1e29ec;
        case 0x1e29f0u: goto label_1e29f0;
        case 0x1e29f4u: goto label_1e29f4;
        case 0x1e29f8u: goto label_1e29f8;
        case 0x1e29fcu: goto label_1e29fc;
        case 0x1e2a00u: goto label_1e2a00;
        case 0x1e2a04u: goto label_1e2a04;
        case 0x1e2a08u: goto label_1e2a08;
        case 0x1e2a0cu: goto label_1e2a0c;
        case 0x1e2a10u: goto label_1e2a10;
        case 0x1e2a14u: goto label_1e2a14;
        case 0x1e2a18u: goto label_1e2a18;
        case 0x1e2a1cu: goto label_1e2a1c;
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a24u: goto label_1e2a24;
        case 0x1e2a28u: goto label_1e2a28;
        case 0x1e2a2cu: goto label_1e2a2c;
        case 0x1e2a30u: goto label_1e2a30;
        case 0x1e2a34u: goto label_1e2a34;
        case 0x1e2a38u: goto label_1e2a38;
        case 0x1e2a3cu: goto label_1e2a3c;
        case 0x1e2a40u: goto label_1e2a40;
        case 0x1e2a44u: goto label_1e2a44;
        case 0x1e2a48u: goto label_1e2a48;
        case 0x1e2a4cu: goto label_1e2a4c;
        default: break;
    }

    ctx->pc = 0x1e2970u;

label_1e2970:
    // 0x1e2970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2974:
    // 0x1e2974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2978:
    // 0x1e2978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e297c:
    // 0x1e297c: 0xc149d7c  jal         func_5275F0
label_1e2980:
    if (ctx->pc == 0x1E2980u) {
        ctx->pc = 0x1E2980u;
            // 0x1e2980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2984u;
        goto label_1e2984;
    }
    ctx->pc = 0x1E297Cu;
    SET_GPR_U32(ctx, 31, 0x1E2984u);
    ctx->pc = 0x1E2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E297Cu;
            // 0x1e2980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5275F0u;
    if (runtime->hasFunction(0x5275F0u)) {
        auto targetFn = runtime->lookupFunction(0x5275F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2984u; }
        if (ctx->pc != 0x1E2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005275F0_0x5275f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2984u; }
        if (ctx->pc != 0x1E2984u) { return; }
    }
    ctx->pc = 0x1E2984u;
label_1e2984:
    // 0x1e2984: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e2984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e2988:
    // 0x1e2988: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_1e298c:
    // 0x1e298c: 0x8c42d9f8  lw          $v0, -0x2608($v0)
    ctx->pc = 0x1e298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957560)));
label_1e2990:
    // 0x1e2990: 0x40f809  jalr        $v0
label_1e2994:
    if (ctx->pc == 0x1E2994u) {
        ctx->pc = 0x1E2994u;
            // 0x1e2994: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1E2998u;
        goto label_1e2998;
    }
    ctx->pc = 0x1E2990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2998u);
        ctx->pc = 0x1E2994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2990u;
            // 0x1e2994: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2998u; }
            if (ctx->pc != 0x1E2998u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2998u;
label_1e2998:
    // 0x1e2998: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e299c:
    // 0x1e299c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e29a0:
    // 0x1e29a0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x1e29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_1e29a4:
    // 0x1e29a4: 0x8c44b5a0  lw          $a0, -0x4A60($v0)
    ctx->pc = 0x1e29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948256)));
label_1e29a8:
    // 0x1e29a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e29a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e29ac:
    // 0x1e29ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e29b0:
    // 0x1e29b0: 0x320f809  jalr        $t9
label_1e29b4:
    if (ctx->pc == 0x1E29B4u) {
        ctx->pc = 0x1E29B4u;
            // 0x1e29b4: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x1E29B8u;
        goto label_1e29b8;
    }
    ctx->pc = 0x1E29B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E29B8u);
        ctx->pc = 0x1E29B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29B0u;
            // 0x1e29b4: 0x3c060010  lui         $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E29B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E29B8u; }
            if (ctx->pc != 0x1E29B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E29B8u;
label_1e29b8:
    // 0x1e29b8: 0xc040180  jal         func_100600
label_1e29bc:
    if (ctx->pc == 0x1E29BCu) {
        ctx->pc = 0x1E29BCu;
            // 0x1e29bc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1E29C0u;
        goto label_1e29c0;
    }
    ctx->pc = 0x1E29B8u;
    SET_GPR_U32(ctx, 31, 0x1E29C0u);
    ctx->pc = 0x1E29BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29B8u;
            // 0x1e29bc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29C0u; }
        if (ctx->pc != 0x1E29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E29C0u; }
        if (ctx->pc != 0x1E29C0u) { return; }
    }
    ctx->pc = 0x1E29C0u;
label_1e29c0:
    // 0x1e29c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1e29c4:
    if (ctx->pc == 0x1E29C4u) {
        ctx->pc = 0x1E29C4u;
            // 0x1e29c4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1E29C8u;
        goto label_1e29c8;
    }
    ctx->pc = 0x1E29C0u;
    {
        const bool branch_taken_0x1e29c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e29c0) {
            ctx->pc = 0x1E29C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29C0u;
            // 0x1e29c4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E29E4u;
            goto label_1e29e4;
        }
    }
    ctx->pc = 0x1E29C8u;
label_1e29c8:
    // 0x1e29c8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1e29c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1e29cc:
    // 0x1e29cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e29d0:
    // 0x1e29d0: 0x2484d480  addiu       $a0, $a0, -0x2B80
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956160));
label_1e29d4:
    // 0x1e29d4: 0x2463d460  addiu       $v1, $v1, -0x2BA0
    ctx->pc = 0x1e29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956128));
label_1e29d8:
    // 0x1e29d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1e29dc:
    // 0x1e29dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e29e0:
    // 0x1e29e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e29e4:
    // 0x1e29e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1e29e8:
    // 0x1e29e8: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x1e29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_1e29ec:
    // 0x1e29ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e29ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e29f0:
    // 0x1e29f0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1e29f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e29f4:
    // 0x1e29f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e29f8:
    // 0x1e29f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e29f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e29fc:
    // 0x1e29fc: 0x0  nop
    ctx->pc = 0x1e29fcu;
    // NOP
label_1e2a00:
    // 0x1e2a00: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e2a00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1e2a04:
    // 0x1e2a04: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1e2a08:
    // 0x1e2a08: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1e2a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1e2a0c:
    // 0x1e2a0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e2a10:
    // 0x1e2a10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e2a10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2a14:
    // 0x1e2a14: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e2a18:
    if (ctx->pc == 0x1E2A18u) {
        ctx->pc = 0x1E2A18u;
            // 0x1e2a18: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->pc = 0x1E2A1Cu;
        goto label_1e2a1c;
    }
    ctx->pc = 0x1E2A14u;
    {
        const bool branch_taken_0x1e2a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A14u;
            // 0x1e2a18: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a14) {
            ctx->pc = 0x1E2A24u;
            goto label_1e2a24;
        }
    }
    ctx->pc = 0x1E2A1Cu;
label_1e2a1c:
    // 0x1e2a1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e2a20:
    if (ctx->pc == 0x1E2A20u) {
        ctx->pc = 0x1E2A20u;
            // 0x1e2a20: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->pc = 0x1E2A24u;
        goto label_1e2a24;
    }
    ctx->pc = 0x1E2A1Cu;
    {
        const bool branch_taken_0x1e2a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A1Cu;
            // 0x1e2a20: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a1c) {
            ctx->pc = 0x1E2A34u;
            goto label_1e2a34;
        }
    }
    ctx->pc = 0x1E2A24u;
label_1e2a24:
    // 0x1e2a24: 0x0  nop
    ctx->pc = 0x1e2a24u;
    // NOP
label_1e2a28:
    // 0x1e2a28: 0x0  nop
    ctx->pc = 0x1e2a28u;
    // NOP
label_1e2a2c:
    // 0x1e2a2c: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1e2a2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
label_1e2a30:
    // 0x1e2a30: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1e2a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1e2a34:
    // 0x1e2a34: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e2a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1e2a38:
    // 0x1e2a38: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e2a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1e2a3c:
    // 0x1e2a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2a40:
    // 0x1e2a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2a44:
    // 0x1e2a44: 0x3e00008  jr          $ra
label_1e2a48:
    if (ctx->pc == 0x1E2A48u) {
        ctx->pc = 0x1E2A48u;
            // 0x1e2a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E2A4Cu;
        goto label_1e2a4c;
    }
    ctx->pc = 0x1E2A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A44u;
            // 0x1e2a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2A4Cu;
label_1e2a4c:
    // 0x1e2a4c: 0x0  nop
    ctx->pc = 0x1e2a4cu;
    // NOP
}
