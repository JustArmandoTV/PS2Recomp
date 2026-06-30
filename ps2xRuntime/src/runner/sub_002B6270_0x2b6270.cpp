#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6270
// Address: 0x2b6270 - 0x2b68b0
void sub_002B6270_0x2b6270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6270_0x2b6270");
#endif

    switch (ctx->pc) {
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62f8u: goto label_2b62f8;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6318u: goto label_2b6318;
        case 0x2b6340u: goto label_2b6340;
        case 0x2b6354u: goto label_2b6354;
        case 0x2b6360u: goto label_2b6360;
        case 0x2b6374u: goto label_2b6374;
        case 0x2b6394u: goto label_2b6394;
        case 0x2b63a0u: goto label_2b63a0;
        case 0x2b63acu: goto label_2b63ac;
        case 0x2b63b8u: goto label_2b63b8;
        case 0x2b63c0u: goto label_2b63c0;
        case 0x2b63c8u: goto label_2b63c8;
        case 0x2b63d4u: goto label_2b63d4;
        case 0x2b63e0u: goto label_2b63e0;
        case 0x2b63e8u: goto label_2b63e8;
        case 0x2b63f4u: goto label_2b63f4;
        case 0x2b63fcu: goto label_2b63fc;
        case 0x2b6404u: goto label_2b6404;
        case 0x2b640cu: goto label_2b640c;
        case 0x2b6414u: goto label_2b6414;
        case 0x2b6438u: goto label_2b6438;
        case 0x2b6444u: goto label_2b6444;
        case 0x2b6450u: goto label_2b6450;
        case 0x2b6540u: goto label_2b6540;
        case 0x2b65c8u: goto label_2b65c8;
        case 0x2b65d4u: goto label_2b65d4;
        case 0x2b65f8u: goto label_2b65f8;
        case 0x2b6604u: goto label_2b6604;
        case 0x2b660cu: goto label_2b660c;
        case 0x2b6614u: goto label_2b6614;
        case 0x2b661cu: goto label_2b661c;
        case 0x2b6624u: goto label_2b6624;
        case 0x2b662cu: goto label_2b662c;
        case 0x2b6634u: goto label_2b6634;
        case 0x2b663cu: goto label_2b663c;
        case 0x2b6644u: goto label_2b6644;
        case 0x2b6654u: goto label_2b6654;
        case 0x2b6664u: goto label_2b6664;
        case 0x2b6674u: goto label_2b6674;
        case 0x2b6684u: goto label_2b6684;
        case 0x2b6694u: goto label_2b6694;
        case 0x2b66a4u: goto label_2b66a4;
        case 0x2b66b4u: goto label_2b66b4;
        case 0x2b66c4u: goto label_2b66c4;
        case 0x2b66d4u: goto label_2b66d4;
        case 0x2b66e4u: goto label_2b66e4;
        case 0x2b66f4u: goto label_2b66f4;
        case 0x2b6704u: goto label_2b6704;
        case 0x2b6714u: goto label_2b6714;
        case 0x2b6724u: goto label_2b6724;
        case 0x2b6734u: goto label_2b6734;
        case 0x2b6744u: goto label_2b6744;
        case 0x2b674cu: goto label_2b674c;
        case 0x2b6754u: goto label_2b6754;
        case 0x2b6778u: goto label_2b6778;
        case 0x2b6780u: goto label_2b6780;
        case 0x2b6798u: goto label_2b6798;
        case 0x2b67a0u: goto label_2b67a0;
        case 0x2b67b8u: goto label_2b67b8;
        case 0x2b67d0u: goto label_2b67d0;
        case 0x2b67f8u: goto label_2b67f8;
        case 0x2b6820u: goto label_2b6820;
        case 0x2b6844u: goto label_2b6844;
        default: break;
    }

    ctx->pc = 0x2b6270u;

    // 0x2b6270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b6270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b6274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b6274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b6278: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b6278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b627c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2b627cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2b6280: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2b6280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2b6284: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2b6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2b6288: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b6288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2b628c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2b6290: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b6290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6294: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b6294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b6298: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b6298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b629c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b62a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b62a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b62a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b62a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b62a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b62a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b62ac: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x2b62acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x2b62b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b62b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b62b4: 0x26310e84  addiu       $s1, $s1, 0xE84
    ctx->pc = 0x2b62b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3716));
    // 0x2b62b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b62b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b62bc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x2b62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2b62c0: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x2b62c4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b62c8: 0x8c97077c  lw          $s7, 0x77C($a0)
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
    // 0x2b62cc: 0xc455c6d8  lwc1        $f21, -0x3928($v0)
    ctx->pc = 0x2b62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b62d0: 0x8c7e0084  lw          $fp, 0x84($v1)
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2b62d4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b62d8: 0xc454c6e0  lwc1        $f20, -0x3920($v0)
    ctx->pc = 0x2b62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b62dc:
    // 0x2b62dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2b62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b62e0: 0x13c20003  beq         $fp, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B62E0u;
    {
        const bool branch_taken_0x2b62e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b62e0) {
            ctx->pc = 0x2B62F0u;
            goto label_2b62f0;
        }
    }
    ctx->pc = 0x2B62E8u;
    // 0x2b62e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B62E8u;
    {
        const bool branch_taken_0x2b62e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b62e8) {
            ctx->pc = 0x2B6338u;
            goto label_2b6338;
        }
    }
    ctx->pc = 0x2B62F0u;
label_2b62f0:
    // 0x2b62f0: 0xc040180  jal         func_100600
    ctx->pc = 0x2B62F0u;
    SET_GPR_U32(ctx, 31, 0x2B62F8u);
    ctx->pc = 0x2B62F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62F0u;
            // 0x2b62f4: 0x24041240  addiu       $a0, $zero, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B62F8u; }
        if (ctx->pc != 0x2B62F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B62F8u; }
        if (ctx->pc != 0x2B62F8u) { return; }
    }
    ctx->pc = 0x2B62F8u;
label_2b62f8:
    // 0x2b62f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B62F8u;
    {
        const bool branch_taken_0x2b62f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B62FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62F8u;
            // 0x2b62fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62f8) {
            ctx->pc = 0x2B6330u;
            goto label_2b6330;
        }
    }
    ctx->pc = 0x2B6300u;
    // 0x2b6300: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b6300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6304: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2B6304u;
    SET_GPR_U32(ctx, 31, 0x2B630Cu);
    ctx->pc = 0x2B6308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6304u;
            // 0x2b6308: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (runtime->hasFunction(0x2D1620u)) {
        auto targetFn = runtime->lookupFunction(0x2D1620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B630Cu; }
        if (ctx->pc != 0x2B630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1620_0x2d1620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B630Cu; }
        if (ctx->pc != 0x2B630Cu) { return; }
    }
    ctx->pc = 0x2B630Cu;
label_2b630c:
    // 0x2b630c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b630cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6310: 0xc0adc74  jal         func_2B71D0
    ctx->pc = 0x2B6310u;
    SET_GPR_U32(ctx, 31, 0x2B6318u);
    ctx->pc = 0x2B6314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6310u;
            // 0x2b6314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B71D0u;
    if (runtime->hasFunction(0x2B71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6318u; }
        if (ctx->pc != 0x2B6318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71D0_0x2b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6318u; }
        if (ctx->pc != 0x2B6318u) { return; }
    }
    ctx->pc = 0x2B6318u;
label_2b6318:
    // 0x2b6318: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2b6318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2b631c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2b631cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2b6320: 0x24845650  addiu       $a0, $a0, 0x5650
    ctx->pc = 0x2b6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22096));
    // 0x2b6324: 0x24635678  addiu       $v1, $v1, 0x5678
    ctx->pc = 0x2b6324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22136));
    // 0x2b6328: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b6328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2b632c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2b632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2b6330:
    // 0x2b6330: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x2B6330u;
    {
        const bool branch_taken_0x2b6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6330u;
            // 0x2b6334: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6330) {
            ctx->pc = 0x2B6868u;
            goto label_2b6868;
        }
    }
    ctx->pc = 0x2B6338u;
label_2b6338:
    // 0x2b6338: 0xc040180  jal         func_100600
    ctx->pc = 0x2B6338u;
    SET_GPR_U32(ctx, 31, 0x2B6340u);
    ctx->pc = 0x2B633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6338u;
            // 0x2b633c: 0x24041240  addiu       $a0, $zero, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6340u; }
        if (ctx->pc != 0x2B6340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6340u; }
        if (ctx->pc != 0x2B6340u) { return; }
    }
    ctx->pc = 0x2B6340u;
label_2b6340:
    // 0x2b6340: 0x10400147  beqz        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x2B6340u;
    {
        const bool branch_taken_0x2b6340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6340u;
            // 0x2b6344: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6340) {
            ctx->pc = 0x2B6860u;
            goto label_2b6860;
        }
    }
    ctx->pc = 0x2B6348u;
    // 0x2b6348: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b6348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b634c: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2B634Cu;
    SET_GPR_U32(ctx, 31, 0x2B6354u);
    ctx->pc = 0x2B6350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B634Cu;
            // 0x2b6350: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (runtime->hasFunction(0x2D1620u)) {
        auto targetFn = runtime->lookupFunction(0x2D1620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6354u; }
        if (ctx->pc != 0x2B6354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1620_0x2d1620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6354u; }
        if (ctx->pc != 0x2B6354u) { return; }
    }
    ctx->pc = 0x2B6354u;
label_2b6354:
    // 0x2b6354: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b6354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6358: 0xc0adc40  jal         func_2B7100
    ctx->pc = 0x2B6358u;
    SET_GPR_U32(ctx, 31, 0x2B6360u);
    ctx->pc = 0x2B635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6358u;
            // 0x2b635c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7100u;
    if (runtime->hasFunction(0x2B7100u)) {
        auto targetFn = runtime->lookupFunction(0x2B7100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6360u; }
        if (ctx->pc != 0x2B6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7100_0x2b7100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6360u; }
        if (ctx->pc != 0x2B6360u) { return; }
    }
    ctx->pc = 0x2B6360u;
label_2b6360:
    // 0x2b6360: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b6360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b6364: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x2b6364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2b6368: 0x34458704  ori         $a1, $v0, 0x8704
    ctx->pc = 0x2b6368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34564);
    // 0x2b636c: 0xc0adc28  jal         func_2B70A0
    ctx->pc = 0x2B636Cu;
    SET_GPR_U32(ctx, 31, 0x2B6374u);
    ctx->pc = 0x2B6370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B636Cu;
            // 0x2b6370: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B70A0u;
    if (runtime->hasFunction(0x2B70A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B70A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6374u; }
        if (ctx->pc != 0x2B6374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B70A0_0x2b70a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6374u; }
        if (ctx->pc != 0x2B6374u) { return; }
    }
    ctx->pc = 0x2B6374u;
label_2b6374:
    // 0x2b6374: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b6374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b6378: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b637c: 0x2463cf40  addiu       $v1, $v1, -0x30C0
    ctx->pc = 0x2b637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954816));
    // 0x2b6380: 0x2442cf68  addiu       $v0, $v0, -0x3098
    ctx->pc = 0x2b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954856));
    // 0x2b6384: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2b6384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2b6388: 0x26840440  addiu       $a0, $s4, 0x440
    ctx->pc = 0x2b6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
    // 0x2b638c: 0xc0adc0c  jal         func_2B7030
    ctx->pc = 0x2B638Cu;
    SET_GPR_U32(ctx, 31, 0x2B6394u);
    ctx->pc = 0x2B6390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B638Cu;
            // 0x2b6390: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7030u;
    if (runtime->hasFunction(0x2B7030u)) {
        auto targetFn = runtime->lookupFunction(0x2B7030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6394u; }
        if (ctx->pc != 0x2B6394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7030_0x2b7030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6394u; }
        if (ctx->pc != 0x2B6394u) { return; }
    }
    ctx->pc = 0x2B6394u;
label_2b6394:
    // 0x2b6394: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x2b6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
    // 0x2b6398: 0xc0adc00  jal         func_2B7000
    ctx->pc = 0x2B6398u;
    SET_GPR_U32(ctx, 31, 0x2B63A0u);
    ctx->pc = 0x2B639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6398u;
            // 0x2b639c: 0xae800550  sw          $zero, 0x550($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7000u;
    if (runtime->hasFunction(0x2B7000u)) {
        auto targetFn = runtime->lookupFunction(0x2B7000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63A0u; }
        if (ctx->pc != 0x2B63A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7000_0x2b7000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63A0u; }
        if (ctx->pc != 0x2B63A0u) { return; }
    }
    ctx->pc = 0x2B63A0u;
label_2b63a0:
    // 0x2b63a0: 0x26840580  addiu       $a0, $s4, 0x580
    ctx->pc = 0x2b63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
    // 0x2b63a4: 0xc0adbb8  jal         func_2B6EE0
    ctx->pc = 0x2B63A4u;
    SET_GPR_U32(ctx, 31, 0x2B63ACu);
    ctx->pc = 0x2B63A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63A4u;
            // 0x2b63a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EE0u;
    if (runtime->hasFunction(0x2B6EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63ACu; }
        if (ctx->pc != 0x2B63ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EE0_0x2b6ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63ACu; }
        if (ctx->pc != 0x2B63ACu) { return; }
    }
    ctx->pc = 0x2B63ACu;
label_2b63ac:
    // 0x2b63ac: 0x268406b0  addiu       $a0, $s4, 0x6B0
    ctx->pc = 0x2b63acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1712));
    // 0x2b63b0: 0xc0adbb8  jal         func_2B6EE0
    ctx->pc = 0x2B63B0u;
    SET_GPR_U32(ctx, 31, 0x2B63B8u);
    ctx->pc = 0x2B63B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63B0u;
            // 0x2b63b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6EE0u;
    if (runtime->hasFunction(0x2B6EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63B8u; }
        if (ctx->pc != 0x2B63B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6EE0_0x2b6ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63B8u; }
        if (ctx->pc != 0x2B63B8u) { return; }
    }
    ctx->pc = 0x2B63B8u;
label_2b63b8:
    // 0x2b63b8: 0xc0adb98  jal         func_2B6E60
    ctx->pc = 0x2B63B8u;
    SET_GPR_U32(ctx, 31, 0x2B63C0u);
    ctx->pc = 0x2B63BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63B8u;
            // 0x2b63bc: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63C0u; }
        if (ctx->pc != 0x2B63C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63C0u; }
        if (ctx->pc != 0x2B63C0u) { return; }
    }
    ctx->pc = 0x2B63C0u;
label_2b63c0:
    // 0x2b63c0: 0xc0adb98  jal         func_2B6E60
    ctx->pc = 0x2B63C0u;
    SET_GPR_U32(ctx, 31, 0x2B63C8u);
    ctx->pc = 0x2B63C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63C0u;
            // 0x2b63c4: 0x26840890  addiu       $a0, $s4, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63C8u; }
        if (ctx->pc != 0x2B63C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63C8u; }
        if (ctx->pc != 0x2B63C8u) { return; }
    }
    ctx->pc = 0x2B63C8u;
label_2b63c8:
    // 0x2b63c8: 0x26840940  addiu       $a0, $s4, 0x940
    ctx->pc = 0x2b63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
    // 0x2b63cc: 0xc142d20  jal         func_50B480
    ctx->pc = 0x2B63CCu;
    SET_GPR_U32(ctx, 31, 0x2B63D4u);
    ctx->pc = 0x2B63D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63CCu;
            // 0x2b63d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B480u;
    if (runtime->hasFunction(0x50B480u)) {
        auto targetFn = runtime->lookupFunction(0x50B480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63D4u; }
        if (ctx->pc != 0x2B63D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B480_0x50b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63D4u; }
        if (ctx->pc != 0x2B63D4u) { return; }
    }
    ctx->pc = 0x2B63D4u;
label_2b63d4:
    // 0x2b63d4: 0x26840a50  addiu       $a0, $s4, 0xA50
    ctx->pc = 0x2b63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2640));
    // 0x2b63d8: 0xc0adafc  jal         func_2B6BF0
    ctx->pc = 0x2B63D8u;
    SET_GPR_U32(ctx, 31, 0x2B63E0u);
    ctx->pc = 0x2B63DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63D8u;
            // 0x2b63dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6BF0u;
    if (runtime->hasFunction(0x2B6BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63E0u; }
        if (ctx->pc != 0x2B63E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6BF0_0x2b6bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63E0u; }
        if (ctx->pc != 0x2B63E0u) { return; }
    }
    ctx->pc = 0x2B63E0u;
label_2b63e0:
    // 0x2b63e0: 0xc0adac4  jal         func_2B6B10
    ctx->pc = 0x2B63E0u;
    SET_GPR_U32(ctx, 31, 0x2B63E8u);
    ctx->pc = 0x2B63E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63E0u;
            // 0x2b63e4: 0x26840ab0  addiu       $a0, $s4, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B10u;
    if (runtime->hasFunction(0x2B6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63E8u; }
        if (ctx->pc != 0x2B63E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6B10_0x2b6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63E8u; }
        if (ctx->pc != 0x2B63E8u) { return; }
    }
    ctx->pc = 0x2B63E8u;
label_2b63e8:
    // 0x2b63e8: 0x26840bc0  addiu       $a0, $s4, 0xBC0
    ctx->pc = 0x2b63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3008));
    // 0x2b63ec: 0xc0adab0  jal         func_2B6AC0
    ctx->pc = 0x2B63ECu;
    SET_GPR_U32(ctx, 31, 0x2B63F4u);
    ctx->pc = 0x2B63F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63ECu;
            // 0x2b63f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AC0u;
    if (runtime->hasFunction(0x2B6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63F4u; }
        if (ctx->pc != 0x2B63F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6AC0_0x2b6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63F4u; }
        if (ctx->pc != 0x2B63F4u) { return; }
    }
    ctx->pc = 0x2B63F4u;
label_2b63f4:
    // 0x2b63f4: 0xc0ada8c  jal         func_2B6A30
    ctx->pc = 0x2B63F4u;
    SET_GPR_U32(ctx, 31, 0x2B63FCu);
    ctx->pc = 0x2B63F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63F4u;
            // 0x2b63f8: 0x26840bf0  addiu       $a0, $s4, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63FCu; }
        if (ctx->pc != 0x2B63FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63FCu; }
        if (ctx->pc != 0x2B63FCu) { return; }
    }
    ctx->pc = 0x2B63FCu;
label_2b63fc:
    // 0x2b63fc: 0xc0ada7c  jal         func_2B69F0
    ctx->pc = 0x2B63FCu;
    SET_GPR_U32(ctx, 31, 0x2B6404u);
    ctx->pc = 0x2B6400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63FCu;
            // 0x2b6400: 0x26840c50  addiu       $a0, $s4, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B69F0u;
    if (runtime->hasFunction(0x2B69F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B69F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6404u; }
        if (ctx->pc != 0x2B6404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B69F0_0x2b69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6404u; }
        if (ctx->pc != 0x2B6404u) { return; }
    }
    ctx->pc = 0x2B6404u;
label_2b6404:
    // 0x2b6404: 0xc0778a0  jal         func_1DE280
    ctx->pc = 0x2B6404u;
    SET_GPR_U32(ctx, 31, 0x2B640Cu);
    ctx->pc = 0x2B6408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6404u;
            // 0x2b6408: 0x26840c6c  addiu       $a0, $s4, 0xC6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE280u;
    if (runtime->hasFunction(0x1DE280u)) {
        auto targetFn = runtime->lookupFunction(0x1DE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B640Cu; }
        if (ctx->pc != 0x2B640Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE280_0x1de280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B640Cu; }
        if (ctx->pc != 0x2B640Cu) { return; }
    }
    ctx->pc = 0x2B640Cu;
label_2b640c:
    // 0x2b640c: 0xc0ada6c  jal         func_2B69B0
    ctx->pc = 0x2B640Cu;
    SET_GPR_U32(ctx, 31, 0x2B6414u);
    ctx->pc = 0x2B6410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B640Cu;
            // 0x2b6410: 0x26840c90  addiu       $a0, $s4, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B69B0u;
    if (runtime->hasFunction(0x2B69B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B69B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6414u; }
        if (ctx->pc != 0x2B6414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B69B0_0x2b69b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6414u; }
        if (ctx->pc != 0x2B6414u) { return; }
    }
    ctx->pc = 0x2B6414u;
label_2b6414:
    // 0x2b6414: 0xae800d60  sw          $zero, 0xD60($s4)
    ctx->pc = 0x2b6414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3424), GPR_U32(ctx, 0));
    // 0x2b6418: 0xae800d64  sw          $zero, 0xD64($s4)
    ctx->pc = 0x2b6418u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3428), GPR_U32(ctx, 0));
    // 0x2b641c: 0xae800d68  sw          $zero, 0xD68($s4)
    ctx->pc = 0x2b641cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3432), GPR_U32(ctx, 0));
    // 0x2b6420: 0xae800d6c  sw          $zero, 0xD6C($s4)
    ctx->pc = 0x2b6420u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3436), GPR_U32(ctx, 0));
    // 0x2b6424: 0xae800d70  sw          $zero, 0xD70($s4)
    ctx->pc = 0x2b6424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3440), GPR_U32(ctx, 0));
    // 0x2b6428: 0xae800d74  sw          $zero, 0xD74($s4)
    ctx->pc = 0x2b6428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3444), GPR_U32(ctx, 0));
    // 0x2b642c: 0xae800d78  sw          $zero, 0xD78($s4)
    ctx->pc = 0x2b642cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3448), GPR_U32(ctx, 0));
    // 0x2b6430: 0xc0b36b0  jal         func_2CDAC0
    ctx->pc = 0x2B6430u;
    SET_GPR_U32(ctx, 31, 0x2B6438u);
    ctx->pc = 0x2B6434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6430u;
            // 0x2b6434: 0xae800d7c  sw          $zero, 0xD7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAC0u;
    if (runtime->hasFunction(0x2CDAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6438u; }
        if (ctx->pc != 0x2B6438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAC0_0x2cdac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6438u; }
        if (ctx->pc != 0x2B6438u) { return; }
    }
    ctx->pc = 0x2B6438u;
label_2b6438:
    // 0x2b6438: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2b6438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b643c: 0xc0ada60  jal         func_2B6980
    ctx->pc = 0x2B643Cu;
    SET_GPR_U32(ctx, 31, 0x2B6444u);
    ctx->pc = 0x2B6440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B643Cu;
            // 0x2b6440: 0x26840d80  addiu       $a0, $s4, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6980u;
    if (runtime->hasFunction(0x2B6980u)) {
        auto targetFn = runtime->lookupFunction(0x2B6980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6444u; }
        if (ctx->pc != 0x2B6444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6980_0x2b6980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6444u; }
        if (ctx->pc != 0x2B6444u) { return; }
    }
    ctx->pc = 0x2B6444u;
label_2b6444:
    // 0x2b6444: 0x26840d94  addiu       $a0, $s4, 0xD94
    ctx->pc = 0x2b6444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3476));
    // 0x2b6448: 0xc0ada5c  jal         func_2B6970
    ctx->pc = 0x2B6448u;
    SET_GPR_U32(ctx, 31, 0x2B6450u);
    ctx->pc = 0x2B644Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6448u;
            // 0x2b644c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6970u;
    if (runtime->hasFunction(0x2B6970u)) {
        auto targetFn = runtime->lookupFunction(0x2B6970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6450u; }
        if (ctx->pc != 0x2B6450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6970_0x2b6970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6450u; }
        if (ctx->pc != 0x2B6450u) { return; }
    }
    ctx->pc = 0x2B6450u;
label_2b6450:
    // 0x2b6450: 0xae800d98  sw          $zero, 0xD98($s4)
    ctx->pc = 0x2b6450u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3480), GPR_U32(ctx, 0));
    // 0x2b6454: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2b6454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2b6458: 0xae820d9c  sw          $v0, 0xD9C($s4)
    ctx->pc = 0x2b6458u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 2));
    // 0x2b645c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b645cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6460: 0xae800da0  sw          $zero, 0xDA0($s4)
    ctx->pc = 0x2b6460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3488), GPR_U32(ctx, 0));
    // 0x2b6464: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2b6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b6468: 0xae800da4  sw          $zero, 0xDA4($s4)
    ctx->pc = 0x2b6468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3492), GPR_U32(ctx, 0));
    // 0x2b646c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6470: 0xae800da8  sw          $zero, 0xDA8($s4)
    ctx->pc = 0x2b6470u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3496), GPR_U32(ctx, 0));
    // 0x2b6474: 0x26841150  addiu       $a0, $s4, 0x1150
    ctx->pc = 0x2b6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
    // 0x2b6478: 0xae800dac  sw          $zero, 0xDAC($s4)
    ctx->pc = 0x2b6478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3500), GPR_U32(ctx, 0));
    // 0x2b647c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6480: 0xae860db0  sw          $a2, 0xDB0($s4)
    ctx->pc = 0x2b6480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3504), GPR_U32(ctx, 6));
    // 0x2b6484: 0xae860db4  sw          $a2, 0xDB4($s4)
    ctx->pc = 0x2b6484u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3508), GPR_U32(ctx, 6));
    // 0x2b6488: 0xae830db8  sw          $v1, 0xDB8($s4)
    ctx->pc = 0x2b6488u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 3));
    // 0x2b648c: 0xae820dbc  sw          $v0, 0xDBC($s4)
    ctx->pc = 0x2b648cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3516), GPR_U32(ctx, 2));
    // 0x2b6490: 0xae800dc0  sw          $zero, 0xDC0($s4)
    ctx->pc = 0x2b6490u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3520), GPR_U32(ctx, 0));
    // 0x2b6494: 0xae800dc4  sw          $zero, 0xDC4($s4)
    ctx->pc = 0x2b6494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3524), GPR_U32(ctx, 0));
    // 0x2b6498: 0xae800dc8  sw          $zero, 0xDC8($s4)
    ctx->pc = 0x2b6498u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3528), GPR_U32(ctx, 0));
    // 0x2b649c: 0xae800dcc  sw          $zero, 0xDCC($s4)
    ctx->pc = 0x2b649cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3532), GPR_U32(ctx, 0));
    // 0x2b64a0: 0xae800dd0  sw          $zero, 0xDD0($s4)
    ctx->pc = 0x2b64a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3536), GPR_U32(ctx, 0));
    // 0x2b64a4: 0xae800dd4  sw          $zero, 0xDD4($s4)
    ctx->pc = 0x2b64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3540), GPR_U32(ctx, 0));
    // 0x2b64a8: 0xae800dd8  sw          $zero, 0xDD8($s4)
    ctx->pc = 0x2b64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3544), GPR_U32(ctx, 0));
    // 0x2b64ac: 0xae800ddc  sw          $zero, 0xDDC($s4)
    ctx->pc = 0x2b64acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3548), GPR_U32(ctx, 0));
    // 0x2b64b0: 0xae820de0  sw          $v0, 0xDE0($s4)
    ctx->pc = 0x2b64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3552), GPR_U32(ctx, 2));
    // 0x2b64b4: 0xae800de4  sw          $zero, 0xDE4($s4)
    ctx->pc = 0x2b64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3556), GPR_U32(ctx, 0));
    // 0x2b64b8: 0xae800de8  sw          $zero, 0xDE8($s4)
    ctx->pc = 0x2b64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
    // 0x2b64bc: 0xae800dec  sw          $zero, 0xDEC($s4)
    ctx->pc = 0x2b64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3564), GPR_U32(ctx, 0));
    // 0x2b64c0: 0xae820df0  sw          $v0, 0xDF0($s4)
    ctx->pc = 0x2b64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3568), GPR_U32(ctx, 2));
    // 0x2b64c4: 0xae800df4  sw          $zero, 0xDF4($s4)
    ctx->pc = 0x2b64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3572), GPR_U32(ctx, 0));
    // 0x2b64c8: 0xae800df8  sw          $zero, 0xDF8($s4)
    ctx->pc = 0x2b64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3576), GPR_U32(ctx, 0));
    // 0x2b64cc: 0xae800dfc  sw          $zero, 0xDFC($s4)
    ctx->pc = 0x2b64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3580), GPR_U32(ctx, 0));
    // 0x2b64d0: 0xae800e00  sw          $zero, 0xE00($s4)
    ctx->pc = 0x2b64d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3584), GPR_U32(ctx, 0));
    // 0x2b64d4: 0xae800e04  sw          $zero, 0xE04($s4)
    ctx->pc = 0x2b64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3588), GPR_U32(ctx, 0));
    // 0x2b64d8: 0xae820e08  sw          $v0, 0xE08($s4)
    ctx->pc = 0x2b64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3592), GPR_U32(ctx, 2));
    // 0x2b64dc: 0xae800e0c  sw          $zero, 0xE0C($s4)
    ctx->pc = 0x2b64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3596), GPR_U32(ctx, 0));
    // 0x2b64e0: 0xae800e10  sw          $zero, 0xE10($s4)
    ctx->pc = 0x2b64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3600), GPR_U32(ctx, 0));
    // 0x2b64e4: 0xae800e14  sw          $zero, 0xE14($s4)
    ctx->pc = 0x2b64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3604), GPR_U32(ctx, 0));
    // 0x2b64e8: 0xae800e18  sw          $zero, 0xE18($s4)
    ctx->pc = 0x2b64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3608), GPR_U32(ctx, 0));
    // 0x2b64ec: 0xae800e28  sw          $zero, 0xE28($s4)
    ctx->pc = 0x2b64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3624), GPR_U32(ctx, 0));
    // 0x2b64f0: 0xae800e2c  sw          $zero, 0xE2C($s4)
    ctx->pc = 0x2b64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3628), GPR_U32(ctx, 0));
    // 0x2b64f4: 0xae800e30  sw          $zero, 0xE30($s4)
    ctx->pc = 0x2b64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3632), GPR_U32(ctx, 0));
    // 0x2b64f8: 0xae800e34  sw          $zero, 0xE34($s4)
    ctx->pc = 0x2b64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3636), GPR_U32(ctx, 0));
    // 0x2b64fc: 0xae800e38  sw          $zero, 0xE38($s4)
    ctx->pc = 0x2b64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3640), GPR_U32(ctx, 0));
    // 0x2b6500: 0xa2800e3c  sb          $zero, 0xE3C($s4)
    ctx->pc = 0x2b6500u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3644), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6504: 0xa2800e3d  sb          $zero, 0xE3D($s4)
    ctx->pc = 0x2b6504u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3645), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6508: 0xa2800e3e  sb          $zero, 0xE3E($s4)
    ctx->pc = 0x2b6508u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3646), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b650c: 0xa2800e3f  sb          $zero, 0xE3F($s4)
    ctx->pc = 0x2b650cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3647), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6510: 0xae800e64  sw          $zero, 0xE64($s4)
    ctx->pc = 0x2b6510u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3684), GPR_U32(ctx, 0));
    // 0x2b6514: 0xae800e68  sw          $zero, 0xE68($s4)
    ctx->pc = 0x2b6514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3688), GPR_U32(ctx, 0));
    // 0x2b6518: 0xae800e6c  sw          $zero, 0xE6C($s4)
    ctx->pc = 0x2b6518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3692), GPR_U32(ctx, 0));
    // 0x2b651c: 0xae800e70  sw          $zero, 0xE70($s4)
    ctx->pc = 0x2b651cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3696), GPR_U32(ctx, 0));
    // 0x2b6520: 0xae800e74  sw          $zero, 0xE74($s4)
    ctx->pc = 0x2b6520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3700), GPR_U32(ctx, 0));
    // 0x2b6524: 0xae800e98  sw          $zero, 0xE98($s4)
    ctx->pc = 0x2b6524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3736), GPR_U32(ctx, 0));
    // 0x2b6528: 0xae800e9c  sw          $zero, 0xE9C($s4)
    ctx->pc = 0x2b6528u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3740), GPR_U32(ctx, 0));
    // 0x2b652c: 0xae801140  sw          $zero, 0x1140($s4)
    ctx->pc = 0x2b652cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4416), GPR_U32(ctx, 0));
    // 0x2b6530: 0xae801144  sw          $zero, 0x1144($s4)
    ctx->pc = 0x2b6530u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4420), GPR_U32(ctx, 0));
    // 0x2b6534: 0xae801148  sw          $zero, 0x1148($s4)
    ctx->pc = 0x2b6534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4424), GPR_U32(ctx, 0));
    // 0x2b6538: 0xc12cac0  jal         func_4B2B00
    ctx->pc = 0x2B6538u;
    SET_GPR_U32(ctx, 31, 0x2B6540u);
    ctx->pc = 0x2B653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6538u;
            // 0x2b653c: 0xae80114c  sw          $zero, 0x114C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B00u;
    if (runtime->hasFunction(0x4B2B00u)) {
        auto targetFn = runtime->lookupFunction(0x4B2B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6540u; }
        if (ctx->pc != 0x2B6540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2B00_0x4b2b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6540u; }
        if (ctx->pc != 0x2B6540u) { return; }
    }
    ctx->pc = 0x2B6540u;
label_2b6540:
    // 0x2b6540: 0xae80117c  sw          $zero, 0x117C($s4)
    ctx->pc = 0x2b6540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4476), GPR_U32(ctx, 0));
    // 0x2b6544: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2b6544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6548: 0xae801180  sw          $zero, 0x1180($s4)
    ctx->pc = 0x2b6548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4480), GPR_U32(ctx, 0));
    // 0x2b654c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6550: 0xae801188  sw          $zero, 0x1188($s4)
    ctx->pc = 0x2b6550u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4488), GPR_U32(ctx, 0));
    // 0x2b6554: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6558: 0xae801190  sw          $zero, 0x1190($s4)
    ctx->pc = 0x2b6558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4496), GPR_U32(ctx, 0));
    // 0x2b655c: 0x268411f4  addiu       $a0, $s4, 0x11F4
    ctx->pc = 0x2b655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4596));
    // 0x2b6560: 0xae851194  sw          $a1, 0x1194($s4)
    ctx->pc = 0x2b6560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4500), GPR_U32(ctx, 5));
    // 0x2b6564: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b6564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2b6568: 0xae801198  sw          $zero, 0x1198($s4)
    ctx->pc = 0x2b6568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4504), GPR_U32(ctx, 0));
    // 0x2b656c: 0xa680119c  sh          $zero, 0x119C($s4)
    ctx->pc = 0x2b656cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4508), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6570: 0xa280119e  sb          $zero, 0x119E($s4)
    ctx->pc = 0x2b6570u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4510), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6574: 0xa28311a1  sb          $v1, 0x11A1($s4)
    ctx->pc = 0x2b6574u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4513), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6578: 0xa28311a4  sb          $v1, 0x11A4($s4)
    ctx->pc = 0x2b6578u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4516), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b657c: 0xa28311a5  sb          $v1, 0x11A5($s4)
    ctx->pc = 0x2b657cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4517), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6580: 0xa28011a6  sb          $zero, 0x11A6($s4)
    ctx->pc = 0x2b6580u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4518), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6584: 0xa28011a7  sb          $zero, 0x11A7($s4)
    ctx->pc = 0x2b6584u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4519), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6588: 0xa28211a8  sb          $v0, 0x11A8($s4)
    ctx->pc = 0x2b6588u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4520), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b658c: 0xa28011a9  sb          $zero, 0x11A9($s4)
    ctx->pc = 0x2b658cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4521), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6590: 0xa28211aa  sb          $v0, 0x11AA($s4)
    ctx->pc = 0x2b6590u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4522), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b6594: 0xa28211ab  sb          $v0, 0x11AB($s4)
    ctx->pc = 0x2b6594u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4523), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b6598: 0xa28211ad  sb          $v0, 0x11AD($s4)
    ctx->pc = 0x2b6598u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4525), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b659c: 0xa28011c0  sb          $zero, 0x11C0($s4)
    ctx->pc = 0x2b659cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4544), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b65a0: 0xae8011c4  sw          $zero, 0x11C4($s4)
    ctx->pc = 0x2b65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4548), GPR_U32(ctx, 0));
    // 0x2b65a4: 0xae8011c8  sw          $zero, 0x11C8($s4)
    ctx->pc = 0x2b65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4552), GPR_U32(ctx, 0));
    // 0x2b65a8: 0xa28011cc  sb          $zero, 0x11CC($s4)
    ctx->pc = 0x2b65a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4556), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b65ac: 0xae8511d0  sw          $a1, 0x11D0($s4)
    ctx->pc = 0x2b65acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4560), GPR_U32(ctx, 5));
    // 0x2b65b0: 0xae8011d4  sw          $zero, 0x11D4($s4)
    ctx->pc = 0x2b65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4564), GPR_U32(ctx, 0));
    // 0x2b65b4: 0xae8011d8  sw          $zero, 0x11D8($s4)
    ctx->pc = 0x2b65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4568), GPR_U32(ctx, 0));
    // 0x2b65b8: 0xae8311dc  sw          $v1, 0x11DC($s4)
    ctx->pc = 0x2b65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4572), GPR_U32(ctx, 3));
    // 0x2b65bc: 0xae8011e0  sw          $zero, 0x11E0($s4)
    ctx->pc = 0x2b65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4576), GPR_U32(ctx, 0));
    // 0x2b65c0: 0xc0ada4c  jal         func_2B6930
    ctx->pc = 0x2B65C0u;
    SET_GPR_U32(ctx, 31, 0x2B65C8u);
    ctx->pc = 0x2B65C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65C0u;
            // 0x2b65c4: 0xae8011e4  sw          $zero, 0x11E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6930u;
    if (runtime->hasFunction(0x2B6930u)) {
        auto targetFn = runtime->lookupFunction(0x2B6930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65C8u; }
        if (ctx->pc != 0x2B65C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6930_0x2b6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65C8u; }
        if (ctx->pc != 0x2B65C8u) { return; }
    }
    ctx->pc = 0x2B65C8u;
label_2b65c8:
    // 0x2b65c8: 0x26841208  addiu       $a0, $s4, 0x1208
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4616));
    // 0x2b65cc: 0xc0ada4c  jal         func_2B6930
    ctx->pc = 0x2B65CCu;
    SET_GPR_U32(ctx, 31, 0x2B65D4u);
    ctx->pc = 0x2B65D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65CCu;
            // 0x2b65d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6930u;
    if (runtime->hasFunction(0x2B6930u)) {
        auto targetFn = runtime->lookupFunction(0x2B6930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65D4u; }
        if (ctx->pc != 0x2B65D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6930_0x2b6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65D4u; }
        if (ctx->pc != 0x2B65D4u) { return; }
    }
    ctx->pc = 0x2B65D4u;
label_2b65d4:
    // 0x2b65d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b65d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2b65d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2b65dc: 0xae821220  sw          $v0, 0x1220($s4)
    ctx->pc = 0x2b65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4640), GPR_U32(ctx, 2));
    // 0x2b65e0: 0x24841868  addiu       $a0, $a0, 0x1868
    ctx->pc = 0x2b65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6248));
    // 0x2b65e4: 0xae801224  sw          $zero, 0x1224($s4)
    ctx->pc = 0x2b65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4644), GPR_U32(ctx, 0));
    // 0x2b65e8: 0xae801228  sw          $zero, 0x1228($s4)
    ctx->pc = 0x2b65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4648), GPR_U32(ctx, 0));
    // 0x2b65ec: 0xae80122c  sw          $zero, 0x122C($s4)
    ctx->pc = 0x2b65ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4652), GPR_U32(ctx, 0));
    // 0x2b65f0: 0xc077c58  jal         func_1DF160
    ctx->pc = 0x2B65F0u;
    SET_GPR_U32(ctx, 31, 0x2B65F8u);
    ctx->pc = 0x2B65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65F0u;
            // 0x2b65f4: 0xae801230  sw          $zero, 0x1230($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF160u;
    if (runtime->hasFunction(0x1DF160u)) {
        auto targetFn = runtime->lookupFunction(0x1DF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65F8u; }
        if (ctx->pc != 0x2B65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF160_0x1df160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65F8u; }
        if (ctx->pc != 0x2B65F8u) { return; }
    }
    ctx->pc = 0x2B65F8u;
label_2b65f8:
    // 0x2b65f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b65f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65fc: 0xc0785dc  jal         func_1E1770
    ctx->pc = 0x2B65FCu;
    SET_GPR_U32(ctx, 31, 0x2B6604u);
    ctx->pc = 0x2B6600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B65FCu;
            // 0x2b6600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1770u;
    if (runtime->hasFunction(0x1E1770u)) {
        auto targetFn = runtime->lookupFunction(0x1E1770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6604u; }
        if (ctx->pc != 0x2B6604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1770_0x1e1770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6604u; }
        if (ctx->pc != 0x2B6604u) { return; }
    }
    ctx->pc = 0x2B6604u;
label_2b6604:
    // 0x2b6604: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6604u;
    SET_GPR_U32(ctx, 31, 0x2B660Cu);
    ctx->pc = 0x2B6608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6604u;
            // 0x2b6608: 0x26840140  addiu       $a0, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B660Cu; }
        if (ctx->pc != 0x2B660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B660Cu; }
        if (ctx->pc != 0x2B660Cu) { return; }
    }
    ctx->pc = 0x2B660Cu;
label_2b660c:
    // 0x2b660c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B660Cu;
    SET_GPR_U32(ctx, 31, 0x2B6614u);
    ctx->pc = 0x2B6610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B660Cu;
            // 0x2b6610: 0x268400c0  addiu       $a0, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6614u; }
        if (ctx->pc != 0x2B6614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6614u; }
        if (ctx->pc != 0x2B6614u) { return; }
    }
    ctx->pc = 0x2B6614u;
label_2b6614:
    // 0x2b6614: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6614u;
    SET_GPR_U32(ctx, 31, 0x2B661Cu);
    ctx->pc = 0x2B6618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6614u;
            // 0x2b6618: 0x26840100  addiu       $a0, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B661Cu; }
        if (ctx->pc != 0x2B661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B661Cu; }
        if (ctx->pc != 0x2B661Cu) { return; }
    }
    ctx->pc = 0x2B661Cu;
label_2b661c:
    // 0x2b661c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B661Cu;
    SET_GPR_U32(ctx, 31, 0x2B6624u);
    ctx->pc = 0x2B6620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B661Cu;
            // 0x2b6620: 0x26840180  addiu       $a0, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6624u; }
        if (ctx->pc != 0x2B6624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6624u; }
        if (ctx->pc != 0x2B6624u) { return; }
    }
    ctx->pc = 0x2B6624u;
label_2b6624:
    // 0x2b6624: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6624u;
    SET_GPR_U32(ctx, 31, 0x2B662Cu);
    ctx->pc = 0x2B6628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6624u;
            // 0x2b6628: 0x268401c0  addiu       $a0, $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B662Cu; }
        if (ctx->pc != 0x2B662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B662Cu; }
        if (ctx->pc != 0x2B662Cu) { return; }
    }
    ctx->pc = 0x2B662Cu;
label_2b662c:
    // 0x2b662c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B662Cu;
    SET_GPR_U32(ctx, 31, 0x2B6634u);
    ctx->pc = 0x2B6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B662Cu;
            // 0x2b6630: 0x26840200  addiu       $a0, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6634u; }
        if (ctx->pc != 0x2B6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6634u; }
        if (ctx->pc != 0x2B6634u) { return; }
    }
    ctx->pc = 0x2B6634u;
label_2b6634:
    // 0x2b6634: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6634u;
    SET_GPR_U32(ctx, 31, 0x2B663Cu);
    ctx->pc = 0x2B6638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6634u;
            // 0x2b6638: 0x26840240  addiu       $a0, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B663Cu; }
        if (ctx->pc != 0x2B663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B663Cu; }
        if (ctx->pc != 0x2B663Cu) { return; }
    }
    ctx->pc = 0x2B663Cu;
label_2b663c:
    // 0x2b663c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B663Cu;
    SET_GPR_U32(ctx, 31, 0x2B6644u);
    ctx->pc = 0x2B6640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B663Cu;
            // 0x2b6640: 0x26840280  addiu       $a0, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6644u; }
        if (ctx->pc != 0x2B6644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6644u; }
        if (ctx->pc != 0x2B6644u) { return; }
    }
    ctx->pc = 0x2B6644u;
label_2b6644:
    // 0x2b6644: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6648: 0x268402c0  addiu       $a0, $s4, 0x2C0
    ctx->pc = 0x2b6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
    // 0x2b664c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B664Cu;
    SET_GPR_U32(ctx, 31, 0x2B6654u);
    ctx->pc = 0x2B6650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B664Cu;
            // 0x2b6650: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6654u; }
        if (ctx->pc != 0x2B6654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6654u; }
        if (ctx->pc != 0x2B6654u) { return; }
    }
    ctx->pc = 0x2B6654u;
label_2b6654:
    // 0x2b6654: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6658: 0x268402d0  addiu       $a0, $s4, 0x2D0
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x2b665c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B665Cu;
    SET_GPR_U32(ctx, 31, 0x2B6664u);
    ctx->pc = 0x2B6660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B665Cu;
            // 0x2b6660: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6664u; }
        if (ctx->pc != 0x2B6664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6664u; }
        if (ctx->pc != 0x2B6664u) { return; }
    }
    ctx->pc = 0x2B6664u;
label_2b6664:
    // 0x2b6664: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6668: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x2b6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
    // 0x2b666c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B666Cu;
    SET_GPR_U32(ctx, 31, 0x2B6674u);
    ctx->pc = 0x2B6670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B666Cu;
            // 0x2b6670: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6674u; }
        if (ctx->pc != 0x2B6674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6674u; }
        if (ctx->pc != 0x2B6674u) { return; }
    }
    ctx->pc = 0x2B6674u;
label_2b6674:
    // 0x2b6674: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6678: 0x26840300  addiu       $a0, $s4, 0x300
    ctx->pc = 0x2b6678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
    // 0x2b667c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B667Cu;
    SET_GPR_U32(ctx, 31, 0x2B6684u);
    ctx->pc = 0x2B6680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B667Cu;
            // 0x2b6680: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6684u; }
        if (ctx->pc != 0x2B6684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6684u; }
        if (ctx->pc != 0x2B6684u) { return; }
    }
    ctx->pc = 0x2B6684u;
label_2b6684:
    // 0x2b6684: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6688: 0x26840310  addiu       $a0, $s4, 0x310
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
    // 0x2b668c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B668Cu;
    SET_GPR_U32(ctx, 31, 0x2B6694u);
    ctx->pc = 0x2B6690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B668Cu;
            // 0x2b6690: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6694u; }
        if (ctx->pc != 0x2B6694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6694u; }
        if (ctx->pc != 0x2B6694u) { return; }
    }
    ctx->pc = 0x2B6694u;
label_2b6694:
    // 0x2b6694: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6698: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x2b6698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
    // 0x2b669c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B669Cu;
    SET_GPR_U32(ctx, 31, 0x2B66A4u);
    ctx->pc = 0x2B66A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B669Cu;
            // 0x2b66a0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66A4u; }
        if (ctx->pc != 0x2B66A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66A4u; }
        if (ctx->pc != 0x2B66A4u) { return; }
    }
    ctx->pc = 0x2B66A4u;
label_2b66a4:
    // 0x2b66a4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b66a8: 0x268403d0  addiu       $a0, $s4, 0x3D0
    ctx->pc = 0x2b66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
    // 0x2b66ac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B66ACu;
    SET_GPR_U32(ctx, 31, 0x2B66B4u);
    ctx->pc = 0x2B66B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66ACu;
            // 0x2b66b0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66B4u; }
        if (ctx->pc != 0x2B66B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66B4u; }
        if (ctx->pc != 0x2B66B4u) { return; }
    }
    ctx->pc = 0x2B66B4u;
label_2b66b4:
    // 0x2b66b4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b66b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b66b8: 0x26840380  addiu       $a0, $s4, 0x380
    ctx->pc = 0x2b66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 896));
    // 0x2b66bc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B66BCu;
    SET_GPR_U32(ctx, 31, 0x2B66C4u);
    ctx->pc = 0x2B66C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66BCu;
            // 0x2b66c0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66C4u; }
        if (ctx->pc != 0x2B66C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66C4u; }
        if (ctx->pc != 0x2B66C4u) { return; }
    }
    ctx->pc = 0x2B66C4u;
label_2b66c4:
    // 0x2b66c4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b66c8: 0x26840390  addiu       $a0, $s4, 0x390
    ctx->pc = 0x2b66c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
    // 0x2b66cc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B66CCu;
    SET_GPR_U32(ctx, 31, 0x2B66D4u);
    ctx->pc = 0x2B66D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66CCu;
            // 0x2b66d0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66D4u; }
        if (ctx->pc != 0x2B66D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66D4u; }
        if (ctx->pc != 0x2B66D4u) { return; }
    }
    ctx->pc = 0x2B66D4u;
label_2b66d4:
    // 0x2b66d4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b66d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b66d8: 0x268403a0  addiu       $a0, $s4, 0x3A0
    ctx->pc = 0x2b66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 928));
    // 0x2b66dc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B66DCu;
    SET_GPR_U32(ctx, 31, 0x2B66E4u);
    ctx->pc = 0x2B66E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66DCu;
            // 0x2b66e0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66E4u; }
        if (ctx->pc != 0x2B66E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66E4u; }
        if (ctx->pc != 0x2B66E4u) { return; }
    }
    ctx->pc = 0x2B66E4u;
label_2b66e4:
    // 0x2b66e4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b66e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b66e8: 0x26840360  addiu       $a0, $s4, 0x360
    ctx->pc = 0x2b66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 864));
    // 0x2b66ec: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B66ECu;
    SET_GPR_U32(ctx, 31, 0x2B66F4u);
    ctx->pc = 0x2B66F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66ECu;
            // 0x2b66f0: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66F4u; }
        if (ctx->pc != 0x2B66F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66F4u; }
        if (ctx->pc != 0x2B66F4u) { return; }
    }
    ctx->pc = 0x2B66F4u;
label_2b66f4:
    // 0x2b66f4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b66f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b66f8: 0x26840370  addiu       $a0, $s4, 0x370
    ctx->pc = 0x2b66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 880));
    // 0x2b66fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B66FCu;
    SET_GPR_U32(ctx, 31, 0x2B6704u);
    ctx->pc = 0x2B6700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66FCu;
            // 0x2b6700: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6704u; }
        if (ctx->pc != 0x2B6704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6704u; }
        if (ctx->pc != 0x2B6704u) { return; }
    }
    ctx->pc = 0x2B6704u;
label_2b6704:
    // 0x2b6704: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6708: 0x26840330  addiu       $a0, $s4, 0x330
    ctx->pc = 0x2b6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
    // 0x2b670c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B670Cu;
    SET_GPR_U32(ctx, 31, 0x2B6714u);
    ctx->pc = 0x2B6710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B670Cu;
            // 0x2b6710: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6714u; }
        if (ctx->pc != 0x2B6714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6714u; }
        if (ctx->pc != 0x2B6714u) { return; }
    }
    ctx->pc = 0x2B6714u;
label_2b6714:
    // 0x2b6714: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6718: 0x26840340  addiu       $a0, $s4, 0x340
    ctx->pc = 0x2b6718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
    // 0x2b671c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B671Cu;
    SET_GPR_U32(ctx, 31, 0x2B6724u);
    ctx->pc = 0x2B6720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B671Cu;
            // 0x2b6720: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6724u; }
        if (ctx->pc != 0x2B6724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6724u; }
        if (ctx->pc != 0x2B6724u) { return; }
    }
    ctx->pc = 0x2B6724u;
label_2b6724:
    // 0x2b6724: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6728: 0x268403c0  addiu       $a0, $s4, 0x3C0
    ctx->pc = 0x2b6728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x2b672c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B672Cu;
    SET_GPR_U32(ctx, 31, 0x2B6734u);
    ctx->pc = 0x2B6730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B672Cu;
            // 0x2b6730: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6734u; }
        if (ctx->pc != 0x2B6734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6734u; }
        if (ctx->pc != 0x2B6734u) { return; }
    }
    ctx->pc = 0x2B6734u;
label_2b6734:
    // 0x2b6734: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6738: 0x26840350  addiu       $a0, $s4, 0x350
    ctx->pc = 0x2b6738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 848));
    // 0x2b673c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B673Cu;
    SET_GPR_U32(ctx, 31, 0x2B6744u);
    ctx->pc = 0x2B6740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B673Cu;
            // 0x2b6740: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6744u; }
        if (ctx->pc != 0x2B6744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6744u; }
        if (ctx->pc != 0x2B6744u) { return; }
    }
    ctx->pc = 0x2B6744u;
label_2b6744:
    // 0x2b6744: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x2B6744u;
    SET_GPR_U32(ctx, 31, 0x2B674Cu);
    ctx->pc = 0x2B6748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6744u;
            // 0x2b6748: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B674Cu; }
        if (ctx->pc != 0x2B674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B674Cu; }
        if (ctx->pc != 0x2B674Cu) { return; }
    }
    ctx->pc = 0x2B674Cu;
label_2b674c:
    // 0x2b674c: 0xc0ada48  jal         func_2B6920
    ctx->pc = 0x2B674Cu;
    SET_GPR_U32(ctx, 31, 0x2B6754u);
    ctx->pc = 0x2B6750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B674Cu;
            // 0x2b6750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6920u;
    if (runtime->hasFunction(0x2B6920u)) {
        auto targetFn = runtime->lookupFunction(0x2B6920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6754u; }
        if (ctx->pc != 0x2B6754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6920_0x2b6920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6754u; }
        if (ctx->pc != 0x2B6754u) { return; }
    }
    ctx->pc = 0x2B6754u;
label_2b6754:
    // 0x2b6754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b6754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6758: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b675c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b675cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b6760: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2b6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2b6764: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b6768: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b6768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b676c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b676cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6770: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6770u;
    SET_GPR_U32(ctx, 31, 0x2B6778u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6778u; }
        if (ctx->pc != 0x2B6778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6778u; }
        if (ctx->pc != 0x2B6778u) { return; }
    }
    ctx->pc = 0x2B6778u;
label_2b6778:
    // 0x2b6778: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x2B6778u;
    SET_GPR_U32(ctx, 31, 0x2B6780u);
    ctx->pc = 0x2B677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6778u;
            // 0x2b677c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6780u; }
        if (ctx->pc != 0x2B6780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6780u; }
        if (ctx->pc != 0x2B6780u) { return; }
    }
    ctx->pc = 0x2B6780u;
label_2b6780:
    // 0x2b6780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b6780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6784: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b6784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b6788: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b6788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b678c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b678cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6790: 0xc0ada44  jal         func_2B6910
    ctx->pc = 0x2B6790u;
    SET_GPR_U32(ctx, 31, 0x2B6798u);
    ctx->pc = 0x2B6910u;
    if (runtime->hasFunction(0x2B6910u)) {
        auto targetFn = runtime->lookupFunction(0x2B6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6798u; }
        if (ctx->pc != 0x2B6798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6910_0x2b6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6798u; }
        if (ctx->pc != 0x2B6798u) { return; }
    }
    ctx->pc = 0x2B6798u;
label_2b6798:
    // 0x2b6798: 0xc07724c  jal         func_1DC930
    ctx->pc = 0x2B6798u;
    SET_GPR_U32(ctx, 31, 0x2B67A0u);
    ctx->pc = 0x2B679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6798u;
            // 0x2b679c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC930u;
    if (runtime->hasFunction(0x1DC930u)) {
        auto targetFn = runtime->lookupFunction(0x1DC930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67A0u; }
        if (ctx->pc != 0x2B67A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC930_0x1dc930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67A0u; }
        if (ctx->pc != 0x2B67A0u) { return; }
    }
    ctx->pc = 0x2B67A0u;
label_2b67a0:
    // 0x2b67a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b67a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67a4: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b67a8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b67a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b67ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b67acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b67b0: 0xc0ada40  jal         func_2B6900
    ctx->pc = 0x2B67B0u;
    SET_GPR_U32(ctx, 31, 0x2B67B8u);
    ctx->pc = 0x2B6900u;
    if (runtime->hasFunction(0x2B6900u)) {
        auto targetFn = runtime->lookupFunction(0x2B6900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67B8u; }
        if (ctx->pc != 0x2B67B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6900_0x2b6900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67B8u; }
        if (ctx->pc != 0x2B67B8u) { return; }
    }
    ctx->pc = 0x2B67B8u;
label_2b67b8:
    // 0x2b67b8: 0xae800e1c  sw          $zero, 0xE1C($s4)
    ctx->pc = 0x2b67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3612), GPR_U32(ctx, 0));
    // 0x2b67bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b67bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67c0: 0xae800e20  sw          $zero, 0xE20($s4)
    ctx->pc = 0x2b67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3616), GPR_U32(ctx, 0));
    // 0x2b67c4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2b67c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67c8: 0xae800e24  sw          $zero, 0xE24($s4)
    ctx->pc = 0x2b67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3620), GPR_U32(ctx, 0));
    // 0x2b67cc: 0x0  nop
    ctx->pc = 0x2b67ccu;
    // NOP
label_2b67d0:
    // 0x2b67d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b67d4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2b67d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b67d8: 0xac600ea0  sw          $zero, 0xEA0($v1)
    ctx->pc = 0x2b67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3744), GPR_U32(ctx, 0));
    // 0x2b67dc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2b67dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2b67e0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2b67e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b67e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B67E4u;
    {
        const bool branch_taken_0x2b67e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B67E4u;
            // 0x2b67e8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67e4) {
            ctx->pc = 0x2B67D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b67d0;
        }
    }
    ctx->pc = 0x2B67ECu;
    // 0x2b67ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b67ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67f4: 0x0  nop
    ctx->pc = 0x2b67f4u;
    // NOP
label_2b67f8:
    // 0x2b67f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2b67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b67fc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2b67fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b6800: 0xac800eb0  sw          $zero, 0xEB0($a0)
    ctx->pc = 0x2b6800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3760), GPR_U32(ctx, 0));
    // 0x2b6804: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2b6804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2b6808: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2b6808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b680c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B680Cu;
    {
        const bool branch_taken_0x2b680c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B680Cu;
            // 0x2b6810: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b680c) {
            ctx->pc = 0x2B67F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b67f8;
        }
    }
    ctx->pc = 0x2B6814u;
    // 0x2b6814: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b6814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6818: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b6818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b681c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b681cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6820:
    // 0x2b6820: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x2b6820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2b6824: 0xaca00ec8  sw          $zero, 0xEC8($a1)
    ctx->pc = 0x2b6824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3784), GPR_U32(ctx, 0));
    // 0x2b6828: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x2b6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2b682c: 0xaca00ec4  sw          $zero, 0xEC4($a1)
    ctx->pc = 0x2b682cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3780), GPR_U32(ctx, 0));
    // 0x2b6830: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b6830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6834: 0xaca00ec0  sw          $zero, 0xEC0($a1)
    ctx->pc = 0x2b6834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3776), GPR_U32(ctx, 0));
    // 0x2b6838: 0x24440f40  addiu       $a0, $v0, 0xF40
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x2b683c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B683Cu;
    SET_GPR_U32(ctx, 31, 0x2B6844u);
    ctx->pc = 0x2B6840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B683Cu;
            // 0x2b6840: 0xaca30ecc  sw          $v1, 0xECC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6844u; }
        if (ctx->pc != 0x2B6844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6844u; }
        if (ctx->pc != 0x2B6844u) { return; }
    }
    ctx->pc = 0x2B6844u;
label_2b6844:
    // 0x2b6844: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2b6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b6848: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2b6848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2b684c: 0x3863c  dsll32      $s0, $v1, 24
    ctx->pc = 0x2b684cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2b6850: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2b6850u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x2b6854: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x2b6854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b6858: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B6858u;
    {
        const bool branch_taken_0x2b6858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6858u;
            // 0x2b685c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6858) {
            ctx->pc = 0x2B6820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b6820;
        }
    }
    ctx->pc = 0x2B6860u;
label_2b6860:
    // 0x2b6860: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x2b6860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x2b6864: 0x0  nop
    ctx->pc = 0x2b6864u;
    // NOP
label_2b6868:
    // 0x2b6868: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b686c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x2b686cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2b6870: 0x1460fe9a  bnez        $v1, . + 4 + (-0x166 << 2)
    ctx->pc = 0x2B6870u;
    {
        const bool branch_taken_0x2b6870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6870u;
            // 0x2b6874: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6870) {
            ctx->pc = 0x2B62DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b62dc;
        }
    }
    ctx->pc = 0x2B6878u;
    // 0x2b6878: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b6878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b687c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6880: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2b6880u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b6884: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6888: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2b6888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b688c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b688cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b6890: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b6890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b6894: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b6894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6898: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b6898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b689c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b689cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b68a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b68a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b68a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b68a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b68a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B68A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B68ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B68A8u;
            // 0x2b68ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B68B0u;
}
