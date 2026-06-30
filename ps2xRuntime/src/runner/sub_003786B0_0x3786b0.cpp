#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003786B0
// Address: 0x3786b0 - 0x378a60
void sub_003786B0_0x3786b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003786B0_0x3786b0");
#endif

    switch (ctx->pc) {
        case 0x37879cu: goto label_37879c;
        case 0x3787a4u: goto label_3787a4;
        case 0x3787b8u: goto label_3787b8;
        case 0x3787c0u: goto label_3787c0;
        case 0x378848u: goto label_378848;
        case 0x378854u: goto label_378854;
        case 0x378a34u: goto label_378a34;
        case 0x378a44u: goto label_378a44;
        default: break;
    }

    ctx->pc = 0x3786b0u;

    // 0x3786b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3786b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3786b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3786b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3786b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3786b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3786bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3786bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3786c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3786c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3786c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3786c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3786c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3786c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3786cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3786ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3786d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3786d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3786d4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3786d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3786d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3786d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3786dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3786dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3786e0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3786e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x3786e4: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x3786e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3786e8: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x3786e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3786ec: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x3786ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3786f0: 0x46001d46  mov.s       $f21, $f3
    ctx->pc = 0x3786f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[3]);
    // 0x3786f4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3786f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3786f8: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x3786f8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x3786fc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x3786fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x378700: 0x30c40038  andi        $a0, $a2, 0x38
    ctx->pc = 0x378700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)56);
    // 0x378704: 0x30d00380  andi        $s0, $a2, 0x380
    ctx->pc = 0x378704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)896);
    // 0x378708: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x378708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37870c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378710: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x378710u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x378714: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x378714u;
    {
        const bool branch_taken_0x378714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x378718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378714u;
            // 0x378718: 0x245101b0  addiu       $s1, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378714) {
            ctx->pc = 0x3787E0u;
            goto label_3787e0;
        }
    }
    ctx->pc = 0x37871Cu;
    // 0x37871c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x37871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x378720: 0x5082001b  beql        $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x378720u;
    {
        const bool branch_taken_0x378720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x378720) {
            ctx->pc = 0x378724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378720u;
            // 0x378724: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378790u;
            goto label_378790;
        }
    }
    ctx->pc = 0x378728u;
    // 0x378728: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x378728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37872c: 0x50820013  beql        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37872Cu;
    {
        const bool branch_taken_0x37872c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x37872c) {
            ctx->pc = 0x378730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37872Cu;
            // 0x378730: 0xc6220008  lwc1        $f2, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x37877Cu;
            goto label_37877c;
        }
    }
    ctx->pc = 0x378734u;
    // 0x378734: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x378734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378738: 0x5082000b  beql        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x378738u;
    {
        const bool branch_taken_0x378738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x378738) {
            ctx->pc = 0x37873Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378738u;
            // 0x37873c: 0xc6220004  lwc1        $f2, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x378768u;
            goto label_378768;
        }
    }
    ctx->pc = 0x378740u;
    // 0x378740: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x378740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x378744: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378744u;
    {
        const bool branch_taken_0x378744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x378744) {
            ctx->pc = 0x378748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378744u;
            // 0x378748: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x378754u;
            goto label_378754;
        }
    }
    ctx->pc = 0x37874Cu;
    // 0x37874c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x37874Cu;
    {
        const bool branch_taken_0x37874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37874Cu;
            // 0x378750: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37874c) {
            ctx->pc = 0x3787E4u;
            goto label_3787e4;
        }
    }
    ctx->pc = 0x378754u;
label_378754:
    // 0x378754: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x378754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378758: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x378758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37875c: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x37875cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x378760: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x378760u;
    {
        const bool branch_taken_0x378760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378760u;
            // 0x378764: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378760) {
            ctx->pc = 0x3787E0u;
            goto label_3787e0;
        }
    }
    ctx->pc = 0x378768u;
label_378768:
    // 0x378768: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x378768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37876c: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x37876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378770: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x378770u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x378774: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x378774u;
    {
        const bool branch_taken_0x378774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378774u;
            // 0x378778: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378774) {
            ctx->pc = 0x3787E0u;
            goto label_3787e0;
        }
    }
    ctx->pc = 0x37877Cu;
label_37877c:
    // 0x37877c: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x37877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378780: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x378780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378784: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x378784u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x378788: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x378788u;
    {
        const bool branch_taken_0x378788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378788u;
            // 0x37878c: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378788) {
            ctx->pc = 0x3787E0u;
            goto label_3787e0;
        }
    }
    ctx->pc = 0x378790u;
label_378790:
    // 0x378790: 0x26450074  addiu       $a1, $s2, 0x74
    ctx->pc = 0x378790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x378794: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x378794u;
    SET_GPR_U32(ctx, 31, 0x37879Cu);
    ctx->pc = 0x378798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378794u;
            // 0x378798: 0x26460064  addiu       $a2, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37879Cu; }
        if (ctx->pc != 0x37879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37879Cu; }
        if (ctx->pc != 0x37879Cu) { return; }
    }
    ctx->pc = 0x37879Cu;
label_37879c:
    // 0x37879c: 0xc04cb2c  jal         func_132CB0
    ctx->pc = 0x37879Cu;
    SET_GPR_U32(ctx, 31, 0x3787A4u);
    ctx->pc = 0x3787A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37879Cu;
            // 0x3787a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CB0u;
    if (runtime->hasFunction(0x132CB0u)) {
        auto targetFn = runtime->lookupFunction(0x132CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3787A4u; }
        if (ctx->pc != 0x3787A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CB0_0x132cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3787A4u; }
        if (ctx->pc != 0x3787A4u) { return; }
    }
    ctx->pc = 0x3787A4u;
label_3787a4:
    // 0x3787a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3787a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3787a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3787a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3787ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3787acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3787b0: 0xc04cb8c  jal         func_132E30
    ctx->pc = 0x3787B0u;
    SET_GPR_U32(ctx, 31, 0x3787B8u);
    ctx->pc = 0x3787B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3787B0u;
            // 0x3787b4: 0x26460074  addiu       $a2, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3787B8u; }
        if (ctx->pc != 0x3787B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3787B8u; }
        if (ctx->pc != 0x3787B8u) { return; }
    }
    ctx->pc = 0x3787B8u;
label_3787b8:
    // 0x3787b8: 0xc04cb2c  jal         func_132CB0
    ctx->pc = 0x3787B8u;
    SET_GPR_U32(ctx, 31, 0x3787C0u);
    ctx->pc = 0x3787BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3787B8u;
            // 0x3787bc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CB0u;
    if (runtime->hasFunction(0x132CB0u)) {
        auto targetFn = runtime->lookupFunction(0x132CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3787C0u; }
        if (ctx->pc != 0x3787C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CB0_0x132cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3787C0u; }
        if (ctx->pc != 0x3787C0u) { return; }
    }
    ctx->pc = 0x3787C0u;
label_3787c0:
    // 0x3787c0: 0x4600a8c1  sub.s       $f3, $f21, $f0
    ctx->pc = 0x3787c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x3787c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3787c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3787c8: 0x0  nop
    ctx->pc = 0x3787c8u;
    // NOP
    // 0x3787cc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3787ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3787d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3787D0u;
    {
        const bool branch_taken_0x3787d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3787d0) {
            ctx->pc = 0x3787D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3787D0u;
            // 0x3787d4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3787E0u;
            goto label_3787e0;
        }
    }
    ctx->pc = 0x3787D8u;
    // 0x3787d8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3787D8u;
    {
        const bool branch_taken_0x3787d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3787DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3787D8u;
            // 0x3787dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3787d8) {
            ctx->pc = 0x3789CCu;
            goto label_3789cc;
        }
    }
    ctx->pc = 0x3787E0u;
label_3787e0:
    // 0x3787e0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3787e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3787e4:
    // 0x3787e4: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3787E4u;
    {
        const bool branch_taken_0x3787e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3787e4) {
            ctx->pc = 0x378840u;
            goto label_378840;
        }
    }
    ctx->pc = 0x3787ECu;
    // 0x3787ec: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x3787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x3787f0: 0x52020050  beql        $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3787F0u;
    {
        const bool branch_taken_0x3787f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3787f0) {
            ctx->pc = 0x3787F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3787F0u;
            // 0x3787f4: 0x4603a002  mul.s       $f0, $f20, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x378934u;
            goto label_378934;
        }
    }
    ctx->pc = 0x3787F8u;
    // 0x3787f8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3787f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3787fc: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3787FCu;
    {
        const bool branch_taken_0x3787fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3787fc) {
            ctx->pc = 0x37882Cu;
            goto label_37882c;
        }
    }
    ctx->pc = 0x378804u;
    // 0x378804: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x378804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x378808: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378808u;
    {
        const bool branch_taken_0x378808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x378808) {
            ctx->pc = 0x378818u;
            goto label_378818;
        }
    }
    ctx->pc = 0x378810u;
    // 0x378810: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x378810u;
    {
        const bool branch_taken_0x378810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378810u;
            // 0x378814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378810) {
            ctx->pc = 0x378928u;
            goto label_378928;
        }
    }
    ctx->pc = 0x378818u;
label_378818:
    // 0x378818: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x378818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37881c: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x37881Cu;
    {
        const bool branch_taken_0x37881c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37881c) {
            ctx->pc = 0x378930u;
            goto label_378930;
        }
    }
    ctx->pc = 0x378824u;
    // 0x378824: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x378824u;
    {
        const bool branch_taken_0x378824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378824u;
            // 0x378828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378824) {
            ctx->pc = 0x3789CCu;
            goto label_3789cc;
        }
    }
    ctx->pc = 0x37882Cu;
label_37882c:
    // 0x37882c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x37882cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378830: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x378830u;
    {
        const bool branch_taken_0x378830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378830) {
            ctx->pc = 0x378930u;
            goto label_378930;
        }
    }
    ctx->pc = 0x378838u;
    // 0x378838: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x378838u;
    {
        const bool branch_taken_0x378838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378838u;
            // 0x37883c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378838) {
            ctx->pc = 0x3789CCu;
            goto label_3789cc;
        }
    }
    ctx->pc = 0x378840u;
label_378840:
    // 0x378840: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x378840u;
    SET_GPR_U32(ctx, 31, 0x378848u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378848u; }
        if (ctx->pc != 0x378848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378848u; }
        if (ctx->pc != 0x378848u) { return; }
    }
    ctx->pc = 0x378848u;
label_378848:
    // 0x378848: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x378848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37884c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x37884Cu;
    SET_GPR_U32(ctx, 31, 0x378854u);
    ctx->pc = 0x378850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37884Cu;
            // 0x378850: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378854u; }
        if (ctx->pc != 0x378854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378854u; }
        if (ctx->pc != 0x378854u) { return; }
    }
    ctx->pc = 0x378854u;
label_378854:
    // 0x378854: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x378854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x378858: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x378858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x37885c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37885cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378860: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378860u;
    {
        const bool branch_taken_0x378860 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x378860) {
            ctx->pc = 0x378864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378860u;
            // 0x378864: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378874u;
            goto label_378874;
        }
    }
    ctx->pc = 0x378868u;
    // 0x378868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x378868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37886c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37886Cu;
    {
        const bool branch_taken_0x37886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37886Cu;
            // 0x378870: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37886c) {
            ctx->pc = 0x37888Cu;
            goto label_37888c;
        }
    }
    ctx->pc = 0x378874u;
label_378874:
    // 0x378874: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x378874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x378878: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37887c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37887cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378880: 0x0  nop
    ctx->pc = 0x378880u;
    // NOP
    // 0x378884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378888: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x378888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37888c:
    // 0x37888c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x37888cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378890: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x378890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378898: 0x0  nop
    ctx->pc = 0x378898u;
    // NOP
    // 0x37889c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x37889cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3788a0: 0x4602a05c  madd.s      $f1, $f20, $f2
    ctx->pc = 0x3788a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x3788a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3788a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3788a8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3788A8u;
    {
        const bool branch_taken_0x3788a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3788a8) {
            ctx->pc = 0x3788ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3788A8u;
            // 0x3788ac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3788B8u;
            goto label_3788b8;
        }
    }
    ctx->pc = 0x3788B0u;
    // 0x3788b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3788B0u;
    {
        const bool branch_taken_0x3788b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3788B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3788B0u;
            // 0x3788b4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3788b0) {
            ctx->pc = 0x3788D0u;
            goto label_3788d0;
        }
    }
    ctx->pc = 0x3788B8u;
label_3788b8:
    // 0x3788b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3788b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3788bc: 0x0  nop
    ctx->pc = 0x3788bcu;
    // NOP
    // 0x3788c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3788c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3788c4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3788C4u;
    {
        const bool branch_taken_0x3788c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3788c4) {
            ctx->pc = 0x3788C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3788C4u;
            // 0x3788c8: 0x3c03437f  lui         $v1, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3788D4u;
            goto label_3788d4;
        }
    }
    ctx->pc = 0x3788CCu;
    // 0x3788cc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3788ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_3788d0:
    // 0x3788d0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x3788d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_3788d4:
    // 0x3788d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3788d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3788d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3788d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3788dc: 0x0  nop
    ctx->pc = 0x3788dcu;
    // NOP
    // 0x3788e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3788e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3788e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3788e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3788e8: 0x0  nop
    ctx->pc = 0x3788e8u;
    // NOP
    // 0x3788ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3788ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3788f0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3788F0u;
    {
        const bool branch_taken_0x3788f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3788f0) {
            ctx->pc = 0x3788F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3788F0u;
            // 0x3788f4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x378908u;
            goto label_378908;
        }
    }
    ctx->pc = 0x3788F8u;
    // 0x3788f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3788f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3788fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3788fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x378900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378900u;
    {
        const bool branch_taken_0x378900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378900u;
            // 0x378904: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378900) {
            ctx->pc = 0x378920u;
            goto label_378920;
        }
    }
    ctx->pc = 0x378908u;
label_378908:
    // 0x378908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x378908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37890c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37890cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x378910: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x378910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x378914: 0x0  nop
    ctx->pc = 0x378914u;
    // NOP
    // 0x378918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37891c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_378920:
    // 0x378920: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x378920u;
    {
        const bool branch_taken_0x378920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378920u;
            // 0x378924: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378920) {
            ctx->pc = 0x3789CCu;
            goto label_3789cc;
        }
    }
    ctx->pc = 0x378928u;
label_378928:
    // 0x378928: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x378928u;
    {
        const bool branch_taken_0x378928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378928u;
            // 0x37892c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378928) {
            ctx->pc = 0x3789D0u;
            goto label_3789d0;
        }
    }
    ctx->pc = 0x378930u;
label_378930:
    // 0x378930: 0x4603a002  mul.s       $f0, $f20, $f3
    ctx->pc = 0x378930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_378934:
    // 0x378934: 0x0  nop
    ctx->pc = 0x378934u;
    // NOP
    // 0x378938: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x378938u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[21];
    // 0x37893c: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x37893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378944: 0x0  nop
    ctx->pc = 0x378944u;
    // NOP
    // 0x378948: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x378948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37894c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37894cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378950: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x378950u;
    {
        const bool branch_taken_0x378950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378950) {
            ctx->pc = 0x378954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378950u;
            // 0x378954: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378960u;
            goto label_378960;
        }
    }
    ctx->pc = 0x378958u;
    // 0x378958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378958u;
    {
        const bool branch_taken_0x378958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378958u;
            // 0x37895c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378958) {
            ctx->pc = 0x378978u;
            goto label_378978;
        }
    }
    ctx->pc = 0x378960u;
label_378960:
    // 0x378960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378964: 0x0  nop
    ctx->pc = 0x378964u;
    // NOP
    // 0x378968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x378968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37896c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x37896Cu;
    {
        const bool branch_taken_0x37896c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37896c) {
            ctx->pc = 0x378970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37896Cu;
            // 0x378970: 0x3c03437f  lui         $v1, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37897Cu;
            goto label_37897c;
        }
    }
    ctx->pc = 0x378974u;
    // 0x378974: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x378974u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_378978:
    // 0x378978: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x378978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_37897c:
    // 0x37897c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x378980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378984: 0x0  nop
    ctx->pc = 0x378984u;
    // NOP
    // 0x378988: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x378988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37898c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378990: 0x0  nop
    ctx->pc = 0x378990u;
    // NOP
    // 0x378994: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x378994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378998: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x378998u;
    {
        const bool branch_taken_0x378998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x378998) {
            ctx->pc = 0x37899Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378998u;
            // 0x37899c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3789B0u;
            goto label_3789b0;
        }
    }
    ctx->pc = 0x3789A0u;
    // 0x3789a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3789a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3789a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3789a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3789a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3789A8u;
    {
        const bool branch_taken_0x3789a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3789ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3789A8u;
            // 0x3789ac: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3789a8) {
            ctx->pc = 0x3789C8u;
            goto label_3789c8;
        }
    }
    ctx->pc = 0x3789B0u;
label_3789b0:
    // 0x3789b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3789b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3789b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3789b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3789b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3789b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3789bc: 0x0  nop
    ctx->pc = 0x3789bcu;
    // NOP
    // 0x3789c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3789c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3789c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3789c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3789c8:
    // 0x3789c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3789c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3789cc:
    // 0x3789cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3789ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3789d0:
    // 0x3789d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3789d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3789d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3789d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3789d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3789d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3789dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3789dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3789e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3789e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3789e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3789E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3789E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3789E4u;
            // 0x3789e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3789ECu;
    // 0x3789ec: 0x0  nop
    ctx->pc = 0x3789ecu;
    // NOP
    // 0x3789f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3789f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3789f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3789f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3789f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3789f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3789fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3789fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378a00: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x378a00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x378a04: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378A04u;
    {
        const bool branch_taken_0x378a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x378A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378A04u;
            // 0x378a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a04) {
            ctx->pc = 0x378A14u;
            goto label_378a14;
        }
    }
    ctx->pc = 0x378A0Cu;
    // 0x378a0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x378A0Cu;
    {
        const bool branch_taken_0x378a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378A0Cu;
            // 0x378a10: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378a0c) {
            ctx->pc = 0x378A48u;
            goto label_378a48;
        }
    }
    ctx->pc = 0x378A14u;
label_378a14:
    // 0x378a14: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x378a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x378a18: 0x90636080  lbu         $v1, 0x6080($v1)
    ctx->pc = 0x378a18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24704)));
    // 0x378a1c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x378a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x378a20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x378A20u;
    {
        const bool branch_taken_0x378a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378a20) {
            ctx->pc = 0x378A44u;
            goto label_378a44;
        }
    }
    ctx->pc = 0x378A28u;
    // 0x378a28: 0x260500c4  addiu       $a1, $s0, 0xC4
    ctx->pc = 0x378a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x378a2c: 0xc0de298  jal         func_378A60
    ctx->pc = 0x378A2Cu;
    SET_GPR_U32(ctx, 31, 0x378A34u);
    ctx->pc = 0x378A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378A2Cu;
            // 0x378a30: 0x26060084  addiu       $a2, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x378A60u;
    if (runtime->hasFunction(0x378A60u)) {
        auto targetFn = runtime->lookupFunction(0x378A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378A34u; }
        if (ctx->pc != 0x378A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00378A60_0x378a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378A34u; }
        if (ctx->pc != 0x378A34u) { return; }
    }
    ctx->pc = 0x378A34u;
label_378a34:
    // 0x378a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378a38: 0x260500d4  addiu       $a1, $s0, 0xD4
    ctx->pc = 0x378a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x378a3c: 0xc0de298  jal         func_378A60
    ctx->pc = 0x378A3Cu;
    SET_GPR_U32(ctx, 31, 0x378A44u);
    ctx->pc = 0x378A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378A3Cu;
            // 0x378a40: 0x260600b4  addiu       $a2, $s0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x378A60u;
    if (runtime->hasFunction(0x378A60u)) {
        auto targetFn = runtime->lookupFunction(0x378A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378A44u; }
        if (ctx->pc != 0x378A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00378A60_0x378a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378A44u; }
        if (ctx->pc != 0x378A44u) { return; }
    }
    ctx->pc = 0x378A44u;
label_378a44:
    // 0x378a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_378a48:
    // 0x378a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x378A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378A4Cu;
            // 0x378a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x378A54u;
    // 0x378a54: 0x0  nop
    ctx->pc = 0x378a54u;
    // NOP
    // 0x378a58: 0x0  nop
    ctx->pc = 0x378a58u;
    // NOP
    // 0x378a5c: 0x0  nop
    ctx->pc = 0x378a5cu;
    // NOP
}
