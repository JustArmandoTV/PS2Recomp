#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0350
// Address: 0x3a0350 - 0x3a0680
void sub_003A0350_0x3a0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0350_0x3a0350");
#endif

    switch (ctx->pc) {
        case 0x3a0350u: goto label_3a0350;
        case 0x3a0354u: goto label_3a0354;
        case 0x3a0358u: goto label_3a0358;
        case 0x3a035cu: goto label_3a035c;
        case 0x3a0360u: goto label_3a0360;
        case 0x3a0364u: goto label_3a0364;
        case 0x3a0368u: goto label_3a0368;
        case 0x3a036cu: goto label_3a036c;
        case 0x3a0370u: goto label_3a0370;
        case 0x3a0374u: goto label_3a0374;
        case 0x3a0378u: goto label_3a0378;
        case 0x3a037cu: goto label_3a037c;
        case 0x3a0380u: goto label_3a0380;
        case 0x3a0384u: goto label_3a0384;
        case 0x3a0388u: goto label_3a0388;
        case 0x3a038cu: goto label_3a038c;
        case 0x3a0390u: goto label_3a0390;
        case 0x3a0394u: goto label_3a0394;
        case 0x3a0398u: goto label_3a0398;
        case 0x3a039cu: goto label_3a039c;
        case 0x3a03a0u: goto label_3a03a0;
        case 0x3a03a4u: goto label_3a03a4;
        case 0x3a03a8u: goto label_3a03a8;
        case 0x3a03acu: goto label_3a03ac;
        case 0x3a03b0u: goto label_3a03b0;
        case 0x3a03b4u: goto label_3a03b4;
        case 0x3a03b8u: goto label_3a03b8;
        case 0x3a03bcu: goto label_3a03bc;
        case 0x3a03c0u: goto label_3a03c0;
        case 0x3a03c4u: goto label_3a03c4;
        case 0x3a03c8u: goto label_3a03c8;
        case 0x3a03ccu: goto label_3a03cc;
        case 0x3a03d0u: goto label_3a03d0;
        case 0x3a03d4u: goto label_3a03d4;
        case 0x3a03d8u: goto label_3a03d8;
        case 0x3a03dcu: goto label_3a03dc;
        case 0x3a03e0u: goto label_3a03e0;
        case 0x3a03e4u: goto label_3a03e4;
        case 0x3a03e8u: goto label_3a03e8;
        case 0x3a03ecu: goto label_3a03ec;
        case 0x3a03f0u: goto label_3a03f0;
        case 0x3a03f4u: goto label_3a03f4;
        case 0x3a03f8u: goto label_3a03f8;
        case 0x3a03fcu: goto label_3a03fc;
        case 0x3a0400u: goto label_3a0400;
        case 0x3a0404u: goto label_3a0404;
        case 0x3a0408u: goto label_3a0408;
        case 0x3a040cu: goto label_3a040c;
        case 0x3a0410u: goto label_3a0410;
        case 0x3a0414u: goto label_3a0414;
        case 0x3a0418u: goto label_3a0418;
        case 0x3a041cu: goto label_3a041c;
        case 0x3a0420u: goto label_3a0420;
        case 0x3a0424u: goto label_3a0424;
        case 0x3a0428u: goto label_3a0428;
        case 0x3a042cu: goto label_3a042c;
        case 0x3a0430u: goto label_3a0430;
        case 0x3a0434u: goto label_3a0434;
        case 0x3a0438u: goto label_3a0438;
        case 0x3a043cu: goto label_3a043c;
        case 0x3a0440u: goto label_3a0440;
        case 0x3a0444u: goto label_3a0444;
        case 0x3a0448u: goto label_3a0448;
        case 0x3a044cu: goto label_3a044c;
        case 0x3a0450u: goto label_3a0450;
        case 0x3a0454u: goto label_3a0454;
        case 0x3a0458u: goto label_3a0458;
        case 0x3a045cu: goto label_3a045c;
        case 0x3a0460u: goto label_3a0460;
        case 0x3a0464u: goto label_3a0464;
        case 0x3a0468u: goto label_3a0468;
        case 0x3a046cu: goto label_3a046c;
        case 0x3a0470u: goto label_3a0470;
        case 0x3a0474u: goto label_3a0474;
        case 0x3a0478u: goto label_3a0478;
        case 0x3a047cu: goto label_3a047c;
        case 0x3a0480u: goto label_3a0480;
        case 0x3a0484u: goto label_3a0484;
        case 0x3a0488u: goto label_3a0488;
        case 0x3a048cu: goto label_3a048c;
        case 0x3a0490u: goto label_3a0490;
        case 0x3a0494u: goto label_3a0494;
        case 0x3a0498u: goto label_3a0498;
        case 0x3a049cu: goto label_3a049c;
        case 0x3a04a0u: goto label_3a04a0;
        case 0x3a04a4u: goto label_3a04a4;
        case 0x3a04a8u: goto label_3a04a8;
        case 0x3a04acu: goto label_3a04ac;
        case 0x3a04b0u: goto label_3a04b0;
        case 0x3a04b4u: goto label_3a04b4;
        case 0x3a04b8u: goto label_3a04b8;
        case 0x3a04bcu: goto label_3a04bc;
        case 0x3a04c0u: goto label_3a04c0;
        case 0x3a04c4u: goto label_3a04c4;
        case 0x3a04c8u: goto label_3a04c8;
        case 0x3a04ccu: goto label_3a04cc;
        case 0x3a04d0u: goto label_3a04d0;
        case 0x3a04d4u: goto label_3a04d4;
        case 0x3a04d8u: goto label_3a04d8;
        case 0x3a04dcu: goto label_3a04dc;
        case 0x3a04e0u: goto label_3a04e0;
        case 0x3a04e4u: goto label_3a04e4;
        case 0x3a04e8u: goto label_3a04e8;
        case 0x3a04ecu: goto label_3a04ec;
        case 0x3a04f0u: goto label_3a04f0;
        case 0x3a04f4u: goto label_3a04f4;
        case 0x3a04f8u: goto label_3a04f8;
        case 0x3a04fcu: goto label_3a04fc;
        case 0x3a0500u: goto label_3a0500;
        case 0x3a0504u: goto label_3a0504;
        case 0x3a0508u: goto label_3a0508;
        case 0x3a050cu: goto label_3a050c;
        case 0x3a0510u: goto label_3a0510;
        case 0x3a0514u: goto label_3a0514;
        case 0x3a0518u: goto label_3a0518;
        case 0x3a051cu: goto label_3a051c;
        case 0x3a0520u: goto label_3a0520;
        case 0x3a0524u: goto label_3a0524;
        case 0x3a0528u: goto label_3a0528;
        case 0x3a052cu: goto label_3a052c;
        case 0x3a0530u: goto label_3a0530;
        case 0x3a0534u: goto label_3a0534;
        case 0x3a0538u: goto label_3a0538;
        case 0x3a053cu: goto label_3a053c;
        case 0x3a0540u: goto label_3a0540;
        case 0x3a0544u: goto label_3a0544;
        case 0x3a0548u: goto label_3a0548;
        case 0x3a054cu: goto label_3a054c;
        case 0x3a0550u: goto label_3a0550;
        case 0x3a0554u: goto label_3a0554;
        case 0x3a0558u: goto label_3a0558;
        case 0x3a055cu: goto label_3a055c;
        case 0x3a0560u: goto label_3a0560;
        case 0x3a0564u: goto label_3a0564;
        case 0x3a0568u: goto label_3a0568;
        case 0x3a056cu: goto label_3a056c;
        case 0x3a0570u: goto label_3a0570;
        case 0x3a0574u: goto label_3a0574;
        case 0x3a0578u: goto label_3a0578;
        case 0x3a057cu: goto label_3a057c;
        case 0x3a0580u: goto label_3a0580;
        case 0x3a0584u: goto label_3a0584;
        case 0x3a0588u: goto label_3a0588;
        case 0x3a058cu: goto label_3a058c;
        case 0x3a0590u: goto label_3a0590;
        case 0x3a0594u: goto label_3a0594;
        case 0x3a0598u: goto label_3a0598;
        case 0x3a059cu: goto label_3a059c;
        case 0x3a05a0u: goto label_3a05a0;
        case 0x3a05a4u: goto label_3a05a4;
        case 0x3a05a8u: goto label_3a05a8;
        case 0x3a05acu: goto label_3a05ac;
        case 0x3a05b0u: goto label_3a05b0;
        case 0x3a05b4u: goto label_3a05b4;
        case 0x3a05b8u: goto label_3a05b8;
        case 0x3a05bcu: goto label_3a05bc;
        case 0x3a05c0u: goto label_3a05c0;
        case 0x3a05c4u: goto label_3a05c4;
        case 0x3a05c8u: goto label_3a05c8;
        case 0x3a05ccu: goto label_3a05cc;
        case 0x3a05d0u: goto label_3a05d0;
        case 0x3a05d4u: goto label_3a05d4;
        case 0x3a05d8u: goto label_3a05d8;
        case 0x3a05dcu: goto label_3a05dc;
        case 0x3a05e0u: goto label_3a05e0;
        case 0x3a05e4u: goto label_3a05e4;
        case 0x3a05e8u: goto label_3a05e8;
        case 0x3a05ecu: goto label_3a05ec;
        case 0x3a05f0u: goto label_3a05f0;
        case 0x3a05f4u: goto label_3a05f4;
        case 0x3a05f8u: goto label_3a05f8;
        case 0x3a05fcu: goto label_3a05fc;
        case 0x3a0600u: goto label_3a0600;
        case 0x3a0604u: goto label_3a0604;
        case 0x3a0608u: goto label_3a0608;
        case 0x3a060cu: goto label_3a060c;
        case 0x3a0610u: goto label_3a0610;
        case 0x3a0614u: goto label_3a0614;
        case 0x3a0618u: goto label_3a0618;
        case 0x3a061cu: goto label_3a061c;
        case 0x3a0620u: goto label_3a0620;
        case 0x3a0624u: goto label_3a0624;
        case 0x3a0628u: goto label_3a0628;
        case 0x3a062cu: goto label_3a062c;
        case 0x3a0630u: goto label_3a0630;
        case 0x3a0634u: goto label_3a0634;
        case 0x3a0638u: goto label_3a0638;
        case 0x3a063cu: goto label_3a063c;
        case 0x3a0640u: goto label_3a0640;
        case 0x3a0644u: goto label_3a0644;
        case 0x3a0648u: goto label_3a0648;
        case 0x3a064cu: goto label_3a064c;
        case 0x3a0650u: goto label_3a0650;
        case 0x3a0654u: goto label_3a0654;
        case 0x3a0658u: goto label_3a0658;
        case 0x3a065cu: goto label_3a065c;
        case 0x3a0660u: goto label_3a0660;
        case 0x3a0664u: goto label_3a0664;
        case 0x3a0668u: goto label_3a0668;
        case 0x3a066cu: goto label_3a066c;
        case 0x3a0670u: goto label_3a0670;
        case 0x3a0674u: goto label_3a0674;
        case 0x3a0678u: goto label_3a0678;
        case 0x3a067cu: goto label_3a067c;
        default: break;
    }

    ctx->pc = 0x3a0350u;

label_3a0350:
    // 0x3a0350: 0x3e00008  jr          $ra
label_3a0354:
    if (ctx->pc == 0x3A0354u) {
        ctx->pc = 0x3A0354u;
            // 0x3a0354: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x3A0358u;
        goto label_3a0358;
    }
    ctx->pc = 0x3A0350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0350u;
            // 0x3a0354: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0358u;
label_3a0358:
    // 0x3a0358: 0x0  nop
    ctx->pc = 0x3a0358u;
    // NOP
label_3a035c:
    // 0x3a035c: 0x0  nop
    ctx->pc = 0x3a035cu;
    // NOP
label_3a0360:
    // 0x3a0360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a0364:
    // 0x3a0364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a0368:
    // 0x3a0368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3a036c:
    // 0x3a036c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a0370:
    // 0x3a0370: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a0370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a0374:
    // 0x3a0374: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a0374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a0378:
    // 0x3a0378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a037c:
    // 0x3a037c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a0380:
    // 0x3a0380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0384:
    // 0x3a0384: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3a0384u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3a0388:
    // 0x3a0388: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3a038c:
    if (ctx->pc == 0x3A038Cu) {
        ctx->pc = 0x3A038Cu;
            // 0x3a038c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0390u;
        goto label_3a0390;
    }
    ctx->pc = 0x3A0388u;
    {
        const bool branch_taken_0x3a0388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0388u;
            // 0x3a038c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0388) {
            ctx->pc = 0x3A03BCu;
            goto label_3a03bc;
        }
    }
    ctx->pc = 0x3A0390u;
label_3a0390:
    // 0x3a0390: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a0390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a0394:
    // 0x3a0394: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3a0398:
    if (ctx->pc == 0x3A0398u) {
        ctx->pc = 0x3A0398u;
            // 0x3a0398: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3A039Cu;
        goto label_3a039c;
    }
    ctx->pc = 0x3A0394u;
    {
        const bool branch_taken_0x3a0394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0394) {
            ctx->pc = 0x3A0398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0394u;
            // 0x3a0398: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A03B0u;
            goto label_3a03b0;
        }
    }
    ctx->pc = 0x3A039Cu;
label_3a039c:
    // 0x3a039c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a03a0:
    // 0x3a03a0: 0x10a300ad  beq         $a1, $v1, . + 4 + (0xAD << 2)
label_3a03a4:
    if (ctx->pc == 0x3A03A4u) {
        ctx->pc = 0x3A03A8u;
        goto label_3a03a8;
    }
    ctx->pc = 0x3A03A0u;
    {
        const bool branch_taken_0x3a03a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a03a0) {
            ctx->pc = 0x3A0658u;
            goto label_3a0658;
        }
    }
    ctx->pc = 0x3A03A8u;
label_3a03a8:
    // 0x3a03a8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_3a03ac:
    if (ctx->pc == 0x3A03ACu) {
        ctx->pc = 0x3A03B0u;
        goto label_3a03b0;
    }
    ctx->pc = 0x3A03A8u;
    {
        const bool branch_taken_0x3a03a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a03a8) {
            ctx->pc = 0x3A0658u;
            goto label_3a0658;
        }
    }
    ctx->pc = 0x3A03B0u;
label_3a03b0:
    // 0x3a03b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3a03b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a03b4:
    // 0x3a03b4: 0x320f809  jalr        $t9
label_3a03b8:
    if (ctx->pc == 0x3A03B8u) {
        ctx->pc = 0x3A03BCu;
        goto label_3a03bc;
    }
    ctx->pc = 0x3A03B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A03BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A03BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A03BCu; }
            if (ctx->pc != 0x3A03BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A03BCu;
label_3a03bc:
    // 0x3a03bc: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x3a03bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3a03c0:
    // 0x3a03c0: 0x122000a5  beqz        $s1, . + 4 + (0xA5 << 2)
label_3a03c4:
    if (ctx->pc == 0x3A03C4u) {
        ctx->pc = 0x3A03C8u;
        goto label_3a03c8;
    }
    ctx->pc = 0x3A03C0u;
    {
        const bool branch_taken_0x3a03c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a03c0) {
            ctx->pc = 0x3A0658u;
            goto label_3a0658;
        }
    }
    ctx->pc = 0x3A03C8u;
label_3a03c8:
    // 0x3a03c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a03c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a03cc:
    // 0x3a03cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a03ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a03d0:
    // 0x3a03d0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3a03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3a03d4:
    // 0x3a03d4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3a03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3a03d8:
    // 0x3a03d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3a03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3a03dc:
    // 0x3a03dc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3a03dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a03e0:
    // 0x3a03e0: 0xc0b6e44  jal         func_2DB910
label_3a03e4:
    if (ctx->pc == 0x3A03E4u) {
        ctx->pc = 0x3A03E4u;
            // 0x3a03e4: 0x24847408  addiu       $a0, $a0, 0x7408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29704));
        ctx->pc = 0x3A03E8u;
        goto label_3a03e8;
    }
    ctx->pc = 0x3A03E0u;
    SET_GPR_U32(ctx, 31, 0x3A03E8u);
    ctx->pc = 0x3A03E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A03E0u;
            // 0x3a03e4: 0x24847408  addiu       $a0, $a0, 0x7408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A03E8u; }
        if (ctx->pc != 0x3A03E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A03E8u; }
        if (ctx->pc != 0x3A03E8u) { return; }
    }
    ctx->pc = 0x3A03E8u;
label_3a03e8:
    // 0x3a03e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a03ec:
    // 0x3a03ec: 0xc0770e4  jal         func_1DC390
label_3a03f0:
    if (ctx->pc == 0x3A03F0u) {
        ctx->pc = 0x3A03F0u;
            // 0x3a03f0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3A03F4u;
        goto label_3a03f4;
    }
    ctx->pc = 0x3A03ECu;
    SET_GPR_U32(ctx, 31, 0x3A03F4u);
    ctx->pc = 0x3A03F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A03ECu;
            // 0x3a03f0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A03F4u; }
        if (ctx->pc != 0x3A03F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A03F4u; }
        if (ctx->pc != 0x3A03F4u) { return; }
    }
    ctx->pc = 0x3A03F4u;
label_3a03f4:
    // 0x3a03f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a03f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a03f8:
    // 0x3a03f8: 0xc0e80d4  jal         func_3A0350
label_3a03fc:
    if (ctx->pc == 0x3A03FCu) {
        ctx->pc = 0x3A03FCu;
            // 0x3a03fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0400u;
        goto label_3a0400;
    }
    ctx->pc = 0x3A03F8u;
    SET_GPR_U32(ctx, 31, 0x3A0400u);
    ctx->pc = 0x3A03FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A03F8u;
            // 0x3a03fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0350u;
    goto label_3a0350;
    ctx->pc = 0x3A0400u;
label_3a0400:
    // 0x3a0400: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a0400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a0404:
    // 0x3a0404: 0x10430082  beq         $v0, $v1, . + 4 + (0x82 << 2)
label_3a0408:
    if (ctx->pc == 0x3A0408u) {
        ctx->pc = 0x3A040Cu;
        goto label_3a040c;
    }
    ctx->pc = 0x3A0404u;
    {
        const bool branch_taken_0x3a0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0404) {
            ctx->pc = 0x3A0610u;
            goto label_3a0610;
        }
    }
    ctx->pc = 0x3A040Cu;
label_3a040c:
    // 0x3a040c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a0410:
    // 0x3a0410: 0x1043007b  beq         $v0, $v1, . + 4 + (0x7B << 2)
label_3a0414:
    if (ctx->pc == 0x3A0414u) {
        ctx->pc = 0x3A0418u;
        goto label_3a0418;
    }
    ctx->pc = 0x3A0410u;
    {
        const bool branch_taken_0x3a0410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0410) {
            ctx->pc = 0x3A0600u;
            goto label_3a0600;
        }
    }
    ctx->pc = 0x3A0418u;
label_3a0418:
    // 0x3a0418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a0418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a041c:
    // 0x3a041c: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_3a0420:
    if (ctx->pc == 0x3A0420u) {
        ctx->pc = 0x3A0424u;
        goto label_3a0424;
    }
    ctx->pc = 0x3A041Cu;
    {
        const bool branch_taken_0x3a041c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a041c) {
            ctx->pc = 0x3A04A0u;
            goto label_3a04a0;
        }
    }
    ctx->pc = 0x3A0424u;
label_3a0424:
    // 0x3a0424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0428:
    // 0x3a0428: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_3a042c:
    if (ctx->pc == 0x3A042Cu) {
        ctx->pc = 0x3A0430u;
        goto label_3a0430;
    }
    ctx->pc = 0x3A0428u;
    {
        const bool branch_taken_0x3a0428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0428) {
            ctx->pc = 0x3A0450u;
            goto label_3a0450;
        }
    }
    ctx->pc = 0x3A0430u;
label_3a0430:
    // 0x3a0430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a0434:
    if (ctx->pc == 0x3A0434u) {
        ctx->pc = 0x3A0438u;
        goto label_3a0438;
    }
    ctx->pc = 0x3A0430u;
    {
        const bool branch_taken_0x3a0430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0430) {
            ctx->pc = 0x3A0440u;
            goto label_3a0440;
        }
    }
    ctx->pc = 0x3A0438u;
label_3a0438:
    // 0x3a0438: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3a043c:
    if (ctx->pc == 0x3A043Cu) {
        ctx->pc = 0x3A0440u;
        goto label_3a0440;
    }
    ctx->pc = 0x3A0438u;
    {
        const bool branch_taken_0x3a0438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0438) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0440u;
label_3a0440:
    // 0x3a0440: 0xc0e8260  jal         func_3A0980
label_3a0444:
    if (ctx->pc == 0x3A0444u) {
        ctx->pc = 0x3A0444u;
            // 0x3a0444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0448u;
        goto label_3a0448;
    }
    ctx->pc = 0x3A0440u;
    SET_GPR_U32(ctx, 31, 0x3A0448u);
    ctx->pc = 0x3A0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0440u;
            // 0x3a0444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0980u;
    if (runtime->hasFunction(0x3A0980u)) {
        auto targetFn = runtime->lookupFunction(0x3A0980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0448u; }
        if (ctx->pc != 0x3A0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0980_0x3a0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0448u; }
        if (ctx->pc != 0x3A0448u) { return; }
    }
    ctx->pc = 0x3A0448u;
label_3a0448:
    // 0x3a0448: 0x1000007b  b           . + 4 + (0x7B << 2)
label_3a044c:
    if (ctx->pc == 0x3A044Cu) {
        ctx->pc = 0x3A0450u;
        goto label_3a0450;
    }
    ctx->pc = 0x3A0448u;
    {
        const bool branch_taken_0x3a0448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0448) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0450u;
label_3a0450:
    // 0x3a0450: 0xc0e81f8  jal         func_3A07E0
label_3a0454:
    if (ctx->pc == 0x3A0454u) {
        ctx->pc = 0x3A0454u;
            // 0x3a0454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0458u;
        goto label_3a0458;
    }
    ctx->pc = 0x3A0450u;
    SET_GPR_U32(ctx, 31, 0x3A0458u);
    ctx->pc = 0x3A0454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0450u;
            // 0x3a0454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A07E0u;
    if (runtime->hasFunction(0x3A07E0u)) {
        auto targetFn = runtime->lookupFunction(0x3A07E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0458u; }
        if (ctx->pc != 0x3A0458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A07E0_0x3a07e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0458u; }
        if (ctx->pc != 0x3A0458u) { return; }
    }
    ctx->pc = 0x3A0458u;
label_3a0458:
    // 0x3a0458: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_3a045c:
    if (ctx->pc == 0x3A045Cu) {
        ctx->pc = 0x3A0460u;
        goto label_3a0460;
    }
    ctx->pc = 0x3A0458u;
    {
        const bool branch_taken_0x3a0458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0458) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0460u;
label_3a0460:
    // 0x3a0460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a0460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a0464:
    // 0x3a0464: 0xc0e81f4  jal         func_3A07D0
label_3a0468:
    if (ctx->pc == 0x3A0468u) {
        ctx->pc = 0x3A0468u;
            // 0x3a0468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3A046Cu;
        goto label_3a046c;
    }
    ctx->pc = 0x3A0464u;
    SET_GPR_U32(ctx, 31, 0x3A046Cu);
    ctx->pc = 0x3A0468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0464u;
            // 0x3a0468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A07D0u;
    if (runtime->hasFunction(0x3A07D0u)) {
        auto targetFn = runtime->lookupFunction(0x3A07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A046Cu; }
        if (ctx->pc != 0x3A046Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A07D0_0x3a07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A046Cu; }
        if (ctx->pc != 0x3A046Cu) { return; }
    }
    ctx->pc = 0x3A046Cu;
label_3a046c:
    // 0x3a046c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3a0470:
    // 0x3a0470: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_3a0474:
    if (ctx->pc == 0x3A0474u) {
        ctx->pc = 0x3A0478u;
        goto label_3a0478;
    }
    ctx->pc = 0x3A0470u;
    {
        const bool branch_taken_0x3a0470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a0470) {
            ctx->pc = 0x3A0480u;
            goto label_3a0480;
        }
    }
    ctx->pc = 0x3A0478u;
label_3a0478:
    // 0x3a0478: 0x1000006f  b           . + 4 + (0x6F << 2)
label_3a047c:
    if (ctx->pc == 0x3A047Cu) {
        ctx->pc = 0x3A0480u;
        goto label_3a0480;
    }
    ctx->pc = 0x3A0478u;
    {
        const bool branch_taken_0x3a0478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0478) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0480u;
label_3a0480:
    // 0x3a0480: 0xc0d1c10  jal         func_347040
label_3a0484:
    if (ctx->pc == 0x3A0484u) {
        ctx->pc = 0x3A0484u;
            // 0x3a0484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0488u;
        goto label_3a0488;
    }
    ctx->pc = 0x3A0480u;
    SET_GPR_U32(ctx, 31, 0x3A0488u);
    ctx->pc = 0x3A0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0480u;
            // 0x3a0484: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0488u; }
        if (ctx->pc != 0x3A0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0488u; }
        if (ctx->pc != 0x3A0488u) { return; }
    }
    ctx->pc = 0x3A0488u;
label_3a0488:
    // 0x3a0488: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x3a0488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3a048c:
    // 0x3a048c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a048cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0490:
    // 0x3a0490: 0xc122d2c  jal         func_48B4B0
label_3a0494:
    if (ctx->pc == 0x3A0494u) {
        ctx->pc = 0x3A0494u;
            // 0x3a0494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0498u;
        goto label_3a0498;
    }
    ctx->pc = 0x3A0490u;
    SET_GPR_U32(ctx, 31, 0x3A0498u);
    ctx->pc = 0x3A0494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0490u;
            // 0x3a0494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0498u; }
        if (ctx->pc != 0x3A0498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0498u; }
        if (ctx->pc != 0x3A0498u) { return; }
    }
    ctx->pc = 0x3A0498u;
label_3a0498:
    // 0x3a0498: 0x10000067  b           . + 4 + (0x67 << 2)
label_3a049c:
    if (ctx->pc == 0x3A049Cu) {
        ctx->pc = 0x3A04A0u;
        goto label_3a04a0;
    }
    ctx->pc = 0x3A0498u;
    {
        const bool branch_taken_0x3a0498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0498) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A04A0u;
label_3a04a0:
    // 0x3a04a0: 0xc0e81dc  jal         func_3A0770
label_3a04a4:
    if (ctx->pc == 0x3A04A4u) {
        ctx->pc = 0x3A04A4u;
            // 0x3a04a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A04A8u;
        goto label_3a04a8;
    }
    ctx->pc = 0x3A04A0u;
    SET_GPR_U32(ctx, 31, 0x3A04A8u);
    ctx->pc = 0x3A04A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A04A0u;
            // 0x3a04a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0770u;
    if (runtime->hasFunction(0x3A0770u)) {
        auto targetFn = runtime->lookupFunction(0x3A0770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04A8u; }
        if (ctx->pc != 0x3A04A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0770_0x3a0770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04A8u; }
        if (ctx->pc != 0x3A04A8u) { return; }
    }
    ctx->pc = 0x3A04A8u;
label_3a04a8:
    // 0x3a04a8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3a04ac:
    if (ctx->pc == 0x3A04ACu) {
        ctx->pc = 0x3A04B0u;
        goto label_3a04b0;
    }
    ctx->pc = 0x3A04A8u;
    {
        const bool branch_taken_0x3a04a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a04a8) {
            ctx->pc = 0x3A05A8u;
            goto label_3a05a8;
        }
    }
    ctx->pc = 0x3A04B0u;
label_3a04b0:
    // 0x3a04b0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a04b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a04b4:
    // 0x3a04b4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3a04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3a04b8:
    // 0x3a04b8: 0xc0e81d8  jal         func_3A0760
label_3a04bc:
    if (ctx->pc == 0x3A04BCu) {
        ctx->pc = 0x3A04BCu;
            // 0x3a04bc: 0x24a5f358  addiu       $a1, $a1, -0xCA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964056));
        ctx->pc = 0x3A04C0u;
        goto label_3a04c0;
    }
    ctx->pc = 0x3A04B8u;
    SET_GPR_U32(ctx, 31, 0x3A04C0u);
    ctx->pc = 0x3A04BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A04B8u;
            // 0x3a04bc: 0x24a5f358  addiu       $a1, $a1, -0xCA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0760u;
    if (runtime->hasFunction(0x3A0760u)) {
        auto targetFn = runtime->lookupFunction(0x3A0760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04C0u; }
        if (ctx->pc != 0x3A04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0760_0x3a0760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04C0u; }
        if (ctx->pc != 0x3A04C0u) { return; }
    }
    ctx->pc = 0x3A04C0u;
label_3a04c0:
    // 0x3a04c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a04c4:
    if (ctx->pc == 0x3A04C4u) {
        ctx->pc = 0x3A04C8u;
        goto label_3a04c8;
    }
    ctx->pc = 0x3A04C0u;
    {
        const bool branch_taken_0x3a04c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a04c0) {
            ctx->pc = 0x3A0540u;
            goto label_3a0540;
        }
    }
    ctx->pc = 0x3A04C8u;
label_3a04c8:
    // 0x3a04c8: 0xc0e81d4  jal         func_3A0750
label_3a04cc:
    if (ctx->pc == 0x3A04CCu) {
        ctx->pc = 0x3A04D0u;
        goto label_3a04d0;
    }
    ctx->pc = 0x3A04C8u;
    SET_GPR_U32(ctx, 31, 0x3A04D0u);
    ctx->pc = 0x3A0750u;
    if (runtime->hasFunction(0x3A0750u)) {
        auto targetFn = runtime->lookupFunction(0x3A0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04D0u; }
        if (ctx->pc != 0x3A04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0750_0x3a0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04D0u; }
        if (ctx->pc != 0x3A04D0u) { return; }
    }
    ctx->pc = 0x3A04D0u;
label_3a04d0:
    // 0x3a04d0: 0xc0e81d0  jal         func_3A0740
label_3a04d4:
    if (ctx->pc == 0x3A04D4u) {
        ctx->pc = 0x3A04D4u;
            // 0x3a04d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A04D8u;
        goto label_3a04d8;
    }
    ctx->pc = 0x3A04D0u;
    SET_GPR_U32(ctx, 31, 0x3A04D8u);
    ctx->pc = 0x3A04D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A04D0u;
            // 0x3a04d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0740u;
    if (runtime->hasFunction(0x3A0740u)) {
        auto targetFn = runtime->lookupFunction(0x3A0740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04D8u; }
        if (ctx->pc != 0x3A04D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0740_0x3a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04D8u; }
        if (ctx->pc != 0x3A04D8u) { return; }
    }
    ctx->pc = 0x3A04D8u;
label_3a04d8:
    // 0x3a04d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3a04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3a04dc:
    // 0x3a04dc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3a04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a04e0:
    // 0x3a04e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a04e4:
    // 0x3a04e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a04e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a04e8:
    // 0x3a04e8: 0x0  nop
    ctx->pc = 0x3a04e8u;
    // NOP
label_3a04ec:
    // 0x3a04ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3a04ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a04f0:
    // 0x3a04f0: 0xc0e81d4  jal         func_3A0750
label_3a04f4:
    if (ctx->pc == 0x3A04F4u) {
        ctx->pc = 0x3A04F4u;
            // 0x3a04f4: 0xe660006c  swc1        $f0, 0x6C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
        ctx->pc = 0x3A04F8u;
        goto label_3a04f8;
    }
    ctx->pc = 0x3A04F0u;
    SET_GPR_U32(ctx, 31, 0x3A04F8u);
    ctx->pc = 0x3A04F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A04F0u;
            // 0x3a04f4: 0xe660006c  swc1        $f0, 0x6C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0750u;
    if (runtime->hasFunction(0x3A0750u)) {
        auto targetFn = runtime->lookupFunction(0x3A0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04F8u; }
        if (ctx->pc != 0x3A04F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0750_0x3a0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A04F8u; }
        if (ctx->pc != 0x3A04F8u) { return; }
    }
    ctx->pc = 0x3A04F8u;
label_3a04f8:
    // 0x3a04f8: 0xc0e81d0  jal         func_3A0740
label_3a04fc:
    if (ctx->pc == 0x3A04FCu) {
        ctx->pc = 0x3A04FCu;
            // 0x3a04fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0500u;
        goto label_3a0500;
    }
    ctx->pc = 0x3A04F8u;
    SET_GPR_U32(ctx, 31, 0x3A0500u);
    ctx->pc = 0x3A04FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A04F8u;
            // 0x3a04fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0740u;
    if (runtime->hasFunction(0x3A0740u)) {
        auto targetFn = runtime->lookupFunction(0x3A0740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0500u; }
        if (ctx->pc != 0x3A0500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0740_0x3a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0500u; }
        if (ctx->pc != 0x3A0500u) { return; }
    }
    ctx->pc = 0x3A0500u;
label_3a0500:
    // 0x3a0500: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3a0500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3a0504:
    // 0x3a0504: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3a0508:
    if (ctx->pc == 0x3A0508u) {
        ctx->pc = 0x3A050Cu;
        goto label_3a050c;
    }
    ctx->pc = 0x3A0504u;
    {
        const bool branch_taken_0x3a0504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0504) {
            ctx->pc = 0x3A0548u;
            goto label_3a0548;
        }
    }
    ctx->pc = 0x3A050Cu;
label_3a050c:
    // 0x3a050c: 0xc0e81d4  jal         func_3A0750
label_3a0510:
    if (ctx->pc == 0x3A0510u) {
        ctx->pc = 0x3A0514u;
        goto label_3a0514;
    }
    ctx->pc = 0x3A050Cu;
    SET_GPR_U32(ctx, 31, 0x3A0514u);
    ctx->pc = 0x3A0750u;
    if (runtime->hasFunction(0x3A0750u)) {
        auto targetFn = runtime->lookupFunction(0x3A0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0514u; }
        if (ctx->pc != 0x3A0514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0750_0x3a0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0514u; }
        if (ctx->pc != 0x3A0514u) { return; }
    }
    ctx->pc = 0x3A0514u;
label_3a0514:
    // 0x3a0514: 0xc0e81d0  jal         func_3A0740
label_3a0518:
    if (ctx->pc == 0x3A0518u) {
        ctx->pc = 0x3A0518u;
            // 0x3a0518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A051Cu;
        goto label_3a051c;
    }
    ctx->pc = 0x3A0514u;
    SET_GPR_U32(ctx, 31, 0x3A051Cu);
    ctx->pc = 0x3A0518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0514u;
            // 0x3a0518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0740u;
    if (runtime->hasFunction(0x3A0740u)) {
        auto targetFn = runtime->lookupFunction(0x3A0740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A051Cu; }
        if (ctx->pc != 0x3A051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0740_0x3a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A051Cu; }
        if (ctx->pc != 0x3A051Cu) { return; }
    }
    ctx->pc = 0x3A051Cu;
label_3a051c:
    // 0x3a051c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3a051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3a0520:
    // 0x3a0520: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3a0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a0524:
    // 0x3a0524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a0524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a0528:
    // 0x3a0528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a0528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a052c:
    // 0x3a052c: 0x0  nop
    ctx->pc = 0x3a052cu;
    // NOP
label_3a0530:
    // 0x3a0530: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3a0530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a0534:
    // 0x3a0534: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a0538:
    if (ctx->pc == 0x3A0538u) {
        ctx->pc = 0x3A0538u;
            // 0x3a0538: 0xe6600070  swc1        $f0, 0x70($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->pc = 0x3A053Cu;
        goto label_3a053c;
    }
    ctx->pc = 0x3A0534u;
    {
        const bool branch_taken_0x3a0534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0534u;
            // 0x3a0538: 0xe6600070  swc1        $f0, 0x70($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0534) {
            ctx->pc = 0x3A0548u;
            goto label_3a0548;
        }
    }
    ctx->pc = 0x3A053Cu;
label_3a053c:
    // 0x3a053c: 0x0  nop
    ctx->pc = 0x3a053cu;
    // NOP
label_3a0540:
    // 0x3a0540: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3a0540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3a0544:
    // 0x3a0544: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3a0544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3a0548:
    // 0x3a0548: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a0548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a054c:
    // 0x3a054c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3a054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3a0550:
    // 0x3a0550: 0xc0e81d8  jal         func_3A0760
label_3a0554:
    if (ctx->pc == 0x3A0554u) {
        ctx->pc = 0x3A0554u;
            // 0x3a0554: 0x24a5f360  addiu       $a1, $a1, -0xCA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964064));
        ctx->pc = 0x3A0558u;
        goto label_3a0558;
    }
    ctx->pc = 0x3A0550u;
    SET_GPR_U32(ctx, 31, 0x3A0558u);
    ctx->pc = 0x3A0554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0550u;
            // 0x3a0554: 0x24a5f360  addiu       $a1, $a1, -0xCA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0760u;
    if (runtime->hasFunction(0x3A0760u)) {
        auto targetFn = runtime->lookupFunction(0x3A0760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0558u; }
        if (ctx->pc != 0x3A0558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0760_0x3a0760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0558u; }
        if (ctx->pc != 0x3A0558u) { return; }
    }
    ctx->pc = 0x3A0558u;
label_3a0558:
    // 0x3a0558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a055c:
    if (ctx->pc == 0x3A055Cu) {
        ctx->pc = 0x3A0560u;
        goto label_3a0560;
    }
    ctx->pc = 0x3A0558u;
    {
        const bool branch_taken_0x3a0558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0558) {
            ctx->pc = 0x3A0578u;
            goto label_3a0578;
        }
    }
    ctx->pc = 0x3A0560u;
label_3a0560:
    // 0x3a0560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a0560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a0564:
    // 0x3a0564: 0xc0e81f4  jal         func_3A07D0
label_3a0568:
    if (ctx->pc == 0x3A0568u) {
        ctx->pc = 0x3A0568u;
            // 0x3a0568: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A056Cu;
        goto label_3a056c;
    }
    ctx->pc = 0x3A0564u;
    SET_GPR_U32(ctx, 31, 0x3A056Cu);
    ctx->pc = 0x3A0568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0564u;
            // 0x3a0568: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A07D0u;
    if (runtime->hasFunction(0x3A07D0u)) {
        auto targetFn = runtime->lookupFunction(0x3A07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A056Cu; }
        if (ctx->pc != 0x3A056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A07D0_0x3a07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A056Cu; }
        if (ctx->pc != 0x3A056Cu) { return; }
    }
    ctx->pc = 0x3A056Cu;
label_3a056c:
    // 0x3a056c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3a0570:
    if (ctx->pc == 0x3A0570u) {
        ctx->pc = 0x3A0574u;
        goto label_3a0574;
    }
    ctx->pc = 0x3A056Cu;
    {
        const bool branch_taken_0x3a056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a056c) {
            ctx->pc = 0x3A05A8u;
            goto label_3a05a8;
        }
    }
    ctx->pc = 0x3A0574u;
label_3a0574:
    // 0x3a0574: 0x0  nop
    ctx->pc = 0x3a0574u;
    // NOP
label_3a0578:
    // 0x3a0578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a057c:
    // 0x3a057c: 0xc0e81f4  jal         func_3A07D0
label_3a0580:
    if (ctx->pc == 0x3A0580u) {
        ctx->pc = 0x3A0580u;
            // 0x3a0580: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3A0584u;
        goto label_3a0584;
    }
    ctx->pc = 0x3A057Cu;
    SET_GPR_U32(ctx, 31, 0x3A0584u);
    ctx->pc = 0x3A0580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A057Cu;
            // 0x3a0580: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A07D0u;
    if (runtime->hasFunction(0x3A07D0u)) {
        auto targetFn = runtime->lookupFunction(0x3A07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0584u; }
        if (ctx->pc != 0x3A0584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A07D0_0x3a07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0584u; }
        if (ctx->pc != 0x3A0584u) { return; }
    }
    ctx->pc = 0x3A0584u;
label_3a0584:
    // 0x3a0584: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3a0588:
    // 0x3a0588: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_3a058c:
    if (ctx->pc == 0x3A058Cu) {
        ctx->pc = 0x3A0590u;
        goto label_3a0590;
    }
    ctx->pc = 0x3A0588u;
    {
        const bool branch_taken_0x3a0588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0588) {
            ctx->pc = 0x3A05A8u;
            goto label_3a05a8;
        }
    }
    ctx->pc = 0x3A0590u;
label_3a0590:
    // 0x3a0590: 0xc0d1c10  jal         func_347040
label_3a0594:
    if (ctx->pc == 0x3A0594u) {
        ctx->pc = 0x3A0594u;
            // 0x3a0594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0598u;
        goto label_3a0598;
    }
    ctx->pc = 0x3A0590u;
    SET_GPR_U32(ctx, 31, 0x3A0598u);
    ctx->pc = 0x3A0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0590u;
            // 0x3a0594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0598u; }
        if (ctx->pc != 0x3A0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0598u; }
        if (ctx->pc != 0x3A0598u) { return; }
    }
    ctx->pc = 0x3A0598u;
label_3a0598:
    // 0x3a0598: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x3a0598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3a059c:
    // 0x3a059c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a059cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a05a0:
    // 0x3a05a0: 0xc122d2c  jal         func_48B4B0
label_3a05a4:
    if (ctx->pc == 0x3A05A4u) {
        ctx->pc = 0x3A05A4u;
            // 0x3a05a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A05A8u;
        goto label_3a05a8;
    }
    ctx->pc = 0x3A05A0u;
    SET_GPR_U32(ctx, 31, 0x3A05A8u);
    ctx->pc = 0x3A05A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A05A0u;
            // 0x3a05a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A05A8u; }
        if (ctx->pc != 0x3A05A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A05A8u; }
        if (ctx->pc != 0x3A05A8u) { return; }
    }
    ctx->pc = 0x3A05A8u;
label_3a05a8:
    // 0x3a05a8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3a05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a05ac:
    // 0x3a05ac: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
label_3a05b0:
    if (ctx->pc == 0x3A05B0u) {
        ctx->pc = 0x3A05B4u;
        goto label_3a05b4;
    }
    ctx->pc = 0x3A05ACu;
    {
        const bool branch_taken_0x3a05ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a05ac) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A05B4u;
label_3a05b4:
    // 0x3a05b4: 0xc661006c  lwc1        $f1, 0x6C($s3)
    ctx->pc = 0x3a05b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a05b8:
    // 0x3a05b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3a05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3a05bc:
    // 0x3a05bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a05bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a05c0:
    // 0x3a05c0: 0x0  nop
    ctx->pc = 0x3a05c0u;
    // NOP
label_3a05c4:
    // 0x3a05c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a05c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a05c8:
    // 0x3a05c8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_3a05cc:
    if (ctx->pc == 0x3A05CCu) {
        ctx->pc = 0x3A05D0u;
        goto label_3a05d0;
    }
    ctx->pc = 0x3A05C8u;
    {
        const bool branch_taken_0x3a05c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a05c8) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A05D0u;
label_3a05d0:
    // 0x3a05d0: 0x92620080  lbu         $v0, 0x80($s3)
    ctx->pc = 0x3a05d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 128)));
label_3a05d4:
    // 0x3a05d4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3a05d8:
    if (ctx->pc == 0x3A05D8u) {
        ctx->pc = 0x3A05DCu;
        goto label_3a05dc;
    }
    ctx->pc = 0x3A05D4u;
    {
        const bool branch_taken_0x3a05d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a05d4) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A05DCu;
label_3a05dc:
    // 0x3a05dc: 0xc0d1c10  jal         func_347040
label_3a05e0:
    if (ctx->pc == 0x3A05E0u) {
        ctx->pc = 0x3A05E0u;
            // 0x3a05e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A05E4u;
        goto label_3a05e4;
    }
    ctx->pc = 0x3A05DCu;
    SET_GPR_U32(ctx, 31, 0x3A05E4u);
    ctx->pc = 0x3A05E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A05DCu;
            // 0x3a05e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A05E4u; }
        if (ctx->pc != 0x3A05E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A05E4u; }
        if (ctx->pc != 0x3A05E4u) { return; }
    }
    ctx->pc = 0x3A05E4u;
label_3a05e4:
    // 0x3a05e4: 0x8e64007c  lw          $a0, 0x7C($s3)
    ctx->pc = 0x3a05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3a05e8:
    // 0x3a05e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a05e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a05ec:
    // 0x3a05ec: 0xc122d2c  jal         func_48B4B0
label_3a05f0:
    if (ctx->pc == 0x3A05F0u) {
        ctx->pc = 0x3A05F0u;
            // 0x3a05f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A05F4u;
        goto label_3a05f4;
    }
    ctx->pc = 0x3A05ECu;
    SET_GPR_U32(ctx, 31, 0x3A05F4u);
    ctx->pc = 0x3A05F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A05ECu;
            // 0x3a05f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A05F4u; }
        if (ctx->pc != 0x3A05F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A05F4u; }
        if (ctx->pc != 0x3A05F4u) { return; }
    }
    ctx->pc = 0x3A05F4u;
label_3a05f4:
    // 0x3a05f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a05f8:
    // 0x3a05f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a05fc:
    if (ctx->pc == 0x3A05FCu) {
        ctx->pc = 0x3A05FCu;
            // 0x3a05fc: 0xa2620080  sb          $v0, 0x80($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 128), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3A0600u;
        goto label_3a0600;
    }
    ctx->pc = 0x3A05F8u;
    {
        const bool branch_taken_0x3a05f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A05F8u;
            // 0x3a05fc: 0xa2620080  sb          $v0, 0x80($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 128), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05f8) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0600u;
label_3a0600:
    // 0x3a0600: 0xc0e81f8  jal         func_3A07E0
label_3a0604:
    if (ctx->pc == 0x3A0604u) {
        ctx->pc = 0x3A0604u;
            // 0x3a0604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0608u;
        goto label_3a0608;
    }
    ctx->pc = 0x3A0600u;
    SET_GPR_U32(ctx, 31, 0x3A0608u);
    ctx->pc = 0x3A0604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0600u;
            // 0x3a0604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A07E0u;
    if (runtime->hasFunction(0x3A07E0u)) {
        auto targetFn = runtime->lookupFunction(0x3A07E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0608u; }
        if (ctx->pc != 0x3A0608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A07E0_0x3a07e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0608u; }
        if (ctx->pc != 0x3A0608u) { return; }
    }
    ctx->pc = 0x3A0608u;
label_3a0608:
    // 0x3a0608: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3a060c:
    if (ctx->pc == 0x3A060Cu) {
        ctx->pc = 0x3A0610u;
        goto label_3a0610;
    }
    ctx->pc = 0x3A0608u;
    {
        const bool branch_taken_0x3a0608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0608) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0610u;
label_3a0610:
    // 0x3a0610: 0xc0e81a8  jal         func_3A06A0
label_3a0614:
    if (ctx->pc == 0x3A0614u) {
        ctx->pc = 0x3A0614u;
            // 0x3a0614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0618u;
        goto label_3a0618;
    }
    ctx->pc = 0x3A0610u;
    SET_GPR_U32(ctx, 31, 0x3A0618u);
    ctx->pc = 0x3A0614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0610u;
            // 0x3a0614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A06A0u;
    if (runtime->hasFunction(0x3A06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3A06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0618u; }
        if (ctx->pc != 0x3A0618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A06A0_0x3a06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0618u; }
        if (ctx->pc != 0x3A0618u) { return; }
    }
    ctx->pc = 0x3A0618u;
label_3a0618:
    // 0x3a0618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a061c:
    if (ctx->pc == 0x3A061Cu) {
        ctx->pc = 0x3A0620u;
        goto label_3a0620;
    }
    ctx->pc = 0x3A0618u;
    {
        const bool branch_taken_0x3a0618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0618) {
            ctx->pc = 0x3A0638u;
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0620u;
label_3a0620:
    // 0x3a0620: 0xc0e81a0  jal         func_3A0680
label_3a0624:
    if (ctx->pc == 0x3A0624u) {
        ctx->pc = 0x3A0624u;
            // 0x3a0624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0628u;
        goto label_3a0628;
    }
    ctx->pc = 0x3A0620u;
    SET_GPR_U32(ctx, 31, 0x3A0628u);
    ctx->pc = 0x3A0624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0620u;
            // 0x3a0624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0680u;
    if (runtime->hasFunction(0x3A0680u)) {
        auto targetFn = runtime->lookupFunction(0x3A0680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0628u; }
        if (ctx->pc != 0x3A0628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0680_0x3a0680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0628u; }
        if (ctx->pc != 0x3A0628u) { return; }
    }
    ctx->pc = 0x3A0628u;
label_3a0628:
    // 0x3a0628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a0628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a062c:
    // 0x3a062c: 0xc0e81f4  jal         func_3A07D0
label_3a0630:
    if (ctx->pc == 0x3A0630u) {
        ctx->pc = 0x3A0630u;
            // 0x3a0630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A0634u;
        goto label_3a0634;
    }
    ctx->pc = 0x3A062Cu;
    SET_GPR_U32(ctx, 31, 0x3A0634u);
    ctx->pc = 0x3A0630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A062Cu;
            // 0x3a0630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A07D0u;
    if (runtime->hasFunction(0x3A07D0u)) {
        auto targetFn = runtime->lookupFunction(0x3A07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0634u; }
        if (ctx->pc != 0x3A0634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A07D0_0x3a07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0634u; }
        if (ctx->pc != 0x3A0634u) { return; }
    }
    ctx->pc = 0x3A0634u;
label_3a0634:
    // 0x3a0634: 0x0  nop
    ctx->pc = 0x3a0634u;
    // NOP
label_3a0638:
    // 0x3a0638: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3a0638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3a063c:
    // 0x3a063c: 0xc0b6de0  jal         func_2DB780
label_3a0640:
    if (ctx->pc == 0x3A0640u) {
        ctx->pc = 0x3A0640u;
            // 0x3a0640: 0x248473f8  addiu       $a0, $a0, 0x73F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29688));
        ctx->pc = 0x3A0644u;
        goto label_3a0644;
    }
    ctx->pc = 0x3A063Cu;
    SET_GPR_U32(ctx, 31, 0x3A0644u);
    ctx->pc = 0x3A0640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A063Cu;
            // 0x3a0640: 0x248473f8  addiu       $a0, $a0, 0x73F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0644u; }
        if (ctx->pc != 0x3A0644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0644u; }
        if (ctx->pc != 0x3A0644u) { return; }
    }
    ctx->pc = 0x3A0644u;
label_3a0644:
    // 0x3a0644: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a0644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a0648:
    // 0x3a0648: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x3a0648u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a064c:
    // 0x3a064c: 0x1460ff60  bnez        $v1, . + 4 + (-0xA0 << 2)
label_3a0650:
    if (ctx->pc == 0x3A0650u) {
        ctx->pc = 0x3A0650u;
            // 0x3a0650: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3A0654u;
        goto label_3a0654;
    }
    ctx->pc = 0x3A064Cu;
    {
        const bool branch_taken_0x3a064c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A064Cu;
            // 0x3a0650: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a064c) {
            ctx->pc = 0x3A03D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a03d0;
        }
    }
    ctx->pc = 0x3A0654u;
label_3a0654:
    // 0x3a0654: 0x0  nop
    ctx->pc = 0x3a0654u;
    // NOP
label_3a0658:
    // 0x3a0658: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a0658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a065c:
    // 0x3a065c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a065cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a0660:
    // 0x3a0660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a0660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a0664:
    // 0x3a0664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a0664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a0668:
    // 0x3a0668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a066c:
    // 0x3a066c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a066cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0670:
    // 0x3a0670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0674:
    // 0x3a0674: 0x3e00008  jr          $ra
label_3a0678:
    if (ctx->pc == 0x3A0678u) {
        ctx->pc = 0x3A0678u;
            // 0x3a0678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3A067Cu;
        goto label_3a067c;
    }
    ctx->pc = 0x3A0674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0674u;
            // 0x3a0678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A067Cu;
label_3a067c:
    // 0x3a067c: 0x0  nop
    ctx->pc = 0x3a067cu;
    // NOP
}
