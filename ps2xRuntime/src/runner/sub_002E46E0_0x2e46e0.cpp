#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E46E0
// Address: 0x2e46e0 - 0x2e4840
void sub_002E46E0_0x2e46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E46E0_0x2e46e0");
#endif

    switch (ctx->pc) {
        case 0x2e4710u: goto label_2e4710;
        case 0x2e475cu: goto label_2e475c;
        case 0x2e4774u: goto label_2e4774;
        case 0x2e4790u: goto label_2e4790;
        case 0x2e47a0u: goto label_2e47a0;
        case 0x2e47b8u: goto label_2e47b8;
        case 0x2e47d0u: goto label_2e47d0;
        case 0x2e47ecu: goto label_2e47ec;
        case 0x2e4804u: goto label_2e4804;
        default: break;
    }

    ctx->pc = 0x2e46e0u;

    // 0x2e46e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e46e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e46e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e46ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e46ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e46f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e46f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e46f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e46fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4708: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2E4708u;
    SET_GPR_U32(ctx, 31, 0x2E4710u);
    ctx->pc = 0x2E470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4708u;
            // 0x2e470c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4710u; }
        if (ctx->pc != 0x2E4710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4710u; }
        if (ctx->pc != 0x2E4710u) { return; }
    }
    ctx->pc = 0x2E4710u;
label_2e4710:
    // 0x2e4710: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2e4710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2e4714: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e4718: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2e4718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2e471c: 0x24422fc0  addiu       $v0, $v0, 0x2FC0
    ctx->pc = 0x2e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
    // 0x2e4720: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e4720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e4724: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e4724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e4728: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2e4728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2e472c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e4730: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x2e4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x2e4734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4734u;
    {
        const bool branch_taken_0x2e4734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4734u;
            // 0x2e4738: 0x8c71e418  lw          $s1, -0x1BE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4734) {
            ctx->pc = 0x2E474Cu;
            goto label_2e474c;
        }
    }
    ctx->pc = 0x2E473Cu;
    // 0x2e473c: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x2e473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2e4740: 0x9233000d  lbu         $s3, 0xD($s1)
    ctx->pc = 0x2e4740u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x2e4744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4744u;
    {
        const bool branch_taken_0x2e4744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4744u;
            // 0x2e4748: 0x245400d8  addiu       $s4, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4744) {
            ctx->pc = 0x2E4758u;
            goto label_2e4758;
        }
    }
    ctx->pc = 0x2E474Cu;
label_2e474c:
    // 0x2e474c: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x2e474cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x2e4750: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2e4750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4754: 0x26941c10  addiu       $s4, $s4, 0x1C10
    ctx->pc = 0x2e4754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7184));
label_2e4758:
    // 0x2e4758: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e4758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e475c:
    // 0x2e475c: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2e475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4760: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e4764: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x2e4764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4768: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x2e4768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e476c: 0xc0b917c  jal         func_2E45F0
    ctx->pc = 0x2E476Cu;
    SET_GPR_U32(ctx, 31, 0x2E4774u);
    ctx->pc = 0x2E4770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E476Cu;
            // 0x2e4770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E45F0u;
    if (runtime->hasFunction(0x2E45F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E45F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4774u; }
        if (ctx->pc != 0x2E4774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E45F0_0x2e45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4774u; }
        if (ctx->pc != 0x2E4774u) { return; }
    }
    ctx->pc = 0x2E4774u;
label_2e4774:
    // 0x2e4774: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x2e4774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4778: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e4778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e477c: 0xc68d0010  lwc1        $f13, 0x10($s4)
    ctx->pc = 0x2e477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4780: 0xc68e0014  lwc1        $f14, 0x14($s4)
    ctx->pc = 0x2e4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4784: 0xc68f0018  lwc1        $f15, 0x18($s4)
    ctx->pc = 0x2e4784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e4788: 0xc0b916c  jal         func_2E45B0
    ctx->pc = 0x2E4788u;
    SET_GPR_U32(ctx, 31, 0x2E4790u);
    ctx->pc = 0x2E478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4788u;
            // 0x2e478c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E45B0u;
    if (runtime->hasFunction(0x2E45B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E45B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4790u; }
        if (ctx->pc != 0x2E4790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E45B0_0x2e45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4790u; }
        if (ctx->pc != 0x2E4790u) { return; }
    }
    ctx->pc = 0x2E4790u;
label_2e4790:
    // 0x2e4790: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x2e4790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4794: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e4794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e4798: 0xc0b9160  jal         func_2E4580
    ctx->pc = 0x2E4798u;
    SET_GPR_U32(ctx, 31, 0x2E47A0u);
    ctx->pc = 0x2E479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4798u;
            // 0x2e479c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4580u;
    if (runtime->hasFunction(0x2E4580u)) {
        auto targetFn = runtime->lookupFunction(0x2E4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47A0u; }
        if (ctx->pc != 0x2E47A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4580_0x2e4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47A0u; }
        if (ctx->pc != 0x2E47A0u) { return; }
    }
    ctx->pc = 0x2E47A0u;
label_2e47a0:
    // 0x2e47a0: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x2e47a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e47a4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e47a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e47a8: 0xc68d0024  lwc1        $f13, 0x24($s4)
    ctx->pc = 0x2e47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e47ac: 0xc68e0028  lwc1        $f14, 0x28($s4)
    ctx->pc = 0x2e47acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e47b0: 0xc0b9148  jal         func_2E4520
    ctx->pc = 0x2E47B0u;
    SET_GPR_U32(ctx, 31, 0x2E47B8u);
    ctx->pc = 0x2E47B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47B0u;
            // 0x2e47b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4520u;
    if (runtime->hasFunction(0x2E4520u)) {
        auto targetFn = runtime->lookupFunction(0x2E4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47B8u; }
        if (ctx->pc != 0x2E47B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4520_0x2e4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47B8u; }
        if (ctx->pc != 0x2E47B8u) { return; }
    }
    ctx->pc = 0x2E47B8u;
label_2e47b8:
    // 0x2e47b8: 0xc68c002c  lwc1        $f12, 0x2C($s4)
    ctx->pc = 0x2e47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e47bc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e47c0: 0xc68d0030  lwc1        $f13, 0x30($s4)
    ctx->pc = 0x2e47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e47c4: 0xc68e0034  lwc1        $f14, 0x34($s4)
    ctx->pc = 0x2e47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e47c8: 0xc0b9138  jal         func_2E44E0
    ctx->pc = 0x2E47C8u;
    SET_GPR_U32(ctx, 31, 0x2E47D0u);
    ctx->pc = 0x2E47CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47C8u;
            // 0x2e47cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E44E0u;
    if (runtime->hasFunction(0x2E44E0u)) {
        auto targetFn = runtime->lookupFunction(0x2E44E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47D0u; }
        if (ctx->pc != 0x2E47D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E44E0_0x2e44e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47D0u; }
        if (ctx->pc != 0x2E47D0u) { return; }
    }
    ctx->pc = 0x2E47D0u;
label_2e47d0:
    // 0x2e47d0: 0xc68c0038  lwc1        $f12, 0x38($s4)
    ctx->pc = 0x2e47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e47d4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e47d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e47d8: 0xc68d003c  lwc1        $f13, 0x3C($s4)
    ctx->pc = 0x2e47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e47dc: 0xc68e0040  lwc1        $f14, 0x40($s4)
    ctx->pc = 0x2e47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e47e0: 0xc68f0044  lwc1        $f15, 0x44($s4)
    ctx->pc = 0x2e47e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e47e4: 0xc0b9128  jal         func_2E44A0
    ctx->pc = 0x2E47E4u;
    SET_GPR_U32(ctx, 31, 0x2E47ECu);
    ctx->pc = 0x2E47E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47E4u;
            // 0x2e47e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E44A0u;
    if (runtime->hasFunction(0x2E44A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47ECu; }
        if (ctx->pc != 0x2E47ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E44A0_0x2e44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E47ECu; }
        if (ctx->pc != 0x2E47ECu) { return; }
    }
    ctx->pc = 0x2E47ECu;
label_2e47ec:
    // 0x2e47ec: 0xc68c0048  lwc1        $f12, 0x48($s4)
    ctx->pc = 0x2e47ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e47f0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e47f4: 0xc68d004c  lwc1        $f13, 0x4C($s4)
    ctx->pc = 0x2e47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e47f8: 0xc68e0050  lwc1        $f14, 0x50($s4)
    ctx->pc = 0x2e47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e47fc: 0xc0b9110  jal         func_2E4440
    ctx->pc = 0x2E47FCu;
    SET_GPR_U32(ctx, 31, 0x2E4804u);
    ctx->pc = 0x2E4800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E47FCu;
            // 0x2e4800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4440u;
    if (runtime->hasFunction(0x2E4440u)) {
        auto targetFn = runtime->lookupFunction(0x2E4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4804u; }
        if (ctx->pc != 0x2E4804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4440_0x2e4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4804u; }
        if (ctx->pc != 0x2E4804u) { return; }
    }
    ctx->pc = 0x2E4804u;
label_2e4804:
    // 0x2e4804: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e4804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e4808: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2e4808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2e480c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2E480Cu;
    {
        const bool branch_taken_0x2e480c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E480Cu;
            // 0x2e4810: 0x26940054  addiu       $s4, $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e480c) {
            ctx->pc = 0x2E475Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e475c;
        }
    }
    ctx->pc = 0x2E4814u;
    // 0x2e4814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e4814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4818: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e4818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e481c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e481cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4820: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e482c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e482cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4830: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4830u;
            // 0x2e4834: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4838u;
    // 0x2e4838: 0x0  nop
    ctx->pc = 0x2e4838u;
    // NOP
    // 0x2e483c: 0x0  nop
    ctx->pc = 0x2e483cu;
    // NOP
}
