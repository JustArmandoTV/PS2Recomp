#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D6510
// Address: 0x4d6510 - 0x4d6980
void sub_004D6510_0x4d6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6510_0x4d6510");
#endif

    switch (ctx->pc) {
        case 0x4d6510u: goto label_4d6510;
        case 0x4d6514u: goto label_4d6514;
        case 0x4d6518u: goto label_4d6518;
        case 0x4d651cu: goto label_4d651c;
        case 0x4d6520u: goto label_4d6520;
        case 0x4d6524u: goto label_4d6524;
        case 0x4d6528u: goto label_4d6528;
        case 0x4d652cu: goto label_4d652c;
        case 0x4d6530u: goto label_4d6530;
        case 0x4d6534u: goto label_4d6534;
        case 0x4d6538u: goto label_4d6538;
        case 0x4d653cu: goto label_4d653c;
        case 0x4d6540u: goto label_4d6540;
        case 0x4d6544u: goto label_4d6544;
        case 0x4d6548u: goto label_4d6548;
        case 0x4d654cu: goto label_4d654c;
        case 0x4d6550u: goto label_4d6550;
        case 0x4d6554u: goto label_4d6554;
        case 0x4d6558u: goto label_4d6558;
        case 0x4d655cu: goto label_4d655c;
        case 0x4d6560u: goto label_4d6560;
        case 0x4d6564u: goto label_4d6564;
        case 0x4d6568u: goto label_4d6568;
        case 0x4d656cu: goto label_4d656c;
        case 0x4d6570u: goto label_4d6570;
        case 0x4d6574u: goto label_4d6574;
        case 0x4d6578u: goto label_4d6578;
        case 0x4d657cu: goto label_4d657c;
        case 0x4d6580u: goto label_4d6580;
        case 0x4d6584u: goto label_4d6584;
        case 0x4d6588u: goto label_4d6588;
        case 0x4d658cu: goto label_4d658c;
        case 0x4d6590u: goto label_4d6590;
        case 0x4d6594u: goto label_4d6594;
        case 0x4d6598u: goto label_4d6598;
        case 0x4d659cu: goto label_4d659c;
        case 0x4d65a0u: goto label_4d65a0;
        case 0x4d65a4u: goto label_4d65a4;
        case 0x4d65a8u: goto label_4d65a8;
        case 0x4d65acu: goto label_4d65ac;
        case 0x4d65b0u: goto label_4d65b0;
        case 0x4d65b4u: goto label_4d65b4;
        case 0x4d65b8u: goto label_4d65b8;
        case 0x4d65bcu: goto label_4d65bc;
        case 0x4d65c0u: goto label_4d65c0;
        case 0x4d65c4u: goto label_4d65c4;
        case 0x4d65c8u: goto label_4d65c8;
        case 0x4d65ccu: goto label_4d65cc;
        case 0x4d65d0u: goto label_4d65d0;
        case 0x4d65d4u: goto label_4d65d4;
        case 0x4d65d8u: goto label_4d65d8;
        case 0x4d65dcu: goto label_4d65dc;
        case 0x4d65e0u: goto label_4d65e0;
        case 0x4d65e4u: goto label_4d65e4;
        case 0x4d65e8u: goto label_4d65e8;
        case 0x4d65ecu: goto label_4d65ec;
        case 0x4d65f0u: goto label_4d65f0;
        case 0x4d65f4u: goto label_4d65f4;
        case 0x4d65f8u: goto label_4d65f8;
        case 0x4d65fcu: goto label_4d65fc;
        case 0x4d6600u: goto label_4d6600;
        case 0x4d6604u: goto label_4d6604;
        case 0x4d6608u: goto label_4d6608;
        case 0x4d660cu: goto label_4d660c;
        case 0x4d6610u: goto label_4d6610;
        case 0x4d6614u: goto label_4d6614;
        case 0x4d6618u: goto label_4d6618;
        case 0x4d661cu: goto label_4d661c;
        case 0x4d6620u: goto label_4d6620;
        case 0x4d6624u: goto label_4d6624;
        case 0x4d6628u: goto label_4d6628;
        case 0x4d662cu: goto label_4d662c;
        case 0x4d6630u: goto label_4d6630;
        case 0x4d6634u: goto label_4d6634;
        case 0x4d6638u: goto label_4d6638;
        case 0x4d663cu: goto label_4d663c;
        case 0x4d6640u: goto label_4d6640;
        case 0x4d6644u: goto label_4d6644;
        case 0x4d6648u: goto label_4d6648;
        case 0x4d664cu: goto label_4d664c;
        case 0x4d6650u: goto label_4d6650;
        case 0x4d6654u: goto label_4d6654;
        case 0x4d6658u: goto label_4d6658;
        case 0x4d665cu: goto label_4d665c;
        case 0x4d6660u: goto label_4d6660;
        case 0x4d6664u: goto label_4d6664;
        case 0x4d6668u: goto label_4d6668;
        case 0x4d666cu: goto label_4d666c;
        case 0x4d6670u: goto label_4d6670;
        case 0x4d6674u: goto label_4d6674;
        case 0x4d6678u: goto label_4d6678;
        case 0x4d667cu: goto label_4d667c;
        case 0x4d6680u: goto label_4d6680;
        case 0x4d6684u: goto label_4d6684;
        case 0x4d6688u: goto label_4d6688;
        case 0x4d668cu: goto label_4d668c;
        case 0x4d6690u: goto label_4d6690;
        case 0x4d6694u: goto label_4d6694;
        case 0x4d6698u: goto label_4d6698;
        case 0x4d669cu: goto label_4d669c;
        case 0x4d66a0u: goto label_4d66a0;
        case 0x4d66a4u: goto label_4d66a4;
        case 0x4d66a8u: goto label_4d66a8;
        case 0x4d66acu: goto label_4d66ac;
        case 0x4d66b0u: goto label_4d66b0;
        case 0x4d66b4u: goto label_4d66b4;
        case 0x4d66b8u: goto label_4d66b8;
        case 0x4d66bcu: goto label_4d66bc;
        case 0x4d66c0u: goto label_4d66c0;
        case 0x4d66c4u: goto label_4d66c4;
        case 0x4d66c8u: goto label_4d66c8;
        case 0x4d66ccu: goto label_4d66cc;
        case 0x4d66d0u: goto label_4d66d0;
        case 0x4d66d4u: goto label_4d66d4;
        case 0x4d66d8u: goto label_4d66d8;
        case 0x4d66dcu: goto label_4d66dc;
        case 0x4d66e0u: goto label_4d66e0;
        case 0x4d66e4u: goto label_4d66e4;
        case 0x4d66e8u: goto label_4d66e8;
        case 0x4d66ecu: goto label_4d66ec;
        case 0x4d66f0u: goto label_4d66f0;
        case 0x4d66f4u: goto label_4d66f4;
        case 0x4d66f8u: goto label_4d66f8;
        case 0x4d66fcu: goto label_4d66fc;
        case 0x4d6700u: goto label_4d6700;
        case 0x4d6704u: goto label_4d6704;
        case 0x4d6708u: goto label_4d6708;
        case 0x4d670cu: goto label_4d670c;
        case 0x4d6710u: goto label_4d6710;
        case 0x4d6714u: goto label_4d6714;
        case 0x4d6718u: goto label_4d6718;
        case 0x4d671cu: goto label_4d671c;
        case 0x4d6720u: goto label_4d6720;
        case 0x4d6724u: goto label_4d6724;
        case 0x4d6728u: goto label_4d6728;
        case 0x4d672cu: goto label_4d672c;
        case 0x4d6730u: goto label_4d6730;
        case 0x4d6734u: goto label_4d6734;
        case 0x4d6738u: goto label_4d6738;
        case 0x4d673cu: goto label_4d673c;
        case 0x4d6740u: goto label_4d6740;
        case 0x4d6744u: goto label_4d6744;
        case 0x4d6748u: goto label_4d6748;
        case 0x4d674cu: goto label_4d674c;
        case 0x4d6750u: goto label_4d6750;
        case 0x4d6754u: goto label_4d6754;
        case 0x4d6758u: goto label_4d6758;
        case 0x4d675cu: goto label_4d675c;
        case 0x4d6760u: goto label_4d6760;
        case 0x4d6764u: goto label_4d6764;
        case 0x4d6768u: goto label_4d6768;
        case 0x4d676cu: goto label_4d676c;
        case 0x4d6770u: goto label_4d6770;
        case 0x4d6774u: goto label_4d6774;
        case 0x4d6778u: goto label_4d6778;
        case 0x4d677cu: goto label_4d677c;
        case 0x4d6780u: goto label_4d6780;
        case 0x4d6784u: goto label_4d6784;
        case 0x4d6788u: goto label_4d6788;
        case 0x4d678cu: goto label_4d678c;
        case 0x4d6790u: goto label_4d6790;
        case 0x4d6794u: goto label_4d6794;
        case 0x4d6798u: goto label_4d6798;
        case 0x4d679cu: goto label_4d679c;
        case 0x4d67a0u: goto label_4d67a0;
        case 0x4d67a4u: goto label_4d67a4;
        case 0x4d67a8u: goto label_4d67a8;
        case 0x4d67acu: goto label_4d67ac;
        case 0x4d67b0u: goto label_4d67b0;
        case 0x4d67b4u: goto label_4d67b4;
        case 0x4d67b8u: goto label_4d67b8;
        case 0x4d67bcu: goto label_4d67bc;
        case 0x4d67c0u: goto label_4d67c0;
        case 0x4d67c4u: goto label_4d67c4;
        case 0x4d67c8u: goto label_4d67c8;
        case 0x4d67ccu: goto label_4d67cc;
        case 0x4d67d0u: goto label_4d67d0;
        case 0x4d67d4u: goto label_4d67d4;
        case 0x4d67d8u: goto label_4d67d8;
        case 0x4d67dcu: goto label_4d67dc;
        case 0x4d67e0u: goto label_4d67e0;
        case 0x4d67e4u: goto label_4d67e4;
        case 0x4d67e8u: goto label_4d67e8;
        case 0x4d67ecu: goto label_4d67ec;
        case 0x4d67f0u: goto label_4d67f0;
        case 0x4d67f4u: goto label_4d67f4;
        case 0x4d67f8u: goto label_4d67f8;
        case 0x4d67fcu: goto label_4d67fc;
        case 0x4d6800u: goto label_4d6800;
        case 0x4d6804u: goto label_4d6804;
        case 0x4d6808u: goto label_4d6808;
        case 0x4d680cu: goto label_4d680c;
        case 0x4d6810u: goto label_4d6810;
        case 0x4d6814u: goto label_4d6814;
        case 0x4d6818u: goto label_4d6818;
        case 0x4d681cu: goto label_4d681c;
        case 0x4d6820u: goto label_4d6820;
        case 0x4d6824u: goto label_4d6824;
        case 0x4d6828u: goto label_4d6828;
        case 0x4d682cu: goto label_4d682c;
        case 0x4d6830u: goto label_4d6830;
        case 0x4d6834u: goto label_4d6834;
        case 0x4d6838u: goto label_4d6838;
        case 0x4d683cu: goto label_4d683c;
        case 0x4d6840u: goto label_4d6840;
        case 0x4d6844u: goto label_4d6844;
        case 0x4d6848u: goto label_4d6848;
        case 0x4d684cu: goto label_4d684c;
        case 0x4d6850u: goto label_4d6850;
        case 0x4d6854u: goto label_4d6854;
        case 0x4d6858u: goto label_4d6858;
        case 0x4d685cu: goto label_4d685c;
        case 0x4d6860u: goto label_4d6860;
        case 0x4d6864u: goto label_4d6864;
        case 0x4d6868u: goto label_4d6868;
        case 0x4d686cu: goto label_4d686c;
        case 0x4d6870u: goto label_4d6870;
        case 0x4d6874u: goto label_4d6874;
        case 0x4d6878u: goto label_4d6878;
        case 0x4d687cu: goto label_4d687c;
        case 0x4d6880u: goto label_4d6880;
        case 0x4d6884u: goto label_4d6884;
        case 0x4d6888u: goto label_4d6888;
        case 0x4d688cu: goto label_4d688c;
        case 0x4d6890u: goto label_4d6890;
        case 0x4d6894u: goto label_4d6894;
        case 0x4d6898u: goto label_4d6898;
        case 0x4d689cu: goto label_4d689c;
        case 0x4d68a0u: goto label_4d68a0;
        case 0x4d68a4u: goto label_4d68a4;
        case 0x4d68a8u: goto label_4d68a8;
        case 0x4d68acu: goto label_4d68ac;
        case 0x4d68b0u: goto label_4d68b0;
        case 0x4d68b4u: goto label_4d68b4;
        case 0x4d68b8u: goto label_4d68b8;
        case 0x4d68bcu: goto label_4d68bc;
        case 0x4d68c0u: goto label_4d68c0;
        case 0x4d68c4u: goto label_4d68c4;
        case 0x4d68c8u: goto label_4d68c8;
        case 0x4d68ccu: goto label_4d68cc;
        case 0x4d68d0u: goto label_4d68d0;
        case 0x4d68d4u: goto label_4d68d4;
        case 0x4d68d8u: goto label_4d68d8;
        case 0x4d68dcu: goto label_4d68dc;
        case 0x4d68e0u: goto label_4d68e0;
        case 0x4d68e4u: goto label_4d68e4;
        case 0x4d68e8u: goto label_4d68e8;
        case 0x4d68ecu: goto label_4d68ec;
        case 0x4d68f0u: goto label_4d68f0;
        case 0x4d68f4u: goto label_4d68f4;
        case 0x4d68f8u: goto label_4d68f8;
        case 0x4d68fcu: goto label_4d68fc;
        case 0x4d6900u: goto label_4d6900;
        case 0x4d6904u: goto label_4d6904;
        case 0x4d6908u: goto label_4d6908;
        case 0x4d690cu: goto label_4d690c;
        case 0x4d6910u: goto label_4d6910;
        case 0x4d6914u: goto label_4d6914;
        case 0x4d6918u: goto label_4d6918;
        case 0x4d691cu: goto label_4d691c;
        case 0x4d6920u: goto label_4d6920;
        case 0x4d6924u: goto label_4d6924;
        case 0x4d6928u: goto label_4d6928;
        case 0x4d692cu: goto label_4d692c;
        case 0x4d6930u: goto label_4d6930;
        case 0x4d6934u: goto label_4d6934;
        case 0x4d6938u: goto label_4d6938;
        case 0x4d693cu: goto label_4d693c;
        case 0x4d6940u: goto label_4d6940;
        case 0x4d6944u: goto label_4d6944;
        case 0x4d6948u: goto label_4d6948;
        case 0x4d694cu: goto label_4d694c;
        case 0x4d6950u: goto label_4d6950;
        case 0x4d6954u: goto label_4d6954;
        case 0x4d6958u: goto label_4d6958;
        case 0x4d695cu: goto label_4d695c;
        case 0x4d6960u: goto label_4d6960;
        case 0x4d6964u: goto label_4d6964;
        case 0x4d6968u: goto label_4d6968;
        case 0x4d696cu: goto label_4d696c;
        case 0x4d6970u: goto label_4d6970;
        case 0x4d6974u: goto label_4d6974;
        case 0x4d6978u: goto label_4d6978;
        case 0x4d697cu: goto label_4d697c;
        default: break;
    }

    ctx->pc = 0x4d6510u;

label_4d6510:
    // 0x4d6510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d6514:
    // 0x4d6514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d6518:
    // 0x4d6518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d651c:
    // 0x4d651c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6520:
    // 0x4d6520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d6520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d6524:
    // 0x4d6524: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d6528:
    if (ctx->pc == 0x4D6528u) {
        ctx->pc = 0x4D6528u;
            // 0x4d6528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D652Cu;
        goto label_4d652c;
    }
    ctx->pc = 0x4D6524u;
    {
        const bool branch_taken_0x4d6524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6524u;
            // 0x4d6528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6524) {
            ctx->pc = 0x4D6658u;
            goto label_4d6658;
        }
    }
    ctx->pc = 0x4D652Cu;
label_4d652c:
    // 0x4d652c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6530:
    // 0x4d6530: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d6534:
    // 0x4d6534: 0x246327b0  addiu       $v1, $v1, 0x27B0
    ctx->pc = 0x4d6534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10160));
label_4d6538:
    // 0x4d6538: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d6538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d653c:
    // 0x4d653c: 0x244227e8  addiu       $v0, $v0, 0x27E8
    ctx->pc = 0x4d653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10216));
label_4d6540:
    // 0x4d6540: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d6544:
    // 0x4d6544: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d6544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d6548:
    // 0x4d6548: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d6548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d654c:
    // 0x4d654c: 0xc0407c0  jal         func_101F00
label_4d6550:
    if (ctx->pc == 0x4D6550u) {
        ctx->pc = 0x4D6550u;
            // 0x4d6550: 0x24a56670  addiu       $a1, $a1, 0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26224));
        ctx->pc = 0x4D6554u;
        goto label_4d6554;
    }
    ctx->pc = 0x4D654Cu;
    SET_GPR_U32(ctx, 31, 0x4D6554u);
    ctx->pc = 0x4D6550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D654Cu;
            // 0x4d6550: 0x24a56670  addiu       $a1, $a1, 0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6554u; }
        if (ctx->pc != 0x4D6554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6554u; }
        if (ctx->pc != 0x4D6554u) { return; }
    }
    ctx->pc = 0x4D6554u;
label_4d6554:
    // 0x4d6554: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d6558:
    // 0x4d6558: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d655c:
    if (ctx->pc == 0x4D655Cu) {
        ctx->pc = 0x4D655Cu;
            // 0x4d655c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D6560u;
        goto label_4d6560;
    }
    ctx->pc = 0x4D6558u;
    {
        const bool branch_taken_0x4d6558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6558) {
            ctx->pc = 0x4D655Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6558u;
            // 0x4d655c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D656Cu;
            goto label_4d656c;
        }
    }
    ctx->pc = 0x4D6560u;
label_4d6560:
    // 0x4d6560: 0xc07507c  jal         func_1D41F0
label_4d6564:
    if (ctx->pc == 0x4D6564u) {
        ctx->pc = 0x4D6564u;
            // 0x4d6564: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D6568u;
        goto label_4d6568;
    }
    ctx->pc = 0x4D6560u;
    SET_GPR_U32(ctx, 31, 0x4D6568u);
    ctx->pc = 0x4D6564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6560u;
            // 0x4d6564: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6568u; }
        if (ctx->pc != 0x4D6568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6568u; }
        if (ctx->pc != 0x4D6568u) { return; }
    }
    ctx->pc = 0x4D6568u;
label_4d6568:
    // 0x4d6568: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d6568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d656c:
    // 0x4d656c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d6570:
    if (ctx->pc == 0x4D6570u) {
        ctx->pc = 0x4D6570u;
            // 0x4d6570: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D6574u;
        goto label_4d6574;
    }
    ctx->pc = 0x4D656Cu;
    {
        const bool branch_taken_0x4d656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d656c) {
            ctx->pc = 0x4D6570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D656Cu;
            // 0x4d6570: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D659Cu;
            goto label_4d659c;
        }
    }
    ctx->pc = 0x4D6574u;
label_4d6574:
    // 0x4d6574: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d6578:
    if (ctx->pc == 0x4D6578u) {
        ctx->pc = 0x4D657Cu;
        goto label_4d657c;
    }
    ctx->pc = 0x4D6574u;
    {
        const bool branch_taken_0x4d6574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6574) {
            ctx->pc = 0x4D6598u;
            goto label_4d6598;
        }
    }
    ctx->pc = 0x4D657Cu;
label_4d657c:
    // 0x4d657c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d6580:
    if (ctx->pc == 0x4D6580u) {
        ctx->pc = 0x4D6584u;
        goto label_4d6584;
    }
    ctx->pc = 0x4D657Cu;
    {
        const bool branch_taken_0x4d657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d657c) {
            ctx->pc = 0x4D6598u;
            goto label_4d6598;
        }
    }
    ctx->pc = 0x4D6584u;
label_4d6584:
    // 0x4d6584: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d6584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d6588:
    // 0x4d6588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d658c:
    if (ctx->pc == 0x4D658Cu) {
        ctx->pc = 0x4D6590u;
        goto label_4d6590;
    }
    ctx->pc = 0x4D6588u;
    {
        const bool branch_taken_0x4d6588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6588) {
            ctx->pc = 0x4D6598u;
            goto label_4d6598;
        }
    }
    ctx->pc = 0x4D6590u;
label_4d6590:
    // 0x4d6590: 0xc0400a8  jal         func_1002A0
label_4d6594:
    if (ctx->pc == 0x4D6594u) {
        ctx->pc = 0x4D6598u;
        goto label_4d6598;
    }
    ctx->pc = 0x4D6590u;
    SET_GPR_U32(ctx, 31, 0x4D6598u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6598u; }
        if (ctx->pc != 0x4D6598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6598u; }
        if (ctx->pc != 0x4D6598u) { return; }
    }
    ctx->pc = 0x4D6598u;
label_4d6598:
    // 0x4d6598: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d6598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d659c:
    // 0x4d659c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d65a0:
    if (ctx->pc == 0x4D65A0u) {
        ctx->pc = 0x4D65A0u;
            // 0x4d65a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D65A4u;
        goto label_4d65a4;
    }
    ctx->pc = 0x4D659Cu;
    {
        const bool branch_taken_0x4d659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d659c) {
            ctx->pc = 0x4D65A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D659Cu;
            // 0x4d65a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D65CCu;
            goto label_4d65cc;
        }
    }
    ctx->pc = 0x4D65A4u;
label_4d65a4:
    // 0x4d65a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d65a8:
    if (ctx->pc == 0x4D65A8u) {
        ctx->pc = 0x4D65ACu;
        goto label_4d65ac;
    }
    ctx->pc = 0x4D65A4u;
    {
        const bool branch_taken_0x4d65a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d65a4) {
            ctx->pc = 0x4D65C8u;
            goto label_4d65c8;
        }
    }
    ctx->pc = 0x4D65ACu;
label_4d65ac:
    // 0x4d65ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d65b0:
    if (ctx->pc == 0x4D65B0u) {
        ctx->pc = 0x4D65B4u;
        goto label_4d65b4;
    }
    ctx->pc = 0x4D65ACu;
    {
        const bool branch_taken_0x4d65ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d65ac) {
            ctx->pc = 0x4D65C8u;
            goto label_4d65c8;
        }
    }
    ctx->pc = 0x4D65B4u;
label_4d65b4:
    // 0x4d65b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d65b8:
    // 0x4d65b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d65bc:
    if (ctx->pc == 0x4D65BCu) {
        ctx->pc = 0x4D65C0u;
        goto label_4d65c0;
    }
    ctx->pc = 0x4D65B8u;
    {
        const bool branch_taken_0x4d65b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d65b8) {
            ctx->pc = 0x4D65C8u;
            goto label_4d65c8;
        }
    }
    ctx->pc = 0x4D65C0u;
label_4d65c0:
    // 0x4d65c0: 0xc0400a8  jal         func_1002A0
label_4d65c4:
    if (ctx->pc == 0x4D65C4u) {
        ctx->pc = 0x4D65C8u;
        goto label_4d65c8;
    }
    ctx->pc = 0x4D65C0u;
    SET_GPR_U32(ctx, 31, 0x4D65C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D65C8u; }
        if (ctx->pc != 0x4D65C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D65C8u; }
        if (ctx->pc != 0x4D65C8u) { return; }
    }
    ctx->pc = 0x4D65C8u;
label_4d65c8:
    // 0x4d65c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d65cc:
    // 0x4d65cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d65d0:
    if (ctx->pc == 0x4D65D0u) {
        ctx->pc = 0x4D65D4u;
        goto label_4d65d4;
    }
    ctx->pc = 0x4D65CCu;
    {
        const bool branch_taken_0x4d65cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d65cc) {
            ctx->pc = 0x4D65E8u;
            goto label_4d65e8;
        }
    }
    ctx->pc = 0x4D65D4u;
label_4d65d4:
    // 0x4d65d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d65d8:
    // 0x4d65d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d65d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d65dc:
    // 0x4d65dc: 0x24632798  addiu       $v1, $v1, 0x2798
    ctx->pc = 0x4d65dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10136));
label_4d65e0:
    // 0x4d65e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d65e4:
    // 0x4d65e4: 0xac40aa50  sw          $zero, -0x55B0($v0)
    ctx->pc = 0x4d65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945360), GPR_U32(ctx, 0));
label_4d65e8:
    // 0x4d65e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d65ec:
    if (ctx->pc == 0x4D65ECu) {
        ctx->pc = 0x4D65ECu;
            // 0x4d65ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D65F0u;
        goto label_4d65f0;
    }
    ctx->pc = 0x4D65E8u;
    {
        const bool branch_taken_0x4d65e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d65e8) {
            ctx->pc = 0x4D65ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D65E8u;
            // 0x4d65ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D6644u;
            goto label_4d6644;
        }
    }
    ctx->pc = 0x4D65F0u;
label_4d65f0:
    // 0x4d65f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d65f4:
    // 0x4d65f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d65f8:
    // 0x4d65f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d65fc:
    // 0x4d65fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d6600:
    // 0x4d6600: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d6604:
    if (ctx->pc == 0x4D6604u) {
        ctx->pc = 0x4D6604u;
            // 0x4d6604: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D6608u;
        goto label_4d6608;
    }
    ctx->pc = 0x4D6600u;
    {
        const bool branch_taken_0x4d6600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6600) {
            ctx->pc = 0x4D6604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6600u;
            // 0x4d6604: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D661Cu;
            goto label_4d661c;
        }
    }
    ctx->pc = 0x4D6608u;
label_4d6608:
    // 0x4d6608: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d6608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d660c:
    // 0x4d660c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d660cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d6610:
    // 0x4d6610: 0x320f809  jalr        $t9
label_4d6614:
    if (ctx->pc == 0x4D6614u) {
        ctx->pc = 0x4D6614u;
            // 0x4d6614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D6618u;
        goto label_4d6618;
    }
    ctx->pc = 0x4D6610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6618u);
        ctx->pc = 0x4D6614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6610u;
            // 0x4d6614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6618u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6618u; }
            if (ctx->pc != 0x4D6618u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6618u;
label_4d6618:
    // 0x4d6618: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d6618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d661c:
    // 0x4d661c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d6620:
    if (ctx->pc == 0x4D6620u) {
        ctx->pc = 0x4D6620u;
            // 0x4d6620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6624u;
        goto label_4d6624;
    }
    ctx->pc = 0x4D661Cu;
    {
        const bool branch_taken_0x4d661c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d661c) {
            ctx->pc = 0x4D6620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D661Cu;
            // 0x4d6620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D6638u;
            goto label_4d6638;
        }
    }
    ctx->pc = 0x4D6624u;
label_4d6624:
    // 0x4d6624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d6624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6628:
    // 0x4d6628: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d6628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d662c:
    // 0x4d662c: 0x320f809  jalr        $t9
label_4d6630:
    if (ctx->pc == 0x4D6630u) {
        ctx->pc = 0x4D6630u;
            // 0x4d6630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D6634u;
        goto label_4d6634;
    }
    ctx->pc = 0x4D662Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6634u);
        ctx->pc = 0x4D6630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D662Cu;
            // 0x4d6630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6634u; }
            if (ctx->pc != 0x4D6634u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6634u;
label_4d6634:
    // 0x4d6634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d6634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d6638:
    // 0x4d6638: 0xc075bf8  jal         func_1D6FE0
label_4d663c:
    if (ctx->pc == 0x4D663Cu) {
        ctx->pc = 0x4D663Cu;
            // 0x4d663c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6640u;
        goto label_4d6640;
    }
    ctx->pc = 0x4D6638u;
    SET_GPR_U32(ctx, 31, 0x4D6640u);
    ctx->pc = 0x4D663Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6638u;
            // 0x4d663c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6640u; }
        if (ctx->pc != 0x4D6640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6640u; }
        if (ctx->pc != 0x4D6640u) { return; }
    }
    ctx->pc = 0x4D6640u;
label_4d6640:
    // 0x4d6640: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d6640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d6644:
    // 0x4d6644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d6644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d6648:
    // 0x4d6648: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d664c:
    if (ctx->pc == 0x4D664Cu) {
        ctx->pc = 0x4D664Cu;
            // 0x4d664c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6650u;
        goto label_4d6650;
    }
    ctx->pc = 0x4D6648u;
    {
        const bool branch_taken_0x4d6648 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d6648) {
            ctx->pc = 0x4D664Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6648u;
            // 0x4d664c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D665Cu;
            goto label_4d665c;
        }
    }
    ctx->pc = 0x4D6650u;
label_4d6650:
    // 0x4d6650: 0xc0400a8  jal         func_1002A0
label_4d6654:
    if (ctx->pc == 0x4D6654u) {
        ctx->pc = 0x4D6654u;
            // 0x4d6654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6658u;
        goto label_4d6658;
    }
    ctx->pc = 0x4D6650u;
    SET_GPR_U32(ctx, 31, 0x4D6658u);
    ctx->pc = 0x4D6654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6650u;
            // 0x4d6654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6658u; }
        if (ctx->pc != 0x4D6658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6658u; }
        if (ctx->pc != 0x4D6658u) { return; }
    }
    ctx->pc = 0x4D6658u;
label_4d6658:
    // 0x4d6658: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d6658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d665c:
    // 0x4d665c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d6660:
    // 0x4d6660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d6660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6664:
    // 0x4d6664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d6668:
    // 0x4d6668: 0x3e00008  jr          $ra
label_4d666c:
    if (ctx->pc == 0x4D666Cu) {
        ctx->pc = 0x4D666Cu;
            // 0x4d666c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D6670u;
        goto label_4d6670;
    }
    ctx->pc = 0x4D6668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D666Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6668u;
            // 0x4d666c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6670u;
label_4d6670:
    // 0x4d6670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d6674:
    // 0x4d6674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d6674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d6678:
    // 0x4d6678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d667c:
    // 0x4d667c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d6680:
    // 0x4d6680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d6680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d6684:
    // 0x4d6684: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4d6688:
    if (ctx->pc == 0x4D6688u) {
        ctx->pc = 0x4D6688u;
            // 0x4d6688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D668Cu;
        goto label_4d668c;
    }
    ctx->pc = 0x4D6684u;
    {
        const bool branch_taken_0x4d6684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6684u;
            // 0x4d6688: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6684) {
            ctx->pc = 0x4D66D8u;
            goto label_4d66d8;
        }
    }
    ctx->pc = 0x4D668Cu;
label_4d668c:
    // 0x4d668c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d6690:
    // 0x4d6690: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d6694:
    // 0x4d6694: 0x24632850  addiu       $v1, $v1, 0x2850
    ctx->pc = 0x4d6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10320));
label_4d6698:
    // 0x4d6698: 0x24422890  addiu       $v0, $v0, 0x2890
    ctx->pc = 0x4d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10384));
label_4d669c:
    // 0x4d669c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d669cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d66a0:
    // 0x4d66a0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4d66a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4d66a4:
    // 0x4d66a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d66a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d66a8:
    // 0x4d66a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d66a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d66ac:
    // 0x4d66ac: 0x320f809  jalr        $t9
label_4d66b0:
    if (ctx->pc == 0x4D66B0u) {
        ctx->pc = 0x4D66B4u;
        goto label_4d66b4;
    }
    ctx->pc = 0x4D66ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D66B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D66B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D66B4u; }
            if (ctx->pc != 0x4D66B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D66B4u;
label_4d66b4:
    // 0x4d66b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d66b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d66b8:
    // 0x4d66b8: 0xc12e684  jal         func_4B9A10
label_4d66bc:
    if (ctx->pc == 0x4D66BCu) {
        ctx->pc = 0x4D66BCu;
            // 0x4d66bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D66C0u;
        goto label_4d66c0;
    }
    ctx->pc = 0x4D66B8u;
    SET_GPR_U32(ctx, 31, 0x4D66C0u);
    ctx->pc = 0x4D66BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D66B8u;
            // 0x4d66bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D66C0u; }
        if (ctx->pc != 0x4D66C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D66C0u; }
        if (ctx->pc != 0x4D66C0u) { return; }
    }
    ctx->pc = 0x4D66C0u;
label_4d66c0:
    // 0x4d66c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d66c4:
    // 0x4d66c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d66c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d66c8:
    // 0x4d66c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d66cc:
    if (ctx->pc == 0x4D66CCu) {
        ctx->pc = 0x4D66CCu;
            // 0x4d66cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D66D0u;
        goto label_4d66d0;
    }
    ctx->pc = 0x4D66C8u;
    {
        const bool branch_taken_0x4d66c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d66c8) {
            ctx->pc = 0x4D66CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D66C8u;
            // 0x4d66cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D66DCu;
            goto label_4d66dc;
        }
    }
    ctx->pc = 0x4D66D0u;
label_4d66d0:
    // 0x4d66d0: 0xc0400a8  jal         func_1002A0
label_4d66d4:
    if (ctx->pc == 0x4D66D4u) {
        ctx->pc = 0x4D66D4u;
            // 0x4d66d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D66D8u;
        goto label_4d66d8;
    }
    ctx->pc = 0x4D66D0u;
    SET_GPR_U32(ctx, 31, 0x4D66D8u);
    ctx->pc = 0x4D66D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D66D0u;
            // 0x4d66d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D66D8u; }
        if (ctx->pc != 0x4D66D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D66D8u; }
        if (ctx->pc != 0x4D66D8u) { return; }
    }
    ctx->pc = 0x4D66D8u;
label_4d66d8:
    // 0x4d66d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d66d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d66dc:
    // 0x4d66dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d66dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d66e0:
    // 0x4d66e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d66e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d66e4:
    // 0x4d66e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d66e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d66e8:
    // 0x4d66e8: 0x3e00008  jr          $ra
label_4d66ec:
    if (ctx->pc == 0x4D66ECu) {
        ctx->pc = 0x4D66ECu;
            // 0x4d66ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D66F0u;
        goto label_4d66f0;
    }
    ctx->pc = 0x4D66E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D66ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D66E8u;
            // 0x4d66ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D66F0u;
label_4d66f0:
    // 0x4d66f0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4d66f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4d66f4:
    // 0x4d66f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d66f8:
    // 0x4d66f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4d66f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4d66fc:
    // 0x4d66fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4d66fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4d6700:
    // 0x4d6700: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4d6700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4d6704:
    // 0x4d6704: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4d6704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4d6708:
    // 0x4d6708: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d6708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4d670c:
    // 0x4d670c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4d6710:
    // 0x4d6710: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d6710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4d6714:
    // 0x4d6714: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d6714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4d6718:
    // 0x4d6718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d6718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d671c:
    // 0x4d671c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d6720:
    // 0x4d6720: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d6720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4d6724:
    // 0x4d6724: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d6724u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d6728:
    // 0x4d6728: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4d672c:
    if (ctx->pc == 0x4D672Cu) {
        ctx->pc = 0x4D672Cu;
            // 0x4d672c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6730u;
        goto label_4d6730;
    }
    ctx->pc = 0x4D6728u;
    {
        const bool branch_taken_0x4d6728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6728u;
            // 0x4d672c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6728) {
            ctx->pc = 0x4D678Cu;
            goto label_4d678c;
        }
    }
    ctx->pc = 0x4D6730u;
label_4d6730:
    // 0x4d6730: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d6730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d6734:
    // 0x4d6734: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4d6738:
    if (ctx->pc == 0x4D6738u) {
        ctx->pc = 0x4D6738u;
            // 0x4d6738: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D673Cu;
        goto label_4d673c;
    }
    ctx->pc = 0x4D6734u;
    {
        const bool branch_taken_0x4d6734 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d6734) {
            ctx->pc = 0x4D6738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6734u;
            // 0x4d6738: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D6778u;
            goto label_4d6778;
        }
    }
    ctx->pc = 0x4D673Cu;
label_4d673c:
    // 0x4d673c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d6740:
    // 0x4d6740: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d6744:
    if (ctx->pc == 0x4D6744u) {
        ctx->pc = 0x4D6748u;
        goto label_4d6748;
    }
    ctx->pc = 0x4D6740u;
    {
        const bool branch_taken_0x4d6740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d6740) {
            ctx->pc = 0x4D6750u;
            goto label_4d6750;
        }
    }
    ctx->pc = 0x4D6748u;
label_4d6748:
    // 0x4d6748: 0x1000007f  b           . + 4 + (0x7F << 2)
label_4d674c:
    if (ctx->pc == 0x4D674Cu) {
        ctx->pc = 0x4D674Cu;
            // 0x4d674c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4D6750u;
        goto label_4d6750;
    }
    ctx->pc = 0x4D6748u;
    {
        const bool branch_taken_0x4d6748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6748u;
            // 0x4d674c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6748) {
            ctx->pc = 0x4D6948u;
            goto label_4d6948;
        }
    }
    ctx->pc = 0x4D6750u;
label_4d6750:
    // 0x4d6750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d6750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d6754:
    // 0x4d6754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d6754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d6758:
    // 0x4d6758: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d6758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d675c:
    // 0x4d675c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d675cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d6760:
    // 0x4d6760: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4d6760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4d6764:
    // 0x4d6764: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d6768:
    // 0x4d6768: 0x320f809  jalr        $t9
label_4d676c:
    if (ctx->pc == 0x4D676Cu) {
        ctx->pc = 0x4D676Cu;
            // 0x4d676c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D6770u;
        goto label_4d6770;
    }
    ctx->pc = 0x4D6768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6770u);
        ctx->pc = 0x4D676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6768u;
            // 0x4d676c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6770u; }
            if (ctx->pc != 0x4D6770u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6770u;
label_4d6770:
    // 0x4d6770: 0x10000074  b           . + 4 + (0x74 << 2)
label_4d6774:
    if (ctx->pc == 0x4D6774u) {
        ctx->pc = 0x4D6778u;
        goto label_4d6778;
    }
    ctx->pc = 0x4D6770u;
    {
        const bool branch_taken_0x4d6770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6770) {
            ctx->pc = 0x4D6944u;
            goto label_4d6944;
        }
    }
    ctx->pc = 0x4D6778u;
label_4d6778:
    // 0x4d6778: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d6778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d677c:
    // 0x4d677c: 0x320f809  jalr        $t9
label_4d6780:
    if (ctx->pc == 0x4D6780u) {
        ctx->pc = 0x4D6784u;
        goto label_4d6784;
    }
    ctx->pc = 0x4D677Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D6784u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D6784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D6784u; }
            if (ctx->pc != 0x4D6784u) { return; }
        }
        }
    }
    ctx->pc = 0x4D6784u;
label_4d6784:
    // 0x4d6784: 0x1000006f  b           . + 4 + (0x6F << 2)
label_4d6788:
    if (ctx->pc == 0x4D6788u) {
        ctx->pc = 0x4D678Cu;
        goto label_4d678c;
    }
    ctx->pc = 0x4D6784u;
    {
        const bool branch_taken_0x4d6784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6784) {
            ctx->pc = 0x4D6944u;
            goto label_4d6944;
        }
    }
    ctx->pc = 0x4D678Cu;
label_4d678c:
    // 0x4d678c: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4d678cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4d6790:
    // 0x4d6790: 0x12e0006c  beqz        $s7, . + 4 + (0x6C << 2)
label_4d6794:
    if (ctx->pc == 0x4D6794u) {
        ctx->pc = 0x4D6798u;
        goto label_4d6798;
    }
    ctx->pc = 0x4D6790u;
    {
        const bool branch_taken_0x4d6790 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6790) {
            ctx->pc = 0x4D6944u;
            goto label_4d6944;
        }
    }
    ctx->pc = 0x4D6798u;
label_4d6798:
    // 0x4d6798: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d6798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d679c:
    // 0x4d679c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d67a0:
    // 0x4d67a0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4d67a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4d67a4:
    // 0x4d67a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4d67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4d67a8:
    // 0x4d67a8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4d67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4d67ac:
    // 0x4d67ac: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x4d67acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4d67b0:
    // 0x4d67b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4d67b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d67b4:
    // 0x4d67b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d67b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d67b8:
    // 0x4d67b8: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4d67b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4d67bc:
    // 0x4d67bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d67c0:
    // 0x4d67c0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4d67c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4d67c4:
    // 0x4d67c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d67c8:
    // 0x4d67c8: 0xc4547e20  lwc1        $f20, 0x7E20($v0)
    ctx->pc = 0x4d67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d67cc:
    // 0x4d67cc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4d67d0:
    // 0x4d67d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4d67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4d67d4:
    // 0x4d67d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d67d8:
    // 0x4d67d8: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4d67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4d67dc:
    // 0x4d67dc: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4d67dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d67e0:
    // 0x4d67e0: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4d67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4d67e4:
    // 0x4d67e4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4d67e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4d67e8:
    // 0x4d67e8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4d67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4d67ec:
    // 0x4d67ec: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4d67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4d67f0:
    // 0x4d67f0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4d67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4d67f4:
    // 0x4d67f4: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4d67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4d67f8:
    // 0x4d67f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4d67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4d67fc:
    // 0x4d67fc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4d67fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d6800:
    // 0x4d6800: 0xc0d639c  jal         func_358E70
label_4d6804:
    if (ctx->pc == 0x4D6804u) {
        ctx->pc = 0x4D6804u;
            // 0x4d6804: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x4D6808u;
        goto label_4d6808;
    }
    ctx->pc = 0x4D6800u;
    SET_GPR_U32(ctx, 31, 0x4D6808u);
    ctx->pc = 0x4D6804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6800u;
            // 0x4d6804: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6808u; }
        if (ctx->pc != 0x4D6808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6808u; }
        if (ctx->pc != 0x4D6808u) { return; }
    }
    ctx->pc = 0x4D6808u;
label_4d6808:
    // 0x4d6808: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_4d680c:
    if (ctx->pc == 0x4D680Cu) {
        ctx->pc = 0x4D6810u;
        goto label_4d6810;
    }
    ctx->pc = 0x4D6808u;
    {
        const bool branch_taken_0x4d6808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6808) {
            ctx->pc = 0x4D68F0u;
            goto label_4d68f0;
        }
    }
    ctx->pc = 0x4D6810u;
label_4d6810:
    // 0x4d6810: 0xc0d1c14  jal         func_347050
label_4d6814:
    if (ctx->pc == 0x4D6814u) {
        ctx->pc = 0x4D6814u;
            // 0x4d6814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6818u;
        goto label_4d6818;
    }
    ctx->pc = 0x4D6810u;
    SET_GPR_U32(ctx, 31, 0x4D6818u);
    ctx->pc = 0x4D6814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6810u;
            // 0x4d6814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6818u; }
        if (ctx->pc != 0x4D6818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6818u; }
        if (ctx->pc != 0x4D6818u) { return; }
    }
    ctx->pc = 0x4D6818u;
label_4d6818:
    // 0x4d6818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d6818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d681c:
    // 0x4d681c: 0xc04f278  jal         func_13C9E0
label_4d6820:
    if (ctx->pc == 0x4D6820u) {
        ctx->pc = 0x4D6820u;
            // 0x4d6820: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D6824u;
        goto label_4d6824;
    }
    ctx->pc = 0x4D681Cu;
    SET_GPR_U32(ctx, 31, 0x4D6824u);
    ctx->pc = 0x4D6820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D681Cu;
            // 0x4d6820: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6824u; }
        if (ctx->pc != 0x4D6824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6824u; }
        if (ctx->pc != 0x4D6824u) { return; }
    }
    ctx->pc = 0x4D6824u;
label_4d6824:
    // 0x4d6824: 0xc0d1c10  jal         func_347040
label_4d6828:
    if (ctx->pc == 0x4D6828u) {
        ctx->pc = 0x4D6828u;
            // 0x4d6828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D682Cu;
        goto label_4d682c;
    }
    ctx->pc = 0x4D6824u;
    SET_GPR_U32(ctx, 31, 0x4D682Cu);
    ctx->pc = 0x4D6828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6824u;
            // 0x4d6828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D682Cu; }
        if (ctx->pc != 0x4D682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D682Cu; }
        if (ctx->pc != 0x4D682Cu) { return; }
    }
    ctx->pc = 0x4D682Cu;
label_4d682c:
    // 0x4d682c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d682cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d6830:
    // 0x4d6830: 0xc04ce80  jal         func_133A00
label_4d6834:
    if (ctx->pc == 0x4D6834u) {
        ctx->pc = 0x4D6834u;
            // 0x4d6834: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D6838u;
        goto label_4d6838;
    }
    ctx->pc = 0x4D6830u;
    SET_GPR_U32(ctx, 31, 0x4D6838u);
    ctx->pc = 0x4D6834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6830u;
            // 0x4d6834: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6838u; }
        if (ctx->pc != 0x4D6838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6838u; }
        if (ctx->pc != 0x4D6838u) { return; }
    }
    ctx->pc = 0x4D6838u;
label_4d6838:
    // 0x4d6838: 0xc0d4108  jal         func_350420
label_4d683c:
    if (ctx->pc == 0x4D683Cu) {
        ctx->pc = 0x4D6840u;
        goto label_4d6840;
    }
    ctx->pc = 0x4D6838u;
    SET_GPR_U32(ctx, 31, 0x4D6840u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6840u; }
        if (ctx->pc != 0x4D6840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6840u; }
        if (ctx->pc != 0x4D6840u) { return; }
    }
    ctx->pc = 0x4D6840u;
label_4d6840:
    // 0x4d6840: 0xc0b36b4  jal         func_2CDAD0
label_4d6844:
    if (ctx->pc == 0x4D6844u) {
        ctx->pc = 0x4D6844u;
            // 0x4d6844: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6848u;
        goto label_4d6848;
    }
    ctx->pc = 0x4D6840u;
    SET_GPR_U32(ctx, 31, 0x4D6848u);
    ctx->pc = 0x4D6844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6840u;
            // 0x4d6844: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6848u; }
        if (ctx->pc != 0x4D6848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6848u; }
        if (ctx->pc != 0x4D6848u) { return; }
    }
    ctx->pc = 0x4D6848u;
label_4d6848:
    // 0x4d6848: 0xc0b9c64  jal         func_2E7190
label_4d684c:
    if (ctx->pc == 0x4D684Cu) {
        ctx->pc = 0x4D684Cu;
            // 0x4d684c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6850u;
        goto label_4d6850;
    }
    ctx->pc = 0x4D6848u;
    SET_GPR_U32(ctx, 31, 0x4D6850u);
    ctx->pc = 0x4D684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6848u;
            // 0x4d684c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6850u; }
        if (ctx->pc != 0x4D6850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6850u; }
        if (ctx->pc != 0x4D6850u) { return; }
    }
    ctx->pc = 0x4D6850u;
label_4d6850:
    // 0x4d6850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d6850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d6854:
    // 0x4d6854: 0xc0d4104  jal         func_350410
label_4d6858:
    if (ctx->pc == 0x4D6858u) {
        ctx->pc = 0x4D6858u;
            // 0x4d6858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D685Cu;
        goto label_4d685c;
    }
    ctx->pc = 0x4D6854u;
    SET_GPR_U32(ctx, 31, 0x4D685Cu);
    ctx->pc = 0x4D6858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6854u;
            // 0x4d6858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D685Cu; }
        if (ctx->pc != 0x4D685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D685Cu; }
        if (ctx->pc != 0x4D685Cu) { return; }
    }
    ctx->pc = 0x4D685Cu;
label_4d685c:
    // 0x4d685c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d685cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d6860:
    // 0x4d6860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d6860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d6864:
    // 0x4d6864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d6864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d6868:
    // 0x4d6868: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4d6868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4d686c:
    // 0x4d686c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4d686cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d6870:
    // 0x4d6870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d6870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d6874:
    // 0x4d6874: 0xc0d40ac  jal         func_3502B0
label_4d6878:
    if (ctx->pc == 0x4D6878u) {
        ctx->pc = 0x4D6878u;
            // 0x4d6878: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4D687Cu;
        goto label_4d687c;
    }
    ctx->pc = 0x4D6874u;
    SET_GPR_U32(ctx, 31, 0x4D687Cu);
    ctx->pc = 0x4D6878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6874u;
            // 0x4d6878: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D687Cu; }
        if (ctx->pc != 0x4D687Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D687Cu; }
        if (ctx->pc != 0x4D687Cu) { return; }
    }
    ctx->pc = 0x4D687Cu;
label_4d687c:
    // 0x4d687c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d687cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d6880:
    // 0x4d6880: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4d6884:
    if (ctx->pc == 0x4D6884u) {
        ctx->pc = 0x4D6884u;
            // 0x4d6884: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D6888u;
        goto label_4d6888;
    }
    ctx->pc = 0x4D6880u;
    {
        const bool branch_taken_0x4d6880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6880u;
            // 0x4d6884: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6880) {
            ctx->pc = 0x4D68F0u;
            goto label_4d68f0;
        }
    }
    ctx->pc = 0x4D6888u;
label_4d6888:
    // 0x4d6888: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d6888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d688c:
    // 0x4d688c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4d688cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4d6890:
    // 0x4d6890: 0xc135a60  jal         func_4D6980
label_4d6894:
    if (ctx->pc == 0x4D6894u) {
        ctx->pc = 0x4D6894u;
            // 0x4d6894: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4D6898u;
        goto label_4d6898;
    }
    ctx->pc = 0x4D6890u;
    SET_GPR_U32(ctx, 31, 0x4D6898u);
    ctx->pc = 0x4D6894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6890u;
            // 0x4d6894: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6980u;
    if (runtime->hasFunction(0x4D6980u)) {
        auto targetFn = runtime->lookupFunction(0x4D6980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6898u; }
        if (ctx->pc != 0x4D6898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6980_0x4d6980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6898u; }
        if (ctx->pc != 0x4D6898u) { return; }
    }
    ctx->pc = 0x4D6898u;
label_4d6898:
    // 0x4d6898: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d6898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d689c:
    // 0x4d689c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4d689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4d68a0:
    // 0x4d68a0: 0xc04cd60  jal         func_133580
label_4d68a4:
    if (ctx->pc == 0x4D68A4u) {
        ctx->pc = 0x4D68A4u;
            // 0x4d68a4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D68A8u;
        goto label_4d68a8;
    }
    ctx->pc = 0x4D68A0u;
    SET_GPR_U32(ctx, 31, 0x4D68A8u);
    ctx->pc = 0x4D68A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D68A0u;
            // 0x4d68a4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D68A8u; }
        if (ctx->pc != 0x4D68A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D68A8u; }
        if (ctx->pc != 0x4D68A8u) { return; }
    }
    ctx->pc = 0x4D68A8u;
label_4d68a8:
    // 0x4d68a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d68ac:
    // 0x4d68ac: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4d68acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d68b0:
    // 0x4d68b0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4d68b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d68b4:
    // 0x4d68b4: 0xc04e4a4  jal         func_139290
label_4d68b8:
    if (ctx->pc == 0x4D68B8u) {
        ctx->pc = 0x4D68B8u;
            // 0x4d68b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D68BCu;
        goto label_4d68bc;
    }
    ctx->pc = 0x4D68B4u;
    SET_GPR_U32(ctx, 31, 0x4D68BCu);
    ctx->pc = 0x4D68B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D68B4u;
            // 0x4d68b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D68BCu; }
        if (ctx->pc != 0x4D68BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D68BCu; }
        if (ctx->pc != 0x4D68BCu) { return; }
    }
    ctx->pc = 0x4D68BCu;
label_4d68bc:
    // 0x4d68bc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4d68bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d68c0:
    // 0x4d68c0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d68c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d68c4:
    // 0x4d68c4: 0x320f809  jalr        $t9
label_4d68c8:
    if (ctx->pc == 0x4D68C8u) {
        ctx->pc = 0x4D68C8u;
            // 0x4d68c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D68CCu;
        goto label_4d68cc;
    }
    ctx->pc = 0x4D68C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D68CCu);
        ctx->pc = 0x4D68C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D68C4u;
            // 0x4d68c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D68CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D68CCu; }
            if (ctx->pc != 0x4D68CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4D68CCu;
label_4d68cc:
    // 0x4d68cc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4d68ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4d68d0:
    // 0x4d68d0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d68d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d68d4:
    // 0x4d68d4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4d68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d68d8:
    // 0x4d68d8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x4d68d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d68dc:
    // 0x4d68dc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d68dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d68e0:
    // 0x4d68e0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4d68e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4d68e4:
    // 0x4d68e4: 0xc04cfcc  jal         func_133F30
label_4d68e8:
    if (ctx->pc == 0x4D68E8u) {
        ctx->pc = 0x4D68E8u;
            // 0x4d68e8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D68ECu;
        goto label_4d68ec;
    }
    ctx->pc = 0x4D68E4u;
    SET_GPR_U32(ctx, 31, 0x4D68ECu);
    ctx->pc = 0x4D68E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D68E4u;
            // 0x4d68e8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D68ECu; }
        if (ctx->pc != 0x4D68ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D68ECu; }
        if (ctx->pc != 0x4D68ECu) { return; }
    }
    ctx->pc = 0x4D68ECu;
label_4d68ec:
    // 0x4d68ec: 0x0  nop
    ctx->pc = 0x4d68ecu;
    // NOP
label_4d68f0:
    // 0x4d68f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4d68f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4d68f4:
    // 0x4d68f4: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4d68f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4d68f8:
    // 0x4d68f8: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4d68fc:
    if (ctx->pc == 0x4D68FCu) {
        ctx->pc = 0x4D68FCu;
            // 0x4d68fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4D6900u;
        goto label_4d6900;
    }
    ctx->pc = 0x4D68F8u;
    {
        const bool branch_taken_0x4d68f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D68FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D68F8u;
            // 0x4d68fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d68f8) {
            ctx->pc = 0x4D67E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d67e4;
        }
    }
    ctx->pc = 0x4D6900u;
label_4d6900:
    // 0x4d6900: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d6900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d6904:
    // 0x4d6904: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4d6904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d6908:
    // 0x4d6908: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4d690c:
    if (ctx->pc == 0x4D690Cu) {
        ctx->pc = 0x4D6910u;
        goto label_4d6910;
    }
    ctx->pc = 0x4D6908u;
    {
        const bool branch_taken_0x4d6908 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4d6908) {
            ctx->pc = 0x4D6944u;
            goto label_4d6944;
        }
    }
    ctx->pc = 0x4D6910u;
label_4d6910:
    // 0x4d6910: 0xc04e738  jal         func_139CE0
label_4d6914:
    if (ctx->pc == 0x4D6914u) {
        ctx->pc = 0x4D6914u;
            // 0x4d6914: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4D6918u;
        goto label_4d6918;
    }
    ctx->pc = 0x4D6910u;
    SET_GPR_U32(ctx, 31, 0x4D6918u);
    ctx->pc = 0x4D6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6910u;
            // 0x4d6914: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6918u; }
        if (ctx->pc != 0x4D6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6918u; }
        if (ctx->pc != 0x4D6918u) { return; }
    }
    ctx->pc = 0x4D6918u;
label_4d6918:
    // 0x4d6918: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d691c:
    // 0x4d691c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d6920:
    // 0x4d6920: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4d6920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4d6924:
    // 0x4d6924: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d6924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d6928:
    // 0x4d6928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d6928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d692c:
    // 0x4d692c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d6930:
    // 0x4d6930: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4d6930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4d6934:
    // 0x4d6934: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d6938:
    // 0x4d6938: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4d6938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4d693c:
    // 0x4d693c: 0xc055d28  jal         func_1574A0
label_4d6940:
    if (ctx->pc == 0x4D6940u) {
        ctx->pc = 0x4D6940u;
            // 0x4d6940: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D6944u;
        goto label_4d6944;
    }
    ctx->pc = 0x4D693Cu;
    SET_GPR_U32(ctx, 31, 0x4D6944u);
    ctx->pc = 0x4D6940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D693Cu;
            // 0x4d6940: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6944u; }
        if (ctx->pc != 0x4D6944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6944u; }
        if (ctx->pc != 0x4D6944u) { return; }
    }
    ctx->pc = 0x4D6944u;
label_4d6944:
    // 0x4d6944: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4d6944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4d6948:
    // 0x4d6948: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d6948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d694c:
    // 0x4d694c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4d694cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4d6950:
    // 0x4d6950: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4d6950u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4d6954:
    // 0x4d6954: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4d6954u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4d6958:
    // 0x4d6958: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d6958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4d695c:
    // 0x4d695c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d695cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d6960:
    // 0x4d6960: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d6960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d6964:
    // 0x4d6964: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d6964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d6968:
    // 0x4d6968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d6968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d696c:
    // 0x4d696c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d696cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d6970:
    // 0x4d6970: 0x3e00008  jr          $ra
label_4d6974:
    if (ctx->pc == 0x4D6974u) {
        ctx->pc = 0x4D6974u;
            // 0x4d6974: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4D6978u;
        goto label_4d6978;
    }
    ctx->pc = 0x4D6970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6970u;
            // 0x4d6974: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6978u;
label_4d6978:
    // 0x4d6978: 0x0  nop
    ctx->pc = 0x4d6978u;
    // NOP
label_4d697c:
    // 0x4d697c: 0x0  nop
    ctx->pc = 0x4d697cu;
    // NOP
}
