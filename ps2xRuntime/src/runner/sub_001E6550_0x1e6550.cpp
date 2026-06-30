#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6550
// Address: 0x1e6550 - 0x1e6880
void sub_001E6550_0x1e6550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6550_0x1e6550");
#endif

    switch (ctx->pc) {
        case 0x1e6550u: goto label_1e6550;
        case 0x1e6554u: goto label_1e6554;
        case 0x1e6558u: goto label_1e6558;
        case 0x1e655cu: goto label_1e655c;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6568u: goto label_1e6568;
        case 0x1e656cu: goto label_1e656c;
        case 0x1e6570u: goto label_1e6570;
        case 0x1e6574u: goto label_1e6574;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6580u: goto label_1e6580;
        case 0x1e6584u: goto label_1e6584;
        case 0x1e6588u: goto label_1e6588;
        case 0x1e658cu: goto label_1e658c;
        case 0x1e6590u: goto label_1e6590;
        case 0x1e6594u: goto label_1e6594;
        case 0x1e6598u: goto label_1e6598;
        case 0x1e659cu: goto label_1e659c;
        case 0x1e65a0u: goto label_1e65a0;
        case 0x1e65a4u: goto label_1e65a4;
        case 0x1e65a8u: goto label_1e65a8;
        case 0x1e65acu: goto label_1e65ac;
        case 0x1e65b0u: goto label_1e65b0;
        case 0x1e65b4u: goto label_1e65b4;
        case 0x1e65b8u: goto label_1e65b8;
        case 0x1e65bcu: goto label_1e65bc;
        case 0x1e65c0u: goto label_1e65c0;
        case 0x1e65c4u: goto label_1e65c4;
        case 0x1e65c8u: goto label_1e65c8;
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65d0u: goto label_1e65d0;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e65d8u: goto label_1e65d8;
        case 0x1e65dcu: goto label_1e65dc;
        case 0x1e65e0u: goto label_1e65e0;
        case 0x1e65e4u: goto label_1e65e4;
        case 0x1e65e8u: goto label_1e65e8;
        case 0x1e65ecu: goto label_1e65ec;
        case 0x1e65f0u: goto label_1e65f0;
        case 0x1e65f4u: goto label_1e65f4;
        case 0x1e65f8u: goto label_1e65f8;
        case 0x1e65fcu: goto label_1e65fc;
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6604u: goto label_1e6604;
        case 0x1e6608u: goto label_1e6608;
        case 0x1e660cu: goto label_1e660c;
        case 0x1e6610u: goto label_1e6610;
        case 0x1e6614u: goto label_1e6614;
        case 0x1e6618u: goto label_1e6618;
        case 0x1e661cu: goto label_1e661c;
        case 0x1e6620u: goto label_1e6620;
        case 0x1e6624u: goto label_1e6624;
        case 0x1e6628u: goto label_1e6628;
        case 0x1e662cu: goto label_1e662c;
        case 0x1e6630u: goto label_1e6630;
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6638u: goto label_1e6638;
        case 0x1e663cu: goto label_1e663c;
        case 0x1e6640u: goto label_1e6640;
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e664cu: goto label_1e664c;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6654u: goto label_1e6654;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e665cu: goto label_1e665c;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6664u: goto label_1e6664;
        case 0x1e6668u: goto label_1e6668;
        case 0x1e666cu: goto label_1e666c;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6674u: goto label_1e6674;
        case 0x1e6678u: goto label_1e6678;
        case 0x1e667cu: goto label_1e667c;
        case 0x1e6680u: goto label_1e6680;
        case 0x1e6684u: goto label_1e6684;
        case 0x1e6688u: goto label_1e6688;
        case 0x1e668cu: goto label_1e668c;
        case 0x1e6690u: goto label_1e6690;
        case 0x1e6694u: goto label_1e6694;
        case 0x1e6698u: goto label_1e6698;
        case 0x1e669cu: goto label_1e669c;
        case 0x1e66a0u: goto label_1e66a0;
        case 0x1e66a4u: goto label_1e66a4;
        case 0x1e66a8u: goto label_1e66a8;
        case 0x1e66acu: goto label_1e66ac;
        case 0x1e66b0u: goto label_1e66b0;
        case 0x1e66b4u: goto label_1e66b4;
        case 0x1e66b8u: goto label_1e66b8;
        case 0x1e66bcu: goto label_1e66bc;
        case 0x1e66c0u: goto label_1e66c0;
        case 0x1e66c4u: goto label_1e66c4;
        case 0x1e66c8u: goto label_1e66c8;
        case 0x1e66ccu: goto label_1e66cc;
        case 0x1e66d0u: goto label_1e66d0;
        case 0x1e66d4u: goto label_1e66d4;
        case 0x1e66d8u: goto label_1e66d8;
        case 0x1e66dcu: goto label_1e66dc;
        case 0x1e66e0u: goto label_1e66e0;
        case 0x1e66e4u: goto label_1e66e4;
        case 0x1e66e8u: goto label_1e66e8;
        case 0x1e66ecu: goto label_1e66ec;
        case 0x1e66f0u: goto label_1e66f0;
        case 0x1e66f4u: goto label_1e66f4;
        case 0x1e66f8u: goto label_1e66f8;
        case 0x1e66fcu: goto label_1e66fc;
        case 0x1e6700u: goto label_1e6700;
        case 0x1e6704u: goto label_1e6704;
        case 0x1e6708u: goto label_1e6708;
        case 0x1e670cu: goto label_1e670c;
        case 0x1e6710u: goto label_1e6710;
        case 0x1e6714u: goto label_1e6714;
        case 0x1e6718u: goto label_1e6718;
        case 0x1e671cu: goto label_1e671c;
        case 0x1e6720u: goto label_1e6720;
        case 0x1e6724u: goto label_1e6724;
        case 0x1e6728u: goto label_1e6728;
        case 0x1e672cu: goto label_1e672c;
        case 0x1e6730u: goto label_1e6730;
        case 0x1e6734u: goto label_1e6734;
        case 0x1e6738u: goto label_1e6738;
        case 0x1e673cu: goto label_1e673c;
        case 0x1e6740u: goto label_1e6740;
        case 0x1e6744u: goto label_1e6744;
        case 0x1e6748u: goto label_1e6748;
        case 0x1e674cu: goto label_1e674c;
        case 0x1e6750u: goto label_1e6750;
        case 0x1e6754u: goto label_1e6754;
        case 0x1e6758u: goto label_1e6758;
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6760u: goto label_1e6760;
        case 0x1e6764u: goto label_1e6764;
        case 0x1e6768u: goto label_1e6768;
        case 0x1e676cu: goto label_1e676c;
        case 0x1e6770u: goto label_1e6770;
        case 0x1e6774u: goto label_1e6774;
        case 0x1e6778u: goto label_1e6778;
        case 0x1e677cu: goto label_1e677c;
        case 0x1e6780u: goto label_1e6780;
        case 0x1e6784u: goto label_1e6784;
        case 0x1e6788u: goto label_1e6788;
        case 0x1e678cu: goto label_1e678c;
        case 0x1e6790u: goto label_1e6790;
        case 0x1e6794u: goto label_1e6794;
        case 0x1e6798u: goto label_1e6798;
        case 0x1e679cu: goto label_1e679c;
        case 0x1e67a0u: goto label_1e67a0;
        case 0x1e67a4u: goto label_1e67a4;
        case 0x1e67a8u: goto label_1e67a8;
        case 0x1e67acu: goto label_1e67ac;
        case 0x1e67b0u: goto label_1e67b0;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67bcu: goto label_1e67bc;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67c8u: goto label_1e67c8;
        case 0x1e67ccu: goto label_1e67cc;
        case 0x1e67d0u: goto label_1e67d0;
        case 0x1e67d4u: goto label_1e67d4;
        case 0x1e67d8u: goto label_1e67d8;
        case 0x1e67dcu: goto label_1e67dc;
        case 0x1e67e0u: goto label_1e67e0;
        case 0x1e67e4u: goto label_1e67e4;
        case 0x1e67e8u: goto label_1e67e8;
        case 0x1e67ecu: goto label_1e67ec;
        case 0x1e67f0u: goto label_1e67f0;
        case 0x1e67f4u: goto label_1e67f4;
        case 0x1e67f8u: goto label_1e67f8;
        case 0x1e67fcu: goto label_1e67fc;
        case 0x1e6800u: goto label_1e6800;
        case 0x1e6804u: goto label_1e6804;
        case 0x1e6808u: goto label_1e6808;
        case 0x1e680cu: goto label_1e680c;
        case 0x1e6810u: goto label_1e6810;
        case 0x1e6814u: goto label_1e6814;
        case 0x1e6818u: goto label_1e6818;
        case 0x1e681cu: goto label_1e681c;
        case 0x1e6820u: goto label_1e6820;
        case 0x1e6824u: goto label_1e6824;
        case 0x1e6828u: goto label_1e6828;
        case 0x1e682cu: goto label_1e682c;
        case 0x1e6830u: goto label_1e6830;
        case 0x1e6834u: goto label_1e6834;
        case 0x1e6838u: goto label_1e6838;
        case 0x1e683cu: goto label_1e683c;
        case 0x1e6840u: goto label_1e6840;
        case 0x1e6844u: goto label_1e6844;
        case 0x1e6848u: goto label_1e6848;
        case 0x1e684cu: goto label_1e684c;
        case 0x1e6850u: goto label_1e6850;
        case 0x1e6854u: goto label_1e6854;
        case 0x1e6858u: goto label_1e6858;
        case 0x1e685cu: goto label_1e685c;
        case 0x1e6860u: goto label_1e6860;
        case 0x1e6864u: goto label_1e6864;
        case 0x1e6868u: goto label_1e6868;
        case 0x1e686cu: goto label_1e686c;
        case 0x1e6870u: goto label_1e6870;
        case 0x1e6874u: goto label_1e6874;
        case 0x1e6878u: goto label_1e6878;
        case 0x1e687cu: goto label_1e687c;
        default: break;
    }

    ctx->pc = 0x1e6550u;

label_1e6550:
    // 0x1e6550: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e6554:
    // 0x1e6554: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e6558:
    // 0x1e6558: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e655c:
    // 0x1e655c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e6560:
    // 0x1e6560: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e6564:
    // 0x1e6564: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e6568:
    // 0x1e6568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e656c:
    // 0x1e656c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1e656cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_1e6570:
    // 0x1e6570: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e6574:
    // 0x1e6574: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e6578:
    // 0x1e6578: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e657c:
    // 0x1e657c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e6580:
    // 0x1e6580: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1e6580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1e6584:
    // 0x1e6584: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
label_1e6588:
    // 0x1e6588: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1e6588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1e658c:
    // 0x1e658c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e658cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e6590:
    // 0x1e6590: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e6590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1e6594:
    // 0x1e6594: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e6598:
    // 0x1e6598: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1e6598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1e659c:
    // 0x1e659c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e659cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e65a0:
    // 0x1e65a0: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1e65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_1e65a4:
    // 0x1e65a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e65a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e65a8:
    // 0x1e65a8: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1e65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_1e65ac:
    // 0x1e65ac: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x1e65acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_1e65b0:
    // 0x1e65b0: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x1e65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_1e65b4:
    // 0x1e65b4: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1e65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_1e65b8:
    // 0x1e65b8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1e65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1e65bc:
    // 0x1e65bc: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1e65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_1e65c0:
    // 0x1e65c0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1e65c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_1e65c4:
    // 0x1e65c4: 0x3e00008  jr          $ra
label_1e65c8:
    if (ctx->pc == 0x1E65C8u) {
        ctx->pc = 0x1E65C8u;
            // 0x1e65c8: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x1E65CCu;
        goto label_1e65cc;
    }
    ctx->pc = 0x1E65C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E65C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65C4u;
            // 0x1e65c8: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E65CCu;
label_1e65cc:
    // 0x1e65cc: 0x0  nop
    ctx->pc = 0x1e65ccu;
    // NOP
label_1e65d0:
    // 0x1e65d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e65d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e65d4:
    // 0x1e65d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e65d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e65d8:
    // 0x1e65d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e65d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e65dc:
    // 0x1e65dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e65dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e65e0:
    // 0x1e65e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e65e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e65e4:
    // 0x1e65e4: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_1e65e8:
    if (ctx->pc == 0x1E65E8u) {
        ctx->pc = 0x1E65E8u;
            // 0x1e65e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E65ECu;
        goto label_1e65ec;
    }
    ctx->pc = 0x1E65E4u;
    {
        const bool branch_taken_0x1e65e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65E4u;
            // 0x1e65e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65e4) {
            ctx->pc = 0x1E669Cu;
            goto label_1e669c;
        }
    }
    ctx->pc = 0x1E65ECu;
label_1e65ec:
    // 0x1e65ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e65f0:
    // 0x1e65f0: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1e65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1e65f4:
    // 0x1e65f4: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1e65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
label_1e65f8:
    // 0x1e65f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1e65fc:
    if (ctx->pc == 0x1E65FCu) {
        ctx->pc = 0x1E65FCu;
            // 0x1e65fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1E6600u;
        goto label_1e6600;
    }
    ctx->pc = 0x1E65F8u;
    {
        const bool branch_taken_0x1e65f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65F8u;
            // 0x1e65fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65f8) {
            ctx->pc = 0x1E6640u;
            goto label_1e6640;
        }
    }
    ctx->pc = 0x1E6600u;
label_1e6600:
    // 0x1e6600: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e6600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e6604:
    // 0x1e6604: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e6608:
    // 0x1e6608: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e6608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e660c:
    // 0x1e660c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e6610:
    if (ctx->pc == 0x1E6610u) {
        ctx->pc = 0x1E6614u;
        goto label_1e6614;
    }
    ctx->pc = 0x1E660Cu;
    {
        const bool branch_taken_0x1e660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e660c) {
            ctx->pc = 0x1E6640u;
            goto label_1e6640;
        }
    }
    ctx->pc = 0x1E6614u;
label_1e6614:
    // 0x1e6614: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e6614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e6618:
    // 0x1e6618: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e661c:
    // 0x1e661c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e6620:
    // 0x1e6620: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e6624:
    // 0x1e6624: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e6628:
    // 0x1e6628: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1e6628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1e662c:
    // 0x1e662c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1e662cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_1e6630:
    // 0x1e6630: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e6630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e6634:
    // 0x1e6634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6638:
    // 0x1e6638: 0xc0a7ab4  jal         func_29EAD0
label_1e663c:
    if (ctx->pc == 0x1E663Cu) {
        ctx->pc = 0x1E663Cu;
            // 0x1e663c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E6640u;
        goto label_1e6640;
    }
    ctx->pc = 0x1E6638u;
    SET_GPR_U32(ctx, 31, 0x1E6640u);
    ctx->pc = 0x1E663Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6638u;
            // 0x1e663c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6640u; }
        if (ctx->pc != 0x1E6640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6640u; }
        if (ctx->pc != 0x1E6640u) { return; }
    }
    ctx->pc = 0x1E6640u;
label_1e6640:
    // 0x1e6640: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_1e6644:
    if (ctx->pc == 0x1E6644u) {
        ctx->pc = 0x1E6644u;
            // 0x1e6644: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E6648u;
        goto label_1e6648;
    }
    ctx->pc = 0x1E6640u;
    {
        const bool branch_taken_0x1e6640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6640) {
            ctx->pc = 0x1E6644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6640u;
            // 0x1e6644: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6678u;
            goto label_1e6678;
        }
    }
    ctx->pc = 0x1E6648u;
label_1e6648:
    // 0x1e6648: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e664c:
    // 0x1e664c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e6650:
    // 0x1e6650: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1e6654:
    if (ctx->pc == 0x1E6654u) {
        ctx->pc = 0x1E6654u;
            // 0x1e6654: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6658u;
        goto label_1e6658;
    }
    ctx->pc = 0x1E6650u;
    {
        const bool branch_taken_0x1e6650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6650u;
            // 0x1e6654: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6650) {
            ctx->pc = 0x1E6674u;
            goto label_1e6674;
        }
    }
    ctx->pc = 0x1E6658u;
label_1e6658:
    // 0x1e6658: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e665c:
    // 0x1e665c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e6660:
    // 0x1e6660: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e6664:
    if (ctx->pc == 0x1E6664u) {
        ctx->pc = 0x1E6664u;
            // 0x1e6664: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6668u;
        goto label_1e6668;
    }
    ctx->pc = 0x1E6660u;
    {
        const bool branch_taken_0x1e6660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6660u;
            // 0x1e6664: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6660) {
            ctx->pc = 0x1E6674u;
            goto label_1e6674;
        }
    }
    ctx->pc = 0x1E6668u;
label_1e6668:
    // 0x1e6668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e6668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e666c:
    // 0x1e666c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e6670:
    // 0x1e6670: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e6674:
    // 0x1e6674: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e6674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e6678:
    // 0x1e6678: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e667c:
    // 0x1e667c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1e6680:
    if (ctx->pc == 0x1E6680u) {
        ctx->pc = 0x1E6680u;
            // 0x1e6680: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6684u;
        goto label_1e6684;
    }
    ctx->pc = 0x1E667Cu;
    {
        const bool branch_taken_0x1e667c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e667c) {
            ctx->pc = 0x1E6680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E667Cu;
            // 0x1e6680: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E66A0u;
            goto label_1e66a0;
        }
    }
    ctx->pc = 0x1E6684u;
label_1e6684:
    // 0x1e6684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e6684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e6688:
    // 0x1e6688: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e6688u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1e668c:
    // 0x1e668c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e668cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e6690:
    // 0x1e6690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6694:
    // 0x1e6694: 0xc0a7ab4  jal         func_29EAD0
label_1e6698:
    if (ctx->pc == 0x1E6698u) {
        ctx->pc = 0x1E6698u;
            // 0x1e6698: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E669Cu;
        goto label_1e669c;
    }
    ctx->pc = 0x1E6694u;
    SET_GPR_U32(ctx, 31, 0x1E669Cu);
    ctx->pc = 0x1E6698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6694u;
            // 0x1e6698: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E669Cu; }
        if (ctx->pc != 0x1E669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E669Cu; }
        if (ctx->pc != 0x1E669Cu) { return; }
    }
    ctx->pc = 0x1E669Cu;
label_1e669c:
    // 0x1e669c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e669cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e66a0:
    // 0x1e66a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e66a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e66a4:
    // 0x1e66a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e66a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e66a8:
    // 0x1e66a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e66a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e66ac:
    // 0x1e66ac: 0x3e00008  jr          $ra
label_1e66b0:
    if (ctx->pc == 0x1E66B0u) {
        ctx->pc = 0x1E66B0u;
            // 0x1e66b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E66B4u;
        goto label_1e66b4;
    }
    ctx->pc = 0x1E66ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E66B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66ACu;
            // 0x1e66b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E66B4u;
label_1e66b4:
    // 0x1e66b4: 0x0  nop
    ctx->pc = 0x1e66b4u;
    // NOP
label_1e66b8:
    // 0x1e66b8: 0x0  nop
    ctx->pc = 0x1e66b8u;
    // NOP
label_1e66bc:
    // 0x1e66bc: 0x0  nop
    ctx->pc = 0x1e66bcu;
    // NOP
label_1e66c0:
    // 0x1e66c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e66c4:
    // 0x1e66c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e66c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e66c8:
    // 0x1e66c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e66c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e66cc:
    // 0x1e66cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e66ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e66d0:
    // 0x1e66d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e66d4:
    // 0x1e66d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e66d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e66d8:
    // 0x1e66d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e66dc:
    // 0x1e66dc: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1e66dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e66e0:
    // 0x1e66e0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e66e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e66e4:
    // 0x1e66e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e66e8:
    // 0x1e66e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e66ec:
    // 0x1e66ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e66f0:
    // 0x1e66f0: 0x2039821  addu        $s3, $s0, $v1
    ctx->pc = 0x1e66f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e66f4:
    // 0x1e66f4: 0x1213000c  beq         $s0, $s3, . + 4 + (0xC << 2)
label_1e66f8:
    if (ctx->pc == 0x1E66F8u) {
        ctx->pc = 0x1E66F8u;
            // 0x1e66f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E66FCu;
        goto label_1e66fc;
    }
    ctx->pc = 0x1E66F4u;
    {
        const bool branch_taken_0x1e66f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1E66F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66F4u;
            // 0x1e66f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66f4) {
            ctx->pc = 0x1E6728u;
            goto label_1e6728;
        }
    }
    ctx->pc = 0x1E66FCu;
label_1e66fc:
    // 0x1e66fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6700:
    // 0x1e6700: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e6704:
    if (ctx->pc == 0x1E6704u) {
        ctx->pc = 0x1E6708u;
        goto label_1e6708;
    }
    ctx->pc = 0x1E6700u;
    {
        const bool branch_taken_0x1e6700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6700) {
            ctx->pc = 0x1E6718u;
            goto label_1e6718;
        }
    }
    ctx->pc = 0x1E6708u;
label_1e6708:
    // 0x1e6708: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e670c:
    // 0x1e670c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e670cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e6710:
    // 0x1e6710: 0x320f809  jalr        $t9
label_1e6714:
    if (ctx->pc == 0x1E6714u) {
        ctx->pc = 0x1E6714u;
            // 0x1e6714: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6718u;
        goto label_1e6718;
    }
    ctx->pc = 0x1E6710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6718u);
        ctx->pc = 0x1E6714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6710u;
            // 0x1e6714: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6718u; }
            if (ctx->pc != 0x1E6718u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6718u;
label_1e6718:
    // 0x1e6718: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1e671c:
    // 0x1e671c: 0x5613fff8  bnel        $s0, $s3, . + 4 + (-0x8 << 2)
label_1e6720:
    if (ctx->pc == 0x1E6720u) {
        ctx->pc = 0x1E6720u;
            // 0x1e6720: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1E6724u;
        goto label_1e6724;
    }
    ctx->pc = 0x1E671Cu;
    {
        const bool branch_taken_0x1e671c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e671c) {
            ctx->pc = 0x1E6720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E671Cu;
            // 0x1e6720: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e6700;
        }
    }
    ctx->pc = 0x1E6724u;
label_1e6724:
    // 0x1e6724: 0x0  nop
    ctx->pc = 0x1e6724u;
    // NOP
label_1e6728:
    // 0x1e6728: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_1e672c:
    if (ctx->pc == 0x1E672Cu) {
        ctx->pc = 0x1E672Cu;
            // 0x1e672c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1E6730u;
        goto label_1e6730;
    }
    ctx->pc = 0x1E6728u;
    {
        const bool branch_taken_0x1e6728 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6728) {
            ctx->pc = 0x1E672Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6728u;
            // 0x1e672c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6748u;
            goto label_1e6748;
        }
    }
    ctx->pc = 0x1E6730u;
label_1e6730:
    // 0x1e6730: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e6730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e6734:
    // 0x1e6734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e6738:
    // 0x1e6738: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e6738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e673c:
    // 0x1e673c: 0x320f809  jalr        $t9
label_1e6740:
    if (ctx->pc == 0x1E6740u) {
        ctx->pc = 0x1E6740u;
            // 0x1e6740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E6744u;
        goto label_1e6744;
    }
    ctx->pc = 0x1E673Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6744u);
        ctx->pc = 0x1E6740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E673Cu;
            // 0x1e6740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6744u; }
            if (ctx->pc != 0x1E6744u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6744u;
label_1e6744:
    // 0x1e6744: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6748:
    // 0x1e6748: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e674c:
    // 0x1e674c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e674cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6750:
    // 0x1e6750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6754:
    // 0x1e6754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6758:
    // 0x1e6758: 0x3e00008  jr          $ra
label_1e675c:
    if (ctx->pc == 0x1E675Cu) {
        ctx->pc = 0x1E675Cu;
            // 0x1e675c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E6760u;
        goto label_1e6760;
    }
    ctx->pc = 0x1E6758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6758u;
            // 0x1e675c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6760u;
label_1e6760:
    // 0x1e6760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e6764:
    // 0x1e6764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e6764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e6768:
    // 0x1e6768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e676c:
    // 0x1e676c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6770:
    // 0x1e6770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6774:
    // 0x1e6774: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1e6774u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e6778:
    // 0x1e6778: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e677c:
    // 0x1e677c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e677cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e6780:
    // 0x1e6780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e6784:
    // 0x1e6784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e6788:
    // 0x1e6788: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e678c:
    // 0x1e678c: 0x1230000c  beq         $s1, $s0, . + 4 + (0xC << 2)
label_1e6790:
    if (ctx->pc == 0x1E6790u) {
        ctx->pc = 0x1E6790u;
            // 0x1e6790: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6794u;
        goto label_1e6794;
    }
    ctx->pc = 0x1E678Cu;
    {
        const bool branch_taken_0x1e678c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E6790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E678Cu;
            // 0x1e6790: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e678c) {
            ctx->pc = 0x1E67C0u;
            goto label_1e67c0;
        }
    }
    ctx->pc = 0x1E6794u;
label_1e6794:
    // 0x1e6794: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e6794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e6798:
    // 0x1e6798: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e679c:
    if (ctx->pc == 0x1E679Cu) {
        ctx->pc = 0x1E67A0u;
        goto label_1e67a0;
    }
    ctx->pc = 0x1E6798u;
    {
        const bool branch_taken_0x1e6798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6798) {
            ctx->pc = 0x1E67B0u;
            goto label_1e67b0;
        }
    }
    ctx->pc = 0x1E67A0u;
label_1e67a0:
    // 0x1e67a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e67a4:
    // 0x1e67a4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e67a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e67a8:
    // 0x1e67a8: 0x320f809  jalr        $t9
label_1e67ac:
    if (ctx->pc == 0x1E67ACu) {
        ctx->pc = 0x1E67ACu;
            // 0x1e67ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E67B0u;
        goto label_1e67b0;
    }
    ctx->pc = 0x1E67A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E67B0u);
        ctx->pc = 0x1E67ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67A8u;
            // 0x1e67ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E67B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E67B0u; }
            if (ctx->pc != 0x1E67B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E67B0u;
label_1e67b0:
    // 0x1e67b0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1e67b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1e67b4:
    // 0x1e67b4: 0x5630fff8  bnel        $s1, $s0, . + 4 + (-0x8 << 2)
label_1e67b8:
    if (ctx->pc == 0x1E67B8u) {
        ctx->pc = 0x1E67B8u;
            // 0x1e67b8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1E67BCu;
        goto label_1e67bc;
    }
    ctx->pc = 0x1E67B4u;
    {
        const bool branch_taken_0x1e67b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e67b4) {
            ctx->pc = 0x1E67B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67B4u;
            // 0x1e67b8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e6798;
        }
    }
    ctx->pc = 0x1E67BCu;
label_1e67bc:
    // 0x1e67bc: 0x0  nop
    ctx->pc = 0x1e67bcu;
    // NOP
label_1e67c0:
    // 0x1e67c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e67c4:
    // 0x1e67c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e67c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e67c8:
    // 0x1e67c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e67c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e67cc:
    // 0x1e67cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e67ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e67d0:
    // 0x1e67d0: 0x3e00008  jr          $ra
label_1e67d4:
    if (ctx->pc == 0x1E67D4u) {
        ctx->pc = 0x1E67D4u;
            // 0x1e67d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E67D8u;
        goto label_1e67d8;
    }
    ctx->pc = 0x1E67D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E67D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67D0u;
            // 0x1e67d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E67D8u;
label_1e67d8:
    // 0x1e67d8: 0x0  nop
    ctx->pc = 0x1e67d8u;
    // NOP
label_1e67dc:
    // 0x1e67dc: 0x0  nop
    ctx->pc = 0x1e67dcu;
    // NOP
label_1e67e0:
    // 0x1e67e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e67e4:
    // 0x1e67e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e67e8:
    // 0x1e67e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e67e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e67ec:
    // 0x1e67ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e67ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e67f0:
    // 0x1e67f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e67f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e67f4:
    // 0x1e67f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e67f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e67f8:
    // 0x1e67f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e67f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e67fc:
    // 0x1e67fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e67fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e6800:
    // 0x1e6800: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1e6800u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e6804:
    // 0x1e6804: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1e6804u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1e6808:
    // 0x1e6808: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e680c:
    // 0x1e680c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e680cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e6810:
    // 0x1e6810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e6814:
    // 0x1e6814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e6818:
    // 0x1e6818: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1e6818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e681c:
    // 0x1e681c: 0x1230000e  beq         $s1, $s0, . + 4 + (0xE << 2)
label_1e6820:
    if (ctx->pc == 0x1E6820u) {
        ctx->pc = 0x1E6820u;
            // 0x1e6820: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1E6824u;
        goto label_1e6824;
    }
    ctx->pc = 0x1E681Cu;
    {
        const bool branch_taken_0x1e681c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E6820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E681Cu;
            // 0x1e6820: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e681c) {
            ctx->pc = 0x1E6858u;
            goto label_1e6858;
        }
    }
    ctx->pc = 0x1E6824u;
label_1e6824:
    // 0x1e6824: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e6828:
    // 0x1e6828: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1e682c:
    if (ctx->pc == 0x1E682Cu) {
        ctx->pc = 0x1E6830u;
        goto label_1e6830;
    }
    ctx->pc = 0x1E6828u;
    {
        const bool branch_taken_0x1e6828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6828) {
            ctx->pc = 0x1E6848u;
            goto label_1e6848;
        }
    }
    ctx->pc = 0x1E6830u;
label_1e6830:
    // 0x1e6830: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6834:
    // 0x1e6834: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e6834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e6838:
    // 0x1e6838: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1e6838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1e683c:
    // 0x1e683c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e683cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e6840:
    // 0x1e6840: 0x320f809  jalr        $t9
label_1e6844:
    if (ctx->pc == 0x1E6844u) {
        ctx->pc = 0x1E6844u;
            // 0x1e6844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6848u;
        goto label_1e6848;
    }
    ctx->pc = 0x1E6840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6848u);
        ctx->pc = 0x1E6844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6840u;
            // 0x1e6844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E6848u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6848u; }
            if (ctx->pc != 0x1E6848u) { return; }
        }
        }
    }
    ctx->pc = 0x1E6848u;
label_1e6848:
    // 0x1e6848: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1e684c:
    // 0x1e684c: 0x5630fff6  bnel        $s1, $s0, . + 4 + (-0xA << 2)
label_1e6850:
    if (ctx->pc == 0x1E6850u) {
        ctx->pc = 0x1E6850u;
            // 0x1e6850: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1E6854u;
        goto label_1e6854;
    }
    ctx->pc = 0x1E684Cu;
    {
        const bool branch_taken_0x1e684c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e684c) {
            ctx->pc = 0x1E6850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E684Cu;
            // 0x1e6850: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E6828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e6828;
        }
    }
    ctx->pc = 0x1E6854u;
label_1e6854:
    // 0x1e6854: 0x0  nop
    ctx->pc = 0x1e6854u;
    // NOP
label_1e6858:
    // 0x1e6858: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e685c:
    // 0x1e685c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e685cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6860:
    // 0x1e6860: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e6860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e6864:
    // 0x1e6864: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e6864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6868:
    // 0x1e6868: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e686c:
    // 0x1e686c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e686cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6870:
    // 0x1e6870: 0x3e00008  jr          $ra
label_1e6874:
    if (ctx->pc == 0x1E6874u) {
        ctx->pc = 0x1E6874u;
            // 0x1e6874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E6878u;
        goto label_1e6878;
    }
    ctx->pc = 0x1E6870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6870u;
            // 0x1e6874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6878u;
label_1e6878:
    // 0x1e6878: 0x0  nop
    ctx->pc = 0x1e6878u;
    // NOP
label_1e687c:
    // 0x1e687c: 0x0  nop
    ctx->pc = 0x1e687cu;
    // NOP
}
