#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00487550
// Address: 0x487550 - 0x4878a0
void sub_00487550_0x487550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487550_0x487550");
#endif

    switch (ctx->pc) {
        case 0x487550u: goto label_487550;
        case 0x487554u: goto label_487554;
        case 0x487558u: goto label_487558;
        case 0x48755cu: goto label_48755c;
        case 0x487560u: goto label_487560;
        case 0x487564u: goto label_487564;
        case 0x487568u: goto label_487568;
        case 0x48756cu: goto label_48756c;
        case 0x487570u: goto label_487570;
        case 0x487574u: goto label_487574;
        case 0x487578u: goto label_487578;
        case 0x48757cu: goto label_48757c;
        case 0x487580u: goto label_487580;
        case 0x487584u: goto label_487584;
        case 0x487588u: goto label_487588;
        case 0x48758cu: goto label_48758c;
        case 0x487590u: goto label_487590;
        case 0x487594u: goto label_487594;
        case 0x487598u: goto label_487598;
        case 0x48759cu: goto label_48759c;
        case 0x4875a0u: goto label_4875a0;
        case 0x4875a4u: goto label_4875a4;
        case 0x4875a8u: goto label_4875a8;
        case 0x4875acu: goto label_4875ac;
        case 0x4875b0u: goto label_4875b0;
        case 0x4875b4u: goto label_4875b4;
        case 0x4875b8u: goto label_4875b8;
        case 0x4875bcu: goto label_4875bc;
        case 0x4875c0u: goto label_4875c0;
        case 0x4875c4u: goto label_4875c4;
        case 0x4875c8u: goto label_4875c8;
        case 0x4875ccu: goto label_4875cc;
        case 0x4875d0u: goto label_4875d0;
        case 0x4875d4u: goto label_4875d4;
        case 0x4875d8u: goto label_4875d8;
        case 0x4875dcu: goto label_4875dc;
        case 0x4875e0u: goto label_4875e0;
        case 0x4875e4u: goto label_4875e4;
        case 0x4875e8u: goto label_4875e8;
        case 0x4875ecu: goto label_4875ec;
        case 0x4875f0u: goto label_4875f0;
        case 0x4875f4u: goto label_4875f4;
        case 0x4875f8u: goto label_4875f8;
        case 0x4875fcu: goto label_4875fc;
        case 0x487600u: goto label_487600;
        case 0x487604u: goto label_487604;
        case 0x487608u: goto label_487608;
        case 0x48760cu: goto label_48760c;
        case 0x487610u: goto label_487610;
        case 0x487614u: goto label_487614;
        case 0x487618u: goto label_487618;
        case 0x48761cu: goto label_48761c;
        case 0x487620u: goto label_487620;
        case 0x487624u: goto label_487624;
        case 0x487628u: goto label_487628;
        case 0x48762cu: goto label_48762c;
        case 0x487630u: goto label_487630;
        case 0x487634u: goto label_487634;
        case 0x487638u: goto label_487638;
        case 0x48763cu: goto label_48763c;
        case 0x487640u: goto label_487640;
        case 0x487644u: goto label_487644;
        case 0x487648u: goto label_487648;
        case 0x48764cu: goto label_48764c;
        case 0x487650u: goto label_487650;
        case 0x487654u: goto label_487654;
        case 0x487658u: goto label_487658;
        case 0x48765cu: goto label_48765c;
        case 0x487660u: goto label_487660;
        case 0x487664u: goto label_487664;
        case 0x487668u: goto label_487668;
        case 0x48766cu: goto label_48766c;
        case 0x487670u: goto label_487670;
        case 0x487674u: goto label_487674;
        case 0x487678u: goto label_487678;
        case 0x48767cu: goto label_48767c;
        case 0x487680u: goto label_487680;
        case 0x487684u: goto label_487684;
        case 0x487688u: goto label_487688;
        case 0x48768cu: goto label_48768c;
        case 0x487690u: goto label_487690;
        case 0x487694u: goto label_487694;
        case 0x487698u: goto label_487698;
        case 0x48769cu: goto label_48769c;
        case 0x4876a0u: goto label_4876a0;
        case 0x4876a4u: goto label_4876a4;
        case 0x4876a8u: goto label_4876a8;
        case 0x4876acu: goto label_4876ac;
        case 0x4876b0u: goto label_4876b0;
        case 0x4876b4u: goto label_4876b4;
        case 0x4876b8u: goto label_4876b8;
        case 0x4876bcu: goto label_4876bc;
        case 0x4876c0u: goto label_4876c0;
        case 0x4876c4u: goto label_4876c4;
        case 0x4876c8u: goto label_4876c8;
        case 0x4876ccu: goto label_4876cc;
        case 0x4876d0u: goto label_4876d0;
        case 0x4876d4u: goto label_4876d4;
        case 0x4876d8u: goto label_4876d8;
        case 0x4876dcu: goto label_4876dc;
        case 0x4876e0u: goto label_4876e0;
        case 0x4876e4u: goto label_4876e4;
        case 0x4876e8u: goto label_4876e8;
        case 0x4876ecu: goto label_4876ec;
        case 0x4876f0u: goto label_4876f0;
        case 0x4876f4u: goto label_4876f4;
        case 0x4876f8u: goto label_4876f8;
        case 0x4876fcu: goto label_4876fc;
        case 0x487700u: goto label_487700;
        case 0x487704u: goto label_487704;
        case 0x487708u: goto label_487708;
        case 0x48770cu: goto label_48770c;
        case 0x487710u: goto label_487710;
        case 0x487714u: goto label_487714;
        case 0x487718u: goto label_487718;
        case 0x48771cu: goto label_48771c;
        case 0x487720u: goto label_487720;
        case 0x487724u: goto label_487724;
        case 0x487728u: goto label_487728;
        case 0x48772cu: goto label_48772c;
        case 0x487730u: goto label_487730;
        case 0x487734u: goto label_487734;
        case 0x487738u: goto label_487738;
        case 0x48773cu: goto label_48773c;
        case 0x487740u: goto label_487740;
        case 0x487744u: goto label_487744;
        case 0x487748u: goto label_487748;
        case 0x48774cu: goto label_48774c;
        case 0x487750u: goto label_487750;
        case 0x487754u: goto label_487754;
        case 0x487758u: goto label_487758;
        case 0x48775cu: goto label_48775c;
        case 0x487760u: goto label_487760;
        case 0x487764u: goto label_487764;
        case 0x487768u: goto label_487768;
        case 0x48776cu: goto label_48776c;
        case 0x487770u: goto label_487770;
        case 0x487774u: goto label_487774;
        case 0x487778u: goto label_487778;
        case 0x48777cu: goto label_48777c;
        case 0x487780u: goto label_487780;
        case 0x487784u: goto label_487784;
        case 0x487788u: goto label_487788;
        case 0x48778cu: goto label_48778c;
        case 0x487790u: goto label_487790;
        case 0x487794u: goto label_487794;
        case 0x487798u: goto label_487798;
        case 0x48779cu: goto label_48779c;
        case 0x4877a0u: goto label_4877a0;
        case 0x4877a4u: goto label_4877a4;
        case 0x4877a8u: goto label_4877a8;
        case 0x4877acu: goto label_4877ac;
        case 0x4877b0u: goto label_4877b0;
        case 0x4877b4u: goto label_4877b4;
        case 0x4877b8u: goto label_4877b8;
        case 0x4877bcu: goto label_4877bc;
        case 0x4877c0u: goto label_4877c0;
        case 0x4877c4u: goto label_4877c4;
        case 0x4877c8u: goto label_4877c8;
        case 0x4877ccu: goto label_4877cc;
        case 0x4877d0u: goto label_4877d0;
        case 0x4877d4u: goto label_4877d4;
        case 0x4877d8u: goto label_4877d8;
        case 0x4877dcu: goto label_4877dc;
        case 0x4877e0u: goto label_4877e0;
        case 0x4877e4u: goto label_4877e4;
        case 0x4877e8u: goto label_4877e8;
        case 0x4877ecu: goto label_4877ec;
        case 0x4877f0u: goto label_4877f0;
        case 0x4877f4u: goto label_4877f4;
        case 0x4877f8u: goto label_4877f8;
        case 0x4877fcu: goto label_4877fc;
        case 0x487800u: goto label_487800;
        case 0x487804u: goto label_487804;
        case 0x487808u: goto label_487808;
        case 0x48780cu: goto label_48780c;
        case 0x487810u: goto label_487810;
        case 0x487814u: goto label_487814;
        case 0x487818u: goto label_487818;
        case 0x48781cu: goto label_48781c;
        case 0x487820u: goto label_487820;
        case 0x487824u: goto label_487824;
        case 0x487828u: goto label_487828;
        case 0x48782cu: goto label_48782c;
        case 0x487830u: goto label_487830;
        case 0x487834u: goto label_487834;
        case 0x487838u: goto label_487838;
        case 0x48783cu: goto label_48783c;
        case 0x487840u: goto label_487840;
        case 0x487844u: goto label_487844;
        case 0x487848u: goto label_487848;
        case 0x48784cu: goto label_48784c;
        case 0x487850u: goto label_487850;
        case 0x487854u: goto label_487854;
        case 0x487858u: goto label_487858;
        case 0x48785cu: goto label_48785c;
        case 0x487860u: goto label_487860;
        case 0x487864u: goto label_487864;
        case 0x487868u: goto label_487868;
        case 0x48786cu: goto label_48786c;
        case 0x487870u: goto label_487870;
        case 0x487874u: goto label_487874;
        case 0x487878u: goto label_487878;
        case 0x48787cu: goto label_48787c;
        case 0x487880u: goto label_487880;
        case 0x487884u: goto label_487884;
        case 0x487888u: goto label_487888;
        case 0x48788cu: goto label_48788c;
        case 0x487890u: goto label_487890;
        case 0x487894u: goto label_487894;
        case 0x487898u: goto label_487898;
        case 0x48789cu: goto label_48789c;
        default: break;
    }

    ctx->pc = 0x487550u;

label_487550:
    // 0x487550: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x487550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_487554:
    // 0x487554: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x487554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_487558:
    // 0x487558: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x487558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48755c:
    // 0x48755c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_487560:
    // 0x487560: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x487560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_487564:
    // 0x487564: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x487564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_487568:
    // 0x487568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48756c:
    // 0x48756c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x48756cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_487570:
    // 0x487570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_487574:
    // 0x487574: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x487574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_487578:
    // 0x487578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x487578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48757c:
    // 0x48757c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48757cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487580:
    // 0x487580: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x487580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_487584:
    // 0x487584: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_487588:
    if (ctx->pc == 0x487588u) {
        ctx->pc = 0x487588u;
            // 0x487588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48758Cu;
        goto label_48758c;
    }
    ctx->pc = 0x487584u;
    {
        const bool branch_taken_0x487584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x487588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487584u;
            // 0x487588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487584) {
            ctx->pc = 0x48777Cu;
            goto label_48777c;
        }
    }
    ctx->pc = 0x48758Cu;
label_48758c:
    // 0x48758c: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x48758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_487590:
    // 0x487590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x487590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_487594:
    // 0x487594: 0x5483007a  bnel        $a0, $v1, . + 4 + (0x7A << 2)
label_487598:
    if (ctx->pc == 0x487598u) {
        ctx->pc = 0x487598u;
            // 0x487598: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x48759Cu;
        goto label_48759c;
    }
    ctx->pc = 0x487594u;
    {
        const bool branch_taken_0x487594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x487594) {
            ctx->pc = 0x487598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487594u;
            // 0x487598: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487780u;
            goto label_487780;
        }
    }
    ctx->pc = 0x48759Cu;
label_48759c:
    // 0x48759c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4875a0:
    // 0x4875a0: 0xc04f278  jal         func_13C9E0
label_4875a4:
    if (ctx->pc == 0x4875A4u) {
        ctx->pc = 0x4875A4u;
            // 0x4875a4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4875A8u;
        goto label_4875a8;
    }
    ctx->pc = 0x4875A0u;
    SET_GPR_U32(ctx, 31, 0x4875A8u);
    ctx->pc = 0x4875A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4875A0u;
            // 0x4875a4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875A8u; }
        if (ctx->pc != 0x4875A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875A8u; }
        if (ctx->pc != 0x4875A8u) { return; }
    }
    ctx->pc = 0x4875A8u;
label_4875a8:
    // 0x4875a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4875a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4875ac:
    // 0x4875ac: 0xc04ce80  jal         func_133A00
label_4875b0:
    if (ctx->pc == 0x4875B0u) {
        ctx->pc = 0x4875B0u;
            // 0x4875b0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4875B4u;
        goto label_4875b4;
    }
    ctx->pc = 0x4875ACu;
    SET_GPR_U32(ctx, 31, 0x4875B4u);
    ctx->pc = 0x4875B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4875ACu;
            // 0x4875b0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875B4u; }
        if (ctx->pc != 0x4875B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875B4u; }
        if (ctx->pc != 0x4875B4u) { return; }
    }
    ctx->pc = 0x4875B4u;
label_4875b4:
    // 0x4875b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4875b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4875b8:
    // 0x4875b8: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x4875b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_4875bc:
    // 0x4875bc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4875bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4875c0:
    // 0x4875c0: 0xc07698c  jal         func_1DA630
label_4875c4:
    if (ctx->pc == 0x4875C4u) {
        ctx->pc = 0x4875C4u;
            // 0x4875c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4875C8u;
        goto label_4875c8;
    }
    ctx->pc = 0x4875C0u;
    SET_GPR_U32(ctx, 31, 0x4875C8u);
    ctx->pc = 0x4875C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4875C0u;
            // 0x4875c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875C8u; }
        if (ctx->pc != 0x4875C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875C8u; }
        if (ctx->pc != 0x4875C8u) { return; }
    }
    ctx->pc = 0x4875C8u;
label_4875c8:
    // 0x4875c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4875c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4875cc:
    // 0x4875cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4875d0:
    if (ctx->pc == 0x4875D0u) {
        ctx->pc = 0x4875D4u;
        goto label_4875d4;
    }
    ctx->pc = 0x4875CCu;
    {
        const bool branch_taken_0x4875cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4875cc) {
            ctx->pc = 0x4875DCu;
            goto label_4875dc;
        }
    }
    ctx->pc = 0x4875D4u;
label_4875d4:
    // 0x4875d4: 0x10000033  b           . + 4 + (0x33 << 2)
label_4875d8:
    if (ctx->pc == 0x4875D8u) {
        ctx->pc = 0x4875D8u;
            // 0x4875d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4875DCu;
        goto label_4875dc;
    }
    ctx->pc = 0x4875D4u;
    {
        const bool branch_taken_0x4875d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4875D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4875D4u;
            // 0x4875d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4875d4) {
            ctx->pc = 0x4876A4u;
            goto label_4876a4;
        }
    }
    ctx->pc = 0x4875DCu;
label_4875dc:
    // 0x4875dc: 0xc0576f4  jal         func_15DBD0
label_4875e0:
    if (ctx->pc == 0x4875E0u) {
        ctx->pc = 0x4875E4u;
        goto label_4875e4;
    }
    ctx->pc = 0x4875DCu;
    SET_GPR_U32(ctx, 31, 0x4875E4u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875E4u; }
        if (ctx->pc != 0x4875E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875E4u; }
        if (ctx->pc != 0x4875E4u) { return; }
    }
    ctx->pc = 0x4875E4u;
label_4875e4:
    // 0x4875e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4875e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4875e8:
    // 0x4875e8: 0xc076984  jal         func_1DA610
label_4875ec:
    if (ctx->pc == 0x4875ECu) {
        ctx->pc = 0x4875ECu;
            // 0x4875ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4875F0u;
        goto label_4875f0;
    }
    ctx->pc = 0x4875E8u;
    SET_GPR_U32(ctx, 31, 0x4875F0u);
    ctx->pc = 0x4875ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4875E8u;
            // 0x4875ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875F0u; }
        if (ctx->pc != 0x4875F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4875F0u; }
        if (ctx->pc != 0x4875F0u) { return; }
    }
    ctx->pc = 0x4875F0u;
label_4875f0:
    // 0x4875f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4875f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4875f4:
    // 0x4875f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4875f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4875f8:
    // 0x4875f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4875f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4875fc:
    // 0x4875fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4875fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_487600:
    // 0x487600: 0xc4420950  lwc1        $f2, 0x950($v0)
    ctx->pc = 0x487600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_487604:
    // 0x487604: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x487604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487608:
    // 0x487608: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x487608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_48760c:
    // 0x48760c: 0xc4410958  lwc1        $f1, 0x958($v0)
    ctx->pc = 0x48760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487610:
    // 0x487610: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x487610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_487614:
    // 0x487614: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x487614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_487618:
    // 0x487618: 0xc440095c  lwc1        $f0, 0x95C($v0)
    ctx->pc = 0x487618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48761c:
    // 0x48761c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x48761cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_487620:
    // 0x487620: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x487620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_487624:
    // 0x487624: 0x8c420954  lw          $v0, 0x954($v0)
    ctx->pc = 0x487624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2388)));
label_487628:
    // 0x487628: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x487628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_48762c:
    // 0x48762c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x48762cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_487630:
    // 0x487630: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x487630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487634:
    // 0x487634: 0xc04cca0  jal         func_133280
label_487638:
    if (ctx->pc == 0x487638u) {
        ctx->pc = 0x487638u;
            // 0x487638: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x48763Cu;
        goto label_48763c;
    }
    ctx->pc = 0x487634u;
    SET_GPR_U32(ctx, 31, 0x48763Cu);
    ctx->pc = 0x487638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487634u;
            // 0x487638: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48763Cu; }
        if (ctx->pc != 0x48763Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48763Cu; }
        if (ctx->pc != 0x48763Cu) { return; }
    }
    ctx->pc = 0x48763Cu;
label_48763c:
    // 0x48763c: 0xc076980  jal         func_1DA600
label_487640:
    if (ctx->pc == 0x487640u) {
        ctx->pc = 0x487640u;
            // 0x487640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487644u;
        goto label_487644;
    }
    ctx->pc = 0x48763Cu;
    SET_GPR_U32(ctx, 31, 0x487644u);
    ctx->pc = 0x487640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48763Cu;
            // 0x487640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487644u; }
        if (ctx->pc != 0x487644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487644u; }
        if (ctx->pc != 0x487644u) { return; }
    }
    ctx->pc = 0x487644u;
label_487644:
    // 0x487644: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x487644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_487648:
    // 0x487648: 0xc04cc34  jal         func_1330D0
label_48764c:
    if (ctx->pc == 0x48764Cu) {
        ctx->pc = 0x48764Cu;
            // 0x48764c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487650u;
        goto label_487650;
    }
    ctx->pc = 0x487648u;
    SET_GPR_U32(ctx, 31, 0x487650u);
    ctx->pc = 0x48764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487648u;
            // 0x48764c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487650u; }
        if (ctx->pc != 0x487650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487650u; }
        if (ctx->pc != 0x487650u) { return; }
    }
    ctx->pc = 0x487650u;
label_487650:
    // 0x487650: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x487650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_487654:
    // 0x487654: 0xc461fd78  lwc1        $f1, -0x288($v1)
    ctx->pc = 0x487654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_487658:
    // 0x487658: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x487658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48765c:
    // 0x48765c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_487660:
    if (ctx->pc == 0x487660u) {
        ctx->pc = 0x487660u;
            // 0x487660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487664u;
        goto label_487664;
    }
    ctx->pc = 0x48765Cu;
    {
        const bool branch_taken_0x48765c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48765c) {
            ctx->pc = 0x487660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48765Cu;
            // 0x487660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48766Cu;
            goto label_48766c;
        }
    }
    ctx->pc = 0x487664u;
label_487664:
    // 0x487664: 0x1000000f  b           . + 4 + (0xF << 2)
label_487668:
    if (ctx->pc == 0x487668u) {
        ctx->pc = 0x487668u;
            // 0x487668: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x48766Cu;
        goto label_48766c;
    }
    ctx->pc = 0x487664u;
    {
        const bool branch_taken_0x487664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487664u;
            // 0x487668: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487664) {
            ctx->pc = 0x4876A4u;
            goto label_4876a4;
        }
    }
    ctx->pc = 0x48766Cu;
label_48766c:
    // 0x48766c: 0xc07697c  jal         func_1DA5F0
label_487670:
    if (ctx->pc == 0x487670u) {
        ctx->pc = 0x487674u;
        goto label_487674;
    }
    ctx->pc = 0x48766Cu;
    SET_GPR_U32(ctx, 31, 0x487674u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487674u; }
        if (ctx->pc != 0x487674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487674u; }
        if (ctx->pc != 0x487674u) { return; }
    }
    ctx->pc = 0x487674u;
label_487674:
    // 0x487674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x487674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487678:
    // 0x487678: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x487678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48767c:
    // 0x48767c: 0xc04cd60  jal         func_133580
label_487680:
    if (ctx->pc == 0x487680u) {
        ctx->pc = 0x487680u;
            // 0x487680: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487684u;
        goto label_487684;
    }
    ctx->pc = 0x48767Cu;
    SET_GPR_U32(ctx, 31, 0x487684u);
    ctx->pc = 0x487680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48767Cu;
            // 0x487680: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487684u; }
        if (ctx->pc != 0x487684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487684u; }
        if (ctx->pc != 0x487684u) { return; }
    }
    ctx->pc = 0x487684u;
label_487684:
    // 0x487684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x487684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487688:
    // 0x487688: 0xc04c650  jal         func_131940
label_48768c:
    if (ctx->pc == 0x48768Cu) {
        ctx->pc = 0x48768Cu;
            // 0x48768c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x487690u;
        goto label_487690;
    }
    ctx->pc = 0x487688u;
    SET_GPR_U32(ctx, 31, 0x487690u);
    ctx->pc = 0x48768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487688u;
            // 0x48768c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487690u; }
        if (ctx->pc != 0x487690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487690u; }
        if (ctx->pc != 0x487690u) { return; }
    }
    ctx->pc = 0x487690u;
label_487690:
    // 0x487690: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x487690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_487694:
    // 0x487694: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x487694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_487698:
    // 0x487698: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x487698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_48769c:
    // 0x48769c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4876a0:
    // 0x4876a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4876a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4876a4:
    // 0x4876a4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4876a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4876a8:
    // 0x4876a8: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_4876ac:
    if (ctx->pc == 0x4876ACu) {
        ctx->pc = 0x4876ACu;
            // 0x4876ac: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4876B0u;
        goto label_4876b0;
    }
    ctx->pc = 0x4876A8u;
    {
        const bool branch_taken_0x4876a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4876ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4876A8u;
            // 0x4876ac: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4876a8) {
            ctx->pc = 0x48777Cu;
            goto label_48777c;
        }
    }
    ctx->pc = 0x4876B0u;
label_4876b0:
    // 0x4876b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4876b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4876b4:
    // 0x4876b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4876b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4876b8:
    // 0x4876b8: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4876b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4876bc:
    // 0x4876bc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4876bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4876c0:
    // 0x4876c0: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4876c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4876c4:
    // 0x4876c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4876c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4876c8:
    // 0x4876c8: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4876c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4876cc:
    // 0x4876cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4876ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4876d0:
    // 0x4876d0: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4876d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4876d4:
    // 0x4876d4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4876d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4876d8:
    // 0x4876d8: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4876d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4876dc:
    // 0x4876dc: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x4876dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4876e0:
    // 0x4876e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4876e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4876e4:
    // 0x4876e4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4876e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4876e8:
    // 0x4876e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4876e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4876ec:
    // 0x4876ec: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x4876ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_4876f0:
    // 0x4876f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4876f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4876f4:
    // 0x4876f4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4876f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4876f8:
    // 0x4876f8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4876f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4876fc:
    // 0x4876fc: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x4876fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_487700:
    // 0x487700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x487700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487704:
    // 0x487704: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x487704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_487708:
    // 0x487708: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x487708u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_48770c:
    // 0x48770c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48770cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_487710:
    // 0x487710: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x487710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_487714:
    // 0x487714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x487714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_487718:
    // 0x487718: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x487718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_48771c:
    // 0x48771c: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x48771cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_487720:
    // 0x487720: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x487720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_487724:
    // 0x487724: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x487724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_487728:
    // 0x487728: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x487728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_48772c:
    // 0x48772c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_487730:
    // 0x487730: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x487730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_487734:
    // 0x487734: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x487734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_487738:
    // 0x487738: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x487738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_48773c:
    // 0x48773c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x48773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_487740:
    // 0x487740: 0xc04e4a4  jal         func_139290
label_487744:
    if (ctx->pc == 0x487744u) {
        ctx->pc = 0x487744u;
            // 0x487744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487748u;
        goto label_487748;
    }
    ctx->pc = 0x487740u;
    SET_GPR_U32(ctx, 31, 0x487748u);
    ctx->pc = 0x487744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487740u;
            // 0x487744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487748u; }
        if (ctx->pc != 0x487748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487748u; }
        if (ctx->pc != 0x487748u) { return; }
    }
    ctx->pc = 0x487748u;
label_487748:
    // 0x487748: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x487748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_48774c:
    // 0x48774c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48774cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_487750:
    // 0x487750: 0xc04cd60  jal         func_133580
label_487754:
    if (ctx->pc == 0x487754u) {
        ctx->pc = 0x487754u;
            // 0x487754: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487758u;
        goto label_487758;
    }
    ctx->pc = 0x487750u;
    SET_GPR_U32(ctx, 31, 0x487758u);
    ctx->pc = 0x487754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487750u;
            // 0x487754: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487758u; }
        if (ctx->pc != 0x487758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487758u; }
        if (ctx->pc != 0x487758u) { return; }
    }
    ctx->pc = 0x487758u;
label_487758:
    // 0x487758: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x487758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48775c:
    // 0x48775c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x48775cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_487760:
    // 0x487760: 0x320f809  jalr        $t9
label_487764:
    if (ctx->pc == 0x487764u) {
        ctx->pc = 0x487764u;
            // 0x487764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487768u;
        goto label_487768;
    }
    ctx->pc = 0x487760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x487768u);
        ctx->pc = 0x487764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487760u;
            // 0x487764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x487768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x487768u; }
            if (ctx->pc != 0x487768u) { return; }
        }
        }
    }
    ctx->pc = 0x487768u;
label_487768:
    // 0x487768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x487768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48776c:
    // 0x48776c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48776cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487770:
    // 0x487770: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x487770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_487774:
    // 0x487774: 0xc054fd4  jal         func_153F50
label_487778:
    if (ctx->pc == 0x487778u) {
        ctx->pc = 0x487778u;
            // 0x487778: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48777Cu;
        goto label_48777c;
    }
    ctx->pc = 0x487774u;
    SET_GPR_U32(ctx, 31, 0x48777Cu);
    ctx->pc = 0x487778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487774u;
            // 0x487778: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48777Cu; }
        if (ctx->pc != 0x48777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48777Cu; }
        if (ctx->pc != 0x48777Cu) { return; }
    }
    ctx->pc = 0x48777Cu;
label_48777c:
    // 0x48777c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x48777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_487780:
    // 0x487780: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x487780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_487784:
    // 0x487784: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x487784u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_487788:
    // 0x487788: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x487788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48778c:
    // 0x48778c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48778cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_487790:
    // 0x487790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x487790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_487794:
    // 0x487794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_487798:
    // 0x487798: 0x3e00008  jr          $ra
label_48779c:
    if (ctx->pc == 0x48779Cu) {
        ctx->pc = 0x48779Cu;
            // 0x48779c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4877A0u;
        goto label_4877a0;
    }
    ctx->pc = 0x487798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487798u;
            // 0x48779c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4877A0u;
label_4877a0:
    // 0x4877a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4877a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4877a4:
    // 0x4877a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4877a8:
    // 0x4877a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4877a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4877ac:
    // 0x4877ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4877acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4877b0:
    // 0x4877b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4877b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4877b4:
    // 0x4877b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4877b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4877b8:
    // 0x4877b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4877b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4877bc:
    // 0x4877bc: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x4877bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4877c0:
    // 0x4877c0: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
label_4877c4:
    if (ctx->pc == 0x4877C4u) {
        ctx->pc = 0x4877C4u;
            // 0x4877c4: 0x263000f0  addiu       $s0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x4877C8u;
        goto label_4877c8;
    }
    ctx->pc = 0x4877C0u;
    {
        const bool branch_taken_0x4877c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4877C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4877C0u;
            // 0x4877c4: 0x263000f0  addiu       $s0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4877c0) {
            ctx->pc = 0x487878u;
            goto label_487878;
        }
    }
    ctx->pc = 0x4877C8u;
label_4877c8:
    // 0x4877c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4877c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4877cc:
    // 0x4877cc: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
label_4877d0:
    if (ctx->pc == 0x4877D0u) {
        ctx->pc = 0x4877D0u;
            // 0x4877d0: 0x8e320050  lw          $s2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x4877D4u;
        goto label_4877d4;
    }
    ctx->pc = 0x4877CCu;
    {
        const bool branch_taken_0x4877cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4877cc) {
            ctx->pc = 0x4877D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4877CCu;
            // 0x4877d0: 0x8e320050  lw          $s2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487828u;
            goto label_487828;
        }
    }
    ctx->pc = 0x4877D4u;
label_4877d4:
    // 0x4877d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4877d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4877d8:
    // 0x4877d8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_4877dc:
    if (ctx->pc == 0x4877DCu) {
        ctx->pc = 0x4877DCu;
            // 0x4877dc: 0xc601012c  lwc1        $f1, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4877E0u;
        goto label_4877e0;
    }
    ctx->pc = 0x4877D8u;
    {
        const bool branch_taken_0x4877d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4877d8) {
            ctx->pc = 0x4877DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4877D8u;
            // 0x4877dc: 0xc601012c  lwc1        $f1, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4877F4u;
            goto label_4877f4;
        }
    }
    ctx->pc = 0x4877E0u;
label_4877e0:
    // 0x4877e0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_4877e4:
    if (ctx->pc == 0x4877E4u) {
        ctx->pc = 0x4877E4u;
            // 0x4877e4: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x4877E8u;
        goto label_4877e8;
    }
    ctx->pc = 0x4877E0u;
    {
        const bool branch_taken_0x4877e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4877e0) {
            ctx->pc = 0x4877E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4877E0u;
            // 0x4877e4: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4877F0u;
            goto label_4877f0;
        }
    }
    ctx->pc = 0x4877E8u;
label_4877e8:
    // 0x4877e8: 0x10000024  b           . + 4 + (0x24 << 2)
label_4877ec:
    if (ctx->pc == 0x4877ECu) {
        ctx->pc = 0x4877ECu;
            // 0x4877ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4877F0u;
        goto label_4877f0;
    }
    ctx->pc = 0x4877E8u;
    {
        const bool branch_taken_0x4877e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4877ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4877E8u;
            // 0x4877ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4877e8) {
            ctx->pc = 0x48787Cu;
            goto label_48787c;
        }
    }
    ctx->pc = 0x4877F0u;
label_4877f0:
    // 0x4877f0: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x4877f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4877f4:
    // 0x4877f4: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x4877f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4877f8:
    // 0x4877f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4877f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4877fc:
    // 0x4877fc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_487800:
    if (ctx->pc == 0x487800u) {
        ctx->pc = 0x487800u;
            // 0x487800: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x487804u;
        goto label_487804;
    }
    ctx->pc = 0x4877FCu;
    {
        const bool branch_taken_0x4877fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4877fc) {
            ctx->pc = 0x487800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4877FCu;
            // 0x487800: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487814u;
            goto label_487814;
        }
    }
    ctx->pc = 0x487804u;
label_487804:
    // 0x487804: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x487804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_487808:
    // 0x487808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x487808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48780c:
    // 0x48780c: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x48780cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_487810:
    // 0x487810: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x487810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_487814:
    // 0x487814: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x487814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_487818:
    // 0x487818: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x487818u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_48781c:
    // 0x48781c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_487820:
    // 0x487820: 0x10000015  b           . + 4 + (0x15 << 2)
label_487824:
    if (ctx->pc == 0x487824u) {
        ctx->pc = 0x487824u;
            // 0x487824: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x487828u;
        goto label_487828;
    }
    ctx->pc = 0x487820u;
    {
        const bool branch_taken_0x487820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487820u;
            // 0x487824: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487820) {
            ctx->pc = 0x487878u;
            goto label_487878;
        }
    }
    ctx->pc = 0x487828u;
label_487828:
    // 0x487828: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x487828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_48782c:
    // 0x48782c: 0xc0dc9bc  jal         func_3726F0
label_487830:
    if (ctx->pc == 0x487830u) {
        ctx->pc = 0x487830u;
            // 0x487830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487834u;
        goto label_487834;
    }
    ctx->pc = 0x48782Cu;
    SET_GPR_U32(ctx, 31, 0x487834u);
    ctx->pc = 0x487830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48782Cu;
            // 0x487830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487834u; }
        if (ctx->pc != 0x487834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487834u; }
        if (ctx->pc != 0x487834u) { return; }
    }
    ctx->pc = 0x487834u;
label_487834:
    // 0x487834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x487834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487838:
    // 0x487838: 0xc0dc9a0  jal         func_372680
label_48783c:
    if (ctx->pc == 0x48783Cu) {
        ctx->pc = 0x48783Cu;
            // 0x48783c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x487840u;
        goto label_487840;
    }
    ctx->pc = 0x487838u;
    SET_GPR_U32(ctx, 31, 0x487840u);
    ctx->pc = 0x48783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487838u;
            // 0x48783c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487840u; }
        if (ctx->pc != 0x487840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487840u; }
        if (ctx->pc != 0x487840u) { return; }
    }
    ctx->pc = 0x487840u;
label_487840:
    // 0x487840: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x487840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_487844:
    // 0x487844: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x487844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_487848:
    // 0x487848: 0xc0d88a4  jal         func_362290
label_48784c:
    if (ctx->pc == 0x48784Cu) {
        ctx->pc = 0x48784Cu;
            // 0x48784c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x487850u;
        goto label_487850;
    }
    ctx->pc = 0x487848u;
    SET_GPR_U32(ctx, 31, 0x487850u);
    ctx->pc = 0x48784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487848u;
            // 0x48784c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487850u; }
        if (ctx->pc != 0x487850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487850u; }
        if (ctx->pc != 0x487850u) { return; }
    }
    ctx->pc = 0x487850u;
label_487850:
    // 0x487850: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x487850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_487854:
    // 0x487854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x487854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_487858:
    // 0x487858: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x487858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_48785c:
    // 0x48785c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x48785cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_487860:
    // 0x487860: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x487860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_487864:
    // 0x487864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x487864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_487868:
    // 0x487868: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x487868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_48786c:
    // 0x48786c: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x48786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_487870:
    // 0x487870: 0xc122d2c  jal         func_48B4B0
label_487874:
    if (ctx->pc == 0x487874u) {
        ctx->pc = 0x487874u;
            // 0x487874: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x487878u;
        goto label_487878;
    }
    ctx->pc = 0x487870u;
    SET_GPR_U32(ctx, 31, 0x487878u);
    ctx->pc = 0x487874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487870u;
            // 0x487874: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487878u; }
        if (ctx->pc != 0x487878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487878u; }
        if (ctx->pc != 0x487878u) { return; }
    }
    ctx->pc = 0x487878u;
label_487878:
    // 0x487878: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x487878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48787c:
    // 0x48787c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48787cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_487880:
    // 0x487880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x487880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_487884:
    // 0x487884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_487888:
    // 0x487888: 0x3e00008  jr          $ra
label_48788c:
    if (ctx->pc == 0x48788Cu) {
        ctx->pc = 0x48788Cu;
            // 0x48788c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x487890u;
        goto label_487890;
    }
    ctx->pc = 0x487888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487888u;
            // 0x48788c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x487890u;
label_487890:
    // 0x487890: 0x8122c94  j           func_48B250
label_487894:
    if (ctx->pc == 0x487894u) {
        ctx->pc = 0x487894u;
            // 0x487894: 0x8c8400e4  lw          $a0, 0xE4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
        ctx->pc = 0x487898u;
        goto label_487898;
    }
    ctx->pc = 0x487890u;
    ctx->pc = 0x487894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487890u;
            // 0x487894: 0x8c8400e4  lw          $a0, 0xE4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B250_0x48b250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x487898u;
label_487898:
    // 0x487898: 0x0  nop
    ctx->pc = 0x487898u;
    // NOP
label_48789c:
    // 0x48789c: 0x0  nop
    ctx->pc = 0x48789cu;
    // NOP
}
