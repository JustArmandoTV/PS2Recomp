#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A04F8
// Address: 0x1a04f8 - 0x1a05b8
void sub_001A04F8_0x1a04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A04F8_0x1a04f8");
#endif

    switch (ctx->pc) {
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a057cu: goto label_1a057c;
        default: break;
    }

    ctx->pc = 0x1a04f8u;

    // 0x1a04f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a04fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a04fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0508: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a050c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a050cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a0510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a0514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0518: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A0518u;
    SET_GPR_U32(ctx, 31, 0x1A0520u);
    ctx->pc = 0x1A051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0518u;
            // 0x1a051c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0520u; }
        if (ctx->pc != 0x1A0520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0520u; }
        if (ctx->pc != 0x1A0520u) { return; }
    }
    ctx->pc = 0x1A0520u;
label_1a0520:
    // 0x1a0520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0528: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a052c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A052Cu;
            // 0x1a0530: 0x2484a600  addiu       $a0, $a0, -0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A0550u;
            goto label_1a0550;
        }
    }
    ctx->pc = 0x1A0534u;
    // 0x1a0534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a053c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a053cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0540: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0548: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0548u;
    ctx->pc = 0x1A054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0548u;
            // 0x1a054c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0550u;
label_1a0550:
    // 0x1a0550: 0xc06011a  jal         func_180468
    ctx->pc = 0x1A0550u;
    SET_GPR_U32(ctx, 31, 0x1A0558u);
    ctx->pc = 0x1A0554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0550u;
            // 0x1a0554: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0558u; }
        if (ctx->pc != 0x1A0558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0558u; }
        if (ctx->pc != 0x1A0558u) { return; }
    }
    ctx->pc = 0x1A0558u;
label_1a0558:
    // 0x1a0558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a055c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a055cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0560: 0xc06810c  jal         func_1A0430
    ctx->pc = 0x1A0560u;
    SET_GPR_U32(ctx, 31, 0x1A0568u);
    ctx->pc = 0x1A0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0560u;
            // 0x1a0564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0430u;
    if (runtime->hasFunction(0x1A0430u)) {
        auto targetFn = runtime->lookupFunction(0x1A0430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0568u; }
        if (ctx->pc != 0x1A0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0430_0x1a0430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0568u; }
        if (ctx->pc != 0x1A0568u) { return; }
    }
    ctx->pc = 0x1A0568u;
label_1a0568:
    // 0x1a0568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a056c: 0xc06808a  jal         func_1A0228
    ctx->pc = 0x1A056Cu;
    SET_GPR_U32(ctx, 31, 0x1A0574u);
    ctx->pc = 0x1A0570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A056Cu;
            // 0x1a0570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0228u;
    if (runtime->hasFunction(0x1A0228u)) {
        auto targetFn = runtime->lookupFunction(0x1A0228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0574u; }
        if (ctx->pc != 0x1A0574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0228_0x1a0228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0574u; }
        if (ctx->pc != 0x1A0574u) { return; }
    }
    ctx->pc = 0x1A0574u;
label_1a0574:
    // 0x1a0574: 0xc068062  jal         func_1A0188
    ctx->pc = 0x1A0574u;
    SET_GPR_U32(ctx, 31, 0x1A057Cu);
    ctx->pc = 0x1A0578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0574u;
            // 0x1a0578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0188u;
    if (runtime->hasFunction(0x1A0188u)) {
        auto targetFn = runtime->lookupFunction(0x1A0188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A057Cu; }
        if (ctx->pc != 0x1A057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0188_0x1a0188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A057Cu; }
        if (ctx->pc != 0x1A057Cu) { return; }
    }
    ctx->pc = 0x1A057Cu;
label_1a057c:
    // 0x1a057c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0580: 0x8e03055c  lw          $v1, 0x55C($s0)
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1372)));
    // 0x1a0584: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x1a0584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x1a0588: 0xae120568  sw          $s2, 0x568($s0)
    ctx->pc = 0x1a0588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 18));
    // 0x1a058c: 0xae13056c  sw          $s3, 0x56C($s0)
    ctx->pc = 0x1a058cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 19));
    // 0x1a0590: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0590u;
    {
        const bool branch_taken_0x1a0590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0590u;
            // 0x1a0594: 0xae110558  sw          $s1, 0x558($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0590) {
            ctx->pc = 0x1A059Cu;
            goto label_1a059c;
        }
    }
    ctx->pc = 0x1A0598u;
    // 0x1a0598: 0xae110564  sw          $s1, 0x564($s0)
    ctx->pc = 0x1a0598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 17));
label_1a059c:
    // 0x1a059c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a059cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a05a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a05a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a05a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a05a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a05a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a05ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a05acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a05b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A05B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A05B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05B0u;
            // 0x1a05b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A05B8u;
}
