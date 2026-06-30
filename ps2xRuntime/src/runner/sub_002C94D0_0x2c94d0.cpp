#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C94D0
// Address: 0x2c94d0 - 0x2c9640
void sub_002C94D0_0x2c94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C94D0_0x2c94d0");
#endif

    switch (ctx->pc) {
        case 0x2c94d0u: goto label_2c94d0;
        case 0x2c94d4u: goto label_2c94d4;
        case 0x2c94d8u: goto label_2c94d8;
        case 0x2c94dcu: goto label_2c94dc;
        case 0x2c94e0u: goto label_2c94e0;
        case 0x2c94e4u: goto label_2c94e4;
        case 0x2c94e8u: goto label_2c94e8;
        case 0x2c94ecu: goto label_2c94ec;
        case 0x2c94f0u: goto label_2c94f0;
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c94f8u: goto label_2c94f8;
        case 0x2c94fcu: goto label_2c94fc;
        case 0x2c9500u: goto label_2c9500;
        case 0x2c9504u: goto label_2c9504;
        case 0x2c9508u: goto label_2c9508;
        case 0x2c950cu: goto label_2c950c;
        case 0x2c9510u: goto label_2c9510;
        case 0x2c9514u: goto label_2c9514;
        case 0x2c9518u: goto label_2c9518;
        case 0x2c951cu: goto label_2c951c;
        case 0x2c9520u: goto label_2c9520;
        case 0x2c9524u: goto label_2c9524;
        case 0x2c9528u: goto label_2c9528;
        case 0x2c952cu: goto label_2c952c;
        case 0x2c9530u: goto label_2c9530;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c9538u: goto label_2c9538;
        case 0x2c953cu: goto label_2c953c;
        case 0x2c9540u: goto label_2c9540;
        case 0x2c9544u: goto label_2c9544;
        case 0x2c9548u: goto label_2c9548;
        case 0x2c954cu: goto label_2c954c;
        case 0x2c9550u: goto label_2c9550;
        case 0x2c9554u: goto label_2c9554;
        case 0x2c9558u: goto label_2c9558;
        case 0x2c955cu: goto label_2c955c;
        case 0x2c9560u: goto label_2c9560;
        case 0x2c9564u: goto label_2c9564;
        case 0x2c9568u: goto label_2c9568;
        case 0x2c956cu: goto label_2c956c;
        case 0x2c9570u: goto label_2c9570;
        case 0x2c9574u: goto label_2c9574;
        case 0x2c9578u: goto label_2c9578;
        case 0x2c957cu: goto label_2c957c;
        case 0x2c9580u: goto label_2c9580;
        case 0x2c9584u: goto label_2c9584;
        case 0x2c9588u: goto label_2c9588;
        case 0x2c958cu: goto label_2c958c;
        case 0x2c9590u: goto label_2c9590;
        case 0x2c9594u: goto label_2c9594;
        case 0x2c9598u: goto label_2c9598;
        case 0x2c959cu: goto label_2c959c;
        case 0x2c95a0u: goto label_2c95a0;
        case 0x2c95a4u: goto label_2c95a4;
        case 0x2c95a8u: goto label_2c95a8;
        case 0x2c95acu: goto label_2c95ac;
        case 0x2c95b0u: goto label_2c95b0;
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c95b8u: goto label_2c95b8;
        case 0x2c95bcu: goto label_2c95bc;
        case 0x2c95c0u: goto label_2c95c0;
        case 0x2c95c4u: goto label_2c95c4;
        case 0x2c95c8u: goto label_2c95c8;
        case 0x2c95ccu: goto label_2c95cc;
        case 0x2c95d0u: goto label_2c95d0;
        case 0x2c95d4u: goto label_2c95d4;
        case 0x2c95d8u: goto label_2c95d8;
        case 0x2c95dcu: goto label_2c95dc;
        case 0x2c95e0u: goto label_2c95e0;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95e8u: goto label_2c95e8;
        case 0x2c95ecu: goto label_2c95ec;
        case 0x2c95f0u: goto label_2c95f0;
        case 0x2c95f4u: goto label_2c95f4;
        case 0x2c95f8u: goto label_2c95f8;
        case 0x2c95fcu: goto label_2c95fc;
        case 0x2c9600u: goto label_2c9600;
        case 0x2c9604u: goto label_2c9604;
        case 0x2c9608u: goto label_2c9608;
        case 0x2c960cu: goto label_2c960c;
        case 0x2c9610u: goto label_2c9610;
        case 0x2c9614u: goto label_2c9614;
        case 0x2c9618u: goto label_2c9618;
        case 0x2c961cu: goto label_2c961c;
        case 0x2c9620u: goto label_2c9620;
        case 0x2c9624u: goto label_2c9624;
        case 0x2c9628u: goto label_2c9628;
        case 0x2c962cu: goto label_2c962c;
        case 0x2c9630u: goto label_2c9630;
        case 0x2c9634u: goto label_2c9634;
        case 0x2c9638u: goto label_2c9638;
        case 0x2c963cu: goto label_2c963c;
        default: break;
    }

    ctx->pc = 0x2c94d0u;

label_2c94d0:
    // 0x2c94d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c94d4:
    // 0x2c94d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c94d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c94d8:
    // 0x2c94d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c94d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c94dc:
    // 0x2c94dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c94dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c94e0:
    // 0x2c94e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c94e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c94e4:
    // 0x2c94e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c94e8:
    if (ctx->pc == 0x2C94E8u) {
        ctx->pc = 0x2C94E8u;
            // 0x2c94e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C94ECu;
        goto label_2c94ec;
    }
    ctx->pc = 0x2C94E4u;
    {
        const bool branch_taken_0x2c94e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C94E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94E4u;
            // 0x2c94e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94e4) {
            ctx->pc = 0x2C9528u;
            goto label_2c9528;
        }
    }
    ctx->pc = 0x2C94ECu;
label_2c94ec:
    // 0x2c94ec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c94f0:
    if (ctx->pc == 0x2C94F0u) {
        ctx->pc = 0x2C94F0u;
            // 0x2c94f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C94F4u;
        goto label_2c94f4;
    }
    ctx->pc = 0x2C94ECu;
    {
        const bool branch_taken_0x2c94ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c94ec) {
            ctx->pc = 0x2C94F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94ECu;
            // 0x2c94f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9514u;
            goto label_2c9514;
        }
    }
    ctx->pc = 0x2C94F4u;
label_2c94f4:
    // 0x2c94f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c94f8:
    if (ctx->pc == 0x2C94F8u) {
        ctx->pc = 0x2C94FCu;
        goto label_2c94fc;
    }
    ctx->pc = 0x2C94F4u;
    {
        const bool branch_taken_0x2c94f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c94f4) {
            ctx->pc = 0x2C9510u;
            goto label_2c9510;
        }
    }
    ctx->pc = 0x2C94FCu;
label_2c94fc:
    // 0x2c94fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c9500:
    // 0x2c9500: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c9504:
    if (ctx->pc == 0x2C9504u) {
        ctx->pc = 0x2C9508u;
        goto label_2c9508;
    }
    ctx->pc = 0x2C9500u;
    {
        const bool branch_taken_0x2c9500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9500) {
            ctx->pc = 0x2C9510u;
            goto label_2c9510;
        }
    }
    ctx->pc = 0x2C9508u;
label_2c9508:
    // 0x2c9508: 0xc0400a8  jal         func_1002A0
label_2c950c:
    if (ctx->pc == 0x2C950Cu) {
        ctx->pc = 0x2C9510u;
        goto label_2c9510;
    }
    ctx->pc = 0x2C9508u;
    SET_GPR_U32(ctx, 31, 0x2C9510u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9510u; }
        if (ctx->pc != 0x2C9510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9510u; }
        if (ctx->pc != 0x2C9510u) { return; }
    }
    ctx->pc = 0x2C9510u;
label_2c9510:
    // 0x2c9510: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c9510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c9514:
    // 0x2c9514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c9518:
    // 0x2c9518: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c951c:
    if (ctx->pc == 0x2C951Cu) {
        ctx->pc = 0x2C951Cu;
            // 0x2c951c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9520u;
        goto label_2c9520;
    }
    ctx->pc = 0x2C9518u;
    {
        const bool branch_taken_0x2c9518 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9518) {
            ctx->pc = 0x2C951Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9518u;
            // 0x2c951c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C952Cu;
            goto label_2c952c;
        }
    }
    ctx->pc = 0x2C9520u;
label_2c9520:
    // 0x2c9520: 0xc0400a8  jal         func_1002A0
label_2c9524:
    if (ctx->pc == 0x2C9524u) {
        ctx->pc = 0x2C9524u;
            // 0x2c9524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9528u;
        goto label_2c9528;
    }
    ctx->pc = 0x2C9520u;
    SET_GPR_U32(ctx, 31, 0x2C9528u);
    ctx->pc = 0x2C9524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9520u;
            // 0x2c9524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9528u; }
        if (ctx->pc != 0x2C9528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9528u; }
        if (ctx->pc != 0x2C9528u) { return; }
    }
    ctx->pc = 0x2C9528u;
label_2c9528:
    // 0x2c9528: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c9528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c952c:
    // 0x2c952c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9530:
    // 0x2c9530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9534:
    // 0x2c9534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9538:
    // 0x2c9538: 0x3e00008  jr          $ra
label_2c953c:
    if (ctx->pc == 0x2C953Cu) {
        ctx->pc = 0x2C953Cu;
            // 0x2c953c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C9540u;
        goto label_2c9540;
    }
    ctx->pc = 0x2C9538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9538u;
            // 0x2c953c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9540u;
label_2c9540:
    // 0x2c9540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c9544:
    // 0x2c9544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c9548:
    // 0x2c9548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c954c:
    // 0x2c954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c9550:
    // 0x2c9550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9554:
    // 0x2c9554: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2c9558:
    if (ctx->pc == 0x2C9558u) {
        ctx->pc = 0x2C9558u;
            // 0x2c9558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C955Cu;
        goto label_2c955c;
    }
    ctx->pc = 0x2C9554u;
    {
        const bool branch_taken_0x2c9554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9554u;
            // 0x2c9558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9554) {
            ctx->pc = 0x2C961Cu;
            goto label_2c961c;
        }
    }
    ctx->pc = 0x2C955Cu;
label_2c955c:
    // 0x2c955c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c955cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9560:
    // 0x2c9560: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9564:
    // 0x2c9564: 0x24637c40  addiu       $v1, $v1, 0x7C40
    ctx->pc = 0x2c9564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31808));
label_2c9568:
    // 0x2c9568: 0x24427c80  addiu       $v0, $v0, 0x7C80
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31872));
label_2c956c:
    // 0x2c956c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c9570:
    // 0x2c9570: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c9570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c9574:
    // 0x2c9574: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c9574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9578:
    // 0x2c9578: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c9578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c957c:
    // 0x2c957c: 0x320f809  jalr        $t9
label_2c9580:
    if (ctx->pc == 0x2C9580u) {
        ctx->pc = 0x2C9584u;
        goto label_2c9584;
    }
    ctx->pc = 0x2C957Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9584u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9584u; }
            if (ctx->pc != 0x2C9584u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9584u;
label_2c9584:
    // 0x2c9584: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2c9588:
    if (ctx->pc == 0x2C9588u) {
        ctx->pc = 0x2C9588u;
            // 0x2c9588: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C958Cu;
        goto label_2c958c;
    }
    ctx->pc = 0x2C9584u;
    {
        const bool branch_taken_0x2c9584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9584) {
            ctx->pc = 0x2C9588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9584u;
            // 0x2c9588: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9608u;
            goto label_2c9608;
        }
    }
    ctx->pc = 0x2C958Cu;
label_2c958c:
    // 0x2c958c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c9590:
    // 0x2c9590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c9594:
    // 0x2c9594: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c9594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2c9598:
    // 0x2c9598: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c9598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2c959c:
    // 0x2c959c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c95a0:
    // 0x2c95a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c95a4:
    // 0x2c95a4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2c95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2c95a8:
    // 0x2c95a8: 0xc0aecc4  jal         func_2BB310
label_2c95ac:
    if (ctx->pc == 0x2C95ACu) {
        ctx->pc = 0x2C95ACu;
            // 0x2c95ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C95B0u;
        goto label_2c95b0;
    }
    ctx->pc = 0x2C95A8u;
    SET_GPR_U32(ctx, 31, 0x2C95B0u);
    ctx->pc = 0x2C95ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95A8u;
            // 0x2c95ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95B0u; }
        if (ctx->pc != 0x2C95B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95B0u; }
        if (ctx->pc != 0x2C95B0u) { return; }
    }
    ctx->pc = 0x2C95B0u;
label_2c95b0:
    // 0x2c95b0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c95b4:
    // 0x2c95b4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2c95b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2c95b8:
    // 0x2c95b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c95bc:
    if (ctx->pc == 0x2C95BCu) {
        ctx->pc = 0x2C95BCu;
            // 0x2c95bc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2C95C0u;
        goto label_2c95c0;
    }
    ctx->pc = 0x2C95B8u;
    {
        const bool branch_taken_0x2c95b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c95b8) {
            ctx->pc = 0x2C95BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95B8u;
            // 0x2c95bc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C95D4u;
            goto label_2c95d4;
        }
    }
    ctx->pc = 0x2C95C0u;
label_2c95c0:
    // 0x2c95c0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2c95c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c95c4:
    // 0x2c95c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c95c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c95c8:
    // 0x2c95c8: 0x320f809  jalr        $t9
label_2c95cc:
    if (ctx->pc == 0x2C95CCu) {
        ctx->pc = 0x2C95CCu;
            // 0x2c95cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C95D0u;
        goto label_2c95d0;
    }
    ctx->pc = 0x2C95C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C95D0u);
        ctx->pc = 0x2C95CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95C8u;
            // 0x2c95cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C95D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C95D0u; }
            if (ctx->pc != 0x2C95D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C95D0u;
label_2c95d0:
    // 0x2c95d0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c95d4:
    // 0x2c95d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c95d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c95d8:
    // 0x2c95d8: 0xc0aec9c  jal         func_2BB270
label_2c95dc:
    if (ctx->pc == 0x2C95DCu) {
        ctx->pc = 0x2C95DCu;
            // 0x2c95dc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2C95E0u;
        goto label_2c95e0;
    }
    ctx->pc = 0x2C95D8u;
    SET_GPR_U32(ctx, 31, 0x2C95E0u);
    ctx->pc = 0x2C95DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95D8u;
            // 0x2c95dc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95E0u; }
        if (ctx->pc != 0x2C95E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95E0u; }
        if (ctx->pc != 0x2C95E0u) { return; }
    }
    ctx->pc = 0x2C95E0u;
label_2c95e0:
    // 0x2c95e0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c95e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c95e4:
    // 0x2c95e4: 0xc0aec88  jal         func_2BB220
label_2c95e8:
    if (ctx->pc == 0x2C95E8u) {
        ctx->pc = 0x2C95E8u;
            // 0x2c95e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C95ECu;
        goto label_2c95ec;
    }
    ctx->pc = 0x2C95E4u;
    SET_GPR_U32(ctx, 31, 0x2C95ECu);
    ctx->pc = 0x2C95E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95E4u;
            // 0x2c95e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95ECu; }
        if (ctx->pc != 0x2C95ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95ECu; }
        if (ctx->pc != 0x2C95ECu) { return; }
    }
    ctx->pc = 0x2C95ECu;
label_2c95ec:
    // 0x2c95ec: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2c95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2c95f0:
    // 0x2c95f0: 0xc0aec0c  jal         func_2BB030
label_2c95f4:
    if (ctx->pc == 0x2C95F4u) {
        ctx->pc = 0x2C95F4u;
            // 0x2c95f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C95F8u;
        goto label_2c95f8;
    }
    ctx->pc = 0x2C95F0u;
    SET_GPR_U32(ctx, 31, 0x2C95F8u);
    ctx->pc = 0x2C95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95F0u;
            // 0x2c95f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95F8u; }
        if (ctx->pc != 0x2C95F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C95F8u; }
        if (ctx->pc != 0x2C95F8u) { return; }
    }
    ctx->pc = 0x2C95F8u;
label_2c95f8:
    // 0x2c95f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c95f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c95fc:
    // 0x2c95fc: 0xc0aeaa8  jal         func_2BAAA0
label_2c9600:
    if (ctx->pc == 0x2C9600u) {
        ctx->pc = 0x2C9600u;
            // 0x2c9600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9604u;
        goto label_2c9604;
    }
    ctx->pc = 0x2C95FCu;
    SET_GPR_U32(ctx, 31, 0x2C9604u);
    ctx->pc = 0x2C9600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95FCu;
            // 0x2c9600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9604u; }
        if (ctx->pc != 0x2C9604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9604u; }
        if (ctx->pc != 0x2C9604u) { return; }
    }
    ctx->pc = 0x2C9604u;
label_2c9604:
    // 0x2c9604: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c9608:
    // 0x2c9608: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c960c:
    // 0x2c960c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c9610:
    if (ctx->pc == 0x2C9610u) {
        ctx->pc = 0x2C9610u;
            // 0x2c9610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9614u;
        goto label_2c9614;
    }
    ctx->pc = 0x2C960Cu;
    {
        const bool branch_taken_0x2c960c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c960c) {
            ctx->pc = 0x2C9610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C960Cu;
            // 0x2c9610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9620u;
            goto label_2c9620;
        }
    }
    ctx->pc = 0x2C9614u;
label_2c9614:
    // 0x2c9614: 0xc0400a8  jal         func_1002A0
label_2c9618:
    if (ctx->pc == 0x2C9618u) {
        ctx->pc = 0x2C9618u;
            // 0x2c9618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C961Cu;
        goto label_2c961c;
    }
    ctx->pc = 0x2C9614u;
    SET_GPR_U32(ctx, 31, 0x2C961Cu);
    ctx->pc = 0x2C9618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9614u;
            // 0x2c9618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C961Cu; }
        if (ctx->pc != 0x2C961Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C961Cu; }
        if (ctx->pc != 0x2C961Cu) { return; }
    }
    ctx->pc = 0x2C961Cu;
label_2c961c:
    // 0x2c961c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c961cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9620:
    // 0x2c9620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9624:
    // 0x2c9624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9628:
    // 0x2c9628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c962c:
    // 0x2c962c: 0x3e00008  jr          $ra
label_2c9630:
    if (ctx->pc == 0x2C9630u) {
        ctx->pc = 0x2C9630u;
            // 0x2c9630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C9634u;
        goto label_2c9634;
    }
    ctx->pc = 0x2C962Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C962Cu;
            // 0x2c9630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9634u;
label_2c9634:
    // 0x2c9634: 0x0  nop
    ctx->pc = 0x2c9634u;
    // NOP
label_2c9638:
    // 0x2c9638: 0x0  nop
    ctx->pc = 0x2c9638u;
    // NOP
label_2c963c:
    // 0x2c963c: 0x0  nop
    ctx->pc = 0x2c963cu;
    // NOP
}
