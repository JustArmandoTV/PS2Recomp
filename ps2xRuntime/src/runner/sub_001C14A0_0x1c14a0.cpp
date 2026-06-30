#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C14A0
// Address: 0x1c14a0 - 0x1c1550
void sub_001C14A0_0x1c14a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C14A0_0x1c14a0");
#endif

    switch (ctx->pc) {
        case 0x1c14a0u: goto label_1c14a0;
        case 0x1c14a4u: goto label_1c14a4;
        case 0x1c14a8u: goto label_1c14a8;
        case 0x1c14acu: goto label_1c14ac;
        case 0x1c14b0u: goto label_1c14b0;
        case 0x1c14b4u: goto label_1c14b4;
        case 0x1c14b8u: goto label_1c14b8;
        case 0x1c14bcu: goto label_1c14bc;
        case 0x1c14c0u: goto label_1c14c0;
        case 0x1c14c4u: goto label_1c14c4;
        case 0x1c14c8u: goto label_1c14c8;
        case 0x1c14ccu: goto label_1c14cc;
        case 0x1c14d0u: goto label_1c14d0;
        case 0x1c14d4u: goto label_1c14d4;
        case 0x1c14d8u: goto label_1c14d8;
        case 0x1c14dcu: goto label_1c14dc;
        case 0x1c14e0u: goto label_1c14e0;
        case 0x1c14e4u: goto label_1c14e4;
        case 0x1c14e8u: goto label_1c14e8;
        case 0x1c14ecu: goto label_1c14ec;
        case 0x1c14f0u: goto label_1c14f0;
        case 0x1c14f4u: goto label_1c14f4;
        case 0x1c14f8u: goto label_1c14f8;
        case 0x1c14fcu: goto label_1c14fc;
        case 0x1c1500u: goto label_1c1500;
        case 0x1c1504u: goto label_1c1504;
        case 0x1c1508u: goto label_1c1508;
        case 0x1c150cu: goto label_1c150c;
        case 0x1c1510u: goto label_1c1510;
        case 0x1c1514u: goto label_1c1514;
        case 0x1c1518u: goto label_1c1518;
        case 0x1c151cu: goto label_1c151c;
        case 0x1c1520u: goto label_1c1520;
        case 0x1c1524u: goto label_1c1524;
        case 0x1c1528u: goto label_1c1528;
        case 0x1c152cu: goto label_1c152c;
        case 0x1c1530u: goto label_1c1530;
        case 0x1c1534u: goto label_1c1534;
        case 0x1c1538u: goto label_1c1538;
        case 0x1c153cu: goto label_1c153c;
        case 0x1c1540u: goto label_1c1540;
        case 0x1c1544u: goto label_1c1544;
        case 0x1c1548u: goto label_1c1548;
        case 0x1c154cu: goto label_1c154c;
        default: break;
    }

    ctx->pc = 0x1c14a0u;

label_1c14a0:
    // 0x1c14a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c14a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c14a4:
    // 0x1c14a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c14a8:
    // 0x1c14a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c14a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c14ac:
    // 0x1c14ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c14acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c14b0:
    // 0x1c14b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c14b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c14b4:
    // 0x1c14b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c14b8:
    // 0x1c14b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c14b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c14bc:
    // 0x1c14bc: 0xc071236  jal         func_1C48D8
label_1c14c0:
    if (ctx->pc == 0x1C14C0u) {
        ctx->pc = 0x1C14C0u;
            // 0x1c14c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C14C4u;
        goto label_1c14c4;
    }
    ctx->pc = 0x1C14BCu;
    SET_GPR_U32(ctx, 31, 0x1C14C4u);
    ctx->pc = 0x1C14C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14BCu;
            // 0x1c14c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14C4u; }
        if (ctx->pc != 0x1C14C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14C4u; }
        if (ctx->pc != 0x1C14C4u) { return; }
    }
    ctx->pc = 0x1C14C4u;
label_1c14c4:
    // 0x1c14c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c14c8:
    // 0x1c14c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c14c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c14cc:
    // 0x1c14cc: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c14d0:
    // 0x1c14d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c14d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c14d4:
    // 0x1c14d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c14d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c14d8:
    // 0x1c14d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c14d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c14dc:
    // 0x1c14dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c14e0:
    if (ctx->pc == 0x1C14E0u) {
        ctx->pc = 0x1C14E0u;
            // 0x1c14e0: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C14E4u;
        goto label_1c14e4;
    }
    ctx->pc = 0x1C14DCu;
    {
        const bool branch_taken_0x1c14dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14DCu;
            // 0x1c14e0: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14dc) {
            ctx->pc = 0x1C1520u;
            goto label_1c1520;
        }
    }
    ctx->pc = 0x1C14E4u;
label_1c14e4:
    // 0x1c14e4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1c14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1c14e8:
    // 0x1c14e8: 0x40f809  jalr        $v0
label_1c14ec:
    if (ctx->pc == 0x1C14ECu) {
        ctx->pc = 0x1C14F0u;
        goto label_1c14f0;
    }
    ctx->pc = 0x1C14E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C14F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C14F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C14F0u; }
            if (ctx->pc != 0x1C14F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C14F0u;
label_1c14f0:
    // 0x1c14f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c14f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c14f4:
    // 0x1c14f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1c14f8:
    if (ctx->pc == 0x1C14F8u) {
        ctx->pc = 0x1C14F8u;
            // 0x1c14f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C14FCu;
        goto label_1c14fc;
    }
    ctx->pc = 0x1C14F4u;
    {
        const bool branch_taken_0x1c14f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C14F4u;
            // 0x1c14f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14f4) {
            ctx->pc = 0x1C1508u;
            goto label_1c1508;
        }
    }
    ctx->pc = 0x1C14FCu;
label_1c14fc:
    // 0x1c14fc: 0xc0704e4  jal         func_1C1390
label_1c1500:
    if (ctx->pc == 0x1C1500u) {
        ctx->pc = 0x1C1504u;
        goto label_1c1504;
    }
    ctx->pc = 0x1C14FCu;
    SET_GPR_U32(ctx, 31, 0x1C1504u);
    ctx->pc = 0x1C1390u;
    if (runtime->hasFunction(0x1C1390u)) {
        auto targetFn = runtime->lookupFunction(0x1C1390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1504u; }
        if (ctx->pc != 0x1C1504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1390_0x1c1390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1504u; }
        if (ctx->pc != 0x1C1504u) { return; }
    }
    ctx->pc = 0x1C1504u;
label_1c1504:
    // 0x1c1504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1508:
    // 0x1c1508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c150c:
    // 0x1c150c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c150cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1510:
    // 0x1c1510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1514:
    // 0x1c1514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1518:
    // 0x1c1518: 0x3e00008  jr          $ra
label_1c151c:
    if (ctx->pc == 0x1C151Cu) {
        ctx->pc = 0x1C151Cu;
            // 0x1c151c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1520u;
        goto label_1c1520;
    }
    ctx->pc = 0x1C1518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1518u;
            // 0x1c151c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1520u;
label_1c1520:
    // 0x1c1520: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1524:
    // 0x1c1524: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1528:
    // 0x1c1528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c152c:
    // 0x1c152c: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1530:
    // 0x1c1530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1534:
    // 0x1c1534: 0x24c6b970  addiu       $a2, $a2, -0x4690
    ctx->pc = 0x1c1534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949232));
label_1c1538:
    // 0x1c1538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c153c:
    // 0x1c153c: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_1c1540:
    // 0x1c1540: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1544:
    // 0x1c1544: 0x80711fe  j           func_1C47F8
label_1c1548:
    if (ctx->pc == 0x1C1548u) {
        ctx->pc = 0x1C1548u;
            // 0x1c1548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C154Cu;
        goto label_1c154c;
    }
    ctx->pc = 0x1C1544u;
    ctx->pc = 0x1C1548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1544u;
            // 0x1c1548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C154Cu;
label_1c154c:
    // 0x1c154c: 0x0  nop
    ctx->pc = 0x1c154cu;
    // NOP
}
