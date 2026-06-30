#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035D710
// Address: 0x35d710 - 0x35d910
void sub_0035D710_0x35d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D710_0x35d710");
#endif

    switch (ctx->pc) {
        case 0x35d760u: goto label_35d760;
        case 0x35d76cu: goto label_35d76c;
        case 0x35d780u: goto label_35d780;
        case 0x35d78cu: goto label_35d78c;
        case 0x35d79cu: goto label_35d79c;
        case 0x35d7a8u: goto label_35d7a8;
        case 0x35d838u: goto label_35d838;
        case 0x35d854u: goto label_35d854;
        case 0x35d860u: goto label_35d860;
        case 0x35d870u: goto label_35d870;
        case 0x35d884u: goto label_35d884;
        case 0x35d890u: goto label_35d890;
        case 0x35d8a8u: goto label_35d8a8;
        case 0x35d8c8u: goto label_35d8c8;
        case 0x35d8f4u: goto label_35d8f4;
        default: break;
    }

    ctx->pc = 0x35d710u;

    // 0x35d710: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x35d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x35d714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d71c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x35d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d720: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35d720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35d724: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35d724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35d728: 0x0  nop
    ctx->pc = 0x35d728u;
    // NOP
    // 0x35d72c: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x35D72Cu;
    {
        const bool branch_taken_0x35d72c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35D730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D72Cu;
            // 0x35d730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d72c) {
            ctx->pc = 0x35D890u;
            goto label_35d890;
        }
    }
    ctx->pc = 0x35D734u;
    // 0x35d734: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35d734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d738: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x35d73c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x35d740: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x35d740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35d744: 0x8c420e30  lw          $v0, 0xE30($v0)
    ctx->pc = 0x35d744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
    // 0x35d748: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x35d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x35d74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d754: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x35d754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x35d758: 0xc04cc90  jal         func_133240
    ctx->pc = 0x35D758u;
    SET_GPR_U32(ctx, 31, 0x35D760u);
    ctx->pc = 0x35D75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D758u;
            // 0x35d75c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D760u; }
        if (ctx->pc != 0x35D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D760u; }
        if (ctx->pc != 0x35D760u) { return; }
    }
    ctx->pc = 0x35D760u;
label_35d760:
    // 0x35d760: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x35d764: 0xc04cc44  jal         func_133110
    ctx->pc = 0x35D764u;
    SET_GPR_U32(ctx, 31, 0x35D76Cu);
    ctx->pc = 0x35D768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D764u;
            // 0x35d768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D76Cu; }
        if (ctx->pc != 0x35D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D76Cu; }
        if (ctx->pc != 0x35D76Cu) { return; }
    }
    ctx->pc = 0x35D76Cu;
label_35d76c:
    // 0x35d76c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x35d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x35d770: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35d774: 0x24a545c0  addiu       $a1, $a1, 0x45C0
    ctx->pc = 0x35d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17856));
    // 0x35d778: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x35D778u;
    SET_GPR_U32(ctx, 31, 0x35D780u);
    ctx->pc = 0x35D77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D778u;
            // 0x35d77c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D780u; }
        if (ctx->pc != 0x35D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D780u; }
        if (ctx->pc != 0x35D780u) { return; }
    }
    ctx->pc = 0x35D780u;
label_35d780:
    // 0x35d780: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35d784: 0xc04cc44  jal         func_133110
    ctx->pc = 0x35D784u;
    SET_GPR_U32(ctx, 31, 0x35D78Cu);
    ctx->pc = 0x35D788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D784u;
            // 0x35d788: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D78Cu; }
        if (ctx->pc != 0x35D78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D78Cu; }
        if (ctx->pc != 0x35D78Cu) { return; }
    }
    ctx->pc = 0x35D78Cu;
label_35d78c:
    // 0x35d78c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x35d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35d790: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x35d790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35d794: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x35D794u;
    SET_GPR_U32(ctx, 31, 0x35D79Cu);
    ctx->pc = 0x35D798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D794u;
            // 0x35d798: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D79Cu; }
        if (ctx->pc != 0x35D79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D79Cu; }
        if (ctx->pc != 0x35D79Cu) { return; }
    }
    ctx->pc = 0x35D79Cu;
label_35d79c:
    // 0x35d79c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x35d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35d7a0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x35D7A0u;
    SET_GPR_U32(ctx, 31, 0x35D7A8u);
    ctx->pc = 0x35D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D7A0u;
            // 0x35d7a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D7A8u; }
        if (ctx->pc != 0x35D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D7A8u; }
        if (ctx->pc != 0x35D7A8u) { return; }
    }
    ctx->pc = 0x35D7A8u;
label_35d7a8:
    // 0x35d7a8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35d7ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35d7b0: 0xc44145e0  lwc1        $f1, 0x45E0($v0)
    ctx->pc = 0x35d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d7b4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35d7b8: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x35d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d7bc: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x35d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x35d7c0: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x35d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35d7c4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x35d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x35d7c8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35d7cc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x35d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x35d7d0: 0xc44045e4  lwc1        $f0, 0x45E4($v0)
    ctx->pc = 0x35d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d7d4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x35d7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x35d7d8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x35d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d7dc: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x35d7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x35d7e0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35d7e4: 0xc44145e8  lwc1        $f1, 0x45E8($v0)
    ctx->pc = 0x35d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d7e8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x35d7e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x35d7ec: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x35d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d7f0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35d7f4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x35d7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x35d7f8: 0xc44045ec  lwc1        $f0, 0x45EC($v0)
    ctx->pc = 0x35d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d7fc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x35d7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x35d800: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x35d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d804: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x35d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x35d808: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x35d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d80c: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x35d80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x35d810: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x35d810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d814: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x35d814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x35d818: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x35d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d81c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x35d81cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x35d820: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x35d820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x35d824: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x35d824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x35d828: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x35d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d82c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x35d82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x35d830: 0xc04c994  jal         func_132650
    ctx->pc = 0x35D830u;
    SET_GPR_U32(ctx, 31, 0x35D838u);
    ctx->pc = 0x35D834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D830u;
            // 0x35d834: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D838u; }
        if (ctx->pc != 0x35D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D838u; }
        if (ctx->pc != 0x35D838u) { return; }
    }
    ctx->pc = 0x35D838u;
label_35d838:
    // 0x35d838: 0x960300a4  lhu         $v1, 0xA4($s0)
    ctx->pc = 0x35d838u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x35d83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d840: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D840u;
    {
        const bool branch_taken_0x35d840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d840) {
            ctx->pc = 0x35D844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D840u;
            // 0x35d844: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D868u;
            goto label_35d868;
        }
    }
    ctx->pc = 0x35D848u;
    // 0x35d848: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x35d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35d84c: 0xc04c720  jal         func_131C80
    ctx->pc = 0x35D84Cu;
    SET_GPR_U32(ctx, 31, 0x35D854u);
    ctx->pc = 0x35D850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D84Cu;
            // 0x35d850: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D854u; }
        if (ctx->pc != 0x35D854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D854u; }
        if (ctx->pc != 0x35D854u) { return; }
    }
    ctx->pc = 0x35D854u;
label_35d854:
    // 0x35d854: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x35d854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x35d858: 0xc04cc04  jal         func_133010
    ctx->pc = 0x35D858u;
    SET_GPR_U32(ctx, 31, 0x35D860u);
    ctx->pc = 0x35D85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D858u;
            // 0x35d85c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D860u; }
        if (ctx->pc != 0x35D860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D860u; }
        if (ctx->pc != 0x35D860u) { return; }
    }
    ctx->pc = 0x35D860u;
label_35d860:
    // 0x35d860: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35D860u;
    {
        const bool branch_taken_0x35d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D860u;
            // 0x35d864: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d860) {
            ctx->pc = 0x35D894u;
            goto label_35d894;
        }
    }
    ctx->pc = 0x35D868u;
label_35d868:
    // 0x35d868: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x35D868u;
    SET_GPR_U32(ctx, 31, 0x35D870u);
    ctx->pc = 0x35D86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D868u;
            // 0x35d86c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D870u; }
        if (ctx->pc != 0x35D870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D870u; }
        if (ctx->pc != 0x35D870u) { return; }
    }
    ctx->pc = 0x35D870u;
label_35d870:
    // 0x35d870: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35d870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x35d874: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x35d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x35d878: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35d87c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x35D87Cu;
    SET_GPR_U32(ctx, 31, 0x35D884u);
    ctx->pc = 0x35D880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D87Cu;
            // 0x35d880: 0x24c645d0  addiu       $a2, $a2, 0x45D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D884u; }
        if (ctx->pc != 0x35D884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D884u; }
        if (ctx->pc != 0x35D884u) { return; }
    }
    ctx->pc = 0x35D884u;
label_35d884:
    // 0x35d884: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x35d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x35d888: 0xc04cc44  jal         func_133110
    ctx->pc = 0x35D888u;
    SET_GPR_U32(ctx, 31, 0x35D890u);
    ctx->pc = 0x35D88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D888u;
            // 0x35d88c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D890u; }
        if (ctx->pc != 0x35D890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D890u; }
        if (ctx->pc != 0x35D890u) { return; }
    }
    ctx->pc = 0x35D890u;
label_35d890:
    // 0x35d890: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x35d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_35d894:
    // 0x35d894: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D894u;
    {
        const bool branch_taken_0x35d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d894) {
            ctx->pc = 0x35D898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D894u;
            // 0x35d898: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35D8B0u;
            goto label_35d8b0;
        }
    }
    ctx->pc = 0x35D89Cu;
    // 0x35d89c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x35d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35d8a0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x35D8A0u;
    SET_GPR_U32(ctx, 31, 0x35D8A8u);
    ctx->pc = 0x35D8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D8A0u;
            // 0x35d8a4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D8A8u; }
        if (ctx->pc != 0x35D8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D8A8u; }
        if (ctx->pc != 0x35D8A8u) { return; }
    }
    ctx->pc = 0x35D8A8u;
label_35d8a8:
    // 0x35d8a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35D8A8u;
    {
        const bool branch_taken_0x35d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D8A8u;
            // 0x35d8ac: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8a8) {
            ctx->pc = 0x35D8CCu;
            goto label_35d8cc;
        }
    }
    ctx->pc = 0x35D8B0u;
label_35d8b0:
    // 0x35d8b0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x35d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35d8b4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x35d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x35d8b8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x35d8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35d8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35d8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35d8c0: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x35D8C0u;
    SET_GPR_U32(ctx, 31, 0x35D8C8u);
    ctx->pc = 0x35D8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D8C0u;
            // 0x35d8c4: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D8C8u; }
        if (ctx->pc != 0x35D8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D8C8u; }
        if (ctx->pc != 0x35D8C8u) { return; }
    }
    ctx->pc = 0x35D8C8u;
label_35d8c8:
    // 0x35d8c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x35d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_35d8cc:
    // 0x35d8cc: 0xc6020098  lwc1        $f2, 0x98($s0)
    ctx->pc = 0x35d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35d8d0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x35d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d8d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d8d8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x35d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d8dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35d8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35d8e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35d8e4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x35d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x35d8e8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x35d8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35d8ec: 0xc08af48  jal         func_22BD20
    ctx->pc = 0x35D8ECu;
    SET_GPR_U32(ctx, 31, 0x35D8F4u);
    ctx->pc = 0x35D8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D8ECu;
            // 0x35d8f0: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D8F4u; }
        if (ctx->pc != 0x35D8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D8F4u; }
        if (ctx->pc != 0x35D8F4u) { return; }
    }
    ctx->pc = 0x35D8F4u;
label_35d8f4:
    // 0x35d8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x35D8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D8FCu;
            // 0x35d900: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35D904u;
    // 0x35d904: 0x0  nop
    ctx->pc = 0x35d904u;
    // NOP
    // 0x35d908: 0x0  nop
    ctx->pc = 0x35d908u;
    // NOP
    // 0x35d90c: 0x0  nop
    ctx->pc = 0x35d90cu;
    // NOP
}
