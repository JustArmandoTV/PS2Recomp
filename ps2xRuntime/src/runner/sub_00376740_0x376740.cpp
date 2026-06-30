#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376740
// Address: 0x376740 - 0x376900
void sub_00376740_0x376740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376740_0x376740");
#endif

    switch (ctx->pc) {
        case 0x3767d8u: goto label_3767d8;
        case 0x3767fcu: goto label_3767fc;
        case 0x37680cu: goto label_37680c;
        case 0x37681cu: goto label_37681c;
        case 0x376828u: goto label_376828;
        case 0x376838u: goto label_376838;
        case 0x376868u: goto label_376868;
        case 0x376874u: goto label_376874;
        case 0x376894u: goto label_376894;
        case 0x3768d4u: goto label_3768d4;
        case 0x3768e4u: goto label_3768e4;
        default: break;
    }

    ctx->pc = 0x376740u;

    // 0x376740: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x376740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x376744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x376748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x376748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37674c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376758: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x376758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37675c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x37675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x376760: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x376760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376764: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x376764u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x376768: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x376768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37676c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x37676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x376770: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x376770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x376774: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x376774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x376778: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x37677c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x37677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x376780: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x376780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x376784: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x376784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x376788: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x376788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x37678c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x37678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376790: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x376790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x376794: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x376794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x376798: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x376798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x37679c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x37679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767a0: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x3767a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3767a4: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x3767a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x3767a8: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x3767a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x3767ac: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3767acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3767b0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3767b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x3767b4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3767b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3767b8: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x3767b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3767bc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x3767bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3767c0: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x3767c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3767c4: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x3767c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3767c8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3767c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3767cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3767ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3767d0: 0xc08d1ac  jal         func_2346B0
    ctx->pc = 0x3767D0u;
    SET_GPR_U32(ctx, 31, 0x3767D8u);
    ctx->pc = 0x3767D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3767D0u;
            // 0x3767d4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346B0u;
    if (runtime->hasFunction(0x2346B0u)) {
        auto targetFn = runtime->lookupFunction(0x2346B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3767D8u; }
        if (ctx->pc != 0x3767D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002346B0_0x2346b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3767D8u; }
        if (ctx->pc != 0x3767D8u) { return; }
    }
    ctx->pc = 0x3767D8u;
label_3767d8:
    // 0x3767d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3767dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3767dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3767e0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3767E0u;
    {
        const bool branch_taken_0x3767e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3767e0) {
            ctx->pc = 0x3767E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3767E0u;
            // 0x3767e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376830u;
            goto label_376830;
        }
    }
    ctx->pc = 0x3767E8u;
    // 0x3767e8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x3767e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3767ec: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x3767ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3767f0: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x3767f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3767f4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3767F4u;
    SET_GPR_U32(ctx, 31, 0x3767FCu);
    ctx->pc = 0x3767F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3767F4u;
            // 0x3767f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3767FCu; }
        if (ctx->pc != 0x3767FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3767FCu; }
        if (ctx->pc != 0x3767FCu) { return; }
    }
    ctx->pc = 0x3767FCu;
label_3767fc:
    // 0x3767fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3767fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376800: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x376800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x376804: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x376804u;
    SET_GPR_U32(ctx, 31, 0x37680Cu);
    ctx->pc = 0x376808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376804u;
            // 0x376808: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37680Cu; }
        if (ctx->pc != 0x37680Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37680Cu; }
        if (ctx->pc != 0x37680Cu) { return; }
    }
    ctx->pc = 0x37680Cu;
label_37680c:
    // 0x37680c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376810: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x376810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376814: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x376814u;
    SET_GPR_U32(ctx, 31, 0x37681Cu);
    ctx->pc = 0x376818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376814u;
            // 0x376818: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37681Cu; }
        if (ctx->pc != 0x37681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37681Cu; }
        if (ctx->pc != 0x37681Cu) { return; }
    }
    ctx->pc = 0x37681Cu;
label_37681c:
    // 0x37681c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37681cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376820: 0xc04cc44  jal         func_133110
    ctx->pc = 0x376820u;
    SET_GPR_U32(ctx, 31, 0x376828u);
    ctx->pc = 0x376824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376820u;
            // 0x376824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376828u; }
        if (ctx->pc != 0x376828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376828u; }
        if (ctx->pc != 0x376828u) { return; }
    }
    ctx->pc = 0x376828u;
label_376828:
    // 0x376828: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376828u;
    {
        const bool branch_taken_0x376828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376828u;
            // 0x37682c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376828) {
            ctx->pc = 0x37683Cu;
            goto label_37683c;
        }
    }
    ctx->pc = 0x376830u;
label_376830:
    // 0x376830: 0xc04cc04  jal         func_133010
    ctx->pc = 0x376830u;
    SET_GPR_U32(ctx, 31, 0x376838u);
    ctx->pc = 0x376834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376830u;
            // 0x376834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376838u; }
        if (ctx->pc != 0x376838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376838u; }
        if (ctx->pc != 0x376838u) { return; }
    }
    ctx->pc = 0x376838u;
label_376838:
    // 0x376838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x376838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37683c:
    // 0x37683c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37683cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376844: 0x3e00008  jr          $ra
    ctx->pc = 0x376844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376844u;
            // 0x376848: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37684Cu;
    // 0x37684c: 0x0  nop
    ctx->pc = 0x37684cu;
    // NOP
    // 0x376850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x376854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x376858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37685c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37685cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376860: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x376860u;
    SET_GPR_U32(ctx, 31, 0x376868u);
    ctx->pc = 0x376864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376860u;
            // 0x376864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376868u; }
        if (ctx->pc != 0x376868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376868u; }
        if (ctx->pc != 0x376868u) { return; }
    }
    ctx->pc = 0x376868u;
label_376868:
    // 0x376868: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x376868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37686c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x37686Cu;
    SET_GPR_U32(ctx, 31, 0x376874u);
    ctx->pc = 0x376870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37686Cu;
            // 0x376870: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376874u; }
        if (ctx->pc != 0x376874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376874u; }
        if (ctx->pc != 0x376874u) { return; }
    }
    ctx->pc = 0x376874u;
label_376874:
    // 0x376874: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x376874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x376878: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x376878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x37687c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x37687Cu;
    {
        const bool branch_taken_0x37687c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37687c) {
            ctx->pc = 0x376880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37687Cu;
            // 0x376880: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376898u;
            goto label_376898;
        }
    }
    ctx->pc = 0x376884u;
    // 0x376884: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x376884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x376888: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x376888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x37688c: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x37688Cu;
    SET_GPR_U32(ctx, 31, 0x376894u);
    ctx->pc = 0x376890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37688Cu;
            // 0x376890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376894u; }
        if (ctx->pc != 0x376894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376894u; }
        if (ctx->pc != 0x376894u) { return; }
    }
    ctx->pc = 0x376894u;
label_376894:
    // 0x376894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x376894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_376898:
    // 0x376898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37689c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3768a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3768A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3768A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3768A0u;
            // 0x3768a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3768A8u;
    // 0x3768a8: 0x0  nop
    ctx->pc = 0x3768a8u;
    // NOP
    // 0x3768ac: 0x0  nop
    ctx->pc = 0x3768acu;
    // NOP
    // 0x3768b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3768b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3768b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3768b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3768b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3768bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3768bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3768c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3768c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3768c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3768c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768c8: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x3768c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x3768cc: 0xc0baaa0  jal         func_2EAA80
    ctx->pc = 0x3768CCu;
    SET_GPR_U32(ctx, 31, 0x3768D4u);
    ctx->pc = 0x3768D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3768CCu;
            // 0x3768d0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3768D4u; }
        if (ctx->pc != 0x3768D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3768D4u; }
        if (ctx->pc != 0x3768D4u) { return; }
    }
    ctx->pc = 0x3768D4u;
label_3768d4:
    // 0x3768d4: 0x8e0402bc  lw          $a0, 0x2BC($s0)
    ctx->pc = 0x3768d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x3768d8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x3768d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3768dc: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x3768DCu;
    SET_GPR_U32(ctx, 31, 0x3768E4u);
    ctx->pc = 0x3768E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3768DCu;
            // 0x3768e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3768E4u; }
        if (ctx->pc != 0x3768E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3768E4u; }
        if (ctx->pc != 0x3768E4u) { return; }
    }
    ctx->pc = 0x3768E4u;
label_3768e4:
    // 0x3768e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3768e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3768e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3768e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3768ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3768ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3768F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3768ECu;
            // 0x3768f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3768F4u;
    // 0x3768f4: 0x0  nop
    ctx->pc = 0x3768f4u;
    // NOP
    // 0x3768f8: 0x0  nop
    ctx->pc = 0x3768f8u;
    // NOP
    // 0x3768fc: 0x0  nop
    ctx->pc = 0x3768fcu;
    // NOP
}
