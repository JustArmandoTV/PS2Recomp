#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055FD20
// Address: 0x55fd20 - 0x55fe80
void sub_0055FD20_0x55fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055FD20_0x55fd20");
#endif

    switch (ctx->pc) {
        case 0x55fd20u: goto label_55fd20;
        case 0x55fd24u: goto label_55fd24;
        case 0x55fd28u: goto label_55fd28;
        case 0x55fd2cu: goto label_55fd2c;
        case 0x55fd30u: goto label_55fd30;
        case 0x55fd34u: goto label_55fd34;
        case 0x55fd38u: goto label_55fd38;
        case 0x55fd3cu: goto label_55fd3c;
        case 0x55fd40u: goto label_55fd40;
        case 0x55fd44u: goto label_55fd44;
        case 0x55fd48u: goto label_55fd48;
        case 0x55fd4cu: goto label_55fd4c;
        case 0x55fd50u: goto label_55fd50;
        case 0x55fd54u: goto label_55fd54;
        case 0x55fd58u: goto label_55fd58;
        case 0x55fd5cu: goto label_55fd5c;
        case 0x55fd60u: goto label_55fd60;
        case 0x55fd64u: goto label_55fd64;
        case 0x55fd68u: goto label_55fd68;
        case 0x55fd6cu: goto label_55fd6c;
        case 0x55fd70u: goto label_55fd70;
        case 0x55fd74u: goto label_55fd74;
        case 0x55fd78u: goto label_55fd78;
        case 0x55fd7cu: goto label_55fd7c;
        case 0x55fd80u: goto label_55fd80;
        case 0x55fd84u: goto label_55fd84;
        case 0x55fd88u: goto label_55fd88;
        case 0x55fd8cu: goto label_55fd8c;
        case 0x55fd90u: goto label_55fd90;
        case 0x55fd94u: goto label_55fd94;
        case 0x55fd98u: goto label_55fd98;
        case 0x55fd9cu: goto label_55fd9c;
        case 0x55fda0u: goto label_55fda0;
        case 0x55fda4u: goto label_55fda4;
        case 0x55fda8u: goto label_55fda8;
        case 0x55fdacu: goto label_55fdac;
        case 0x55fdb0u: goto label_55fdb0;
        case 0x55fdb4u: goto label_55fdb4;
        case 0x55fdb8u: goto label_55fdb8;
        case 0x55fdbcu: goto label_55fdbc;
        case 0x55fdc0u: goto label_55fdc0;
        case 0x55fdc4u: goto label_55fdc4;
        case 0x55fdc8u: goto label_55fdc8;
        case 0x55fdccu: goto label_55fdcc;
        case 0x55fdd0u: goto label_55fdd0;
        case 0x55fdd4u: goto label_55fdd4;
        case 0x55fdd8u: goto label_55fdd8;
        case 0x55fddcu: goto label_55fddc;
        case 0x55fde0u: goto label_55fde0;
        case 0x55fde4u: goto label_55fde4;
        case 0x55fde8u: goto label_55fde8;
        case 0x55fdecu: goto label_55fdec;
        case 0x55fdf0u: goto label_55fdf0;
        case 0x55fdf4u: goto label_55fdf4;
        case 0x55fdf8u: goto label_55fdf8;
        case 0x55fdfcu: goto label_55fdfc;
        case 0x55fe00u: goto label_55fe00;
        case 0x55fe04u: goto label_55fe04;
        case 0x55fe08u: goto label_55fe08;
        case 0x55fe0cu: goto label_55fe0c;
        case 0x55fe10u: goto label_55fe10;
        case 0x55fe14u: goto label_55fe14;
        case 0x55fe18u: goto label_55fe18;
        case 0x55fe1cu: goto label_55fe1c;
        case 0x55fe20u: goto label_55fe20;
        case 0x55fe24u: goto label_55fe24;
        case 0x55fe28u: goto label_55fe28;
        case 0x55fe2cu: goto label_55fe2c;
        case 0x55fe30u: goto label_55fe30;
        case 0x55fe34u: goto label_55fe34;
        case 0x55fe38u: goto label_55fe38;
        case 0x55fe3cu: goto label_55fe3c;
        case 0x55fe40u: goto label_55fe40;
        case 0x55fe44u: goto label_55fe44;
        case 0x55fe48u: goto label_55fe48;
        case 0x55fe4cu: goto label_55fe4c;
        case 0x55fe50u: goto label_55fe50;
        case 0x55fe54u: goto label_55fe54;
        case 0x55fe58u: goto label_55fe58;
        case 0x55fe5cu: goto label_55fe5c;
        case 0x55fe60u: goto label_55fe60;
        case 0x55fe64u: goto label_55fe64;
        case 0x55fe68u: goto label_55fe68;
        case 0x55fe6cu: goto label_55fe6c;
        case 0x55fe70u: goto label_55fe70;
        case 0x55fe74u: goto label_55fe74;
        case 0x55fe78u: goto label_55fe78;
        case 0x55fe7cu: goto label_55fe7c;
        default: break;
    }

    ctx->pc = 0x55fd20u;

label_55fd20:
    // 0x55fd20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x55fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_55fd24:
    // 0x55fd24: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x55fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_55fd28:
    // 0x55fd28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x55fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_55fd2c:
    // 0x55fd2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55fd30:
    // 0x55fd30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55fd34:
    // 0x55fd34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55fd38:
    // 0x55fd38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55fd3c:
    // 0x55fd3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x55fd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55fd40:
    // 0x55fd40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55fd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55fd44:
    // 0x55fd44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x55fd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55fd48:
    // 0x55fd48: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x55fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_55fd4c:
    // 0x55fd4c: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x55fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_55fd50:
    // 0x55fd50: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x55fd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_55fd54:
    // 0x55fd54: 0xacc30214  sw          $v1, 0x214($a2)
    ctx->pc = 0x55fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 3));
label_55fd58:
    // 0x55fd58: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x55fd58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_55fd5c:
    // 0x55fd5c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x55fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55fd60:
    // 0x55fd60: 0xc6400180  lwc1        $f0, 0x180($s2)
    ctx->pc = 0x55fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fd64:
    // 0x55fd64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55fd68:
    // 0x55fd68: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x55fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fd6c:
    // 0x55fd6c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x55fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_55fd70:
    // 0x55fd70: 0xc6400184  lwc1        $f0, 0x184($s2)
    ctx->pc = 0x55fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fd74:
    // 0x55fd74: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x55fd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_55fd78:
    // 0x55fd78: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x55fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_55fd7c:
    // 0x55fd7c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x55fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_55fd80:
    // 0x55fd80: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x55fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_55fd84:
    // 0x55fd84: 0xc088b74  jal         func_222DD0
label_55fd88:
    if (ctx->pc == 0x55FD88u) {
        ctx->pc = 0x55FD88u;
            // 0x55fd88: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x55FD8Cu;
        goto label_55fd8c;
    }
    ctx->pc = 0x55FD84u;
    SET_GPR_U32(ctx, 31, 0x55FD8Cu);
    ctx->pc = 0x55FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FD84u;
            // 0x55fd88: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FD8Cu; }
        if (ctx->pc != 0x55FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FD8Cu; }
        if (ctx->pc != 0x55FD8Cu) { return; }
    }
    ctx->pc = 0x55FD8Cu;
label_55fd8c:
    // 0x55fd8c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x55fd8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_55fd90:
    // 0x55fd90: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x55fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_55fd94:
    // 0x55fd94: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x55fd94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_55fd98:
    // 0x55fd98: 0x320f809  jalr        $t9
label_55fd9c:
    if (ctx->pc == 0x55FD9Cu) {
        ctx->pc = 0x55FD9Cu;
            // 0x55fd9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x55FDA0u;
        goto label_55fda0;
    }
    ctx->pc = 0x55FD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55FDA0u);
        ctx->pc = 0x55FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FD98u;
            // 0x55fd9c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55FDA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55FDA0u; }
            if (ctx->pc != 0x55FDA0u) { return; }
        }
        }
    }
    ctx->pc = 0x55FDA0u;
label_55fda0:
    // 0x55fda0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x55fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_55fda4:
    // 0x55fda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55fda8:
    // 0x55fda8: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x55fda8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_55fdac:
    // 0x55fdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55fdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55fdb0:
    // 0x55fdb0: 0x0  nop
    ctx->pc = 0x55fdb0u;
    // NOP
label_55fdb4:
    // 0x55fdb4: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x55fdb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_55fdb8:
    // 0x55fdb8: 0x0  nop
    ctx->pc = 0x55fdb8u;
    // NOP
label_55fdbc:
    // 0x55fdbc: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x55fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_55fdc0:
    // 0x55fdc0: 0xc04cbd8  jal         func_132F60
label_55fdc4:
    if (ctx->pc == 0x55FDC4u) {
        ctx->pc = 0x55FDC4u;
            // 0x55fdc4: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x55FDC8u;
        goto label_55fdc8;
    }
    ctx->pc = 0x55FDC0u;
    SET_GPR_U32(ctx, 31, 0x55FDC8u);
    ctx->pc = 0x55FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FDC0u;
            // 0x55fdc4: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FDC8u; }
        if (ctx->pc != 0x55FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FDC8u; }
        if (ctx->pc != 0x55FDC8u) { return; }
    }
    ctx->pc = 0x55FDC8u;
label_55fdc8:
    // 0x55fdc8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x55fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55fdcc:
    // 0x55fdcc: 0x8e310050  lw          $s1, 0x50($s1)
    ctx->pc = 0x55fdccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_55fdd0:
    // 0x55fdd0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x55fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55fdd4:
    // 0x55fdd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55fdd8:
    // 0x55fdd8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x55fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fddc:
    // 0x55fddc: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x55fddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55fde0:
    // 0x55fde0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x55fde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_55fde4:
    // 0x55fde4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x55fde4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_55fde8:
    // 0x55fde8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x55fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_55fdec:
    // 0x55fdec: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x55fdecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_55fdf0:
    // 0x55fdf0: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x55fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fdf4:
    // 0x55fdf4: 0xc089638  jal         func_2258E0
label_55fdf8:
    if (ctx->pc == 0x55FDF8u) {
        ctx->pc = 0x55FDF8u;
            // 0x55fdf8: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x55FDFCu;
        goto label_55fdfc;
    }
    ctx->pc = 0x55FDF4u;
    SET_GPR_U32(ctx, 31, 0x55FDFCu);
    ctx->pc = 0x55FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FDF4u;
            // 0x55fdf8: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FDFCu; }
        if (ctx->pc != 0x55FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FDFCu; }
        if (ctx->pc != 0x55FDFCu) { return; }
    }
    ctx->pc = 0x55FDFCu;
label_55fdfc:
    // 0x55fdfc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55fe00:
    // 0x55fe00: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x55fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55fe04:
    // 0x55fe04: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x55fe04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_55fe08:
    // 0x55fe08: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x55fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55fe0c:
    // 0x55fe0c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x55fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55fe10:
    // 0x55fe10: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x55fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55fe14:
    // 0x55fe14: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x55fe14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_55fe18:
    // 0x55fe18: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x55fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55fe1c:
    // 0x55fe1c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x55fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fe20:
    // 0x55fe20: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x55fe20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_55fe24:
    // 0x55fe24: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x55fe24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_55fe28:
    // 0x55fe28: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x55fe28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_55fe2c:
    // 0x55fe2c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x55fe2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_55fe30:
    // 0x55fe30: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x55fe30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_55fe34:
    // 0x55fe34: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x55fe34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_55fe38:
    // 0x55fe38: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x55fe38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_55fe3c:
    // 0x55fe3c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x55fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_55fe40:
    // 0x55fe40: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x55fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fe44:
    // 0x55fe44: 0xc088b74  jal         func_222DD0
label_55fe48:
    if (ctx->pc == 0x55FE48u) {
        ctx->pc = 0x55FE48u;
            // 0x55fe48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FE4Cu;
        goto label_55fe4c;
    }
    ctx->pc = 0x55FE44u;
    SET_GPR_U32(ctx, 31, 0x55FE4Cu);
    ctx->pc = 0x55FE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FE44u;
            // 0x55fe48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FE4Cu; }
        if (ctx->pc != 0x55FE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FE4Cu; }
        if (ctx->pc != 0x55FE4Cu) { return; }
    }
    ctx->pc = 0x55FE4Cu;
label_55fe4c:
    // 0x55fe4c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x55fe4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_55fe50:
    // 0x55fe50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55fe50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55fe54:
    // 0x55fe54: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x55fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_55fe58:
    // 0x55fe58: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x55fe58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_55fe5c:
    // 0x55fe5c: 0x320f809  jalr        $t9
label_55fe60:
    if (ctx->pc == 0x55FE60u) {
        ctx->pc = 0x55FE60u;
            // 0x55fe60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x55FE64u;
        goto label_55fe64;
    }
    ctx->pc = 0x55FE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55FE64u);
        ctx->pc = 0x55FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FE5Cu;
            // 0x55fe60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55FE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55FE64u; }
            if (ctx->pc != 0x55FE64u) { return; }
        }
        }
    }
    ctx->pc = 0x55FE64u;
label_55fe64:
    // 0x55fe64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x55fe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_55fe68:
    // 0x55fe68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fe6c:
    // 0x55fe6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55fe6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55fe70:
    // 0x55fe70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55fe70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55fe74:
    // 0x55fe74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55fe74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55fe78:
    // 0x55fe78: 0x3e00008  jr          $ra
label_55fe7c:
    if (ctx->pc == 0x55FE7Cu) {
        ctx->pc = 0x55FE7Cu;
            // 0x55fe7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x55FE80u;
        goto label_fallthrough_0x55fe78;
    }
    ctx->pc = 0x55FE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FE78u;
            // 0x55fe7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x55fe78:
    ctx->pc = 0x55FE80u;
}
