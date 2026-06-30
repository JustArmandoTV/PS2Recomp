#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9440
// Address: 0x2b9440 - 0x2b9650
void sub_002B9440_0x2b9440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9440_0x2b9440");
#endif

    switch (ctx->pc) {
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        case 0x2b9538u: goto label_2b9538;
        case 0x2b953cu: goto label_2b953c;
        case 0x2b9540u: goto label_2b9540;
        case 0x2b9544u: goto label_2b9544;
        case 0x2b9548u: goto label_2b9548;
        case 0x2b954cu: goto label_2b954c;
        case 0x2b9550u: goto label_2b9550;
        case 0x2b9554u: goto label_2b9554;
        case 0x2b9558u: goto label_2b9558;
        case 0x2b955cu: goto label_2b955c;
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9564u: goto label_2b9564;
        case 0x2b9568u: goto label_2b9568;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b957cu: goto label_2b957c;
        case 0x2b9580u: goto label_2b9580;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b9588u: goto label_2b9588;
        case 0x2b958cu: goto label_2b958c;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b9594u: goto label_2b9594;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b959cu: goto label_2b959c;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95a4u: goto label_2b95a4;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95b0u: goto label_2b95b0;
        case 0x2b95b4u: goto label_2b95b4;
        case 0x2b95b8u: goto label_2b95b8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95c0u: goto label_2b95c0;
        case 0x2b95c4u: goto label_2b95c4;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b95ccu: goto label_2b95cc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95d4u: goto label_2b95d4;
        case 0x2b95d8u: goto label_2b95d8;
        case 0x2b95dcu: goto label_2b95dc;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95e4u: goto label_2b95e4;
        case 0x2b95e8u: goto label_2b95e8;
        case 0x2b95ecu: goto label_2b95ec;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b95f4u: goto label_2b95f4;
        case 0x2b95f8u: goto label_2b95f8;
        case 0x2b95fcu: goto label_2b95fc;
        case 0x2b9600u: goto label_2b9600;
        case 0x2b9604u: goto label_2b9604;
        case 0x2b9608u: goto label_2b9608;
        case 0x2b960cu: goto label_2b960c;
        case 0x2b9610u: goto label_2b9610;
        case 0x2b9614u: goto label_2b9614;
        case 0x2b9618u: goto label_2b9618;
        case 0x2b961cu: goto label_2b961c;
        case 0x2b9620u: goto label_2b9620;
        case 0x2b9624u: goto label_2b9624;
        case 0x2b9628u: goto label_2b9628;
        case 0x2b962cu: goto label_2b962c;
        case 0x2b9630u: goto label_2b9630;
        case 0x2b9634u: goto label_2b9634;
        case 0x2b9638u: goto label_2b9638;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9640u: goto label_2b9640;
        case 0x2b9644u: goto label_2b9644;
        case 0x2b9648u: goto label_2b9648;
        case 0x2b964cu: goto label_2b964c;
        default: break;
    }

    ctx->pc = 0x2b9440u;

label_2b9440:
    // 0x2b9440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b9444:
    // 0x2b9444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b9448:
    // 0x2b9448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b944c:
    // 0x2b944c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b9450:
    // 0x2b9450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9454:
    // 0x2b9454: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2b9458:
    if (ctx->pc == 0x2B9458u) {
        ctx->pc = 0x2B9458u;
            // 0x2b9458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B945Cu;
        goto label_2b945c;
    }
    ctx->pc = 0x2B9454u;
    {
        const bool branch_taken_0x2b9454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9454u;
            // 0x2b9458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9454) {
            ctx->pc = 0x2B9498u;
            goto label_2b9498;
        }
    }
    ctx->pc = 0x2B945Cu;
label_2b945c:
    // 0x2b945c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2b9460:
    if (ctx->pc == 0x2B9460u) {
        ctx->pc = 0x2B9460u;
            // 0x2b9460: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B9464u;
        goto label_2b9464;
    }
    ctx->pc = 0x2B945Cu;
    {
        const bool branch_taken_0x2b945c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b945c) {
            ctx->pc = 0x2B9460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B945Cu;
            // 0x2b9460: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9484u;
            goto label_2b9484;
        }
    }
    ctx->pc = 0x2B9464u;
label_2b9464:
    // 0x2b9464: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2b9468:
    if (ctx->pc == 0x2B9468u) {
        ctx->pc = 0x2B946Cu;
        goto label_2b946c;
    }
    ctx->pc = 0x2B9464u;
    {
        const bool branch_taken_0x2b9464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9464) {
            ctx->pc = 0x2B9480u;
            goto label_2b9480;
        }
    }
    ctx->pc = 0x2B946Cu;
label_2b946c:
    // 0x2b946c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2b946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b9470:
    // 0x2b9470: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b9474:
    if (ctx->pc == 0x2B9474u) {
        ctx->pc = 0x2B9478u;
        goto label_2b9478;
    }
    ctx->pc = 0x2B9470u;
    {
        const bool branch_taken_0x2b9470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9470) {
            ctx->pc = 0x2B9480u;
            goto label_2b9480;
        }
    }
    ctx->pc = 0x2B9478u;
label_2b9478:
    // 0x2b9478: 0xc0400a8  jal         func_1002A0
label_2b947c:
    if (ctx->pc == 0x2B947Cu) {
        ctx->pc = 0x2B9480u;
        goto label_2b9480;
    }
    ctx->pc = 0x2B9478u;
    SET_GPR_U32(ctx, 31, 0x2B9480u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9480u; }
        if (ctx->pc != 0x2B9480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9480u; }
        if (ctx->pc != 0x2B9480u) { return; }
    }
    ctx->pc = 0x2B9480u;
label_2b9480:
    // 0x2b9480: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b9480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b9484:
    // 0x2b9484: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b9488:
    // 0x2b9488: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b948c:
    if (ctx->pc == 0x2B948Cu) {
        ctx->pc = 0x2B948Cu;
            // 0x2b948c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9490u;
        goto label_2b9490;
    }
    ctx->pc = 0x2B9488u;
    {
        const bool branch_taken_0x2b9488 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b9488) {
            ctx->pc = 0x2B948Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9488u;
            // 0x2b948c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B949Cu;
            goto label_2b949c;
        }
    }
    ctx->pc = 0x2B9490u;
label_2b9490:
    // 0x2b9490: 0xc0400a8  jal         func_1002A0
label_2b9494:
    if (ctx->pc == 0x2B9494u) {
        ctx->pc = 0x2B9494u;
            // 0x2b9494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9498u;
        goto label_2b9498;
    }
    ctx->pc = 0x2B9490u;
    SET_GPR_U32(ctx, 31, 0x2B9498u);
    ctx->pc = 0x2B9494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9490u;
            // 0x2b9494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9498u; }
        if (ctx->pc != 0x2B9498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9498u; }
        if (ctx->pc != 0x2B9498u) { return; }
    }
    ctx->pc = 0x2B9498u;
label_2b9498:
    // 0x2b9498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b9498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b949c:
    // 0x2b949c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b94a0:
    // 0x2b94a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b94a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b94a4:
    // 0x2b94a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b94a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b94a8:
    // 0x2b94a8: 0x3e00008  jr          $ra
label_2b94ac:
    if (ctx->pc == 0x2B94ACu) {
        ctx->pc = 0x2B94ACu;
            // 0x2b94ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B94B0u;
        goto label_2b94b0;
    }
    ctx->pc = 0x2B94A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B94ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B94A8u;
            // 0x2b94ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B94B0u;
label_2b94b0:
    // 0x2b94b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b94b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b94b4:
    // 0x2b94b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b94b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b94b8:
    // 0x2b94b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b94b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b94bc:
    // 0x2b94bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b94bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b94c0:
    // 0x2b94c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b94c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b94c4:
    // 0x2b94c4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2b94c8:
    if (ctx->pc == 0x2B94C8u) {
        ctx->pc = 0x2B94C8u;
            // 0x2b94c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B94CCu;
        goto label_2b94cc;
    }
    ctx->pc = 0x2B94C4u;
    {
        const bool branch_taken_0x2b94c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B94C4u;
            // 0x2b94c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94c4) {
            ctx->pc = 0x2B958Cu;
            goto label_2b958c;
        }
    }
    ctx->pc = 0x2B94CCu;
label_2b94cc:
    // 0x2b94cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b94d0:
    // 0x2b94d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b94d4:
    // 0x2b94d4: 0x24637140  addiu       $v1, $v1, 0x7140
    ctx->pc = 0x2b94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28992));
label_2b94d8:
    // 0x2b94d8: 0x24427180  addiu       $v0, $v0, 0x7180
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29056));
label_2b94dc:
    // 0x2b94dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b94e0:
    // 0x2b94e0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2b94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2b94e4:
    // 0x2b94e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b94e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b94e8:
    // 0x2b94e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2b94e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2b94ec:
    // 0x2b94ec: 0x320f809  jalr        $t9
label_2b94f0:
    if (ctx->pc == 0x2B94F0u) {
        ctx->pc = 0x2B94F4u;
        goto label_2b94f4;
    }
    ctx->pc = 0x2B94ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B94F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B94F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B94F4u; }
            if (ctx->pc != 0x2B94F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B94F4u;
label_2b94f4:
    // 0x2b94f4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2b94f8:
    if (ctx->pc == 0x2B94F8u) {
        ctx->pc = 0x2B94F8u;
            // 0x2b94f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B94FCu;
        goto label_2b94fc;
    }
    ctx->pc = 0x2B94F4u;
    {
        const bool branch_taken_0x2b94f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b94f4) {
            ctx->pc = 0x2B94F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B94F4u;
            // 0x2b94f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9578u;
            goto label_2b9578;
        }
    }
    ctx->pc = 0x2B94FCu;
label_2b94fc:
    // 0x2b94fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9500:
    // 0x2b9500: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b9504:
    // 0x2b9504: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2b9504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2b9508:
    // 0x2b9508: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2b950c:
    // 0x2b950c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b950cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b9510:
    // 0x2b9510: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2b9510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2b9514:
    // 0x2b9514: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b9518:
    if (ctx->pc == 0x2B9518u) {
        ctx->pc = 0x2B9518u;
            // 0x2b9518: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2B951Cu;
        goto label_2b951c;
    }
    ctx->pc = 0x2B9514u;
    {
        const bool branch_taken_0x2b9514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9514u;
            // 0x2b9518: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9514) {
            ctx->pc = 0x2B9550u;
            goto label_2b9550;
        }
    }
    ctx->pc = 0x2B951Cu;
label_2b951c:
    // 0x2b951c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b9520:
    // 0x2b9520: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2b9520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2b9524:
    // 0x2b9524: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2b9524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2b9528:
    // 0x2b9528: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2b9528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b952c:
    // 0x2b952c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2b9530:
    if (ctx->pc == 0x2B9530u) {
        ctx->pc = 0x2B9534u;
        goto label_2b9534;
    }
    ctx->pc = 0x2B952Cu;
    {
        const bool branch_taken_0x2b952c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b952c) {
            ctx->pc = 0x2B9550u;
            goto label_2b9550;
        }
    }
    ctx->pc = 0x2B9534u;
label_2b9534:
    // 0x2b9534: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b9538:
    if (ctx->pc == 0x2B9538u) {
        ctx->pc = 0x2B9538u;
            // 0x2b9538: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2B953Cu;
        goto label_2b953c;
    }
    ctx->pc = 0x2B9534u;
    {
        const bool branch_taken_0x2b9534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9534) {
            ctx->pc = 0x2B9538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9534u;
            // 0x2b9538: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9550u;
            goto label_2b9550;
        }
    }
    ctx->pc = 0x2B953Cu;
label_2b953c:
    // 0x2b953c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b953cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9540:
    // 0x2b9540: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b9544:
    // 0x2b9544: 0x320f809  jalr        $t9
label_2b9548:
    if (ctx->pc == 0x2B9548u) {
        ctx->pc = 0x2B9548u;
            // 0x2b9548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B954Cu;
        goto label_2b954c;
    }
    ctx->pc = 0x2B9544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B954Cu);
        ctx->pc = 0x2B9548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9544u;
            // 0x2b9548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B954Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B954Cu; }
            if (ctx->pc != 0x2B954Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2B954Cu;
label_2b954c:
    // 0x2b954c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2b954cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2b9550:
    // 0x2b9550: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2b9554:
    if (ctx->pc == 0x2B9554u) {
        ctx->pc = 0x2B9558u;
        goto label_2b9558;
    }
    ctx->pc = 0x2B9550u;
    {
        const bool branch_taken_0x2b9550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9550) {
            ctx->pc = 0x2B9574u;
            goto label_2b9574;
        }
    }
    ctx->pc = 0x2B9558u;
label_2b9558:
    // 0x2b9558: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b955c:
    // 0x2b955c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2b955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2b9560:
    // 0x2b9560: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b9564:
    if (ctx->pc == 0x2B9564u) {
        ctx->pc = 0x2B9564u;
            // 0x2b9564: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B9568u;
        goto label_2b9568;
    }
    ctx->pc = 0x2B9560u;
    {
        const bool branch_taken_0x2b9560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9560u;
            // 0x2b9564: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9560) {
            ctx->pc = 0x2B9574u;
            goto label_2b9574;
        }
    }
    ctx->pc = 0x2B9568u;
label_2b9568:
    // 0x2b9568: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b956c:
    // 0x2b956c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2b956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2b9570:
    // 0x2b9570: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b9570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b9574:
    // 0x2b9574: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b9574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b9578:
    // 0x2b9578: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9578u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b957c:
    // 0x2b957c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b9580:
    if (ctx->pc == 0x2B9580u) {
        ctx->pc = 0x2B9580u;
            // 0x2b9580: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9584u;
        goto label_2b9584;
    }
    ctx->pc = 0x2B957Cu;
    {
        const bool branch_taken_0x2b957c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b957c) {
            ctx->pc = 0x2B9580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B957Cu;
            // 0x2b9580: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9590u;
            goto label_2b9590;
        }
    }
    ctx->pc = 0x2B9584u;
label_2b9584:
    // 0x2b9584: 0xc0400a8  jal         func_1002A0
label_2b9588:
    if (ctx->pc == 0x2B9588u) {
        ctx->pc = 0x2B9588u;
            // 0x2b9588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B958Cu;
        goto label_2b958c;
    }
    ctx->pc = 0x2B9584u;
    SET_GPR_U32(ctx, 31, 0x2B958Cu);
    ctx->pc = 0x2B9588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9584u;
            // 0x2b9588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B958Cu; }
        if (ctx->pc != 0x2B958Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B958Cu; }
        if (ctx->pc != 0x2B958Cu) { return; }
    }
    ctx->pc = 0x2B958Cu;
label_2b958c:
    // 0x2b958c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b958cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9590:
    // 0x2b9590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9594:
    // 0x2b9594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9598:
    // 0x2b9598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b959c:
    // 0x2b959c: 0x3e00008  jr          $ra
label_2b95a0:
    if (ctx->pc == 0x2B95A0u) {
        ctx->pc = 0x2B95A0u;
            // 0x2b95a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B95A4u;
        goto label_2b95a4;
    }
    ctx->pc = 0x2B959Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B95A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B959Cu;
            // 0x2b95a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B95A4u;
label_2b95a4:
    // 0x2b95a4: 0x0  nop
    ctx->pc = 0x2b95a4u;
    // NOP
label_2b95a8:
    // 0x2b95a8: 0x0  nop
    ctx->pc = 0x2b95a8u;
    // NOP
label_2b95ac:
    // 0x2b95ac: 0x0  nop
    ctx->pc = 0x2b95acu;
    // NOP
label_2b95b0:
    // 0x2b95b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b95b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b95b4:
    // 0x2b95b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b95b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b95b8:
    // 0x2b95b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b95b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b95bc:
    // 0x2b95bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b95bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b95c0:
    // 0x2b95c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b95c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b95c4:
    // 0x2b95c4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_2b95c8:
    if (ctx->pc == 0x2B95C8u) {
        ctx->pc = 0x2B95C8u;
            // 0x2b95c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B95CCu;
        goto label_2b95cc;
    }
    ctx->pc = 0x2B95C4u;
    {
        const bool branch_taken_0x2b95c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B95C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95C4u;
            // 0x2b95c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95c4) {
            ctx->pc = 0x2B962Cu;
            goto label_2b962c;
        }
    }
    ctx->pc = 0x2B95CCu;
label_2b95cc:
    // 0x2b95cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b95d0:
    // 0x2b95d0: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_2b95d4:
    // 0x2b95d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b95d8:
    // 0x2b95d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b95dc:
    // 0x2b95dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2b95e0:
    if (ctx->pc == 0x2B95E0u) {
        ctx->pc = 0x2B95E0u;
            // 0x2b95e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B95E4u;
        goto label_2b95e4;
    }
    ctx->pc = 0x2B95DCu;
    {
        const bool branch_taken_0x2b95dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b95dc) {
            ctx->pc = 0x2B95E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95DCu;
            // 0x2b95e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B95FCu;
            goto label_2b95fc;
        }
    }
    ctx->pc = 0x2B95E4u;
label_2b95e4:
    // 0x2b95e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b95e8:
    // 0x2b95e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2b95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2b95ec:
    // 0x2b95ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b95f0:
    // 0x2b95f0: 0xc08c8fc  jal         func_2323F0
label_2b95f4:
    if (ctx->pc == 0x2B95F4u) {
        ctx->pc = 0x2B95F4u;
            // 0x2b95f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B95F8u;
        goto label_2b95f8;
    }
    ctx->pc = 0x2B95F0u;
    SET_GPR_U32(ctx, 31, 0x2B95F8u);
    ctx->pc = 0x2B95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95F0u;
            // 0x2b95f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B95F8u; }
        if (ctx->pc != 0x2B95F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B95F8u; }
        if (ctx->pc != 0x2B95F8u) { return; }
    }
    ctx->pc = 0x2B95F8u;
label_2b95f8:
    // 0x2b95f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b95f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b95fc:
    // 0x2b95fc: 0xc08aff8  jal         func_22BFE0
label_2b9600:
    if (ctx->pc == 0x2B9600u) {
        ctx->pc = 0x2B9600u;
            // 0x2b9600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9604u;
        goto label_2b9604;
    }
    ctx->pc = 0x2B95FCu;
    SET_GPR_U32(ctx, 31, 0x2B9604u);
    ctx->pc = 0x2B9600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95FCu;
            // 0x2b9600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BFE0u;
    if (runtime->hasFunction(0x22BFE0u)) {
        auto targetFn = runtime->lookupFunction(0x22BFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9604u; }
        if (ctx->pc != 0x2B9604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BFE0_0x22bfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9604u; }
        if (ctx->pc != 0x2B9604u) { return; }
    }
    ctx->pc = 0x2B9604u;
label_2b9604:
    // 0x2b9604: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2b9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2b9608:
    // 0x2b9608: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b9608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b960c:
    // 0x2b960c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2b9610:
    if (ctx->pc == 0x2B9610u) {
        ctx->pc = 0x2B9610u;
            // 0x2b9610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9614u;
        goto label_2b9614;
    }
    ctx->pc = 0x2B960Cu;
    {
        const bool branch_taken_0x2b960c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b960c) {
            ctx->pc = 0x2B9610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B960Cu;
            // 0x2b9610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9630u;
            goto label_2b9630;
        }
    }
    ctx->pc = 0x2B9614u;
label_2b9614:
    // 0x2b9614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b9614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2b9618:
    // 0x2b9618: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2b9618u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2b961c:
    // 0x2b961c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2b961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2b9620:
    // 0x2b9620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9624:
    // 0x2b9624: 0xc0a7ab4  jal         func_29EAD0
label_2b9628:
    if (ctx->pc == 0x2B9628u) {
        ctx->pc = 0x2B9628u;
            // 0x2b9628: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x2B962Cu;
        goto label_2b962c;
    }
    ctx->pc = 0x2B9624u;
    SET_GPR_U32(ctx, 31, 0x2B962Cu);
    ctx->pc = 0x2B9628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9624u;
            // 0x2b9628: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B962Cu; }
        if (ctx->pc != 0x2B962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B962Cu; }
        if (ctx->pc != 0x2B962Cu) { return; }
    }
    ctx->pc = 0x2B962Cu;
label_2b962c:
    // 0x2b962c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b962cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9630:
    // 0x2b9630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9634:
    // 0x2b9634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9638:
    // 0x2b9638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b963c:
    // 0x2b963c: 0x3e00008  jr          $ra
label_2b9640:
    if (ctx->pc == 0x2B9640u) {
        ctx->pc = 0x2B9640u;
            // 0x2b9640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B9644u;
        goto label_2b9644;
    }
    ctx->pc = 0x2B963Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B963Cu;
            // 0x2b9640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9644u;
label_2b9644:
    // 0x2b9644: 0x0  nop
    ctx->pc = 0x2b9644u;
    // NOP
label_2b9648:
    // 0x2b9648: 0x0  nop
    ctx->pc = 0x2b9648u;
    // NOP
label_2b964c:
    // 0x2b964c: 0x0  nop
    ctx->pc = 0x2b964cu;
    // NOP
}
