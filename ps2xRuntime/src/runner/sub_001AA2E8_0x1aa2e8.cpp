#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA2E8
// Address: 0x1aa2e8 - 0x1aa3e0
void sub_001AA2E8_0x1aa2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA2E8_0x1aa2e8");
#endif

    switch (ctx->pc) {
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa358u: goto label_1aa358;
        case 0x1aa364u: goto label_1aa364;
        case 0x1aa374u: goto label_1aa374;
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa3a4u: goto label_1aa3a4;
        default: break;
    }

    ctx->pc = 0x1aa2e8u;

    // 0x1aa2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa2ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1aa2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa2f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa2fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa300: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AA300u;
    SET_GPR_U32(ctx, 31, 0x1AA308u);
    ctx->pc = 0x1AA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA300u;
            // 0x1aa304: 0x8e111fec  lw          $s1, 0x1FEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA308u; }
        if (ctx->pc != 0x1AA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA308u; }
        if (ctx->pc != 0x1AA308u) { return; }
    }
    ctx->pc = 0x1AA308u;
label_1aa308:
    // 0x1aa308: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA308u;
    {
        const bool branch_taken_0x1aa308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA308u;
            // 0x1aa30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa308) {
            ctx->pc = 0x1AA358u;
            goto label_1aa358;
        }
    }
    ctx->pc = 0x1AA310u;
    // 0x1aa310: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AA310u;
    SET_GPR_U32(ctx, 31, 0x1AA318u);
    ctx->pc = 0x1AA314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA310u;
            // 0x1aa314: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA318u; }
        if (ctx->pc != 0x1AA318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA318u; }
        if (ctx->pc != 0x1AA318u) { return; }
    }
    ctx->pc = 0x1AA318u;
label_1aa318:
    // 0x1aa318: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA318u;
    {
        const bool branch_taken_0x1aa318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA318u;
            // 0x1aa31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa318) {
            ctx->pc = 0x1AA358u;
            goto label_1aa358;
        }
    }
    ctx->pc = 0x1AA320u;
    // 0x1aa320: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1AA320u;
    SET_GPR_U32(ctx, 31, 0x1AA328u);
    ctx->pc = 0x1AA324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA320u;
            // 0x1aa324: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA328u; }
        if (ctx->pc != 0x1AA328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA328u; }
        if (ctx->pc != 0x1AA328u) { return; }
    }
    ctx->pc = 0x1AA328u;
label_1aa328:
    // 0x1aa328: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AA328u;
    {
        const bool branch_taken_0x1aa328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA328u;
            // 0x1aa32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa328) {
            ctx->pc = 0x1AA35Cu;
            goto label_1aa35c;
        }
    }
    ctx->pc = 0x1AA330u;
    // 0x1aa330: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1aa330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1aa334: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA334u;
    {
        const bool branch_taken_0x1aa334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa334) {
            ctx->pc = 0x1AA35Cu;
            goto label_1aa35c;
        }
    }
    ctx->pc = 0x1AA33Cu;
    // 0x1aa33c: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1AA33Cu;
    SET_GPR_U32(ctx, 31, 0x1AA344u);
    ctx->pc = 0x1AA340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA33Cu;
            // 0x1aa340: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA344u; }
        if (ctx->pc != 0x1AA344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA344u; }
        if (ctx->pc != 0x1AA344u) { return; }
    }
    ctx->pc = 0x1AA344u;
label_1aa344:
    // 0x1aa344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA344u;
    {
        const bool branch_taken_0x1aa344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA344u;
            // 0x1aa348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa344) {
            ctx->pc = 0x1AA358u;
            goto label_1aa358;
        }
    }
    ctx->pc = 0x1AA34Cu;
    // 0x1aa34c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1aa34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aa350: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1AA350u;
    SET_GPR_U32(ctx, 31, 0x1AA358u);
    ctx->pc = 0x1AA354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA350u;
            // 0x1aa354: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA358u; }
        if (ctx->pc != 0x1AA358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA358u; }
        if (ctx->pc != 0x1AA358u) { return; }
    }
    ctx->pc = 0x1AA358u;
label_1aa358:
    // 0x1aa358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa35c:
    // 0x1aa35c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AA35Cu;
    SET_GPR_U32(ctx, 31, 0x1AA364u);
    ctx->pc = 0x1AA360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA35Cu;
            // 0x1aa360: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA364u; }
        if (ctx->pc != 0x1AA364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA364u; }
        if (ctx->pc != 0x1AA364u) { return; }
    }
    ctx->pc = 0x1AA364u;
label_1aa364:
    // 0x1aa364: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AA364u;
    {
        const bool branch_taken_0x1aa364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA364u;
            // 0x1aa368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa364) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA36Cu;
    // 0x1aa36c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AA36Cu;
    SET_GPR_U32(ctx, 31, 0x1AA374u);
    ctx->pc = 0x1AA370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA36Cu;
            // 0x1aa370: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA374u; }
        if (ctx->pc != 0x1AA374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA374u; }
        if (ctx->pc != 0x1AA374u) { return; }
    }
    ctx->pc = 0x1AA374u;
label_1aa374:
    // 0x1aa374: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AA374u;
    {
        const bool branch_taken_0x1aa374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA374u;
            // 0x1aa378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa374) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA37Cu;
    // 0x1aa37c: 0xc069764  jal         func_1A5D90
    ctx->pc = 0x1AA37Cu;
    SET_GPR_U32(ctx, 31, 0x1AA384u);
    ctx->pc = 0x1AA380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA37Cu;
            // 0x1aa380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D90u;
    if (runtime->hasFunction(0x1A5D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA384u; }
        if (ctx->pc != 0x1AA384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D90_0x1a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA384u; }
        if (ctx->pc != 0x1AA384u) { return; }
    }
    ctx->pc = 0x1AA384u;
label_1aa384:
    // 0x1aa384: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AA384u;
    {
        const bool branch_taken_0x1aa384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa384) {
            ctx->pc = 0x1AA388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA384u;
            // 0x1aa388: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA38Cu;
    // 0x1aa38c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1aa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1aa390: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AA390u;
    {
        const bool branch_taken_0x1aa390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa390) {
            ctx->pc = 0x1AA394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA390u;
            // 0x1aa394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3CCu;
            goto label_1aa3cc;
        }
    }
    ctx->pc = 0x1AA398u;
    // 0x1aa398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa39c: 0xc06e376  jal         func_1B8DD8
    ctx->pc = 0x1AA39Cu;
    SET_GPR_U32(ctx, 31, 0x1AA3A4u);
    ctx->pc = 0x1AA3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA39Cu;
            // 0x1aa3a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8DD8u;
    if (runtime->hasFunction(0x1B8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3A4u; }
        if (ctx->pc != 0x1AA3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8DD8_0x1b8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3A4u; }
        if (ctx->pc != 0x1AA3A4u) { return; }
    }
    ctx->pc = 0x1AA3A4u;
label_1aa3a4:
    // 0x1aa3a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA3A4u;
    {
        const bool branch_taken_0x1aa3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3A4u;
            // 0x1aa3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3a4) {
            ctx->pc = 0x1AA3C8u;
            goto label_1aa3c8;
        }
    }
    ctx->pc = 0x1AA3ACu;
    // 0x1aa3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa3b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa3b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aa3b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa3bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3c0: 0x806d7aa  j           func_1B5EA8
    ctx->pc = 0x1AA3C0u;
    ctx->pc = 0x1AA3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3C0u;
            // 0x1aa3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA3C8u;
label_1aa3c8:
    // 0x1aa3c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa3cc:
    // 0x1aa3cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa3d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3D4u;
            // 0x1aa3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA3DCu;
    // 0x1aa3dc: 0x0  nop
    ctx->pc = 0x1aa3dcu;
    // NOP
}
