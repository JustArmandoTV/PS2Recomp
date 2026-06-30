#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002266B0
// Address: 0x2266b0 - 0x2269f0
void sub_002266B0_0x2266b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266B0_0x2266b0");
#endif

    switch (ctx->pc) {
        case 0x2266b0u: goto label_2266b0;
        case 0x2266b4u: goto label_2266b4;
        case 0x2266b8u: goto label_2266b8;
        case 0x2266bcu: goto label_2266bc;
        case 0x2266c0u: goto label_2266c0;
        case 0x2266c4u: goto label_2266c4;
        case 0x2266c8u: goto label_2266c8;
        case 0x2266ccu: goto label_2266cc;
        case 0x2266d0u: goto label_2266d0;
        case 0x2266d4u: goto label_2266d4;
        case 0x2266d8u: goto label_2266d8;
        case 0x2266dcu: goto label_2266dc;
        case 0x2266e0u: goto label_2266e0;
        case 0x2266e4u: goto label_2266e4;
        case 0x2266e8u: goto label_2266e8;
        case 0x2266ecu: goto label_2266ec;
        case 0x2266f0u: goto label_2266f0;
        case 0x2266f4u: goto label_2266f4;
        case 0x2266f8u: goto label_2266f8;
        case 0x2266fcu: goto label_2266fc;
        case 0x226700u: goto label_226700;
        case 0x226704u: goto label_226704;
        case 0x226708u: goto label_226708;
        case 0x22670cu: goto label_22670c;
        case 0x226710u: goto label_226710;
        case 0x226714u: goto label_226714;
        case 0x226718u: goto label_226718;
        case 0x22671cu: goto label_22671c;
        case 0x226720u: goto label_226720;
        case 0x226724u: goto label_226724;
        case 0x226728u: goto label_226728;
        case 0x22672cu: goto label_22672c;
        case 0x226730u: goto label_226730;
        case 0x226734u: goto label_226734;
        case 0x226738u: goto label_226738;
        case 0x22673cu: goto label_22673c;
        case 0x226740u: goto label_226740;
        case 0x226744u: goto label_226744;
        case 0x226748u: goto label_226748;
        case 0x22674cu: goto label_22674c;
        case 0x226750u: goto label_226750;
        case 0x226754u: goto label_226754;
        case 0x226758u: goto label_226758;
        case 0x22675cu: goto label_22675c;
        case 0x226760u: goto label_226760;
        case 0x226764u: goto label_226764;
        case 0x226768u: goto label_226768;
        case 0x22676cu: goto label_22676c;
        case 0x226770u: goto label_226770;
        case 0x226774u: goto label_226774;
        case 0x226778u: goto label_226778;
        case 0x22677cu: goto label_22677c;
        case 0x226780u: goto label_226780;
        case 0x226784u: goto label_226784;
        case 0x226788u: goto label_226788;
        case 0x22678cu: goto label_22678c;
        case 0x226790u: goto label_226790;
        case 0x226794u: goto label_226794;
        case 0x226798u: goto label_226798;
        case 0x22679cu: goto label_22679c;
        case 0x2267a0u: goto label_2267a0;
        case 0x2267a4u: goto label_2267a4;
        case 0x2267a8u: goto label_2267a8;
        case 0x2267acu: goto label_2267ac;
        case 0x2267b0u: goto label_2267b0;
        case 0x2267b4u: goto label_2267b4;
        case 0x2267b8u: goto label_2267b8;
        case 0x2267bcu: goto label_2267bc;
        case 0x2267c0u: goto label_2267c0;
        case 0x2267c4u: goto label_2267c4;
        case 0x2267c8u: goto label_2267c8;
        case 0x2267ccu: goto label_2267cc;
        case 0x2267d0u: goto label_2267d0;
        case 0x2267d4u: goto label_2267d4;
        case 0x2267d8u: goto label_2267d8;
        case 0x2267dcu: goto label_2267dc;
        case 0x2267e0u: goto label_2267e0;
        case 0x2267e4u: goto label_2267e4;
        case 0x2267e8u: goto label_2267e8;
        case 0x2267ecu: goto label_2267ec;
        case 0x2267f0u: goto label_2267f0;
        case 0x2267f4u: goto label_2267f4;
        case 0x2267f8u: goto label_2267f8;
        case 0x2267fcu: goto label_2267fc;
        case 0x226800u: goto label_226800;
        case 0x226804u: goto label_226804;
        case 0x226808u: goto label_226808;
        case 0x22680cu: goto label_22680c;
        case 0x226810u: goto label_226810;
        case 0x226814u: goto label_226814;
        case 0x226818u: goto label_226818;
        case 0x22681cu: goto label_22681c;
        case 0x226820u: goto label_226820;
        case 0x226824u: goto label_226824;
        case 0x226828u: goto label_226828;
        case 0x22682cu: goto label_22682c;
        case 0x226830u: goto label_226830;
        case 0x226834u: goto label_226834;
        case 0x226838u: goto label_226838;
        case 0x22683cu: goto label_22683c;
        case 0x226840u: goto label_226840;
        case 0x226844u: goto label_226844;
        case 0x226848u: goto label_226848;
        case 0x22684cu: goto label_22684c;
        case 0x226850u: goto label_226850;
        case 0x226854u: goto label_226854;
        case 0x226858u: goto label_226858;
        case 0x22685cu: goto label_22685c;
        case 0x226860u: goto label_226860;
        case 0x226864u: goto label_226864;
        case 0x226868u: goto label_226868;
        case 0x22686cu: goto label_22686c;
        case 0x226870u: goto label_226870;
        case 0x226874u: goto label_226874;
        case 0x226878u: goto label_226878;
        case 0x22687cu: goto label_22687c;
        case 0x226880u: goto label_226880;
        case 0x226884u: goto label_226884;
        case 0x226888u: goto label_226888;
        case 0x22688cu: goto label_22688c;
        case 0x226890u: goto label_226890;
        case 0x226894u: goto label_226894;
        case 0x226898u: goto label_226898;
        case 0x22689cu: goto label_22689c;
        case 0x2268a0u: goto label_2268a0;
        case 0x2268a4u: goto label_2268a4;
        case 0x2268a8u: goto label_2268a8;
        case 0x2268acu: goto label_2268ac;
        case 0x2268b0u: goto label_2268b0;
        case 0x2268b4u: goto label_2268b4;
        case 0x2268b8u: goto label_2268b8;
        case 0x2268bcu: goto label_2268bc;
        case 0x2268c0u: goto label_2268c0;
        case 0x2268c4u: goto label_2268c4;
        case 0x2268c8u: goto label_2268c8;
        case 0x2268ccu: goto label_2268cc;
        case 0x2268d0u: goto label_2268d0;
        case 0x2268d4u: goto label_2268d4;
        case 0x2268d8u: goto label_2268d8;
        case 0x2268dcu: goto label_2268dc;
        case 0x2268e0u: goto label_2268e0;
        case 0x2268e4u: goto label_2268e4;
        case 0x2268e8u: goto label_2268e8;
        case 0x2268ecu: goto label_2268ec;
        case 0x2268f0u: goto label_2268f0;
        case 0x2268f4u: goto label_2268f4;
        case 0x2268f8u: goto label_2268f8;
        case 0x2268fcu: goto label_2268fc;
        case 0x226900u: goto label_226900;
        case 0x226904u: goto label_226904;
        case 0x226908u: goto label_226908;
        case 0x22690cu: goto label_22690c;
        case 0x226910u: goto label_226910;
        case 0x226914u: goto label_226914;
        case 0x226918u: goto label_226918;
        case 0x22691cu: goto label_22691c;
        case 0x226920u: goto label_226920;
        case 0x226924u: goto label_226924;
        case 0x226928u: goto label_226928;
        case 0x22692cu: goto label_22692c;
        case 0x226930u: goto label_226930;
        case 0x226934u: goto label_226934;
        case 0x226938u: goto label_226938;
        case 0x22693cu: goto label_22693c;
        case 0x226940u: goto label_226940;
        case 0x226944u: goto label_226944;
        case 0x226948u: goto label_226948;
        case 0x22694cu: goto label_22694c;
        case 0x226950u: goto label_226950;
        case 0x226954u: goto label_226954;
        case 0x226958u: goto label_226958;
        case 0x22695cu: goto label_22695c;
        case 0x226960u: goto label_226960;
        case 0x226964u: goto label_226964;
        case 0x226968u: goto label_226968;
        case 0x22696cu: goto label_22696c;
        case 0x226970u: goto label_226970;
        case 0x226974u: goto label_226974;
        case 0x226978u: goto label_226978;
        case 0x22697cu: goto label_22697c;
        case 0x226980u: goto label_226980;
        case 0x226984u: goto label_226984;
        case 0x226988u: goto label_226988;
        case 0x22698cu: goto label_22698c;
        case 0x226990u: goto label_226990;
        case 0x226994u: goto label_226994;
        case 0x226998u: goto label_226998;
        case 0x22699cu: goto label_22699c;
        case 0x2269a0u: goto label_2269a0;
        case 0x2269a4u: goto label_2269a4;
        case 0x2269a8u: goto label_2269a8;
        case 0x2269acu: goto label_2269ac;
        case 0x2269b0u: goto label_2269b0;
        case 0x2269b4u: goto label_2269b4;
        case 0x2269b8u: goto label_2269b8;
        case 0x2269bcu: goto label_2269bc;
        case 0x2269c0u: goto label_2269c0;
        case 0x2269c4u: goto label_2269c4;
        case 0x2269c8u: goto label_2269c8;
        case 0x2269ccu: goto label_2269cc;
        case 0x2269d0u: goto label_2269d0;
        case 0x2269d4u: goto label_2269d4;
        case 0x2269d8u: goto label_2269d8;
        case 0x2269dcu: goto label_2269dc;
        case 0x2269e0u: goto label_2269e0;
        case 0x2269e4u: goto label_2269e4;
        case 0x2269e8u: goto label_2269e8;
        case 0x2269ecu: goto label_2269ec;
        default: break;
    }

    ctx->pc = 0x2266b0u;

label_2266b0:
    // 0x2266b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2266b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2266b4:
    // 0x2266b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2266b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2266b8:
    // 0x2266b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2266b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2266bc:
    // 0x2266bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2266bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2266c0:
    // 0x2266c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2266c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2266c4:
    // 0x2266c4: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_2266c8:
    if (ctx->pc == 0x2266C8u) {
        ctx->pc = 0x2266C8u;
            // 0x2266c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2266CCu;
        goto label_2266cc;
    }
    ctx->pc = 0x2266C4u;
    {
        const bool branch_taken_0x2266c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2266C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2266C4u;
            // 0x2266c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266c4) {
            ctx->pc = 0x226780u;
            goto label_226780;
        }
    }
    ctx->pc = 0x2266CCu;
label_2266cc:
    // 0x2266cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2266ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2266d0:
    // 0x2266d0: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
label_2266d4:
    // 0x2266d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2266d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2266d8:
    // 0x2266d8: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_2266dc:
    // 0x2266dc: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_2266e0:
    if (ctx->pc == 0x2266E0u) {
        ctx->pc = 0x2266E4u;
        goto label_2266e4;
    }
    ctx->pc = 0x2266DCu;
    {
        const bool branch_taken_0x2266dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2266dc) {
            ctx->pc = 0x226724u;
            goto label_226724;
        }
    }
    ctx->pc = 0x2266E4u;
label_2266e4:
    // 0x2266e4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2266e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2266e8:
    // 0x2266e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2266ec:
    if (ctx->pc == 0x2266ECu) {
        ctx->pc = 0x2266F0u;
        goto label_2266f0;
    }
    ctx->pc = 0x2266E8u;
    {
        const bool branch_taken_0x2266e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2266e8) {
            ctx->pc = 0x226724u;
            goto label_226724;
        }
    }
    ctx->pc = 0x2266F0u;
label_2266f0:
    // 0x2266f0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2266f4:
    // 0x2266f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2266f8:
    // 0x2266f8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2266f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2266fc:
    // 0x2266fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2266fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_226700:
    // 0x226700: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x226700u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_226704:
    // 0x226704: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_226708:
    if (ctx->pc == 0x226708u) {
        ctx->pc = 0x22670Cu;
        goto label_22670c;
    }
    ctx->pc = 0x226704u;
    {
        const bool branch_taken_0x226704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226704) {
            ctx->pc = 0x226724u;
            goto label_226724;
        }
    }
    ctx->pc = 0x22670Cu;
label_22670c:
    // 0x22670c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_226710:
    if (ctx->pc == 0x226710u) {
        ctx->pc = 0x226714u;
        goto label_226714;
    }
    ctx->pc = 0x22670Cu;
    {
        const bool branch_taken_0x22670c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22670c) {
            ctx->pc = 0x226724u;
            goto label_226724;
        }
    }
    ctx->pc = 0x226714u;
label_226714:
    // 0x226714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226718:
    // 0x226718: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22671c:
    // 0x22671c: 0x320f809  jalr        $t9
label_226720:
    if (ctx->pc == 0x226720u) {
        ctx->pc = 0x226720u;
            // 0x226720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x226724u;
        goto label_226724;
    }
    ctx->pc = 0x22671Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x226724u);
        ctx->pc = 0x226720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22671Cu;
            // 0x226720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x226724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x226724u; }
            if (ctx->pc != 0x226724u) { return; }
        }
        }
    }
    ctx->pc = 0x226724u;
label_226724:
    // 0x226724: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_226728:
    if (ctx->pc == 0x226728u) {
        ctx->pc = 0x226728u;
            // 0x226728: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x22672Cu;
        goto label_22672c;
    }
    ctx->pc = 0x226724u;
    {
        const bool branch_taken_0x226724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x226724) {
            ctx->pc = 0x226728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226724u;
            // 0x226728: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22675Cu;
            goto label_22675c;
        }
    }
    ctx->pc = 0x22672Cu;
label_22672c:
    // 0x22672c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_226730:
    // 0x226730: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_226734:
    // 0x226734: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_226738:
    if (ctx->pc == 0x226738u) {
        ctx->pc = 0x226738u;
            // 0x226738: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22673Cu;
        goto label_22673c;
    }
    ctx->pc = 0x226734u;
    {
        const bool branch_taken_0x226734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x226738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226734u;
            // 0x226738: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226734) {
            ctx->pc = 0x226758u;
            goto label_226758;
        }
    }
    ctx->pc = 0x22673Cu;
label_22673c:
    // 0x22673c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_226740:
    // 0x226740: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x226740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_226744:
    // 0x226744: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_226748:
    if (ctx->pc == 0x226748u) {
        ctx->pc = 0x226748u;
            // 0x226748: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22674Cu;
        goto label_22674c;
    }
    ctx->pc = 0x226744u;
    {
        const bool branch_taken_0x226744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x226748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226744u;
            // 0x226748: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226744) {
            ctx->pc = 0x226758u;
            goto label_226758;
        }
    }
    ctx->pc = 0x22674Cu;
label_22674c:
    // 0x22674c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_226750:
    // 0x226750: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x226750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_226754:
    // 0x226754: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x226754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_226758:
    // 0x226758: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x226758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22675c:
    // 0x22675c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22675cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_226760:
    // 0x226760: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_226764:
    if (ctx->pc == 0x226764u) {
        ctx->pc = 0x226764u;
            // 0x226764: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x226768u;
        goto label_226768;
    }
    ctx->pc = 0x226760u;
    {
        const bool branch_taken_0x226760 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x226760) {
            ctx->pc = 0x226764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226760u;
            // 0x226764: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226784u;
            goto label_226784;
        }
    }
    ctx->pc = 0x226768u;
label_226768:
    // 0x226768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x226768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22676c:
    // 0x22676c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22676cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_226770:
    // 0x226770: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x226770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_226774:
    // 0x226774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226778:
    // 0x226778: 0xc0a7ab4  jal         func_29EAD0
label_22677c:
    if (ctx->pc == 0x22677Cu) {
        ctx->pc = 0x22677Cu;
            // 0x22677c: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x226780u;
        goto label_226780;
    }
    ctx->pc = 0x226778u;
    SET_GPR_U32(ctx, 31, 0x226780u);
    ctx->pc = 0x22677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226778u;
            // 0x22677c: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226780u; }
        if (ctx->pc != 0x226780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226780u; }
        if (ctx->pc != 0x226780u) { return; }
    }
    ctx->pc = 0x226780u;
label_226780:
    // 0x226780: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226784:
    // 0x226784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_226788:
    // 0x226788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22678c:
    // 0x22678c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22678cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_226790:
    // 0x226790: 0x3e00008  jr          $ra
label_226794:
    if (ctx->pc == 0x226794u) {
        ctx->pc = 0x226794u;
            // 0x226794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x226798u;
        goto label_226798;
    }
    ctx->pc = 0x226790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226790u;
            // 0x226794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226798u;
label_226798:
    // 0x226798: 0x0  nop
    ctx->pc = 0x226798u;
    // NOP
label_22679c:
    // 0x22679c: 0x0  nop
    ctx->pc = 0x22679cu;
    // NOP
label_2267a0:
    // 0x2267a0: 0x3e00008  jr          $ra
label_2267a4:
    if (ctx->pc == 0x2267A4u) {
        ctx->pc = 0x2267A8u;
        goto label_2267a8;
    }
    ctx->pc = 0x2267A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2267A8u;
label_2267a8:
    // 0x2267a8: 0x0  nop
    ctx->pc = 0x2267a8u;
    // NOP
label_2267ac:
    // 0x2267ac: 0x0  nop
    ctx->pc = 0x2267acu;
    // NOP
label_2267b0:
    // 0x2267b0: 0x3e00008  jr          $ra
label_2267b4:
    if (ctx->pc == 0x2267B4u) {
        ctx->pc = 0x2267B8u;
        goto label_2267b8;
    }
    ctx->pc = 0x2267B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2267B8u;
label_2267b8:
    // 0x2267b8: 0x0  nop
    ctx->pc = 0x2267b8u;
    // NOP
label_2267bc:
    // 0x2267bc: 0x0  nop
    ctx->pc = 0x2267bcu;
    // NOP
label_2267c0:
    // 0x2267c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2267c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2267c4:
    // 0x2267c4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2267c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2267c8:
    // 0x2267c8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2267c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_2267cc:
    // 0x2267cc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2267ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_2267d0:
    // 0x2267d0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2267d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_2267d4:
    // 0x2267d4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2267d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_2267d8:
    // 0x2267d8: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2267d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_2267dc:
    // 0x2267dc: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2267dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_2267e0:
    // 0x2267e0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2267e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_2267e4:
    // 0x2267e4: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2267e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_2267e8:
    // 0x2267e8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2267e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_2267ec:
    // 0x2267ec: 0x3e00008  jr          $ra
label_2267f0:
    if (ctx->pc == 0x2267F0u) {
        ctx->pc = 0x2267F0u;
            // 0x2267f0: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x2267F4u;
        goto label_2267f4;
    }
    ctx->pc = 0x2267ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2267ECu;
            // 0x2267f0: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2267F4u;
label_2267f4:
    // 0x2267f4: 0x0  nop
    ctx->pc = 0x2267f4u;
    // NOP
label_2267f8:
    // 0x2267f8: 0x0  nop
    ctx->pc = 0x2267f8u;
    // NOP
label_2267fc:
    // 0x2267fc: 0x0  nop
    ctx->pc = 0x2267fcu;
    // NOP
label_226800:
    // 0x226800: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226804:
    // 0x226804: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226808:
    // 0x226808: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x226808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_22680c:
    // 0x22680c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x22680cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_226810:
    // 0x226810: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x226810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_226814:
    // 0x226814: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x226814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_226818:
    // 0x226818: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x226818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_22681c:
    // 0x22681c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x22681cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_226820:
    // 0x226820: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x226820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_226824:
    // 0x226824: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x226824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_226828:
    // 0x226828: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x226828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_22682c:
    // 0x22682c: 0x3e00008  jr          $ra
label_226830:
    if (ctx->pc == 0x226830u) {
        ctx->pc = 0x226830u;
            // 0x226830: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x226834u;
        goto label_226834;
    }
    ctx->pc = 0x22682Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22682Cu;
            // 0x226830: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226834u;
label_226834:
    // 0x226834: 0x0  nop
    ctx->pc = 0x226834u;
    // NOP
label_226838:
    // 0x226838: 0x0  nop
    ctx->pc = 0x226838u;
    // NOP
label_22683c:
    // 0x22683c: 0x0  nop
    ctx->pc = 0x22683cu;
    // NOP
label_226840:
    // 0x226840: 0x3e00008  jr          $ra
label_226844:
    if (ctx->pc == 0x226844u) {
        ctx->pc = 0x226848u;
        goto label_226848;
    }
    ctx->pc = 0x226840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226848u;
label_226848:
    // 0x226848: 0x0  nop
    ctx->pc = 0x226848u;
    // NOP
label_22684c:
    // 0x22684c: 0x0  nop
    ctx->pc = 0x22684cu;
    // NOP
label_226850:
    // 0x226850: 0x3e00008  jr          $ra
label_226854:
    if (ctx->pc == 0x226854u) {
        ctx->pc = 0x226858u;
        goto label_226858;
    }
    ctx->pc = 0x226850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226858u;
label_226858:
    // 0x226858: 0x0  nop
    ctx->pc = 0x226858u;
    // NOP
label_22685c:
    // 0x22685c: 0x0  nop
    ctx->pc = 0x22685cu;
    // NOP
label_226860:
    // 0x226860: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x226860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_226864:
    // 0x226864: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x226864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_226868:
    // 0x226868: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x226868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_22686c:
    // 0x22686c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x22686cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_226870:
    // 0x226870: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x226870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_226874:
    // 0x226874: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x226874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_226878:
    // 0x226878: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x226878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_22687c:
    // 0x22687c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x22687cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_226880:
    // 0x226880: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x226880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_226884:
    // 0x226884: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x226884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_226888:
    // 0x226888: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x226888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_22688c:
    // 0x22688c: 0x3e00008  jr          $ra
label_226890:
    if (ctx->pc == 0x226890u) {
        ctx->pc = 0x226890u;
            // 0x226890: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x226894u;
        goto label_226894;
    }
    ctx->pc = 0x22688Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22688Cu;
            // 0x226890: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226894u;
label_226894:
    // 0x226894: 0x0  nop
    ctx->pc = 0x226894u;
    // NOP
label_226898:
    // 0x226898: 0x0  nop
    ctx->pc = 0x226898u;
    // NOP
label_22689c:
    // 0x22689c: 0x0  nop
    ctx->pc = 0x22689cu;
    // NOP
label_2268a0:
    // 0x2268a0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2268a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2268a4:
    // 0x2268a4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2268a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2268a8:
    // 0x2268a8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2268a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_2268ac:
    // 0x2268ac: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2268acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_2268b0:
    // 0x2268b0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2268b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_2268b4:
    // 0x2268b4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2268b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_2268b8:
    // 0x2268b8: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2268b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_2268bc:
    // 0x2268bc: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2268bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_2268c0:
    // 0x2268c0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2268c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_2268c4:
    // 0x2268c4: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2268c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_2268c8:
    // 0x2268c8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2268c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_2268cc:
    // 0x2268cc: 0x3e00008  jr          $ra
label_2268d0:
    if (ctx->pc == 0x2268D0u) {
        ctx->pc = 0x2268D0u;
            // 0x2268d0: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x2268D4u;
        goto label_2268d4;
    }
    ctx->pc = 0x2268CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2268D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2268CCu;
            // 0x2268d0: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2268D4u;
label_2268d4:
    // 0x2268d4: 0x0  nop
    ctx->pc = 0x2268d4u;
    // NOP
label_2268d8:
    // 0x2268d8: 0x0  nop
    ctx->pc = 0x2268d8u;
    // NOP
label_2268dc:
    // 0x2268dc: 0x0  nop
    ctx->pc = 0x2268dcu;
    // NOP
label_2268e0:
    // 0x2268e0: 0x3e00008  jr          $ra
label_2268e4:
    if (ctx->pc == 0x2268E4u) {
        ctx->pc = 0x2268E8u;
        goto label_2268e8;
    }
    ctx->pc = 0x2268E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2268E8u;
label_2268e8:
    // 0x2268e8: 0x0  nop
    ctx->pc = 0x2268e8u;
    // NOP
label_2268ec:
    // 0x2268ec: 0x0  nop
    ctx->pc = 0x2268ecu;
    // NOP
label_2268f0:
    // 0x2268f0: 0x3e00008  jr          $ra
label_2268f4:
    if (ctx->pc == 0x2268F4u) {
        ctx->pc = 0x2268F8u;
        goto label_2268f8;
    }
    ctx->pc = 0x2268F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2268F8u;
label_2268f8:
    // 0x2268f8: 0x0  nop
    ctx->pc = 0x2268f8u;
    // NOP
label_2268fc:
    // 0x2268fc: 0x0  nop
    ctx->pc = 0x2268fcu;
    // NOP
label_226900:
    // 0x226900: 0x3e00008  jr          $ra
label_226904:
    if (ctx->pc == 0x226904u) {
        ctx->pc = 0x226908u;
        goto label_226908;
    }
    ctx->pc = 0x226900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226908u;
label_226908:
    // 0x226908: 0x0  nop
    ctx->pc = 0x226908u;
    // NOP
label_22690c:
    // 0x22690c: 0x0  nop
    ctx->pc = 0x22690cu;
    // NOP
label_226910:
    // 0x226910: 0x3e00008  jr          $ra
label_226914:
    if (ctx->pc == 0x226914u) {
        ctx->pc = 0x226918u;
        goto label_226918;
    }
    ctx->pc = 0x226910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226918u;
label_226918:
    // 0x226918: 0x0  nop
    ctx->pc = 0x226918u;
    // NOP
label_22691c:
    // 0x22691c: 0x0  nop
    ctx->pc = 0x22691cu;
    // NOP
label_226920:
    // 0x226920: 0x3e00008  jr          $ra
label_226924:
    if (ctx->pc == 0x226924u) {
        ctx->pc = 0x226928u;
        goto label_226928;
    }
    ctx->pc = 0x226920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226928u;
label_226928:
    // 0x226928: 0x0  nop
    ctx->pc = 0x226928u;
    // NOP
label_22692c:
    // 0x22692c: 0x0  nop
    ctx->pc = 0x22692cu;
    // NOP
label_226930:
    // 0x226930: 0x3e00008  jr          $ra
label_226934:
    if (ctx->pc == 0x226934u) {
        ctx->pc = 0x226938u;
        goto label_226938;
    }
    ctx->pc = 0x226930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226938u;
label_226938:
    // 0x226938: 0x0  nop
    ctx->pc = 0x226938u;
    // NOP
label_22693c:
    // 0x22693c: 0x0  nop
    ctx->pc = 0x22693cu;
    // NOP
label_226940:
    // 0x226940: 0x3e00008  jr          $ra
label_226944:
    if (ctx->pc == 0x226944u) {
        ctx->pc = 0x226948u;
        goto label_226948;
    }
    ctx->pc = 0x226940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226948u;
label_226948:
    // 0x226948: 0x0  nop
    ctx->pc = 0x226948u;
    // NOP
label_22694c:
    // 0x22694c: 0x0  nop
    ctx->pc = 0x22694cu;
    // NOP
label_226950:
    // 0x226950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_226954:
    // 0x226954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_226958:
    // 0x226958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22695c:
    // 0x22695c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_226960:
    // 0x226960: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x226960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226964:
    // 0x226964: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_226968:
    if (ctx->pc == 0x226968u) {
        ctx->pc = 0x226968u;
            // 0x226968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22696Cu;
        goto label_22696c;
    }
    ctx->pc = 0x226964u;
    {
        const bool branch_taken_0x226964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226964u;
            // 0x226968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226964) {
            ctx->pc = 0x226984u;
            goto label_226984;
        }
    }
    ctx->pc = 0x22696Cu;
label_22696c:
    // 0x22696c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x22696cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_226970:
    // 0x226970: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_226974:
    if (ctx->pc == 0x226974u) {
        ctx->pc = 0x226974u;
            // 0x226974: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->pc = 0x226978u;
        goto label_226978;
    }
    ctx->pc = 0x226970u;
    {
        const bool branch_taken_0x226970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226970) {
            ctx->pc = 0x226974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226970u;
            // 0x226974: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x226988u;
            goto label_226988;
        }
    }
    ctx->pc = 0x226978u;
label_226978:
    // 0x226978: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22697c:
    // 0x22697c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_226980:
    // 0x226980: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x226980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_226984:
    // 0x226984: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x226984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_226988:
    // 0x226988: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_22698c:
    if (ctx->pc == 0x22698Cu) {
        ctx->pc = 0x22698Cu;
            // 0x22698c: 0xae300120  sw          $s0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 16));
        ctx->pc = 0x226990u;
        goto label_226990;
    }
    ctx->pc = 0x226988u;
    {
        const bool branch_taken_0x226988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226988) {
            ctx->pc = 0x22698Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226988u;
            // 0x22698c: 0xae300120  sw          $s0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2269D4u;
            goto label_2269d4;
        }
    }
    ctx->pc = 0x226990u;
label_226990:
    // 0x226990: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x226990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_226994:
    // 0x226994: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_226998:
    if (ctx->pc == 0x226998u) {
        ctx->pc = 0x22699Cu;
        goto label_22699c;
    }
    ctx->pc = 0x226994u;
    {
        const bool branch_taken_0x226994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226994) {
            ctx->pc = 0x2269D0u;
            goto label_2269d0;
        }
    }
    ctx->pc = 0x22699Cu;
label_22699c:
    // 0x22699c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x22699cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2269a0:
    // 0x2269a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2269a4:
    // 0x2269a4: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2269a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_2269a8:
    // 0x2269a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2269a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2269ac:
    // 0x2269ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2269acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2269b0:
    // 0x2269b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2269b4:
    if (ctx->pc == 0x2269B4u) {
        ctx->pc = 0x2269B8u;
        goto label_2269b8;
    }
    ctx->pc = 0x2269B0u;
    {
        const bool branch_taken_0x2269b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2269b0) {
            ctx->pc = 0x2269D0u;
            goto label_2269d0;
        }
    }
    ctx->pc = 0x2269B8u;
label_2269b8:
    // 0x2269b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2269bc:
    if (ctx->pc == 0x2269BCu) {
        ctx->pc = 0x2269C0u;
        goto label_2269c0;
    }
    ctx->pc = 0x2269B8u;
    {
        const bool branch_taken_0x2269b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269b8) {
            ctx->pc = 0x2269D0u;
            goto label_2269d0;
        }
    }
    ctx->pc = 0x2269C0u;
label_2269c0:
    // 0x2269c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2269c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2269c4:
    // 0x2269c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2269c8:
    // 0x2269c8: 0x320f809  jalr        $t9
label_2269cc:
    if (ctx->pc == 0x2269CCu) {
        ctx->pc = 0x2269CCu;
            // 0x2269cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2269D0u;
        goto label_2269d0;
    }
    ctx->pc = 0x2269C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2269D0u);
        ctx->pc = 0x2269CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2269C8u;
            // 0x2269cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2269D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2269D0u; }
            if (ctx->pc != 0x2269D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2269D0u;
label_2269d0:
    // 0x2269d0: 0xae300120  sw          $s0, 0x120($s1)
    ctx->pc = 0x2269d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 16));
label_2269d4:
    // 0x2269d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2269d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2269d8:
    // 0x2269d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2269d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2269dc:
    // 0x2269dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2269dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2269e0:
    // 0x2269e0: 0x3e00008  jr          $ra
label_2269e4:
    if (ctx->pc == 0x2269E4u) {
        ctx->pc = 0x2269E4u;
            // 0x2269e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2269E8u;
        goto label_2269e8;
    }
    ctx->pc = 0x2269E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2269E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2269E0u;
            // 0x2269e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2269E8u;
label_2269e8:
    // 0x2269e8: 0x0  nop
    ctx->pc = 0x2269e8u;
    // NOP
label_2269ec:
    // 0x2269ec: 0x0  nop
    ctx->pc = 0x2269ecu;
    // NOP
}
