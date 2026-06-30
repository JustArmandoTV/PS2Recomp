#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0380
// Address: 0x2f0380 - 0x2f0680
void sub_002F0380_0x2f0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0380_0x2f0380");
#endif

    switch (ctx->pc) {
        case 0x2f0380u: goto label_2f0380;
        case 0x2f0384u: goto label_2f0384;
        case 0x2f0388u: goto label_2f0388;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0390u: goto label_2f0390;
        case 0x2f0394u: goto label_2f0394;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f039cu: goto label_2f039c;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03a4u: goto label_2f03a4;
        case 0x2f03a8u: goto label_2f03a8;
        case 0x2f03acu: goto label_2f03ac;
        case 0x2f03b0u: goto label_2f03b0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03b8u: goto label_2f03b8;
        case 0x2f03bcu: goto label_2f03bc;
        case 0x2f03c0u: goto label_2f03c0;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03c8u: goto label_2f03c8;
        case 0x2f03ccu: goto label_2f03cc;
        case 0x2f03d0u: goto label_2f03d0;
        case 0x2f03d4u: goto label_2f03d4;
        case 0x2f03d8u: goto label_2f03d8;
        case 0x2f03dcu: goto label_2f03dc;
        case 0x2f03e0u: goto label_2f03e0;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f03e8u: goto label_2f03e8;
        case 0x2f03ecu: goto label_2f03ec;
        case 0x2f03f0u: goto label_2f03f0;
        case 0x2f03f4u: goto label_2f03f4;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f03fcu: goto label_2f03fc;
        case 0x2f0400u: goto label_2f0400;
        case 0x2f0404u: goto label_2f0404;
        case 0x2f0408u: goto label_2f0408;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0410u: goto label_2f0410;
        case 0x2f0414u: goto label_2f0414;
        case 0x2f0418u: goto label_2f0418;
        case 0x2f041cu: goto label_2f041c;
        case 0x2f0420u: goto label_2f0420;
        case 0x2f0424u: goto label_2f0424;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f042cu: goto label_2f042c;
        case 0x2f0430u: goto label_2f0430;
        case 0x2f0434u: goto label_2f0434;
        case 0x2f0438u: goto label_2f0438;
        case 0x2f043cu: goto label_2f043c;
        case 0x2f0440u: goto label_2f0440;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0448u: goto label_2f0448;
        case 0x2f044cu: goto label_2f044c;
        case 0x2f0450u: goto label_2f0450;
        case 0x2f0454u: goto label_2f0454;
        case 0x2f0458u: goto label_2f0458;
        case 0x2f045cu: goto label_2f045c;
        case 0x2f0460u: goto label_2f0460;
        case 0x2f0464u: goto label_2f0464;
        case 0x2f0468u: goto label_2f0468;
        case 0x2f046cu: goto label_2f046c;
        case 0x2f0470u: goto label_2f0470;
        case 0x2f0474u: goto label_2f0474;
        case 0x2f0478u: goto label_2f0478;
        case 0x2f047cu: goto label_2f047c;
        case 0x2f0480u: goto label_2f0480;
        case 0x2f0484u: goto label_2f0484;
        case 0x2f0488u: goto label_2f0488;
        case 0x2f048cu: goto label_2f048c;
        case 0x2f0490u: goto label_2f0490;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f0498u: goto label_2f0498;
        case 0x2f049cu: goto label_2f049c;
        case 0x2f04a0u: goto label_2f04a0;
        case 0x2f04a4u: goto label_2f04a4;
        case 0x2f04a8u: goto label_2f04a8;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b0u: goto label_2f04b0;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04b8u: goto label_2f04b8;
        case 0x2f04bcu: goto label_2f04bc;
        case 0x2f04c0u: goto label_2f04c0;
        case 0x2f04c4u: goto label_2f04c4;
        case 0x2f04c8u: goto label_2f04c8;
        case 0x2f04ccu: goto label_2f04cc;
        case 0x2f04d0u: goto label_2f04d0;
        case 0x2f04d4u: goto label_2f04d4;
        case 0x2f04d8u: goto label_2f04d8;
        case 0x2f04dcu: goto label_2f04dc;
        case 0x2f04e0u: goto label_2f04e0;
        case 0x2f04e4u: goto label_2f04e4;
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f04ecu: goto label_2f04ec;
        case 0x2f04f0u: goto label_2f04f0;
        case 0x2f04f4u: goto label_2f04f4;
        case 0x2f04f8u: goto label_2f04f8;
        case 0x2f04fcu: goto label_2f04fc;
        case 0x2f0500u: goto label_2f0500;
        case 0x2f0504u: goto label_2f0504;
        case 0x2f0508u: goto label_2f0508;
        case 0x2f050cu: goto label_2f050c;
        case 0x2f0510u: goto label_2f0510;
        case 0x2f0514u: goto label_2f0514;
        case 0x2f0518u: goto label_2f0518;
        case 0x2f051cu: goto label_2f051c;
        case 0x2f0520u: goto label_2f0520;
        case 0x2f0524u: goto label_2f0524;
        case 0x2f0528u: goto label_2f0528;
        case 0x2f052cu: goto label_2f052c;
        case 0x2f0530u: goto label_2f0530;
        case 0x2f0534u: goto label_2f0534;
        case 0x2f0538u: goto label_2f0538;
        case 0x2f053cu: goto label_2f053c;
        case 0x2f0540u: goto label_2f0540;
        case 0x2f0544u: goto label_2f0544;
        case 0x2f0548u: goto label_2f0548;
        case 0x2f054cu: goto label_2f054c;
        case 0x2f0550u: goto label_2f0550;
        case 0x2f0554u: goto label_2f0554;
        case 0x2f0558u: goto label_2f0558;
        case 0x2f055cu: goto label_2f055c;
        case 0x2f0560u: goto label_2f0560;
        case 0x2f0564u: goto label_2f0564;
        case 0x2f0568u: goto label_2f0568;
        case 0x2f056cu: goto label_2f056c;
        case 0x2f0570u: goto label_2f0570;
        case 0x2f0574u: goto label_2f0574;
        case 0x2f0578u: goto label_2f0578;
        case 0x2f057cu: goto label_2f057c;
        case 0x2f0580u: goto label_2f0580;
        case 0x2f0584u: goto label_2f0584;
        case 0x2f0588u: goto label_2f0588;
        case 0x2f058cu: goto label_2f058c;
        case 0x2f0590u: goto label_2f0590;
        case 0x2f0594u: goto label_2f0594;
        case 0x2f0598u: goto label_2f0598;
        case 0x2f059cu: goto label_2f059c;
        case 0x2f05a0u: goto label_2f05a0;
        case 0x2f05a4u: goto label_2f05a4;
        case 0x2f05a8u: goto label_2f05a8;
        case 0x2f05acu: goto label_2f05ac;
        case 0x2f05b0u: goto label_2f05b0;
        case 0x2f05b4u: goto label_2f05b4;
        case 0x2f05b8u: goto label_2f05b8;
        case 0x2f05bcu: goto label_2f05bc;
        case 0x2f05c0u: goto label_2f05c0;
        case 0x2f05c4u: goto label_2f05c4;
        case 0x2f05c8u: goto label_2f05c8;
        case 0x2f05ccu: goto label_2f05cc;
        case 0x2f05d0u: goto label_2f05d0;
        case 0x2f05d4u: goto label_2f05d4;
        case 0x2f05d8u: goto label_2f05d8;
        case 0x2f05dcu: goto label_2f05dc;
        case 0x2f05e0u: goto label_2f05e0;
        case 0x2f05e4u: goto label_2f05e4;
        case 0x2f05e8u: goto label_2f05e8;
        case 0x2f05ecu: goto label_2f05ec;
        case 0x2f05f0u: goto label_2f05f0;
        case 0x2f05f4u: goto label_2f05f4;
        case 0x2f05f8u: goto label_2f05f8;
        case 0x2f05fcu: goto label_2f05fc;
        case 0x2f0600u: goto label_2f0600;
        case 0x2f0604u: goto label_2f0604;
        case 0x2f0608u: goto label_2f0608;
        case 0x2f060cu: goto label_2f060c;
        case 0x2f0610u: goto label_2f0610;
        case 0x2f0614u: goto label_2f0614;
        case 0x2f0618u: goto label_2f0618;
        case 0x2f061cu: goto label_2f061c;
        case 0x2f0620u: goto label_2f0620;
        case 0x2f0624u: goto label_2f0624;
        case 0x2f0628u: goto label_2f0628;
        case 0x2f062cu: goto label_2f062c;
        case 0x2f0630u: goto label_2f0630;
        case 0x2f0634u: goto label_2f0634;
        case 0x2f0638u: goto label_2f0638;
        case 0x2f063cu: goto label_2f063c;
        case 0x2f0640u: goto label_2f0640;
        case 0x2f0644u: goto label_2f0644;
        case 0x2f0648u: goto label_2f0648;
        case 0x2f064cu: goto label_2f064c;
        case 0x2f0650u: goto label_2f0650;
        case 0x2f0654u: goto label_2f0654;
        case 0x2f0658u: goto label_2f0658;
        case 0x2f065cu: goto label_2f065c;
        case 0x2f0660u: goto label_2f0660;
        case 0x2f0664u: goto label_2f0664;
        case 0x2f0668u: goto label_2f0668;
        case 0x2f066cu: goto label_2f066c;
        case 0x2f0670u: goto label_2f0670;
        case 0x2f0674u: goto label_2f0674;
        case 0x2f0678u: goto label_2f0678;
        case 0x2f067cu: goto label_2f067c;
        default: break;
    }

    ctx->pc = 0x2f0380u;

label_2f0380:
    // 0x2f0380: 0x3e00008  jr          $ra
label_2f0384:
    if (ctx->pc == 0x2F0384u) {
        ctx->pc = 0x2F0384u;
            // 0x2f0384: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->pc = 0x2F0388u;
        goto label_2f0388;
    }
    ctx->pc = 0x2F0380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0380u;
            // 0x2f0384: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0388u;
label_2f0388:
    // 0x2f0388: 0x0  nop
    ctx->pc = 0x2f0388u;
    // NOP
label_2f038c:
    // 0x2f038c: 0x0  nop
    ctx->pc = 0x2f038cu;
    // NOP
label_2f0390:
    // 0x2f0390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f0394:
    // 0x2f0394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f0398:
    // 0x2f0398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f039c:
    // 0x2f039c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f03a0:
    // 0x2f03a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f03a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f03a4:
    // 0x2f03a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2f03a8:
    if (ctx->pc == 0x2F03A8u) {
        ctx->pc = 0x2F03A8u;
            // 0x2f03a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F03ACu;
        goto label_2f03ac;
    }
    ctx->pc = 0x2F03A4u;
    {
        const bool branch_taken_0x2f03a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03A4u;
            // 0x2f03a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03a4) {
            ctx->pc = 0x2F03E8u;
            goto label_2f03e8;
        }
    }
    ctx->pc = 0x2F03ACu;
label_2f03ac:
    // 0x2f03ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f03acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f03b0:
    // 0x2f03b0: 0x244231f0  addiu       $v0, $v0, 0x31F0
    ctx->pc = 0x2f03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12784));
label_2f03b4:
    // 0x2f03b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2f03b8:
    if (ctx->pc == 0x2F03B8u) {
        ctx->pc = 0x2F03B8u;
            // 0x2f03b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F03BCu;
        goto label_2f03bc;
    }
    ctx->pc = 0x2F03B4u;
    {
        const bool branch_taken_0x2f03b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03B4u;
            // 0x2f03b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03b4) {
            ctx->pc = 0x2F03D0u;
            goto label_2f03d0;
        }
    }
    ctx->pc = 0x2F03BCu;
label_2f03bc:
    // 0x2f03bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f03c0:
    // 0x2f03c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f03c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f03c4:
    // 0x2f03c4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2f03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2f03c8:
    // 0x2f03c8: 0xc057a68  jal         func_15E9A0
label_2f03cc:
    if (ctx->pc == 0x2F03CCu) {
        ctx->pc = 0x2F03CCu;
            // 0x2f03cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F03D0u;
        goto label_2f03d0;
    }
    ctx->pc = 0x2F03C8u;
    SET_GPR_U32(ctx, 31, 0x2F03D0u);
    ctx->pc = 0x2F03CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03C8u;
            // 0x2f03cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F03D0u; }
        if (ctx->pc != 0x2F03D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F03D0u; }
        if (ctx->pc != 0x2F03D0u) { return; }
    }
    ctx->pc = 0x2F03D0u;
label_2f03d0:
    // 0x2f03d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2f03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2f03d4:
    // 0x2f03d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f03d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2f03d8:
    // 0x2f03d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2f03dc:
    if (ctx->pc == 0x2F03DCu) {
        ctx->pc = 0x2F03DCu;
            // 0x2f03dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F03E0u;
        goto label_2f03e0;
    }
    ctx->pc = 0x2F03D8u;
    {
        const bool branch_taken_0x2f03d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f03d8) {
            ctx->pc = 0x2F03DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03D8u;
            // 0x2f03dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F03ECu;
            goto label_2f03ec;
        }
    }
    ctx->pc = 0x2F03E0u;
label_2f03e0:
    // 0x2f03e0: 0xc0400a8  jal         func_1002A0
label_2f03e4:
    if (ctx->pc == 0x2F03E4u) {
        ctx->pc = 0x2F03E4u;
            // 0x2f03e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F03E8u;
        goto label_2f03e8;
    }
    ctx->pc = 0x2F03E0u;
    SET_GPR_U32(ctx, 31, 0x2F03E8u);
    ctx->pc = 0x2F03E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03E0u;
            // 0x2f03e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F03E8u; }
        if (ctx->pc != 0x2F03E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F03E8u; }
        if (ctx->pc != 0x2F03E8u) { return; }
    }
    ctx->pc = 0x2F03E8u;
label_2f03e8:
    // 0x2f03e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f03e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f03ec:
    // 0x2f03ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f03ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f03f0:
    // 0x2f03f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f03f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f03f4:
    // 0x2f03f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f03f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f03f8:
    // 0x2f03f8: 0x3e00008  jr          $ra
label_2f03fc:
    if (ctx->pc == 0x2F03FCu) {
        ctx->pc = 0x2F03FCu;
            // 0x2f03fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2F0400u;
        goto label_2f0400;
    }
    ctx->pc = 0x2F03F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F03FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F03F8u;
            // 0x2f03fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0400u;
label_2f0400:
    // 0x2f0400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f0404:
    // 0x2f0404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f0404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f0408:
    // 0x2f0408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f0408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f040c:
    // 0x2f040c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2f0410:
    // 0x2f0410: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f0410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f0414:
    // 0x2f0414: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f0414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f0418:
    // 0x2f0418: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f041c:
    // 0x2f041c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f0420:
    // 0x2f0420: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f0424:
    // 0x2f0424: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f0424u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2f0428:
    // 0x2f0428: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f042c:
    // 0x2f042c: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x2f042cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_2f0430:
    // 0x2f0430: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f0434:
    // 0x2f0434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f0438:
    // 0x2f0438: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f043c:
    if (ctx->pc == 0x2F043Cu) {
        ctx->pc = 0x2F043Cu;
            // 0x2f043c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0440u;
        goto label_2f0440;
    }
    ctx->pc = 0x2F0438u;
    {
        const bool branch_taken_0x2f0438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0438u;
            // 0x2f043c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0438) {
            ctx->pc = 0x2F0454u;
            goto label_2f0454;
        }
    }
    ctx->pc = 0x2F0440u;
label_2f0440:
    // 0x2f0440: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f0444:
    // 0x2f0444: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x2f0444u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_2f0448:
    // 0x2f0448: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x2f0448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_2f044c:
    // 0x2f044c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f0450:
    if (ctx->pc == 0x2F0450u) {
        ctx->pc = 0x2F0450u;
            // 0x2f0450: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x2F0454u;
        goto label_2f0454;
    }
    ctx->pc = 0x2F044Cu;
    {
        const bool branch_taken_0x2f044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F044Cu;
            // 0x2f0450: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f044c) {
            ctx->pc = 0x2F0464u;
            goto label_2f0464;
        }
    }
    ctx->pc = 0x2F0454u;
label_2f0454:
    // 0x2f0454: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f0454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f0458:
    // 0x2f0458: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x2f0458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_2f045c:
    // 0x2f045c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x2f045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_2f0460:
    // 0x2f0460: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x2f0460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_2f0464:
    // 0x2f0464: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x2f0464u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_2f0468:
    // 0x2f0468: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x2f0468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_2f046c:
    // 0x2f046c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2f046cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_2f0470:
    // 0x2f0470: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f0470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2f0474:
    // 0x2f0474: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f0474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_2f0478:
    // 0x2f0478: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x2f0478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_2f047c:
    // 0x2f047c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2f047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2f0480:
    // 0x2f0480: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2f0480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2f0484:
    // 0x2f0484: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2f0484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2f0488:
    // 0x2f0488: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x2f0488u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_2f048c:
    // 0x2f048c: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x2f048cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_2f0490:
    // 0x2f0490: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x2f0490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_2f0494:
    // 0x2f0494: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x2f0494u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_2f0498:
    // 0x2f0498: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f0498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f049c:
    // 0x2f049c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f04a0:
    // 0x2f04a0: 0xc0574d8  jal         func_15D360
label_2f04a4:
    if (ctx->pc == 0x2F04A4u) {
        ctx->pc = 0x2F04A4u;
            // 0x2f04a4: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x2F04A8u;
        goto label_2f04a8;
    }
    ctx->pc = 0x2F04A0u;
    SET_GPR_U32(ctx, 31, 0x2F04A8u);
    ctx->pc = 0x2F04A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04A0u;
            // 0x2f04a4: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04A8u; }
        if (ctx->pc != 0x2F04A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04A8u; }
        if (ctx->pc != 0x2F04A8u) { return; }
    }
    ctx->pc = 0x2F04A8u;
label_2f04a8:
    // 0x2f04a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f04a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f04ac:
    // 0x2f04ac: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f04acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f04b0:
    // 0x2f04b0: 0x320f809  jalr        $t9
label_2f04b4:
    if (ctx->pc == 0x2F04B4u) {
        ctx->pc = 0x2F04B4u;
            // 0x2f04b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F04B8u;
        goto label_2f04b8;
    }
    ctx->pc = 0x2F04B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F04B8u);
        ctx->pc = 0x2F04B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04B0u;
            // 0x2f04b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F04B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F04B8u; }
            if (ctx->pc != 0x2F04B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F04B8u;
label_2f04b8:
    // 0x2f04b8: 0xc0b36b4  jal         func_2CDAD0
label_2f04bc:
    if (ctx->pc == 0x2F04BCu) {
        ctx->pc = 0x2F04C0u;
        goto label_2f04c0;
    }
    ctx->pc = 0x2F04B8u;
    SET_GPR_U32(ctx, 31, 0x2F04C0u);
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04C0u; }
        if (ctx->pc != 0x2F04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04C0u; }
        if (ctx->pc != 0x2F04C0u) { return; }
    }
    ctx->pc = 0x2F04C0u;
label_2f04c0:
    // 0x2f04c0: 0xc0b9c64  jal         func_2E7190
label_2f04c4:
    if (ctx->pc == 0x2F04C4u) {
        ctx->pc = 0x2F04C4u;
            // 0x2f04c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F04C8u;
        goto label_2f04c8;
    }
    ctx->pc = 0x2F04C0u;
    SET_GPR_U32(ctx, 31, 0x2F04C8u);
    ctx->pc = 0x2F04C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04C0u;
            // 0x2f04c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04C8u; }
        if (ctx->pc != 0x2F04C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04C8u; }
        if (ctx->pc != 0x2F04C8u) { return; }
    }
    ctx->pc = 0x2F04C8u;
label_2f04c8:
    // 0x2f04c8: 0xc0bc1c0  jal         func_2F0700
label_2f04cc:
    if (ctx->pc == 0x2F04CCu) {
        ctx->pc = 0x2F04CCu;
            // 0x2f04cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F04D0u;
        goto label_2f04d0;
    }
    ctx->pc = 0x2F04C8u;
    SET_GPR_U32(ctx, 31, 0x2F04D0u);
    ctx->pc = 0x2F04CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04C8u;
            // 0x2f04cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0700u;
    if (runtime->hasFunction(0x2F0700u)) {
        auto targetFn = runtime->lookupFunction(0x2F0700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04D0u; }
        if (ctx->pc != 0x2F04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0700_0x2f0700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04D0u; }
        if (ctx->pc != 0x2F04D0u) { return; }
    }
    ctx->pc = 0x2F04D0u;
label_2f04d0:
    // 0x2f04d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f04d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f04d4:
    // 0x2f04d4: 0xc0bc1bc  jal         func_2F06F0
label_2f04d8:
    if (ctx->pc == 0x2F04D8u) {
        ctx->pc = 0x2F04D8u;
            // 0x2f04d8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2F04DCu;
        goto label_2f04dc;
    }
    ctx->pc = 0x2F04D4u;
    SET_GPR_U32(ctx, 31, 0x2F04DCu);
    ctx->pc = 0x2F04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04D4u;
            // 0x2f04d8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06F0u;
    if (runtime->hasFunction(0x2F06F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04DCu; }
        if (ctx->pc != 0x2F04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06F0_0x2f06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F04DCu; }
        if (ctx->pc != 0x2F04DCu) { return; }
    }
    ctx->pc = 0x2F04DCu;
label_2f04dc:
    // 0x2f04dc: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
label_2f04e0:
    if (ctx->pc == 0x2F04E0u) {
        ctx->pc = 0x2F04E0u;
            // 0x2f04e0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2F04E4u;
        goto label_2f04e4;
    }
    ctx->pc = 0x2F04DCu;
    {
        const bool branch_taken_0x2f04dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f04dc) {
            ctx->pc = 0x2F04E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04DCu;
            // 0x2f04e0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F064Cu;
            goto label_2f064c;
        }
    }
    ctx->pc = 0x2F04E4u;
label_2f04e4:
    // 0x2f04e4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f04e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f04e8:
    // 0x2f04e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f04e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f04ec:
    // 0x2f04ec: 0x320f809  jalr        $t9
label_2f04f0:
    if (ctx->pc == 0x2F04F0u) {
        ctx->pc = 0x2F04F0u;
            // 0x2f04f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F04F4u;
        goto label_2f04f4;
    }
    ctx->pc = 0x2F04ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F04F4u);
        ctx->pc = 0x2F04F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F04ECu;
            // 0x2f04f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F04F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F04F4u; }
            if (ctx->pc != 0x2F04F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F04F4u;
label_2f04f4:
    // 0x2f04f4: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2f04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2f04f8:
    // 0x2f04f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f04fc:
    // 0x2f04fc: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
label_2f0500:
    if (ctx->pc == 0x2F0500u) {
        ctx->pc = 0x2F0504u;
        goto label_2f0504;
    }
    ctx->pc = 0x2F04FCu;
    {
        const bool branch_taken_0x2f04fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f04fc) {
            ctx->pc = 0x2F0648u;
            goto label_2f0648;
        }
    }
    ctx->pc = 0x2F0504u;
label_2f0504:
    // 0x2f0504: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2f0504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f0508:
    // 0x2f0508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f0508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f050c:
    // 0x2f050c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2f0510:
    // 0x2f0510: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x2f0510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0514:
    // 0x2f0514: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x2f0514u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2f0518:
    // 0x2f0518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f051c:
    // 0x2f051c: 0x8c740068  lw          $s4, 0x68($v1)
    ctx->pc = 0x2f051cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_2f0520:
    // 0x2f0520: 0x24710078  addiu       $s1, $v1, 0x78
    ctx->pc = 0x2f0520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_2f0524:
    // 0x2f0524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f0524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0528:
    // 0x2f0528: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2f052c:
    if (ctx->pc == 0x2F052Cu) {
        ctx->pc = 0x2F052Cu;
            // 0x2f052c: 0x24700058  addiu       $s0, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->pc = 0x2F0530u;
        goto label_2f0530;
    }
    ctx->pc = 0x2F0528u;
    {
        const bool branch_taken_0x2f0528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0528u;
            // 0x2f052c: 0x24700058  addiu       $s0, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0528) {
            ctx->pc = 0x2F0564u;
            goto label_2f0564;
        }
    }
    ctx->pc = 0x2F0530u;
label_2f0530:
    // 0x2f0530: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f0530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f0534:
    // 0x2f0534: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2f0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f0538:
    // 0x2f0538: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x2f0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f053c:
    // 0x2f053c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2f053cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2f0540:
    // 0x2f0540: 0x320f809  jalr        $t9
label_2f0544:
    if (ctx->pc == 0x2F0544u) {
        ctx->pc = 0x2F0544u;
            // 0x2f0544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0548u;
        goto label_2f0548;
    }
    ctx->pc = 0x2F0540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0548u);
        ctx->pc = 0x2F0544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0540u;
            // 0x2f0544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0548u; }
            if (ctx->pc != 0x2F0548u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0548u;
label_2f0548:
    // 0x2f0548: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x2f0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f054c:
    // 0x2f054c: 0xc6ad000c  lwc1        $f13, 0xC($s5)
    ctx->pc = 0x2f054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f0550:
    // 0x2f0550: 0xc6ae0010  lwc1        $f14, 0x10($s5)
    ctx->pc = 0x2f0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f0554:
    // 0x2f0554: 0xc0bc1b8  jal         func_2F06E0
label_2f0558:
    if (ctx->pc == 0x2F0558u) {
        ctx->pc = 0x2F0558u;
            // 0x2f0558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F055Cu;
        goto label_2f055c;
    }
    ctx->pc = 0x2F0554u;
    SET_GPR_U32(ctx, 31, 0x2F055Cu);
    ctx->pc = 0x2F0558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0554u;
            // 0x2f0558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06E0u;
    if (runtime->hasFunction(0x2F06E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F055Cu; }
        if (ctx->pc != 0x2F055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06E0_0x2f06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F055Cu; }
        if (ctx->pc != 0x2F055Cu) { return; }
    }
    ctx->pc = 0x2F055Cu;
label_2f055c:
    // 0x2f055c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2f0560:
    if (ctx->pc == 0x2F0560u) {
        ctx->pc = 0x2F0564u;
        goto label_2f0564;
    }
    ctx->pc = 0x2F055Cu;
    {
        const bool branch_taken_0x2f055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f055c) {
            ctx->pc = 0x2F0648u;
            goto label_2f0648;
        }
    }
    ctx->pc = 0x2F0564u;
label_2f0564:
    // 0x2f0564: 0xc0bc1b4  jal         func_2F06D0
label_2f0568:
    if (ctx->pc == 0x2F0568u) {
        ctx->pc = 0x2F056Cu;
        goto label_2f056c;
    }
    ctx->pc = 0x2F0564u;
    SET_GPR_U32(ctx, 31, 0x2F056Cu);
    ctx->pc = 0x2F06D0u;
    if (runtime->hasFunction(0x2F06D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F056Cu; }
        if (ctx->pc != 0x2F056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06D0_0x2f06d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F056Cu; }
        if (ctx->pc != 0x2F056Cu) { return; }
    }
    ctx->pc = 0x2F056Cu;
label_2f056c:
    // 0x2f056c: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x2f056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f0570:
    // 0x2f0570: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f0570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0574:
    // 0x2f0574: 0xc68d0000  lwc1        $f13, 0x0($s4)
    ctx->pc = 0x2f0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f0578:
    // 0x2f0578: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2f0578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f057c:
    // 0x2f057c: 0xc0bc1ac  jal         func_2F06B0
label_2f0580:
    if (ctx->pc == 0x2F0580u) {
        ctx->pc = 0x2F0580u;
            // 0x2f0580: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2F0584u;
        goto label_2f0584;
    }
    ctx->pc = 0x2F057Cu;
    SET_GPR_U32(ctx, 31, 0x2F0584u);
    ctx->pc = 0x2F0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F057Cu;
            // 0x2f0580: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06B0u;
    if (runtime->hasFunction(0x2F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0584u; }
        if (ctx->pc != 0x2F0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06B0_0x2f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0584u; }
        if (ctx->pc != 0x2F0584u) { return; }
    }
    ctx->pc = 0x2F0584u;
label_2f0584:
    // 0x2f0584: 0xc6ac0004  lwc1        $f12, 0x4($s5)
    ctx->pc = 0x2f0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f0588:
    // 0x2f0588: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2f0588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f058c:
    // 0x2f058c: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x2f058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f0590:
    // 0x2f0590: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2f0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f0594:
    // 0x2f0594: 0xc0bc1ac  jal         func_2F06B0
label_2f0598:
    if (ctx->pc == 0x2F0598u) {
        ctx->pc = 0x2F0598u;
            // 0x2f0598: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F059Cu;
        goto label_2f059c;
    }
    ctx->pc = 0x2F0594u;
    SET_GPR_U32(ctx, 31, 0x2F059Cu);
    ctx->pc = 0x2F0598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0594u;
            // 0x2f0598: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06B0u;
    if (runtime->hasFunction(0x2F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F059Cu; }
        if (ctx->pc != 0x2F059Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06B0_0x2f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F059Cu; }
        if (ctx->pc != 0x2F059Cu) { return; }
    }
    ctx->pc = 0x2F059Cu;
label_2f059c:
    // 0x2f059c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f059cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f05a0:
    // 0x2f05a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f05a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f05a4:
    // 0x2f05a4: 0xc0bc1a4  jal         func_2F0690
label_2f05a8:
    if (ctx->pc == 0x2F05A8u) {
        ctx->pc = 0x2F05A8u;
            // 0x2f05a8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F05ACu;
        goto label_2f05ac;
    }
    ctx->pc = 0x2F05A4u;
    SET_GPR_U32(ctx, 31, 0x2F05ACu);
    ctx->pc = 0x2F05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05A4u;
            // 0x2f05a8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0690u;
    if (runtime->hasFunction(0x2F0690u)) {
        auto targetFn = runtime->lookupFunction(0x2F0690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05ACu; }
        if (ctx->pc != 0x2F05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0690_0x2f0690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05ACu; }
        if (ctx->pc != 0x2F05ACu) { return; }
    }
    ctx->pc = 0x2F05ACu;
label_2f05ac:
    // 0x2f05ac: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x2f05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f05b0:
    // 0x2f05b0: 0xc68d0008  lwc1        $f13, 0x8($s4)
    ctx->pc = 0x2f05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f05b4:
    // 0x2f05b4: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2f05b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f05b8:
    // 0x2f05b8: 0xc0bc1ac  jal         func_2F06B0
label_2f05bc:
    if (ctx->pc == 0x2F05BCu) {
        ctx->pc = 0x2F05BCu;
            // 0x2f05bc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2F05C0u;
        goto label_2f05c0;
    }
    ctx->pc = 0x2F05B8u;
    SET_GPR_U32(ctx, 31, 0x2F05C0u);
    ctx->pc = 0x2F05BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05B8u;
            // 0x2f05bc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06B0u;
    if (runtime->hasFunction(0x2F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05C0u; }
        if (ctx->pc != 0x2F05C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06B0_0x2f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05C0u; }
        if (ctx->pc != 0x2F05C0u) { return; }
    }
    ctx->pc = 0x2F05C0u;
label_2f05c0:
    // 0x2f05c0: 0xc6ac000c  lwc1        $f12, 0xC($s5)
    ctx->pc = 0x2f05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f05c4:
    // 0x2f05c4: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2f05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f05c8:
    // 0x2f05c8: 0xc68d000c  lwc1        $f13, 0xC($s4)
    ctx->pc = 0x2f05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f05cc:
    // 0x2f05cc: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2f05ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f05d0:
    // 0x2f05d0: 0xc0bc1ac  jal         func_2F06B0
label_2f05d4:
    if (ctx->pc == 0x2F05D4u) {
        ctx->pc = 0x2F05D4u;
            // 0x2f05d4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F05D8u;
        goto label_2f05d8;
    }
    ctx->pc = 0x2F05D0u;
    SET_GPR_U32(ctx, 31, 0x2F05D8u);
    ctx->pc = 0x2F05D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05D0u;
            // 0x2f05d4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06B0u;
    if (runtime->hasFunction(0x2F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05D8u; }
        if (ctx->pc != 0x2F05D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06B0_0x2f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05D8u; }
        if (ctx->pc != 0x2F05D8u) { return; }
    }
    ctx->pc = 0x2F05D8u;
label_2f05d8:
    // 0x2f05d8: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x2f05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f05dc:
    // 0x2f05dc: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2f05dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f05e0:
    // 0x2f05e0: 0xc68d0010  lwc1        $f13, 0x10($s4)
    ctx->pc = 0x2f05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f05e4:
    // 0x2f05e4: 0xc62e0000  lwc1        $f14, 0x0($s1)
    ctx->pc = 0x2f05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2f05e8:
    // 0x2f05e8: 0xc0bc1ac  jal         func_2F06B0
label_2f05ec:
    if (ctx->pc == 0x2F05ECu) {
        ctx->pc = 0x2F05ECu;
            // 0x2f05ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F05F0u;
        goto label_2f05f0;
    }
    ctx->pc = 0x2F05E8u;
    SET_GPR_U32(ctx, 31, 0x2F05F0u);
    ctx->pc = 0x2F05ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05E8u;
            // 0x2f05ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06B0u;
    if (runtime->hasFunction(0x2F06B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05F0u; }
        if (ctx->pc != 0x2F05F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06B0_0x2f06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F05F0u; }
        if (ctx->pc != 0x2F05F0u) { return; }
    }
    ctx->pc = 0x2F05F0u;
label_2f05f0:
    // 0x2f05f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f05f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f05f4:
    // 0x2f05f4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2f05f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2f05f8:
    // 0x2f05f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f05f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2f05fc:
    // 0x2f05fc: 0xc0bc1a0  jal         func_2F0680
label_2f0600:
    if (ctx->pc == 0x2F0600u) {
        ctx->pc = 0x2F0600u;
            // 0x2f0600: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2F0604u;
        goto label_2f0604;
    }
    ctx->pc = 0x2F05FCu;
    SET_GPR_U32(ctx, 31, 0x2F0604u);
    ctx->pc = 0x2F0600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F05FCu;
            // 0x2f0600: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0680u;
    if (runtime->hasFunction(0x2F0680u)) {
        auto targetFn = runtime->lookupFunction(0x2F0680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0604u; }
        if (ctx->pc != 0x2F0604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0680_0x2f0680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0604u; }
        if (ctx->pc != 0x2F0604u) { return; }
    }
    ctx->pc = 0x2F0604u;
label_2f0604:
    // 0x2f0604: 0xc0775b8  jal         func_1DD6E0
label_2f0608:
    if (ctx->pc == 0x2F0608u) {
        ctx->pc = 0x2F060Cu;
        goto label_2f060c;
    }
    ctx->pc = 0x2F0604u;
    SET_GPR_U32(ctx, 31, 0x2F060Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F060Cu; }
        if (ctx->pc != 0x2F060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F060Cu; }
        if (ctx->pc != 0x2F060Cu) { return; }
    }
    ctx->pc = 0x2F060Cu;
label_2f060c:
    // 0x2f060c: 0xc0775b4  jal         func_1DD6D0
label_2f0610:
    if (ctx->pc == 0x2F0610u) {
        ctx->pc = 0x2F0610u;
            // 0x2f0610: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F0614u;
        goto label_2f0614;
    }
    ctx->pc = 0x2F060Cu;
    SET_GPR_U32(ctx, 31, 0x2F0614u);
    ctx->pc = 0x2F0610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F060Cu;
            // 0x2f0610: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0614u; }
        if (ctx->pc != 0x2F0614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0614u; }
        if (ctx->pc != 0x2F0614u) { return; }
    }
    ctx->pc = 0x2F0614u;
label_2f0614:
    // 0x2f0614: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x2f0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0618:
    // 0x2f0618: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f0618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f061c:
    // 0x2f061c: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x2f061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f0620:
    // 0x2f0620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f0620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f0624:
    // 0x2f0624: 0x0  nop
    ctx->pc = 0x2f0624u;
    // NOP
label_2f0628:
    // 0x2f0628: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x2f0628u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2f062c:
    // 0x2f062c: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x2f062cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_2f0630:
    // 0x2f0630: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f0630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0634:
    // 0x2f0634: 0x0  nop
    ctx->pc = 0x2f0634u;
    // NOP
label_2f0638:
    // 0x2f0638: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f0638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f063c:
    // 0x2f063c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f0640:
    if (ctx->pc == 0x2F0640u) {
        ctx->pc = 0x2F0640u;
            // 0x2f0640: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x2F0644u;
        goto label_2f0644;
    }
    ctx->pc = 0x2F063Cu;
    {
        const bool branch_taken_0x2f063c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F063Cu;
            // 0x2f0640: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f063c) {
            ctx->pc = 0x2F0648u;
            goto label_2f0648;
        }
    }
    ctx->pc = 0x2F0644u;
label_2f0644:
    // 0x2f0644: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2f0644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_2f0648:
    // 0x2f0648: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f064c:
    // 0x2f064c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f0650:
    // 0x2f0650: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f0650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f0654:
    // 0x2f0654: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f0658:
    // 0x2f0658: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f0658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f065c:
    // 0x2f065c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f065cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0660:
    // 0x2f0660: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0664:
    // 0x2f0664: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0668:
    // 0x2f0668: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f066c:
    // 0x2f066c: 0x3e00008  jr          $ra
label_2f0670:
    if (ctx->pc == 0x2F0670u) {
        ctx->pc = 0x2F0670u;
            // 0x2f0670: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F0674u;
        goto label_2f0674;
    }
    ctx->pc = 0x2F066Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F066Cu;
            // 0x2f0670: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0674u;
label_2f0674:
    // 0x2f0674: 0x0  nop
    ctx->pc = 0x2f0674u;
    // NOP
label_2f0678:
    // 0x2f0678: 0x0  nop
    ctx->pc = 0x2f0678u;
    // NOP
label_2f067c:
    // 0x2f067c: 0x0  nop
    ctx->pc = 0x2f067cu;
    // NOP
}
