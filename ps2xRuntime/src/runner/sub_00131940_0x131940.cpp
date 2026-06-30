#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131940
// Address: 0x131940 - 0x131ab0
void sub_00131940_0x131940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131940_0x131940");
#endif

    switch (ctx->pc) {
        case 0x131964u: goto label_131964;
        case 0x13198cu: goto label_13198c;
        case 0x1319d8u: goto label_1319d8;
        case 0x1319f0u: goto label_1319f0;
        case 0x131a08u: goto label_131a08;
        case 0x131a20u: goto label_131a20;
        case 0x131a40u: goto label_131a40;
        case 0x131a68u: goto label_131a68;
        case 0x131a78u: goto label_131a78;
        default: break;
    }

    ctx->pc = 0x131940u;

    // 0x131940: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x131944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x131944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x131948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x131948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13194c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x131950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x131954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x131958: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x131958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13195c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x13195Cu;
    SET_GPR_U32(ctx, 31, 0x131964u);
    ctx->pc = 0x131960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13195Cu;
            // 0x131960: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131964u; }
        if (ctx->pc != 0x131964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131964u; }
        if (ctx->pc != 0x131964u) { return; }
    }
    ctx->pc = 0x131964u;
label_131964:
    // 0x131964: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x131964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x131968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x131968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13196c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x131970: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131970u;
    {
        const bool branch_taken_0x131970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131970u;
            // 0x131974: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131970) {
            ctx->pc = 0x13198Cu;
            goto label_13198c;
        }
    }
    ctx->pc = 0x131978u;
    // 0x131978: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x131978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13197c: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x13197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131980: 0xc60e0014  lwc1        $f14, 0x14($s0)
    ctx->pc = 0x131980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x131984: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x131984u;
    SET_GPR_U32(ctx, 31, 0x13198Cu);
    ctx->pc = 0x131988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131984u;
            // 0x131988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (runtime->hasFunction(0x1354B0u)) {
        auto targetFn = runtime->lookupFunction(0x1354B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13198Cu; }
        if (ctx->pc != 0x13198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001354B0_0x1354b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13198Cu; }
        if (ctx->pc != 0x13198Cu) { return; }
    }
    ctx->pc = 0x13198Cu;
label_13198c:
    // 0x13198c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131990: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x131990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x131994: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x131994u;
    {
        const bool branch_taken_0x131994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131994) {
            ctx->pc = 0x131998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131994u;
            // 0x131998: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131A24u;
            goto label_131a24;
        }
    }
    ctx->pc = 0x13199Cu;
    // 0x13199c: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x13199cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x1319a0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1319a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1319a4: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1319A4u;
    {
        const bool branch_taken_0x1319a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319a4) {
            ctx->pc = 0x1319A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1319A4u;
            // 0x1319a8: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1319F8u;
            goto label_1319f8;
        }
    }
    ctx->pc = 0x1319ACu;
    // 0x1319ac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1319acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1319b0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1319B0u;
    {
        const bool branch_taken_0x1319b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319b0) {
            ctx->pc = 0x1319B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1319B0u;
            // 0x1319b4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1319E0u;
            goto label_1319e0;
        }
    }
    ctx->pc = 0x1319B8u;
    // 0x1319b8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1319B8u;
    {
        const bool branch_taken_0x1319b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319b8) {
            ctx->pc = 0x1319BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1319B8u;
            // 0x1319bc: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1319C8u;
            goto label_1319c8;
        }
    }
    ctx->pc = 0x1319C0u;
    // 0x1319c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1319C0u;
    {
        const bool branch_taken_0x1319c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1319C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1319C0u;
            // 0x1319c4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319c0) {
            ctx->pc = 0x131A10u;
            goto label_131a10;
        }
    }
    ctx->pc = 0x1319C8u;
label_1319c8:
    // 0x1319c8: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1319c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1319cc: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1319ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1319d0: 0xc04d384  jal         func_134E10
    ctx->pc = 0x1319D0u;
    SET_GPR_U32(ctx, 31, 0x1319D8u);
    ctx->pc = 0x1319D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1319D0u;
            // 0x1319d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319D8u; }
        if (ctx->pc != 0x1319D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319D8u; }
        if (ctx->pc != 0x1319D8u) { return; }
    }
    ctx->pc = 0x1319D8u;
label_1319d8:
    // 0x1319d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1319D8u;
    {
        const bool branch_taken_0x1319d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319d8) {
            ctx->pc = 0x131A20u;
            goto label_131a20;
        }
    }
    ctx->pc = 0x1319E0u;
label_1319e0:
    // 0x1319e0: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1319e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1319e4: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1319e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1319e8: 0xc04d3f4  jal         func_134FD0
    ctx->pc = 0x1319E8u;
    SET_GPR_U32(ctx, 31, 0x1319F0u);
    ctx->pc = 0x1319ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1319E8u;
            // 0x1319ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FD0u;
    if (runtime->hasFunction(0x134FD0u)) {
        auto targetFn = runtime->lookupFunction(0x134FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319F0u; }
        if (ctx->pc != 0x1319F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1319F0u; }
        if (ctx->pc != 0x1319F0u) { return; }
    }
    ctx->pc = 0x1319F0u;
label_1319f0:
    // 0x1319f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1319F0u;
    {
        const bool branch_taken_0x1319f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319f0) {
            ctx->pc = 0x131A20u;
            goto label_131a20;
        }
    }
    ctx->pc = 0x1319F8u;
label_1319f8:
    // 0x1319f8: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1319f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1319fc: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1319fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x131a00: 0xc04d464  jal         func_135190
    ctx->pc = 0x131A00u;
    SET_GPR_U32(ctx, 31, 0x131A08u);
    ctx->pc = 0x131A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A00u;
            // 0x131a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135190u;
    if (runtime->hasFunction(0x135190u)) {
        auto targetFn = runtime->lookupFunction(0x135190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A08u; }
        if (ctx->pc != 0x131A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135190_0x135190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A08u; }
        if (ctx->pc != 0x131A08u) { return; }
    }
    ctx->pc = 0x131A08u;
label_131a08:
    // 0x131a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131A20u;
            goto label_131a20;
        }
    }
    ctx->pc = 0x131A10u;
label_131a10:
    // 0x131a10: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x131a14: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x131a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x131a18: 0xc04d384  jal         func_134E10
    ctx->pc = 0x131A18u;
    SET_GPR_U32(ctx, 31, 0x131A20u);
    ctx->pc = 0x131A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A18u;
            // 0x131a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A20u; }
        if (ctx->pc != 0x131A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A20u; }
        if (ctx->pc != 0x131A20u) { return; }
    }
    ctx->pc = 0x131A20u;
label_131a20:
    // 0x131a20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_131a24:
    // 0x131a24: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x131a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x131a28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x131A28u;
    {
        const bool branch_taken_0x131a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131a28) {
            ctx->pc = 0x131A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131A28u;
            // 0x131a2c: 0xc654000c  lwc1        $f20, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x131A44u;
            goto label_131a44;
        }
    }
    ctx->pc = 0x131A30u;
    // 0x131a30: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x131a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x131a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a38: 0xc04cd60  jal         func_133580
    ctx->pc = 0x131A38u;
    SET_GPR_U32(ctx, 31, 0x131A40u);
    ctx->pc = 0x131A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A38u;
            // 0x131a3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A40u; }
        if (ctx->pc != 0x131A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A40u; }
        if (ctx->pc != 0x131A40u) { return; }
    }
    ctx->pc = 0x131A40u;
label_131a40:
    // 0x131a40: 0xc654000c  lwc1        $f20, 0xC($s2)
    ctx->pc = 0x131a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_131a44:
    // 0x131a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131a48: 0x0  nop
    ctx->pc = 0x131a48u;
    // NOP
    // 0x131a4c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x131a4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131a50: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x131A50u;
    {
        const bool branch_taken_0x131a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131a50) {
            ctx->pc = 0x131A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131A50u;
            // 0x131a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131A60u;
            goto label_131a60;
        }
    }
    ctx->pc = 0x131A58u;
    // 0x131a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131A58u;
    {
        const bool branch_taken_0x131a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131A58u;
            // 0x131a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a58) {
            ctx->pc = 0x131A78u;
            goto label_131a78;
        }
    }
    ctx->pc = 0x131A60u;
label_131a60:
    // 0x131a60: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x131A60u;
    SET_GPR_U32(ctx, 31, 0x131A68u);
    ctx->pc = 0x131AB0u;
    if (runtime->hasFunction(0x131AB0u)) {
        auto targetFn = runtime->lookupFunction(0x131AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A68u; }
        if (ctx->pc != 0x131A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AB0_0x131ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A68u; }
        if (ctx->pc != 0x131A68u) { return; }
    }
    ctx->pc = 0x131A68u;
label_131a68:
    // 0x131a68: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x131a68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x131a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a70: 0xc04c408  jal         func_131020
    ctx->pc = 0x131A70u;
    SET_GPR_U32(ctx, 31, 0x131A78u);
    ctx->pc = 0x131A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131A70u;
            // 0x131a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131020u;
    if (runtime->hasFunction(0x131020u)) {
        auto targetFn = runtime->lookupFunction(0x131020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A78u; }
        if (ctx->pc != 0x131A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131020_0x131020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131A78u; }
        if (ctx->pc != 0x131A78u) { return; }
    }
    ctx->pc = 0x131A78u;
label_131a78:
    // 0x131a78: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x131a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x131a7c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131A7Cu;
    {
        const bool branch_taken_0x131a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a7c) {
            ctx->pc = 0x131A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131A7Cu;
            // 0x131a80: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131A8Cu;
            goto label_131a8c;
        }
    }
    ctx->pc = 0x131A84u;
    // 0x131a84: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x131a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x131a88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_131a8c:
    // 0x131a8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131a90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x131a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a94: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x131a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x131a98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x131a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131a9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x131a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x131AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131AA0u;
            // 0x131aa4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131AA8u;
    // 0x131aa8: 0x0  nop
    ctx->pc = 0x131aa8u;
    // NOP
    // 0x131aac: 0x0  nop
    ctx->pc = 0x131aacu;
    // NOP
}
