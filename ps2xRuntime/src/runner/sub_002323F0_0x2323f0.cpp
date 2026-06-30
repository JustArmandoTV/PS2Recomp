#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002323F0
// Address: 0x2323f0 - 0x232530
void sub_002323F0_0x2323f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002323F0_0x2323f0");
#endif

    switch (ctx->pc) {
        case 0x2323f0u: goto label_2323f0;
        case 0x2323f4u: goto label_2323f4;
        case 0x2323f8u: goto label_2323f8;
        case 0x2323fcu: goto label_2323fc;
        case 0x232400u: goto label_232400;
        case 0x232404u: goto label_232404;
        case 0x232408u: goto label_232408;
        case 0x23240cu: goto label_23240c;
        case 0x232410u: goto label_232410;
        case 0x232414u: goto label_232414;
        case 0x232418u: goto label_232418;
        case 0x23241cu: goto label_23241c;
        case 0x232420u: goto label_232420;
        case 0x232424u: goto label_232424;
        case 0x232428u: goto label_232428;
        case 0x23242cu: goto label_23242c;
        case 0x232430u: goto label_232430;
        case 0x232434u: goto label_232434;
        case 0x232438u: goto label_232438;
        case 0x23243cu: goto label_23243c;
        case 0x232440u: goto label_232440;
        case 0x232444u: goto label_232444;
        case 0x232448u: goto label_232448;
        case 0x23244cu: goto label_23244c;
        case 0x232450u: goto label_232450;
        case 0x232454u: goto label_232454;
        case 0x232458u: goto label_232458;
        case 0x23245cu: goto label_23245c;
        case 0x232460u: goto label_232460;
        case 0x232464u: goto label_232464;
        case 0x232468u: goto label_232468;
        case 0x23246cu: goto label_23246c;
        case 0x232470u: goto label_232470;
        case 0x232474u: goto label_232474;
        case 0x232478u: goto label_232478;
        case 0x23247cu: goto label_23247c;
        case 0x232480u: goto label_232480;
        case 0x232484u: goto label_232484;
        case 0x232488u: goto label_232488;
        case 0x23248cu: goto label_23248c;
        case 0x232490u: goto label_232490;
        case 0x232494u: goto label_232494;
        case 0x232498u: goto label_232498;
        case 0x23249cu: goto label_23249c;
        case 0x2324a0u: goto label_2324a0;
        case 0x2324a4u: goto label_2324a4;
        case 0x2324a8u: goto label_2324a8;
        case 0x2324acu: goto label_2324ac;
        case 0x2324b0u: goto label_2324b0;
        case 0x2324b4u: goto label_2324b4;
        case 0x2324b8u: goto label_2324b8;
        case 0x2324bcu: goto label_2324bc;
        case 0x2324c0u: goto label_2324c0;
        case 0x2324c4u: goto label_2324c4;
        case 0x2324c8u: goto label_2324c8;
        case 0x2324ccu: goto label_2324cc;
        case 0x2324d0u: goto label_2324d0;
        case 0x2324d4u: goto label_2324d4;
        case 0x2324d8u: goto label_2324d8;
        case 0x2324dcu: goto label_2324dc;
        case 0x2324e0u: goto label_2324e0;
        case 0x2324e4u: goto label_2324e4;
        case 0x2324e8u: goto label_2324e8;
        case 0x2324ecu: goto label_2324ec;
        case 0x2324f0u: goto label_2324f0;
        case 0x2324f4u: goto label_2324f4;
        case 0x2324f8u: goto label_2324f8;
        case 0x2324fcu: goto label_2324fc;
        case 0x232500u: goto label_232500;
        case 0x232504u: goto label_232504;
        case 0x232508u: goto label_232508;
        case 0x23250cu: goto label_23250c;
        case 0x232510u: goto label_232510;
        case 0x232514u: goto label_232514;
        case 0x232518u: goto label_232518;
        case 0x23251cu: goto label_23251c;
        case 0x232520u: goto label_232520;
        case 0x232524u: goto label_232524;
        case 0x232528u: goto label_232528;
        case 0x23252cu: goto label_23252c;
        default: break;
    }

    ctx->pc = 0x2323f0u;

label_2323f0:
    // 0x2323f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2323f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2323f4:
    // 0x2323f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2323f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2323f8:
    // 0x2323f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2323f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2323fc:
    // 0x2323fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2323fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232400:
    // 0x232400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232404:
    // 0x232404: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x232404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_232408:
    // 0x232408: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x232408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_23240c:
    // 0x23240c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232410:
    // 0x232410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_232414:
    if (ctx->pc == 0x232414u) {
        ctx->pc = 0x232414u;
            // 0x232414: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232418u;
        goto label_232418;
    }
    ctx->pc = 0x232410u;
    {
        const bool branch_taken_0x232410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232410u;
            // 0x232414: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232410) {
            ctx->pc = 0x232434u;
            goto label_232434;
        }
    }
    ctx->pc = 0x232418u;
label_232418:
    // 0x232418: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23241c:
    // 0x23241c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x23241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_232420:
    // 0x232420: 0xa3a20038  sb          $v0, 0x38($sp)
    ctx->pc = 0x232420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 2));
label_232424:
    // 0x232424: 0xc08d1cc  jal         func_234730
label_232428:
    if (ctx->pc == 0x232428u) {
        ctx->pc = 0x232428u;
            // 0x232428: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->pc = 0x23242Cu;
        goto label_23242c;
    }
    ctx->pc = 0x232424u;
    SET_GPR_U32(ctx, 31, 0x23242Cu);
    ctx->pc = 0x232428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232424u;
            // 0x232428: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23242Cu; }
        if (ctx->pc != 0x23242Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23242Cu; }
        if (ctx->pc != 0x23242Cu) { return; }
    }
    ctx->pc = 0x23242Cu;
label_23242c:
    // 0x23242c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_232430:
    if (ctx->pc == 0x232430u) {
        ctx->pc = 0x232430u;
            // 0x232430: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x232434u;
        goto label_232434;
    }
    ctx->pc = 0x23242Cu;
    {
        const bool branch_taken_0x23242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23242Cu;
            // 0x232430: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23242c) {
            ctx->pc = 0x23251Cu;
            goto label_23251c;
        }
    }
    ctx->pc = 0x232434u;
label_232434:
    // 0x232434: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x232434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_232438:
    // 0x232438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23243c:
    // 0x23243c: 0xc08e524  jal         func_239490
label_232440:
    if (ctx->pc == 0x232440u) {
        ctx->pc = 0x232440u;
            // 0x232440: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x232444u;
        goto label_232444;
    }
    ctx->pc = 0x23243Cu;
    SET_GPR_U32(ctx, 31, 0x232444u);
    ctx->pc = 0x232440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23243Cu;
            // 0x232440: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239490u;
    if (runtime->hasFunction(0x239490u)) {
        auto targetFn = runtime->lookupFunction(0x239490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232444u; }
        if (ctx->pc != 0x232444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239490_0x239490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232444u; }
        if (ctx->pc != 0x232444u) { return; }
    }
    ctx->pc = 0x232444u;
label_232444:
    // 0x232444: 0xc08ab10  jal         func_22AC40
label_232448:
    if (ctx->pc == 0x232448u) {
        ctx->pc = 0x232448u;
            // 0x232448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23244Cu;
        goto label_23244c;
    }
    ctx->pc = 0x232444u;
    SET_GPR_U32(ctx, 31, 0x23244Cu);
    ctx->pc = 0x232448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232444u;
            // 0x232448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AC40u;
    if (runtime->hasFunction(0x22AC40u)) {
        auto targetFn = runtime->lookupFunction(0x22AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23244Cu; }
        if (ctx->pc != 0x23244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AC40_0x22ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23244Cu; }
        if (ctx->pc != 0x23244Cu) { return; }
    }
    ctx->pc = 0x23244Cu;
label_23244c:
    // 0x23244c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23244cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232450:
    // 0x232450: 0xc08f8c8  jal         func_23E320
label_232454:
    if (ctx->pc == 0x232454u) {
        ctx->pc = 0x232454u;
            // 0x232454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232458u;
        goto label_232458;
    }
    ctx->pc = 0x232450u;
    SET_GPR_U32(ctx, 31, 0x232458u);
    ctx->pc = 0x232454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232450u;
            // 0x232454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232458u; }
        if (ctx->pc != 0x232458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E320_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232458u; }
        if (ctx->pc != 0x232458u) { return; }
    }
    ctx->pc = 0x232458u;
label_232458:
    // 0x232458: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_23245c:
    // 0x23245c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_232460:
    if (ctx->pc == 0x232460u) {
        ctx->pc = 0x232460u;
            // 0x232460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232464u;
        goto label_232464;
    }
    ctx->pc = 0x23245Cu;
    {
        const bool branch_taken_0x23245c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x232460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23245Cu;
            // 0x232460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23245c) {
            ctx->pc = 0x232490u;
            goto label_232490;
        }
    }
    ctx->pc = 0x232464u;
label_232464:
    // 0x232464: 0x8e2300ec  lw          $v1, 0xEC($s1)
    ctx->pc = 0x232464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_232468:
    // 0x232468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23246c:
    // 0x23246c: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_232470:
    if (ctx->pc == 0x232470u) {
        ctx->pc = 0x232470u;
            // 0x232470: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x232474u;
        goto label_232474;
    }
    ctx->pc = 0x23246Cu;
    {
        const bool branch_taken_0x23246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x23246c) {
            ctx->pc = 0x232470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23246Cu;
            // 0x232470: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23247Cu;
            goto label_23247c;
        }
    }
    ctx->pc = 0x232474u;
label_232474:
    // 0x232474: 0x10000008  b           . + 4 + (0x8 << 2)
label_232478:
    if (ctx->pc == 0x232478u) {
        ctx->pc = 0x232478u;
            // 0x232478: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x23247Cu;
        goto label_23247c;
    }
    ctx->pc = 0x232474u;
    {
        const bool branch_taken_0x232474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232474u;
            // 0x232478: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232474) {
            ctx->pc = 0x232498u;
            goto label_232498;
        }
    }
    ctx->pc = 0x23247Cu;
label_23247c:
    // 0x23247c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23247cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_232480:
    // 0x232480: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x232480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_232484:
    // 0x232484: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_232488:
    if (ctx->pc == 0x232488u) {
        ctx->pc = 0x232488u;
            // 0x232488: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x23248Cu;
        goto label_23248c;
    }
    ctx->pc = 0x232484u;
    {
        const bool branch_taken_0x232484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232484u;
            // 0x232488: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232484) {
            ctx->pc = 0x232468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232468;
        }
    }
    ctx->pc = 0x23248Cu;
label_23248c:
    // 0x23248c: 0x0  nop
    ctx->pc = 0x23248cu;
    // NOP
label_232490:
    // 0x232490: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x232490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232494:
    // 0x232494: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_232498:
    // 0x232498: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x232498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23249c:
    // 0x23249c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2324a0:
    // 0x2324a0: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x2324a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
label_2324a4:
    // 0x2324a4: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x2324a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_2324a8:
    // 0x2324a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2324a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2324ac:
    // 0x2324ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2324acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2324b0:
    // 0x2324b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2324b4:
    // 0x2324b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2324b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2324b8:
    // 0x2324b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2324b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2324bc:
    // 0x2324bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2324bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2324c0:
    // 0x2324c0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2324c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2324c4:
    // 0x2324c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2324c8:
    if (ctx->pc == 0x2324C8u) {
        ctx->pc = 0x2324C8u;
            // 0x2324c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2324CCu;
        goto label_2324cc;
    }
    ctx->pc = 0x2324C4u;
    {
        const bool branch_taken_0x2324c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2324c4) {
            ctx->pc = 0x2324C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2324C4u;
            // 0x2324c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2324E0u;
            goto label_2324e0;
        }
    }
    ctx->pc = 0x2324CCu;
label_2324cc:
    // 0x2324cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2324d0:
    // 0x2324d0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2324d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2324d4:
    // 0x2324d4: 0x320f809  jalr        $t9
label_2324d8:
    if (ctx->pc == 0x2324D8u) {
        ctx->pc = 0x2324D8u;
            // 0x2324d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2324DCu;
        goto label_2324dc;
    }
    ctx->pc = 0x2324D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2324DCu);
        ctx->pc = 0x2324D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2324D4u;
            // 0x2324d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2324DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2324DCu; }
            if (ctx->pc != 0x2324DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2324DCu;
label_2324dc:
    // 0x2324dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2324dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2324e0:
    // 0x2324e0: 0xc08d414  jal         func_235050
label_2324e4:
    if (ctx->pc == 0x2324E4u) {
        ctx->pc = 0x2324E8u;
        goto label_2324e8;
    }
    ctx->pc = 0x2324E0u;
    SET_GPR_U32(ctx, 31, 0x2324E8u);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324E8u; }
        if (ctx->pc != 0x2324E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324E8u; }
        if (ctx->pc != 0x2324E8u) { return; }
    }
    ctx->pc = 0x2324E8u;
label_2324e8:
    // 0x2324e8: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2324e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2324ec:
    // 0x2324ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2324ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2324f0:
    // 0x2324f0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2324f4:
    if (ctx->pc == 0x2324F4u) {
        ctx->pc = 0x2324F4u;
            // 0x2324f4: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x2324F8u;
        goto label_2324f8;
    }
    ctx->pc = 0x2324F0u;
    {
        const bool branch_taken_0x2324f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2324F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2324F0u;
            // 0x2324f4: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2324f0) {
            ctx->pc = 0x232518u;
            goto label_232518;
        }
    }
    ctx->pc = 0x2324F8u;
label_2324f8:
    // 0x2324f8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2324f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2324fc:
    // 0x2324fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_232500:
    if (ctx->pc == 0x232500u) {
        ctx->pc = 0x232504u;
        goto label_232504;
    }
    ctx->pc = 0x2324FCu;
    {
        const bool branch_taken_0x2324fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324fc) {
            ctx->pc = 0x232518u;
            goto label_232518;
        }
    }
    ctx->pc = 0x232504u;
label_232504:
    // 0x232504: 0x8223008c  lb          $v1, 0x8C($s1)
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_232508:
    // 0x232508: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_23250c:
    if (ctx->pc == 0x23250Cu) {
        ctx->pc = 0x232510u;
        goto label_232510;
    }
    ctx->pc = 0x232508u;
    {
        const bool branch_taken_0x232508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232508) {
            ctx->pc = 0x232518u;
            goto label_232518;
        }
    }
    ctx->pc = 0x232510u;
label_232510:
    // 0x232510: 0xc08d1c4  jal         func_234710
label_232514:
    if (ctx->pc == 0x232514u) {
        ctx->pc = 0x232514u;
            // 0x232514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232518u;
        goto label_232518;
    }
    ctx->pc = 0x232510u;
    SET_GPR_U32(ctx, 31, 0x232518u);
    ctx->pc = 0x232514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232510u;
            // 0x232514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232518u; }
        if (ctx->pc != 0x232518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232518u; }
        if (ctx->pc != 0x232518u) { return; }
    }
    ctx->pc = 0x232518u;
label_232518:
    // 0x232518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23251c:
    // 0x23251c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23251cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_232520:
    // 0x232520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232524:
    // 0x232524: 0x3e00008  jr          $ra
label_232528:
    if (ctx->pc == 0x232528u) {
        ctx->pc = 0x232528u;
            // 0x232528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x23252Cu;
        goto label_23252c;
    }
    ctx->pc = 0x232524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232524u;
            // 0x232528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23252Cu;
label_23252c:
    // 0x23252c: 0x0  nop
    ctx->pc = 0x23252cu;
    // NOP
}
