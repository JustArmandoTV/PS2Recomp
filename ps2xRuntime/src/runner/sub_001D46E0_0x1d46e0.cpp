#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D46E0
// Address: 0x1d46e0 - 0x1d4850
void sub_001D46E0_0x1d46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D46E0_0x1d46e0");
#endif

    switch (ctx->pc) {
        case 0x1d4784u: goto label_1d4784;
        case 0x1d4794u: goto label_1d4794;
        case 0x1d47acu: goto label_1d47ac;
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47d0u: goto label_1d47d0;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d4810u: goto label_1d4810;
        default: break;
    }

    ctx->pc = 0x1d46e0u;

    // 0x1d46e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d46e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d46e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1d46ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d46f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d46f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d46f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d46f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d46fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1d46fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4700: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d4704: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d4704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d470c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d470cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d4710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4714: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d4714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d471c: 0x26920004  addiu       $s2, $s4, 0x4
    ctx->pc = 0x1d471cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1d4720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4724: 0x8c48a740  lw          $t0, -0x58C0($v0)
    ctx->pc = 0x1d4724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944576)));
    // 0x1d4728: 0x8c67a744  lw          $a3, -0x58BC($v1)
    ctx->pc = 0x1d4728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944580)));
    // 0x1d472c: 0x9484a74a  lhu         $a0, -0x58B6($a0)
    ctx->pc = 0x1d472cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294944586)));
    // 0x1d4730: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d4734: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1d4734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1d4738: 0x9445a748  lhu         $a1, -0x58B8($v0)
    ctx->pc = 0x1d4738u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944584)));
    // 0x1d473c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d4740: 0x8c63a74c  lw          $v1, -0x58B4($v1)
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944588)));
    // 0x1d4744: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x1d4744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
    // 0x1d4748: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d4748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d474c: 0xa7a50098  sh          $a1, 0x98($sp)
    ctx->pc = 0x1d474cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d4750: 0x8c42a750  lw          $v0, -0x58B0($v0)
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944592)));
    // 0x1d4754: 0xa7a4009a  sh          $a0, 0x9A($sp)
    ctx->pc = 0x1d4754u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 154), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d4758: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1d4758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x1d475c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1d475cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1d4760: 0x94d30000  lhu         $s3, 0x0($a2)
    ctx->pc = 0x1d4760u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d4764: 0x90d00003  lbu         $s0, 0x3($a2)
    ctx->pc = 0x1d4764u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1d4768: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1d4768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d476c: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1D476Cu;
    {
        const bool branch_taken_0x1d476c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D476Cu;
            // 0x1d4770: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d476c) {
            ctx->pc = 0x1D479Cu;
            goto label_1d479c;
        }
    }
    ctx->pc = 0x1D4774u;
    // 0x1d4774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4778: 0x8c567378  lw          $s6, 0x7378($v0)
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d477c: 0xc04e710  jal         func_139C40
    ctx->pc = 0x1D477Cu;
    SET_GPR_U32(ctx, 31, 0x1D4784u);
    ctx->pc = 0x1D4780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D477Cu;
            // 0x1d4780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (runtime->hasFunction(0x139C40u)) {
        auto targetFn = runtime->lookupFunction(0x139C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4784u; }
        if (ctx->pc != 0x1D4784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C40_0x139c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4784u; }
        if (ctx->pc != 0x1D4784u) { return; }
    }
    ctx->pc = 0x1D4784u;
label_1d4784:
    // 0x1d4784: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d4784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d478c: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D478Cu;
    SET_GPR_U32(ctx, 31, 0x1D4794u);
    ctx->pc = 0x1D4790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D478Cu;
            // 0x1d4790: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4794u; }
        if (ctx->pc != 0x1D4794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4794u; }
        if (ctx->pc != 0x1D4794u) { return; }
    }
    ctx->pc = 0x1D4794u;
label_1d4794:
    // 0x1d4794: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4794u;
    {
        const bool branch_taken_0x1d4794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4794u;
            // 0x1d4798: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4794) {
            ctx->pc = 0x1D47C4u;
            goto label_1d47c4;
        }
    }
    ctx->pc = 0x1D479Cu;
label_1d479c:
    // 0x1d479c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d47a0: 0x8c577378  lw          $s7, 0x7378($v0)
    ctx->pc = 0x1d47a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d47a4: 0xc04e710  jal         func_139C40
    ctx->pc = 0x1D47A4u;
    SET_GPR_U32(ctx, 31, 0x1D47ACu);
    ctx->pc = 0x1D47A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47A4u;
            // 0x1d47a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (runtime->hasFunction(0x139C40u)) {
        auto targetFn = runtime->lookupFunction(0x139C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47ACu; }
        if (ctx->pc != 0x1D47ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C40_0x139c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47ACu; }
        if (ctx->pc != 0x1D47ACu) { return; }
    }
    ctx->pc = 0x1D47ACu;
label_1d47ac:
    // 0x1d47ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d47acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d47b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x1D47B4u;
    SET_GPR_U32(ctx, 31, 0x1D47BCu);
    ctx->pc = 0x1D47B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47B4u;
            // 0x1d47b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47BCu; }
        if (ctx->pc != 0x1D47BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47BCu; }
        if (ctx->pc != 0x1D47BCu) { return; }
    }
    ctx->pc = 0x1D47BCu;
label_1d47bc:
    // 0x1d47bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1d47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1d47c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d47c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d47c4:
    // 0x1d47c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d47c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c8: 0xc04e718  jal         func_139C60
    ctx->pc = 0x1D47C8u;
    SET_GPR_U32(ctx, 31, 0x1D47D0u);
    ctx->pc = 0x1D47CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47C8u;
            // 0x1d47cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C60u;
    if (runtime->hasFunction(0x139C60u)) {
        auto targetFn = runtime->lookupFunction(0x139C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47D0u; }
        if (ctx->pc != 0x1D47D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C60_0x139c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47D0u; }
        if (ctx->pc != 0x1D47D0u) { return; }
    }
    ctx->pc = 0x1D47D0u;
label_1d47d0:
    // 0x1d47d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d47d4: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x1d47d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d47d8:
    // 0x1d47d8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D47D8u;
    {
        const bool branch_taken_0x1d47d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47d8) {
            ctx->pc = 0x1D47F8u;
            goto label_1d47f8;
        }
    }
    ctx->pc = 0x1D47E0u;
    // 0x1d47e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d47e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d47e4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1d47e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d47e8: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1d47e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1d47ec: 0xa7a30098  sh          $v1, 0x98($sp)
    ctx->pc = 0x1d47ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d47f0: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x1d47f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x1d47f4: 0xa7a2009a  sh          $v0, 0x9A($sp)
    ctx->pc = 0x1d47f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 154), (uint16_t)GPR_U32(ctx, 2));
label_1d47f8:
    // 0x1d47f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d47fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4800: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d4804: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1d4808: 0xc074a44  jal         func_1D2910
    ctx->pc = 0x1D4808u;
    SET_GPR_U32(ctx, 31, 0x1D4810u);
    ctx->pc = 0x1D480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4808u;
            // 0x1d480c: 0x2823021  addu        $a2, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2910u;
    if (runtime->hasFunction(0x1D2910u)) {
        auto targetFn = runtime->lookupFunction(0x1D2910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4810u; }
        if (ctx->pc != 0x1D4810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2910_0x1d2910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4810u; }
        if (ctx->pc != 0x1D4810u) { return; }
    }
    ctx->pc = 0x1D4810u;
label_1d4810:
    // 0x1d4810: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d4810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d4814: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1d4818: 0x1660ffef  bnez        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D4818u;
    {
        const bool branch_taken_0x1d4818 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4818u;
            // 0x1d481c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4818) {
            ctx->pc = 0x1D47D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d47d8;
        }
    }
    ctx->pc = 0x1D4820u;
    // 0x1d4820: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d4820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4824: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d4824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4828: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d4828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d482c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d482cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4830: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4834: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d483c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d483cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4844: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4844u;
            // 0x1d4848: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D484Cu;
    // 0x1d484c: 0x0  nop
    ctx->pc = 0x1d484cu;
    // NOP
}
