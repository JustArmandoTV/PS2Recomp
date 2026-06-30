#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00464230
// Address: 0x464230 - 0x464390
void sub_00464230_0x464230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464230_0x464230");
#endif

    switch (ctx->pc) {
        case 0x464280u: goto label_464280;
        case 0x46428cu: goto label_46428c;
        case 0x464314u: goto label_464314;
        case 0x464338u: goto label_464338;
        case 0x464348u: goto label_464348;
        case 0x464358u: goto label_464358;
        case 0x464364u: goto label_464364;
        case 0x464374u: goto label_464374;
        default: break;
    }

    ctx->pc = 0x464230u;

    // 0x464230: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x464230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x464234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x464234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x464238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46423c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x464240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464244: 0x8c8202ac  lw          $v0, 0x2AC($a0)
    ctx->pc = 0x464244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x464248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x464248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x46424c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x46424Cu;
    {
        const bool branch_taken_0x46424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46424Cu;
            // 0x464250: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46424c) {
            ctx->pc = 0x464294u;
            goto label_464294;
        }
    }
    ctx->pc = 0x464254u;
    // 0x464254: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x464254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x464258: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x464258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x46425c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x46425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x464260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x464260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x464264: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x464264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x464268: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x464268u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46426c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x46426Cu;
    {
        const bool branch_taken_0x46426c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46426c) {
            ctx->pc = 0x464270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46426Cu;
            // 0x464270: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464298u;
            goto label_464298;
        }
    }
    ctx->pc = 0x464274u;
    // 0x464274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x464274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464278: 0xc04cc04  jal         func_133010
    ctx->pc = 0x464278u;
    SET_GPR_U32(ctx, 31, 0x464280u);
    ctx->pc = 0x46427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464278u;
            // 0x46427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464280u; }
        if (ctx->pc != 0x464280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464280u; }
        if (ctx->pc != 0x464280u) { return; }
    }
    ctx->pc = 0x464280u;
label_464280:
    // 0x464280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464284: 0xc04cc44  jal         func_133110
    ctx->pc = 0x464284u;
    SET_GPR_U32(ctx, 31, 0x46428Cu);
    ctx->pc = 0x464288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464284u;
            // 0x464288: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46428Cu; }
        if (ctx->pc != 0x46428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46428Cu; }
        if (ctx->pc != 0x46428Cu) { return; }
    }
    ctx->pc = 0x46428Cu;
label_46428c:
    // 0x46428c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x46428Cu;
    {
        const bool branch_taken_0x46428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46428Cu;
            // 0x464290: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46428c) {
            ctx->pc = 0x464378u;
            goto label_464378;
        }
    }
    ctx->pc = 0x464294u;
label_464294:
    // 0x464294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x464294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_464298:
    // 0x464298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x464298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x46429c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x46429cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x4642a0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4642a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4642a4: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x4642a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x4642a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4642a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4642ac: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x4642acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x4642b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4642b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4642b4: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x4642b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x4642b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4642b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4642bc: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x4642bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x4642c0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4642c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x4642c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4642c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4642c8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x4642c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x4642cc: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x4642ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4642d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4642d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4642d4: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x4642d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4642d8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x4642d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4642dc: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x4642dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x4642e0: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x4642e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x4642e4: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x4642e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x4642e8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x4642e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x4642ec: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x4642ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x4642f0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x4642f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x4642f4: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x4642f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x4642f8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x4642f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x4642fc: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x4642fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x464300: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x464300u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x464304: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x464304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x464308: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x464308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46430c: 0xc08d1ac  jal         func_2346B0
    ctx->pc = 0x46430Cu;
    SET_GPR_U32(ctx, 31, 0x464314u);
    ctx->pc = 0x464310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46430Cu;
            // 0x464310: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346B0u;
    if (runtime->hasFunction(0x2346B0u)) {
        auto targetFn = runtime->lookupFunction(0x2346B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464314u; }
        if (ctx->pc != 0x464314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002346B0_0x2346b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464314u; }
        if (ctx->pc != 0x464314u) { return; }
    }
    ctx->pc = 0x464314u;
label_464314:
    // 0x464314: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x464314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x464318: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x464318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46431c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x46431Cu;
    {
        const bool branch_taken_0x46431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46431c) {
            ctx->pc = 0x464320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46431Cu;
            // 0x464320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46436Cu;
            goto label_46436c;
        }
    }
    ctx->pc = 0x464324u;
    // 0x464324: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x464324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x464328: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x464328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x46432c: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x46432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x464330: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x464330u;
    SET_GPR_U32(ctx, 31, 0x464338u);
    ctx->pc = 0x464334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464330u;
            // 0x464334: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464338u; }
        if (ctx->pc != 0x464338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464338u; }
        if (ctx->pc != 0x464338u) { return; }
    }
    ctx->pc = 0x464338u;
label_464338:
    // 0x464338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x464338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46433c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464340: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x464340u;
    SET_GPR_U32(ctx, 31, 0x464348u);
    ctx->pc = 0x464344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464340u;
            // 0x464344: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464348u; }
        if (ctx->pc != 0x464348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464348u; }
        if (ctx->pc != 0x464348u) { return; }
    }
    ctx->pc = 0x464348u;
label_464348:
    // 0x464348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46434c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x46434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x464350: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x464350u;
    SET_GPR_U32(ctx, 31, 0x464358u);
    ctx->pc = 0x464354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464350u;
            // 0x464354: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464358u; }
        if (ctx->pc != 0x464358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464358u; }
        if (ctx->pc != 0x464358u) { return; }
    }
    ctx->pc = 0x464358u;
label_464358:
    // 0x464358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46435c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x46435Cu;
    SET_GPR_U32(ctx, 31, 0x464364u);
    ctx->pc = 0x464360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46435Cu;
            // 0x464360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464364u; }
        if (ctx->pc != 0x464364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464364u; }
        if (ctx->pc != 0x464364u) { return; }
    }
    ctx->pc = 0x464364u;
label_464364:
    // 0x464364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x464364u;
    {
        const bool branch_taken_0x464364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464364) {
            ctx->pc = 0x464374u;
            goto label_464374;
        }
    }
    ctx->pc = 0x46436Cu;
label_46436c:
    // 0x46436c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x46436Cu;
    SET_GPR_U32(ctx, 31, 0x464374u);
    ctx->pc = 0x464370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46436Cu;
            // 0x464370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464374u; }
        if (ctx->pc != 0x464374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464374u; }
        if (ctx->pc != 0x464374u) { return; }
    }
    ctx->pc = 0x464374u;
label_464374:
    // 0x464374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x464374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_464378:
    // 0x464378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46437c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46437cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464380: 0x3e00008  jr          $ra
    ctx->pc = 0x464380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464380u;
            // 0x464384: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464388u;
    // 0x464388: 0x0  nop
    ctx->pc = 0x464388u;
    // NOP
    // 0x46438c: 0x0  nop
    ctx->pc = 0x46438cu;
    // NOP
}
