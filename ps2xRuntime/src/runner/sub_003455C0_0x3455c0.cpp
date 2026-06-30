#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003455C0
// Address: 0x3455c0 - 0x3459c0
void sub_003455C0_0x3455c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003455C0_0x3455c0");
#endif

    switch (ctx->pc) {
        case 0x3455c0u: goto label_3455c0;
        case 0x3455c4u: goto label_3455c4;
        case 0x3455c8u: goto label_3455c8;
        case 0x3455ccu: goto label_3455cc;
        case 0x3455d0u: goto label_3455d0;
        case 0x3455d4u: goto label_3455d4;
        case 0x3455d8u: goto label_3455d8;
        case 0x3455dcu: goto label_3455dc;
        case 0x3455e0u: goto label_3455e0;
        case 0x3455e4u: goto label_3455e4;
        case 0x3455e8u: goto label_3455e8;
        case 0x3455ecu: goto label_3455ec;
        case 0x3455f0u: goto label_3455f0;
        case 0x3455f4u: goto label_3455f4;
        case 0x3455f8u: goto label_3455f8;
        case 0x3455fcu: goto label_3455fc;
        case 0x345600u: goto label_345600;
        case 0x345604u: goto label_345604;
        case 0x345608u: goto label_345608;
        case 0x34560cu: goto label_34560c;
        case 0x345610u: goto label_345610;
        case 0x345614u: goto label_345614;
        case 0x345618u: goto label_345618;
        case 0x34561cu: goto label_34561c;
        case 0x345620u: goto label_345620;
        case 0x345624u: goto label_345624;
        case 0x345628u: goto label_345628;
        case 0x34562cu: goto label_34562c;
        case 0x345630u: goto label_345630;
        case 0x345634u: goto label_345634;
        case 0x345638u: goto label_345638;
        case 0x34563cu: goto label_34563c;
        case 0x345640u: goto label_345640;
        case 0x345644u: goto label_345644;
        case 0x345648u: goto label_345648;
        case 0x34564cu: goto label_34564c;
        case 0x345650u: goto label_345650;
        case 0x345654u: goto label_345654;
        case 0x345658u: goto label_345658;
        case 0x34565cu: goto label_34565c;
        case 0x345660u: goto label_345660;
        case 0x345664u: goto label_345664;
        case 0x345668u: goto label_345668;
        case 0x34566cu: goto label_34566c;
        case 0x345670u: goto label_345670;
        case 0x345674u: goto label_345674;
        case 0x345678u: goto label_345678;
        case 0x34567cu: goto label_34567c;
        case 0x345680u: goto label_345680;
        case 0x345684u: goto label_345684;
        case 0x345688u: goto label_345688;
        case 0x34568cu: goto label_34568c;
        case 0x345690u: goto label_345690;
        case 0x345694u: goto label_345694;
        case 0x345698u: goto label_345698;
        case 0x34569cu: goto label_34569c;
        case 0x3456a0u: goto label_3456a0;
        case 0x3456a4u: goto label_3456a4;
        case 0x3456a8u: goto label_3456a8;
        case 0x3456acu: goto label_3456ac;
        case 0x3456b0u: goto label_3456b0;
        case 0x3456b4u: goto label_3456b4;
        case 0x3456b8u: goto label_3456b8;
        case 0x3456bcu: goto label_3456bc;
        case 0x3456c0u: goto label_3456c0;
        case 0x3456c4u: goto label_3456c4;
        case 0x3456c8u: goto label_3456c8;
        case 0x3456ccu: goto label_3456cc;
        case 0x3456d0u: goto label_3456d0;
        case 0x3456d4u: goto label_3456d4;
        case 0x3456d8u: goto label_3456d8;
        case 0x3456dcu: goto label_3456dc;
        case 0x3456e0u: goto label_3456e0;
        case 0x3456e4u: goto label_3456e4;
        case 0x3456e8u: goto label_3456e8;
        case 0x3456ecu: goto label_3456ec;
        case 0x3456f0u: goto label_3456f0;
        case 0x3456f4u: goto label_3456f4;
        case 0x3456f8u: goto label_3456f8;
        case 0x3456fcu: goto label_3456fc;
        case 0x345700u: goto label_345700;
        case 0x345704u: goto label_345704;
        case 0x345708u: goto label_345708;
        case 0x34570cu: goto label_34570c;
        case 0x345710u: goto label_345710;
        case 0x345714u: goto label_345714;
        case 0x345718u: goto label_345718;
        case 0x34571cu: goto label_34571c;
        case 0x345720u: goto label_345720;
        case 0x345724u: goto label_345724;
        case 0x345728u: goto label_345728;
        case 0x34572cu: goto label_34572c;
        case 0x345730u: goto label_345730;
        case 0x345734u: goto label_345734;
        case 0x345738u: goto label_345738;
        case 0x34573cu: goto label_34573c;
        case 0x345740u: goto label_345740;
        case 0x345744u: goto label_345744;
        case 0x345748u: goto label_345748;
        case 0x34574cu: goto label_34574c;
        case 0x345750u: goto label_345750;
        case 0x345754u: goto label_345754;
        case 0x345758u: goto label_345758;
        case 0x34575cu: goto label_34575c;
        case 0x345760u: goto label_345760;
        case 0x345764u: goto label_345764;
        case 0x345768u: goto label_345768;
        case 0x34576cu: goto label_34576c;
        case 0x345770u: goto label_345770;
        case 0x345774u: goto label_345774;
        case 0x345778u: goto label_345778;
        case 0x34577cu: goto label_34577c;
        case 0x345780u: goto label_345780;
        case 0x345784u: goto label_345784;
        case 0x345788u: goto label_345788;
        case 0x34578cu: goto label_34578c;
        case 0x345790u: goto label_345790;
        case 0x345794u: goto label_345794;
        case 0x345798u: goto label_345798;
        case 0x34579cu: goto label_34579c;
        case 0x3457a0u: goto label_3457a0;
        case 0x3457a4u: goto label_3457a4;
        case 0x3457a8u: goto label_3457a8;
        case 0x3457acu: goto label_3457ac;
        case 0x3457b0u: goto label_3457b0;
        case 0x3457b4u: goto label_3457b4;
        case 0x3457b8u: goto label_3457b8;
        case 0x3457bcu: goto label_3457bc;
        case 0x3457c0u: goto label_3457c0;
        case 0x3457c4u: goto label_3457c4;
        case 0x3457c8u: goto label_3457c8;
        case 0x3457ccu: goto label_3457cc;
        case 0x3457d0u: goto label_3457d0;
        case 0x3457d4u: goto label_3457d4;
        case 0x3457d8u: goto label_3457d8;
        case 0x3457dcu: goto label_3457dc;
        case 0x3457e0u: goto label_3457e0;
        case 0x3457e4u: goto label_3457e4;
        case 0x3457e8u: goto label_3457e8;
        case 0x3457ecu: goto label_3457ec;
        case 0x3457f0u: goto label_3457f0;
        case 0x3457f4u: goto label_3457f4;
        case 0x3457f8u: goto label_3457f8;
        case 0x3457fcu: goto label_3457fc;
        case 0x345800u: goto label_345800;
        case 0x345804u: goto label_345804;
        case 0x345808u: goto label_345808;
        case 0x34580cu: goto label_34580c;
        case 0x345810u: goto label_345810;
        case 0x345814u: goto label_345814;
        case 0x345818u: goto label_345818;
        case 0x34581cu: goto label_34581c;
        case 0x345820u: goto label_345820;
        case 0x345824u: goto label_345824;
        case 0x345828u: goto label_345828;
        case 0x34582cu: goto label_34582c;
        case 0x345830u: goto label_345830;
        case 0x345834u: goto label_345834;
        case 0x345838u: goto label_345838;
        case 0x34583cu: goto label_34583c;
        case 0x345840u: goto label_345840;
        case 0x345844u: goto label_345844;
        case 0x345848u: goto label_345848;
        case 0x34584cu: goto label_34584c;
        case 0x345850u: goto label_345850;
        case 0x345854u: goto label_345854;
        case 0x345858u: goto label_345858;
        case 0x34585cu: goto label_34585c;
        case 0x345860u: goto label_345860;
        case 0x345864u: goto label_345864;
        case 0x345868u: goto label_345868;
        case 0x34586cu: goto label_34586c;
        case 0x345870u: goto label_345870;
        case 0x345874u: goto label_345874;
        case 0x345878u: goto label_345878;
        case 0x34587cu: goto label_34587c;
        case 0x345880u: goto label_345880;
        case 0x345884u: goto label_345884;
        case 0x345888u: goto label_345888;
        case 0x34588cu: goto label_34588c;
        case 0x345890u: goto label_345890;
        case 0x345894u: goto label_345894;
        case 0x345898u: goto label_345898;
        case 0x34589cu: goto label_34589c;
        case 0x3458a0u: goto label_3458a0;
        case 0x3458a4u: goto label_3458a4;
        case 0x3458a8u: goto label_3458a8;
        case 0x3458acu: goto label_3458ac;
        case 0x3458b0u: goto label_3458b0;
        case 0x3458b4u: goto label_3458b4;
        case 0x3458b8u: goto label_3458b8;
        case 0x3458bcu: goto label_3458bc;
        case 0x3458c0u: goto label_3458c0;
        case 0x3458c4u: goto label_3458c4;
        case 0x3458c8u: goto label_3458c8;
        case 0x3458ccu: goto label_3458cc;
        case 0x3458d0u: goto label_3458d0;
        case 0x3458d4u: goto label_3458d4;
        case 0x3458d8u: goto label_3458d8;
        case 0x3458dcu: goto label_3458dc;
        case 0x3458e0u: goto label_3458e0;
        case 0x3458e4u: goto label_3458e4;
        case 0x3458e8u: goto label_3458e8;
        case 0x3458ecu: goto label_3458ec;
        case 0x3458f0u: goto label_3458f0;
        case 0x3458f4u: goto label_3458f4;
        case 0x3458f8u: goto label_3458f8;
        case 0x3458fcu: goto label_3458fc;
        case 0x345900u: goto label_345900;
        case 0x345904u: goto label_345904;
        case 0x345908u: goto label_345908;
        case 0x34590cu: goto label_34590c;
        case 0x345910u: goto label_345910;
        case 0x345914u: goto label_345914;
        case 0x345918u: goto label_345918;
        case 0x34591cu: goto label_34591c;
        case 0x345920u: goto label_345920;
        case 0x345924u: goto label_345924;
        case 0x345928u: goto label_345928;
        case 0x34592cu: goto label_34592c;
        case 0x345930u: goto label_345930;
        case 0x345934u: goto label_345934;
        case 0x345938u: goto label_345938;
        case 0x34593cu: goto label_34593c;
        case 0x345940u: goto label_345940;
        case 0x345944u: goto label_345944;
        case 0x345948u: goto label_345948;
        case 0x34594cu: goto label_34594c;
        case 0x345950u: goto label_345950;
        case 0x345954u: goto label_345954;
        case 0x345958u: goto label_345958;
        case 0x34595cu: goto label_34595c;
        case 0x345960u: goto label_345960;
        case 0x345964u: goto label_345964;
        case 0x345968u: goto label_345968;
        case 0x34596cu: goto label_34596c;
        case 0x345970u: goto label_345970;
        case 0x345974u: goto label_345974;
        case 0x345978u: goto label_345978;
        case 0x34597cu: goto label_34597c;
        case 0x345980u: goto label_345980;
        case 0x345984u: goto label_345984;
        case 0x345988u: goto label_345988;
        case 0x34598cu: goto label_34598c;
        case 0x345990u: goto label_345990;
        case 0x345994u: goto label_345994;
        case 0x345998u: goto label_345998;
        case 0x34599cu: goto label_34599c;
        case 0x3459a0u: goto label_3459a0;
        case 0x3459a4u: goto label_3459a4;
        case 0x3459a8u: goto label_3459a8;
        case 0x3459acu: goto label_3459ac;
        case 0x3459b0u: goto label_3459b0;
        case 0x3459b4u: goto label_3459b4;
        case 0x3459b8u: goto label_3459b8;
        case 0x3459bcu: goto label_3459bc;
        default: break;
    }

    ctx->pc = 0x3455c0u;

label_3455c0:
    // 0x3455c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3455c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3455c4:
    // 0x3455c4: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x3455c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_3455c8:
    // 0x3455c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3455c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3455cc:
    // 0x3455cc: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x3455ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_3455d0:
    // 0x3455d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3455d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3455d4:
    // 0x3455d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3455d8:
    if (ctx->pc == 0x3455D8u) {
        ctx->pc = 0x3455D8u;
            // 0x3455d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3455DCu;
        goto label_3455dc;
    }
    ctx->pc = 0x3455D4u;
    {
        const bool branch_taken_0x3455d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3455D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3455D4u;
            // 0x3455d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3455d4) {
            ctx->pc = 0x3455E4u;
            goto label_3455e4;
        }
    }
    ctx->pc = 0x3455DCu;
label_3455dc:
    // 0x3455dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3455e0:
    if (ctx->pc == 0x3455E0u) {
        ctx->pc = 0x3455E0u;
            // 0x3455e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3455E4u;
        goto label_3455e4;
    }
    ctx->pc = 0x3455DCu;
    {
        const bool branch_taken_0x3455dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3455E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3455DCu;
            // 0x3455e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3455dc) {
            ctx->pc = 0x3455E8u;
            goto label_3455e8;
        }
    }
    ctx->pc = 0x3455E4u;
label_3455e4:
    // 0x3455e4: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x3455e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_3455e8:
    // 0x3455e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3455e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3455ec:
    // 0x3455ec: 0xc10ca68  jal         func_4329A0
label_3455f0:
    if (ctx->pc == 0x3455F0u) {
        ctx->pc = 0x3455F0u;
            // 0x3455f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3455F4u;
        goto label_3455f4;
    }
    ctx->pc = 0x3455ECu;
    SET_GPR_U32(ctx, 31, 0x3455F4u);
    ctx->pc = 0x3455F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3455ECu;
            // 0x3455f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3455F4u; }
        if (ctx->pc != 0x3455F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3455F4u; }
        if (ctx->pc != 0x3455F4u) { return; }
    }
    ctx->pc = 0x3455F4u;
label_3455f4:
    // 0x3455f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3455f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3455f8:
    // 0x3455f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3455f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3455fc:
    // 0x3455fc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3455fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_345600:
    // 0x345600: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x345600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
label_345604:
    // 0x345604: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x345604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_345608:
    // 0x345608: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x345608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_34560c:
    // 0x34560c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34560cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_345610:
    // 0x345610: 0x24635710  addiu       $v1, $v1, 0x5710
    ctx->pc = 0x345610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22288));
label_345614:
    // 0x345614: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x345614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_345618:
    // 0x345618: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x345618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34561c:
    // 0x34561c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_345620:
    // 0x345620: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x345620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_345624:
    // 0x345624: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x345624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_345628:
    // 0x345628: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_34562c:
    if (ctx->pc == 0x34562Cu) {
        ctx->pc = 0x345630u;
        goto label_345630;
    }
    ctx->pc = 0x345628u;
    {
        const bool branch_taken_0x345628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345628) {
            ctx->pc = 0x34565Cu;
            goto label_34565c;
        }
    }
    ctx->pc = 0x345630u;
label_345630:
    // 0x345630: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x345630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_345634:
    // 0x345634: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x345634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_345638:
    // 0x345638: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x345638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
label_34563c:
    // 0x34563c: 0x24421170  addiu       $v0, $v0, 0x1170
    ctx->pc = 0x34563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4464));
label_345640:
    // 0x345640: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x345640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_345644:
    // 0x345644: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x345644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_345648:
    // 0x345648: 0x24031c00  addiu       $v1, $zero, 0x1C00
    ctx->pc = 0x345648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
label_34564c:
    // 0x34564c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_345650:
    // 0x345650: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x345650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_345654:
    // 0x345654: 0x1000000c  b           . + 4 + (0xC << 2)
label_345658:
    if (ctx->pc == 0x345658u) {
        ctx->pc = 0x345658u;
            // 0x345658: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x34565Cu;
        goto label_34565c;
    }
    ctx->pc = 0x345654u;
    {
        const bool branch_taken_0x345654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345654u;
            // 0x345658: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345654) {
            ctx->pc = 0x345688u;
            goto label_345688;
        }
    }
    ctx->pc = 0x34565Cu;
label_34565c:
    // 0x34565c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34565cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_345660:
    // 0x345660: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x345660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_345664:
    // 0x345664: 0x246310e0  addiu       $v1, $v1, 0x10E0
    ctx->pc = 0x345664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4320));
label_345668:
    // 0x345668: 0x24421220  addiu       $v0, $v0, 0x1220
    ctx->pc = 0x345668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
label_34566c:
    // 0x34566c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x34566cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_345670:
    // 0x345670: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x345670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_345674:
    // 0x345674: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x345674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_345678:
    // 0x345678: 0x3c023f92  lui         $v0, 0x3F92
    ctx->pc = 0x345678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16274 << 16));
label_34567c:
    // 0x34567c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x34567cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_345680:
    // 0x345680: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x345680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
label_345684:
    // 0x345684: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x345684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_345688:
    // 0x345688: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34568c:
    // 0x34568c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345690:
    // 0x345690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345694:
    // 0x345694: 0x3e00008  jr          $ra
label_345698:
    if (ctx->pc == 0x345698u) {
        ctx->pc = 0x345698u;
            // 0x345698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x34569Cu;
        goto label_34569c;
    }
    ctx->pc = 0x345694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345694u;
            // 0x345698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34569Cu;
label_34569c:
    // 0x34569c: 0x0  nop
    ctx->pc = 0x34569cu;
    // NOP
label_3456a0:
    // 0x3456a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3456a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3456a4:
    // 0x3456a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3456a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3456a8:
    // 0x3456a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3456a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3456ac:
    // 0x3456ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3456acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3456b0:
    // 0x3456b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3456b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3456b4:
    // 0x3456b4: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_3456b8:
    if (ctx->pc == 0x3456B8u) {
        ctx->pc = 0x3456B8u;
            // 0x3456b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3456BCu;
        goto label_3456bc;
    }
    ctx->pc = 0x3456B4u;
    {
        const bool branch_taken_0x3456b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3456B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3456B4u;
            // 0x3456b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456b4) {
            ctx->pc = 0x34579Cu;
            goto label_34579c;
        }
    }
    ctx->pc = 0x3456BCu;
label_3456bc:
    // 0x3456bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3456bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3456c0:
    // 0x3456c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3456c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3456c4:
    // 0x3456c4: 0x24425750  addiu       $v0, $v0, 0x5750
    ctx->pc = 0x3456c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
label_3456c8:
    // 0x3456c8: 0x24635760  addiu       $v1, $v1, 0x5760
    ctx->pc = 0x3456c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22368));
label_3456cc:
    // 0x3456cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3456ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3456d0:
    // 0x3456d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3456d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3456d4:
    // 0x3456d4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3456d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3456d8:
    // 0x3456d8: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x3456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
label_3456dc:
    // 0x3456dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3456dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3456e0:
    // 0x3456e0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3456e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_3456e4:
    // 0x3456e4: 0x24635780  addiu       $v1, $v1, 0x5780
    ctx->pc = 0x3456e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22400));
label_3456e8:
    // 0x3456e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3456ec:
    // 0x3456ec: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3456ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3456f0:
    // 0x3456f0: 0x24425790  addiu       $v0, $v0, 0x5790
    ctx->pc = 0x3456f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
label_3456f4:
    // 0x3456f4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_3456f8:
    if (ctx->pc == 0x3456F8u) {
        ctx->pc = 0x3456F8u;
            // 0x3456f8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x3456FCu;
        goto label_3456fc;
    }
    ctx->pc = 0x3456F4u;
    {
        const bool branch_taken_0x3456f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3456F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3456F4u;
            // 0x3456f8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456f4) {
            ctx->pc = 0x345774u;
            goto label_345774;
        }
    }
    ctx->pc = 0x3456FCu;
label_3456fc:
    // 0x3456fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3456fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345700:
    // 0x345700: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x345700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_345704:
    // 0x345704: 0x2442d380  addiu       $v0, $v0, -0x2C80
    ctx->pc = 0x345704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955904));
label_345708:
    // 0x345708: 0x2463d390  addiu       $v1, $v1, -0x2C70
    ctx->pc = 0x345708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955920));
label_34570c:
    // 0x34570c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34570cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_345710:
    // 0x345710: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x345710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_345714:
    // 0x345714: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x345714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345718:
    // 0x345718: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x345718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_34571c:
    // 0x34571c: 0x2442d3a0  addiu       $v0, $v0, -0x2C60
    ctx->pc = 0x34571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955936));
label_345720:
    // 0x345720: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x345720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_345724:
    // 0x345724: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x345724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_345728:
    // 0x345728: 0x2463d3b0  addiu       $v1, $v1, -0x2C50
    ctx->pc = 0x345728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955952));
label_34572c:
    // 0x34572c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_345730:
    // 0x345730: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x345730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_345734:
    // 0x345734: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x345734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
label_345738:
    // 0x345738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x345738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34573c:
    // 0x34573c: 0xc078bcc  jal         func_1E2F30
label_345740:
    if (ctx->pc == 0x345740u) {
        ctx->pc = 0x345740u;
            // 0x345740: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x345744u;
        goto label_345744;
    }
    ctx->pc = 0x34573Cu;
    SET_GPR_U32(ctx, 31, 0x345744u);
    ctx->pc = 0x345740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34573Cu;
            // 0x345740: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F30u;
    if (runtime->hasFunction(0x1E2F30u)) {
        auto targetFn = runtime->lookupFunction(0x1E2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345744u; }
        if (ctx->pc != 0x345744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2F30_0x1e2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345744u; }
        if (ctx->pc != 0x345744u) { return; }
    }
    ctx->pc = 0x345744u;
label_345744:
    // 0x345744: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x345744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_345748:
    // 0x345748: 0xc078be0  jal         func_1E2F80
label_34574c:
    if (ctx->pc == 0x34574Cu) {
        ctx->pc = 0x34574Cu;
            // 0x34574c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345750u;
        goto label_345750;
    }
    ctx->pc = 0x345748u;
    SET_GPR_U32(ctx, 31, 0x345750u);
    ctx->pc = 0x34574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345748u;
            // 0x34574c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F80u;
    if (runtime->hasFunction(0x1E2F80u)) {
        auto targetFn = runtime->lookupFunction(0x1E2F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345750u; }
        if (ctx->pc != 0x345750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2F80_0x1e2f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345750u; }
        if (ctx->pc != 0x345750u) { return; }
    }
    ctx->pc = 0x345750u;
label_345750:
    // 0x345750: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x345750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_345754:
    // 0x345754: 0xc078bf4  jal         func_1E2FD0
label_345758:
    if (ctx->pc == 0x345758u) {
        ctx->pc = 0x345758u;
            // 0x345758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34575Cu;
        goto label_34575c;
    }
    ctx->pc = 0x345754u;
    SET_GPR_U32(ctx, 31, 0x34575Cu);
    ctx->pc = 0x345758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345754u;
            // 0x345758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2FD0u;
    if (runtime->hasFunction(0x1E2FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E2FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34575Cu; }
        if (ctx->pc != 0x34575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2FD0_0x1e2fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34575Cu; }
        if (ctx->pc != 0x34575Cu) { return; }
    }
    ctx->pc = 0x34575Cu;
label_34575c:
    // 0x34575c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x34575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_345760:
    // 0x345760: 0xc078c08  jal         func_1E3020
label_345764:
    if (ctx->pc == 0x345764u) {
        ctx->pc = 0x345764u;
            // 0x345764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345768u;
        goto label_345768;
    }
    ctx->pc = 0x345760u;
    SET_GPR_U32(ctx, 31, 0x345768u);
    ctx->pc = 0x345764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345760u;
            // 0x345764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3020u;
    if (runtime->hasFunction(0x1E3020u)) {
        auto targetFn = runtime->lookupFunction(0x1E3020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345768u; }
        if (ctx->pc != 0x345768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3020_0x1e3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345768u; }
        if (ctx->pc != 0x345768u) { return; }
    }
    ctx->pc = 0x345768u;
label_345768:
    // 0x345768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34576c:
    // 0x34576c: 0xc078ae4  jal         func_1E2B90
label_345770:
    if (ctx->pc == 0x345770u) {
        ctx->pc = 0x345770u;
            // 0x345770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345774u;
        goto label_345774;
    }
    ctx->pc = 0x34576Cu;
    SET_GPR_U32(ctx, 31, 0x345774u);
    ctx->pc = 0x345770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34576Cu;
            // 0x345770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B90u;
    if (runtime->hasFunction(0x1E2B90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345774u; }
        if (ctx->pc != 0x345774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2B90_0x1e2b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345774u; }
        if (ctx->pc != 0x345774u) { return; }
    }
    ctx->pc = 0x345774u;
label_345774:
    // 0x345774: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x345774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_345778:
    // 0x345778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x345778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34577c:
    // 0x34577c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_345780:
    if (ctx->pc == 0x345780u) {
        ctx->pc = 0x345780u;
            // 0x345780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x345784u;
        goto label_345784;
    }
    ctx->pc = 0x34577Cu;
    {
        const bool branch_taken_0x34577c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34577c) {
            ctx->pc = 0x345780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34577Cu;
            // 0x345780: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3457A0u;
            goto label_3457a0;
        }
    }
    ctx->pc = 0x345784u;
label_345784:
    // 0x345784: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x345784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_345788:
    // 0x345788: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x345788u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_34578c:
    // 0x34578c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x34578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_345790:
    // 0x345790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x345790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345794:
    // 0x345794: 0xc0a7ab4  jal         func_29EAD0
label_345798:
    if (ctx->pc == 0x345798u) {
        ctx->pc = 0x345798u;
            // 0x345798: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x34579Cu;
        goto label_34579c;
    }
    ctx->pc = 0x345794u;
    SET_GPR_U32(ctx, 31, 0x34579Cu);
    ctx->pc = 0x345798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345794u;
            // 0x345798: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34579Cu; }
        if (ctx->pc != 0x34579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34579Cu; }
        if (ctx->pc != 0x34579Cu) { return; }
    }
    ctx->pc = 0x34579Cu;
label_34579c:
    // 0x34579c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34579cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3457a0:
    // 0x3457a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3457a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3457a4:
    // 0x3457a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3457a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3457a8:
    // 0x3457a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3457a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3457ac:
    // 0x3457ac: 0x3e00008  jr          $ra
label_3457b0:
    if (ctx->pc == 0x3457B0u) {
        ctx->pc = 0x3457B0u;
            // 0x3457b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3457B4u;
        goto label_3457b4;
    }
    ctx->pc = 0x3457ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3457B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3457ACu;
            // 0x3457b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3457B4u;
label_3457b4:
    // 0x3457b4: 0x0  nop
    ctx->pc = 0x3457b4u;
    // NOP
label_3457b8:
    // 0x3457b8: 0x0  nop
    ctx->pc = 0x3457b8u;
    // NOP
label_3457bc:
    // 0x3457bc: 0x0  nop
    ctx->pc = 0x3457bcu;
    // NOP
label_3457c0:
    // 0x3457c0: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x3457c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_3457c4:
    // 0x3457c4: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x3457c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_3457c8:
    // 0x3457c8: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x3457c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_3457cc:
    // 0x3457cc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3457ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3457d0:
    // 0x3457d0: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x3457d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_3457d4:
    // 0x3457d4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3457d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3457d8:
    // 0x3457d8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3457d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3457dc:
    // 0x3457dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3457dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3457e0:
    // 0x3457e0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_3457e4:
    if (ctx->pc == 0x3457E4u) {
        ctx->pc = 0x3457E4u;
            // 0x3457e4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3457E8u;
        goto label_3457e8;
    }
    ctx->pc = 0x3457E0u;
    {
        const bool branch_taken_0x3457e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3457e0) {
            ctx->pc = 0x3457E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3457E0u;
            // 0x3457e4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3457F0u;
            goto label_3457f0;
        }
    }
    ctx->pc = 0x3457E8u;
label_3457e8:
    // 0x3457e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3457e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3457ec:
    // 0x3457ec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3457ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3457f0:
    // 0x3457f0: 0x3e00008  jr          $ra
label_3457f4:
    if (ctx->pc == 0x3457F4u) {
        ctx->pc = 0x3457F8u;
        goto label_3457f8;
    }
    ctx->pc = 0x3457F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3457F8u;
label_3457f8:
    // 0x3457f8: 0x0  nop
    ctx->pc = 0x3457f8u;
    // NOP
label_3457fc:
    // 0x3457fc: 0x0  nop
    ctx->pc = 0x3457fcu;
    // NOP
label_345800:
    // 0x345800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_345804:
    // 0x345804: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x345804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_345808:
    // 0x345808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34580c:
    // 0x34580c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_345810:
    // 0x345810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_345814:
    // 0x345814: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x345814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_345818:
    // 0x345818: 0x8d190000  lw          $t9, 0x0($t0)
    ctx->pc = 0x345818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_34581c:
    // 0x34581c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345820:
    // 0x345820: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x345820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_345824:
    // 0x345824: 0x320f809  jalr        $t9
label_345828:
    if (ctx->pc == 0x345828u) {
        ctx->pc = 0x345828u;
            // 0x345828: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34582Cu;
        goto label_34582c;
    }
    ctx->pc = 0x345824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34582Cu);
        ctx->pc = 0x345828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345824u;
            // 0x345828: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34582Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34582Cu; }
            if (ctx->pc != 0x34582Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34582Cu;
label_34582c:
    // 0x34582c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x34582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_345830:
    // 0x345830: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x345830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_345834:
    // 0x345834: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x345834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_345838:
    // 0x345838: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x345838u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_34583c:
    // 0x34583c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x34583cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_345840:
    // 0x345840: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x345840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_345844:
    // 0x345844: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x345844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_345848:
    // 0x345848: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_34584c:
    if (ctx->pc == 0x34584Cu) {
        ctx->pc = 0x34584Cu;
            // 0x34584c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x345850u;
        goto label_345850;
    }
    ctx->pc = 0x345848u;
    {
        const bool branch_taken_0x345848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345848) {
            ctx->pc = 0x34584Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345848u;
            // 0x34584c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345858u;
            goto label_345858;
        }
    }
    ctx->pc = 0x345850u;
label_345850:
    // 0x345850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345854:
    // 0x345854: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x345854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_345858:
    // 0x345858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34585c:
    // 0x34585c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34585cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345860:
    // 0x345860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345864:
    // 0x345864: 0x3e00008  jr          $ra
label_345868:
    if (ctx->pc == 0x345868u) {
        ctx->pc = 0x345868u;
            // 0x345868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34586Cu;
        goto label_34586c;
    }
    ctx->pc = 0x345864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345864u;
            // 0x345868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34586Cu;
label_34586c:
    // 0x34586c: 0x0  nop
    ctx->pc = 0x34586cu;
    // NOP
label_345870:
    // 0x345870: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x345870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_345874:
    // 0x345874: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_345878:
    if (ctx->pc == 0x345878u) {
        ctx->pc = 0x34587Cu;
        goto label_34587c;
    }
    ctx->pc = 0x345874u;
    {
        const bool branch_taken_0x345874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345874) {
            ctx->pc = 0x345898u;
            goto label_345898;
        }
    }
    ctx->pc = 0x34587Cu;
label_34587c:
    // 0x34587c: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x34587cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_345880:
    // 0x345880: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x345880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_345884:
    // 0x345884: 0x0  nop
    ctx->pc = 0x345884u;
    // NOP
label_345888:
    // 0x345888: 0x0  nop
    ctx->pc = 0x345888u;
    // NOP
label_34588c:
    // 0x34588c: 0x0  nop
    ctx->pc = 0x34588cu;
    // NOP
label_345890:
    // 0x345890: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_345894:
    if (ctx->pc == 0x345894u) {
        ctx->pc = 0x345898u;
        goto label_345898;
    }
    ctx->pc = 0x345890u;
    {
        const bool branch_taken_0x345890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345890) {
            ctx->pc = 0x34587Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34587c;
        }
    }
    ctx->pc = 0x345898u;
label_345898:
    // 0x345898: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x345898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_34589c:
    // 0x34589c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3458a0:
    if (ctx->pc == 0x3458A0u) {
        ctx->pc = 0x3458A0u;
            // 0x3458a0: 0x8ce7001c  lw          $a3, 0x1C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
        ctx->pc = 0x3458A4u;
        goto label_3458a4;
    }
    ctx->pc = 0x34589Cu;
    {
        const bool branch_taken_0x34589c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34589Cu;
            // 0x3458a0: 0x8ce7001c  lw          $a3, 0x1C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34589c) {
            ctx->pc = 0x3458C0u;
            goto label_3458c0;
        }
    }
    ctx->pc = 0x3458A4u;
label_3458a4:
    // 0x3458a4: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x3458a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3458a8:
    // 0x3458a8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x3458a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3458ac:
    // 0x3458ac: 0x0  nop
    ctx->pc = 0x3458acu;
    // NOP
label_3458b0:
    // 0x3458b0: 0x0  nop
    ctx->pc = 0x3458b0u;
    // NOP
label_3458b4:
    // 0x3458b4: 0x0  nop
    ctx->pc = 0x3458b4u;
    // NOP
label_3458b8:
    // 0x3458b8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3458bc:
    if (ctx->pc == 0x3458BCu) {
        ctx->pc = 0x3458C0u;
        goto label_3458c0;
    }
    ctx->pc = 0x3458B8u;
    {
        const bool branch_taken_0x3458b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3458b8) {
            ctx->pc = 0x3458A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3458a4;
        }
    }
    ctx->pc = 0x3458C0u;
label_3458c0:
    // 0x3458c0: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x3458c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3458c4:
    // 0x3458c4: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x3458c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_3458c8:
    // 0x3458c8: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x3458c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_3458cc:
    // 0x3458cc: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x3458ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_3458d0:
    // 0x3458d0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3458d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3458d4:
    // 0x3458d4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3458d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3458d8:
    // 0x3458d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3458d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3458dc:
    // 0x3458dc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_3458e0:
    if (ctx->pc == 0x3458E0u) {
        ctx->pc = 0x3458E0u;
            // 0x3458e0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3458E4u;
        goto label_3458e4;
    }
    ctx->pc = 0x3458DCu;
    {
        const bool branch_taken_0x3458dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3458dc) {
            ctx->pc = 0x3458E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3458DCu;
            // 0x3458e0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3458ECu;
            goto label_3458ec;
        }
    }
    ctx->pc = 0x3458E4u;
label_3458e4:
    // 0x3458e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3458e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3458e8:
    // 0x3458e8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3458e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3458ec:
    // 0x3458ec: 0x3e00008  jr          $ra
label_3458f0:
    if (ctx->pc == 0x3458F0u) {
        ctx->pc = 0x3458F4u;
        goto label_3458f4;
    }
    ctx->pc = 0x3458ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3458F4u;
label_3458f4:
    // 0x3458f4: 0x0  nop
    ctx->pc = 0x3458f4u;
    // NOP
label_3458f8:
    // 0x3458f8: 0x0  nop
    ctx->pc = 0x3458f8u;
    // NOP
label_3458fc:
    // 0x3458fc: 0x0  nop
    ctx->pc = 0x3458fcu;
    // NOP
label_345900:
    // 0x345900: 0x8cc8001c  lw          $t0, 0x1C($a2)
    ctx->pc = 0x345900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_345904:
    // 0x345904: 0x8ce6001c  lw          $a2, 0x1C($a3)
    ctx->pc = 0x345904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_345908:
    // 0x345908: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x345908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
label_34590c:
    // 0x34590c: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x34590cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_345910:
    // 0x345910: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x345910u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_345914:
    // 0x345914: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x345914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_345918:
    // 0x345918: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x345918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_34591c:
    // 0x34591c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x34591cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_345920:
    // 0x345920: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_345924:
    if (ctx->pc == 0x345924u) {
        ctx->pc = 0x345924u;
            // 0x345924: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x345928u;
        goto label_345928;
    }
    ctx->pc = 0x345920u;
    {
        const bool branch_taken_0x345920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345920) {
            ctx->pc = 0x345924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345920u;
            // 0x345924: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345930u;
            goto label_345930;
        }
    }
    ctx->pc = 0x345928u;
label_345928:
    // 0x345928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34592c:
    // 0x34592c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x34592cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_345930:
    // 0x345930: 0x3e00008  jr          $ra
label_345934:
    if (ctx->pc == 0x345934u) {
        ctx->pc = 0x345938u;
        goto label_345938;
    }
    ctx->pc = 0x345930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345938u;
label_345938:
    // 0x345938: 0x0  nop
    ctx->pc = 0x345938u;
    // NOP
label_34593c:
    // 0x34593c: 0x0  nop
    ctx->pc = 0x34593cu;
    // NOP
label_345940:
    // 0x345940: 0x80d1640  j           func_345900
label_345944:
    if (ctx->pc == 0x345944u) {
        ctx->pc = 0x345944u;
            // 0x345944: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x345948u;
        goto label_345948;
    }
    ctx->pc = 0x345940u;
    ctx->pc = 0x345944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345940u;
            // 0x345944: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345900u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_345900;
    ctx->pc = 0x345948u;
label_345948:
    // 0x345948: 0x0  nop
    ctx->pc = 0x345948u;
    // NOP
label_34594c:
    // 0x34594c: 0x0  nop
    ctx->pc = 0x34594cu;
    // NOP
label_345950:
    // 0x345950: 0x80d15a8  j           func_3456A0
label_345954:
    if (ctx->pc == 0x345954u) {
        ctx->pc = 0x345954u;
            // 0x345954: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->pc = 0x345958u;
        goto label_345958;
    }
    ctx->pc = 0x345950u;
    ctx->pc = 0x345954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345950u;
            // 0x345954: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3456A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3456a0;
    ctx->pc = 0x345958u;
label_345958:
    // 0x345958: 0x0  nop
    ctx->pc = 0x345958u;
    // NOP
label_34595c:
    // 0x34595c: 0x0  nop
    ctx->pc = 0x34595cu;
    // NOP
label_345960:
    // 0x345960: 0x80d15a8  j           func_3456A0
label_345964:
    if (ctx->pc == 0x345964u) {
        ctx->pc = 0x345964u;
            // 0x345964: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x345968u;
        goto label_345968;
    }
    ctx->pc = 0x345960u;
    ctx->pc = 0x345964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345960u;
            // 0x345964: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3456A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3456a0;
    ctx->pc = 0x345968u;
label_345968:
    // 0x345968: 0x0  nop
    ctx->pc = 0x345968u;
    // NOP
label_34596c:
    // 0x34596c: 0x0  nop
    ctx->pc = 0x34596cu;
    // NOP
label_345970:
    // 0x345970: 0x80d161c  j           func_345870
label_345974:
    if (ctx->pc == 0x345974u) {
        ctx->pc = 0x345974u;
            // 0x345974: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->pc = 0x345978u;
        goto label_345978;
    }
    ctx->pc = 0x345970u;
    ctx->pc = 0x345974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345970u;
            // 0x345974: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345870u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_345870;
    ctx->pc = 0x345978u;
label_345978:
    // 0x345978: 0x0  nop
    ctx->pc = 0x345978u;
    // NOP
label_34597c:
    // 0x34597c: 0x0  nop
    ctx->pc = 0x34597cu;
    // NOP
label_345980:
    // 0x345980: 0x80d15a8  j           func_3456A0
label_345984:
    if (ctx->pc == 0x345984u) {
        ctx->pc = 0x345984u;
            // 0x345984: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x345988u;
        goto label_345988;
    }
    ctx->pc = 0x345980u;
    ctx->pc = 0x345984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345980u;
            // 0x345984: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3456A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3456a0;
    ctx->pc = 0x345988u;
label_345988:
    // 0x345988: 0x0  nop
    ctx->pc = 0x345988u;
    // NOP
label_34598c:
    // 0x34598c: 0x0  nop
    ctx->pc = 0x34598cu;
    // NOP
label_345990:
    // 0x345990: 0x80d1600  j           func_345800
label_345994:
    if (ctx->pc == 0x345994u) {
        ctx->pc = 0x345994u;
            // 0x345994: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->pc = 0x345998u;
        goto label_345998;
    }
    ctx->pc = 0x345990u;
    ctx->pc = 0x345994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345990u;
            // 0x345994: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345800u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_345800;
    ctx->pc = 0x345998u;
label_345998:
    // 0x345998: 0x0  nop
    ctx->pc = 0x345998u;
    // NOP
label_34599c:
    // 0x34599c: 0x0  nop
    ctx->pc = 0x34599cu;
    // NOP
label_3459a0:
    // 0x3459a0: 0x80d15f0  j           func_3457C0
label_3459a4:
    if (ctx->pc == 0x3459A4u) {
        ctx->pc = 0x3459A4u;
            // 0x3459a4: 0x24a5ffec  addiu       $a1, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->pc = 0x3459A8u;
        goto label_3459a8;
    }
    ctx->pc = 0x3459A0u;
    ctx->pc = 0x3459A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3459A0u;
            // 0x3459a4: 0x24a5ffec  addiu       $a1, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3457C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3457c0;
    ctx->pc = 0x3459A8u;
label_3459a8:
    // 0x3459a8: 0x0  nop
    ctx->pc = 0x3459a8u;
    // NOP
label_3459ac:
    // 0x3459ac: 0x0  nop
    ctx->pc = 0x3459acu;
    // NOP
label_3459b0:
    // 0x3459b0: 0x80d15a8  j           func_3456A0
label_3459b4:
    if (ctx->pc == 0x3459B4u) {
        ctx->pc = 0x3459B4u;
            // 0x3459b4: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x3459B8u;
        goto label_3459b8;
    }
    ctx->pc = 0x3459B0u;
    ctx->pc = 0x3459B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3459B0u;
            // 0x3459b4: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3456A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_3456a0;
    ctx->pc = 0x3459B8u;
label_3459b8:
    // 0x3459b8: 0x0  nop
    ctx->pc = 0x3459b8u;
    // NOP
label_3459bc:
    // 0x3459bc: 0x0  nop
    ctx->pc = 0x3459bcu;
    // NOP
}
