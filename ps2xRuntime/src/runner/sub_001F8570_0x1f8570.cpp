#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8570
// Address: 0x1f8570 - 0x1f89e0
void sub_001F8570_0x1f8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8570_0x1f8570");
#endif

    switch (ctx->pc) {
        case 0x1f8570u: goto label_1f8570;
        case 0x1f8574u: goto label_1f8574;
        case 0x1f8578u: goto label_1f8578;
        case 0x1f857cu: goto label_1f857c;
        case 0x1f8580u: goto label_1f8580;
        case 0x1f8584u: goto label_1f8584;
        case 0x1f8588u: goto label_1f8588;
        case 0x1f858cu: goto label_1f858c;
        case 0x1f8590u: goto label_1f8590;
        case 0x1f8594u: goto label_1f8594;
        case 0x1f8598u: goto label_1f8598;
        case 0x1f859cu: goto label_1f859c;
        case 0x1f85a0u: goto label_1f85a0;
        case 0x1f85a4u: goto label_1f85a4;
        case 0x1f85a8u: goto label_1f85a8;
        case 0x1f85acu: goto label_1f85ac;
        case 0x1f85b0u: goto label_1f85b0;
        case 0x1f85b4u: goto label_1f85b4;
        case 0x1f85b8u: goto label_1f85b8;
        case 0x1f85bcu: goto label_1f85bc;
        case 0x1f85c0u: goto label_1f85c0;
        case 0x1f85c4u: goto label_1f85c4;
        case 0x1f85c8u: goto label_1f85c8;
        case 0x1f85ccu: goto label_1f85cc;
        case 0x1f85d0u: goto label_1f85d0;
        case 0x1f85d4u: goto label_1f85d4;
        case 0x1f85d8u: goto label_1f85d8;
        case 0x1f85dcu: goto label_1f85dc;
        case 0x1f85e0u: goto label_1f85e0;
        case 0x1f85e4u: goto label_1f85e4;
        case 0x1f85e8u: goto label_1f85e8;
        case 0x1f85ecu: goto label_1f85ec;
        case 0x1f85f0u: goto label_1f85f0;
        case 0x1f85f4u: goto label_1f85f4;
        case 0x1f85f8u: goto label_1f85f8;
        case 0x1f85fcu: goto label_1f85fc;
        case 0x1f8600u: goto label_1f8600;
        case 0x1f8604u: goto label_1f8604;
        case 0x1f8608u: goto label_1f8608;
        case 0x1f860cu: goto label_1f860c;
        case 0x1f8610u: goto label_1f8610;
        case 0x1f8614u: goto label_1f8614;
        case 0x1f8618u: goto label_1f8618;
        case 0x1f861cu: goto label_1f861c;
        case 0x1f8620u: goto label_1f8620;
        case 0x1f8624u: goto label_1f8624;
        case 0x1f8628u: goto label_1f8628;
        case 0x1f862cu: goto label_1f862c;
        case 0x1f8630u: goto label_1f8630;
        case 0x1f8634u: goto label_1f8634;
        case 0x1f8638u: goto label_1f8638;
        case 0x1f863cu: goto label_1f863c;
        case 0x1f8640u: goto label_1f8640;
        case 0x1f8644u: goto label_1f8644;
        case 0x1f8648u: goto label_1f8648;
        case 0x1f864cu: goto label_1f864c;
        case 0x1f8650u: goto label_1f8650;
        case 0x1f8654u: goto label_1f8654;
        case 0x1f8658u: goto label_1f8658;
        case 0x1f865cu: goto label_1f865c;
        case 0x1f8660u: goto label_1f8660;
        case 0x1f8664u: goto label_1f8664;
        case 0x1f8668u: goto label_1f8668;
        case 0x1f866cu: goto label_1f866c;
        case 0x1f8670u: goto label_1f8670;
        case 0x1f8674u: goto label_1f8674;
        case 0x1f8678u: goto label_1f8678;
        case 0x1f867cu: goto label_1f867c;
        case 0x1f8680u: goto label_1f8680;
        case 0x1f8684u: goto label_1f8684;
        case 0x1f8688u: goto label_1f8688;
        case 0x1f868cu: goto label_1f868c;
        case 0x1f8690u: goto label_1f8690;
        case 0x1f8694u: goto label_1f8694;
        case 0x1f8698u: goto label_1f8698;
        case 0x1f869cu: goto label_1f869c;
        case 0x1f86a0u: goto label_1f86a0;
        case 0x1f86a4u: goto label_1f86a4;
        case 0x1f86a8u: goto label_1f86a8;
        case 0x1f86acu: goto label_1f86ac;
        case 0x1f86b0u: goto label_1f86b0;
        case 0x1f86b4u: goto label_1f86b4;
        case 0x1f86b8u: goto label_1f86b8;
        case 0x1f86bcu: goto label_1f86bc;
        case 0x1f86c0u: goto label_1f86c0;
        case 0x1f86c4u: goto label_1f86c4;
        case 0x1f86c8u: goto label_1f86c8;
        case 0x1f86ccu: goto label_1f86cc;
        case 0x1f86d0u: goto label_1f86d0;
        case 0x1f86d4u: goto label_1f86d4;
        case 0x1f86d8u: goto label_1f86d8;
        case 0x1f86dcu: goto label_1f86dc;
        case 0x1f86e0u: goto label_1f86e0;
        case 0x1f86e4u: goto label_1f86e4;
        case 0x1f86e8u: goto label_1f86e8;
        case 0x1f86ecu: goto label_1f86ec;
        case 0x1f86f0u: goto label_1f86f0;
        case 0x1f86f4u: goto label_1f86f4;
        case 0x1f86f8u: goto label_1f86f8;
        case 0x1f86fcu: goto label_1f86fc;
        case 0x1f8700u: goto label_1f8700;
        case 0x1f8704u: goto label_1f8704;
        case 0x1f8708u: goto label_1f8708;
        case 0x1f870cu: goto label_1f870c;
        case 0x1f8710u: goto label_1f8710;
        case 0x1f8714u: goto label_1f8714;
        case 0x1f8718u: goto label_1f8718;
        case 0x1f871cu: goto label_1f871c;
        case 0x1f8720u: goto label_1f8720;
        case 0x1f8724u: goto label_1f8724;
        case 0x1f8728u: goto label_1f8728;
        case 0x1f872cu: goto label_1f872c;
        case 0x1f8730u: goto label_1f8730;
        case 0x1f8734u: goto label_1f8734;
        case 0x1f8738u: goto label_1f8738;
        case 0x1f873cu: goto label_1f873c;
        case 0x1f8740u: goto label_1f8740;
        case 0x1f8744u: goto label_1f8744;
        case 0x1f8748u: goto label_1f8748;
        case 0x1f874cu: goto label_1f874c;
        case 0x1f8750u: goto label_1f8750;
        case 0x1f8754u: goto label_1f8754;
        case 0x1f8758u: goto label_1f8758;
        case 0x1f875cu: goto label_1f875c;
        case 0x1f8760u: goto label_1f8760;
        case 0x1f8764u: goto label_1f8764;
        case 0x1f8768u: goto label_1f8768;
        case 0x1f876cu: goto label_1f876c;
        case 0x1f8770u: goto label_1f8770;
        case 0x1f8774u: goto label_1f8774;
        case 0x1f8778u: goto label_1f8778;
        case 0x1f877cu: goto label_1f877c;
        case 0x1f8780u: goto label_1f8780;
        case 0x1f8784u: goto label_1f8784;
        case 0x1f8788u: goto label_1f8788;
        case 0x1f878cu: goto label_1f878c;
        case 0x1f8790u: goto label_1f8790;
        case 0x1f8794u: goto label_1f8794;
        case 0x1f8798u: goto label_1f8798;
        case 0x1f879cu: goto label_1f879c;
        case 0x1f87a0u: goto label_1f87a0;
        case 0x1f87a4u: goto label_1f87a4;
        case 0x1f87a8u: goto label_1f87a8;
        case 0x1f87acu: goto label_1f87ac;
        case 0x1f87b0u: goto label_1f87b0;
        case 0x1f87b4u: goto label_1f87b4;
        case 0x1f87b8u: goto label_1f87b8;
        case 0x1f87bcu: goto label_1f87bc;
        case 0x1f87c0u: goto label_1f87c0;
        case 0x1f87c4u: goto label_1f87c4;
        case 0x1f87c8u: goto label_1f87c8;
        case 0x1f87ccu: goto label_1f87cc;
        case 0x1f87d0u: goto label_1f87d0;
        case 0x1f87d4u: goto label_1f87d4;
        case 0x1f87d8u: goto label_1f87d8;
        case 0x1f87dcu: goto label_1f87dc;
        case 0x1f87e0u: goto label_1f87e0;
        case 0x1f87e4u: goto label_1f87e4;
        case 0x1f87e8u: goto label_1f87e8;
        case 0x1f87ecu: goto label_1f87ec;
        case 0x1f87f0u: goto label_1f87f0;
        case 0x1f87f4u: goto label_1f87f4;
        case 0x1f87f8u: goto label_1f87f8;
        case 0x1f87fcu: goto label_1f87fc;
        case 0x1f8800u: goto label_1f8800;
        case 0x1f8804u: goto label_1f8804;
        case 0x1f8808u: goto label_1f8808;
        case 0x1f880cu: goto label_1f880c;
        case 0x1f8810u: goto label_1f8810;
        case 0x1f8814u: goto label_1f8814;
        case 0x1f8818u: goto label_1f8818;
        case 0x1f881cu: goto label_1f881c;
        case 0x1f8820u: goto label_1f8820;
        case 0x1f8824u: goto label_1f8824;
        case 0x1f8828u: goto label_1f8828;
        case 0x1f882cu: goto label_1f882c;
        case 0x1f8830u: goto label_1f8830;
        case 0x1f8834u: goto label_1f8834;
        case 0x1f8838u: goto label_1f8838;
        case 0x1f883cu: goto label_1f883c;
        case 0x1f8840u: goto label_1f8840;
        case 0x1f8844u: goto label_1f8844;
        case 0x1f8848u: goto label_1f8848;
        case 0x1f884cu: goto label_1f884c;
        case 0x1f8850u: goto label_1f8850;
        case 0x1f8854u: goto label_1f8854;
        case 0x1f8858u: goto label_1f8858;
        case 0x1f885cu: goto label_1f885c;
        case 0x1f8860u: goto label_1f8860;
        case 0x1f8864u: goto label_1f8864;
        case 0x1f8868u: goto label_1f8868;
        case 0x1f886cu: goto label_1f886c;
        case 0x1f8870u: goto label_1f8870;
        case 0x1f8874u: goto label_1f8874;
        case 0x1f8878u: goto label_1f8878;
        case 0x1f887cu: goto label_1f887c;
        case 0x1f8880u: goto label_1f8880;
        case 0x1f8884u: goto label_1f8884;
        case 0x1f8888u: goto label_1f8888;
        case 0x1f888cu: goto label_1f888c;
        case 0x1f8890u: goto label_1f8890;
        case 0x1f8894u: goto label_1f8894;
        case 0x1f8898u: goto label_1f8898;
        case 0x1f889cu: goto label_1f889c;
        case 0x1f88a0u: goto label_1f88a0;
        case 0x1f88a4u: goto label_1f88a4;
        case 0x1f88a8u: goto label_1f88a8;
        case 0x1f88acu: goto label_1f88ac;
        case 0x1f88b0u: goto label_1f88b0;
        case 0x1f88b4u: goto label_1f88b4;
        case 0x1f88b8u: goto label_1f88b8;
        case 0x1f88bcu: goto label_1f88bc;
        case 0x1f88c0u: goto label_1f88c0;
        case 0x1f88c4u: goto label_1f88c4;
        case 0x1f88c8u: goto label_1f88c8;
        case 0x1f88ccu: goto label_1f88cc;
        case 0x1f88d0u: goto label_1f88d0;
        case 0x1f88d4u: goto label_1f88d4;
        case 0x1f88d8u: goto label_1f88d8;
        case 0x1f88dcu: goto label_1f88dc;
        case 0x1f88e0u: goto label_1f88e0;
        case 0x1f88e4u: goto label_1f88e4;
        case 0x1f88e8u: goto label_1f88e8;
        case 0x1f88ecu: goto label_1f88ec;
        case 0x1f88f0u: goto label_1f88f0;
        case 0x1f88f4u: goto label_1f88f4;
        case 0x1f88f8u: goto label_1f88f8;
        case 0x1f88fcu: goto label_1f88fc;
        case 0x1f8900u: goto label_1f8900;
        case 0x1f8904u: goto label_1f8904;
        case 0x1f8908u: goto label_1f8908;
        case 0x1f890cu: goto label_1f890c;
        case 0x1f8910u: goto label_1f8910;
        case 0x1f8914u: goto label_1f8914;
        case 0x1f8918u: goto label_1f8918;
        case 0x1f891cu: goto label_1f891c;
        case 0x1f8920u: goto label_1f8920;
        case 0x1f8924u: goto label_1f8924;
        case 0x1f8928u: goto label_1f8928;
        case 0x1f892cu: goto label_1f892c;
        case 0x1f8930u: goto label_1f8930;
        case 0x1f8934u: goto label_1f8934;
        case 0x1f8938u: goto label_1f8938;
        case 0x1f893cu: goto label_1f893c;
        case 0x1f8940u: goto label_1f8940;
        case 0x1f8944u: goto label_1f8944;
        case 0x1f8948u: goto label_1f8948;
        case 0x1f894cu: goto label_1f894c;
        case 0x1f8950u: goto label_1f8950;
        case 0x1f8954u: goto label_1f8954;
        case 0x1f8958u: goto label_1f8958;
        case 0x1f895cu: goto label_1f895c;
        case 0x1f8960u: goto label_1f8960;
        case 0x1f8964u: goto label_1f8964;
        case 0x1f8968u: goto label_1f8968;
        case 0x1f896cu: goto label_1f896c;
        case 0x1f8970u: goto label_1f8970;
        case 0x1f8974u: goto label_1f8974;
        case 0x1f8978u: goto label_1f8978;
        case 0x1f897cu: goto label_1f897c;
        case 0x1f8980u: goto label_1f8980;
        case 0x1f8984u: goto label_1f8984;
        case 0x1f8988u: goto label_1f8988;
        case 0x1f898cu: goto label_1f898c;
        case 0x1f8990u: goto label_1f8990;
        case 0x1f8994u: goto label_1f8994;
        case 0x1f8998u: goto label_1f8998;
        case 0x1f899cu: goto label_1f899c;
        case 0x1f89a0u: goto label_1f89a0;
        case 0x1f89a4u: goto label_1f89a4;
        case 0x1f89a8u: goto label_1f89a8;
        case 0x1f89acu: goto label_1f89ac;
        case 0x1f89b0u: goto label_1f89b0;
        case 0x1f89b4u: goto label_1f89b4;
        case 0x1f89b8u: goto label_1f89b8;
        case 0x1f89bcu: goto label_1f89bc;
        case 0x1f89c0u: goto label_1f89c0;
        case 0x1f89c4u: goto label_1f89c4;
        case 0x1f89c8u: goto label_1f89c8;
        case 0x1f89ccu: goto label_1f89cc;
        case 0x1f89d0u: goto label_1f89d0;
        case 0x1f89d4u: goto label_1f89d4;
        case 0x1f89d8u: goto label_1f89d8;
        case 0x1f89dcu: goto label_1f89dc;
        default: break;
    }

    ctx->pc = 0x1f8570u;

label_1f8570:
    // 0x1f8570: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f8570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1f8574:
    // 0x1f8574: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8578:
    // 0x1f8578: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f8578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f857c:
    // 0x1f857c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f8580:
    // 0x1f8580: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f8584:
    // 0x1f8584: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f8584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f8588:
    // 0x1f8588: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f8588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f858c:
    // 0x1f858c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f8590:
    // 0x1f8590: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1f8594:
    // 0x1f8594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f8598:
    // 0x1f8598: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f8598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f859c:
    // 0x1f859c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f85a0:
    // 0x1f85a0: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f85a4:
    // 0x1f85a4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f85a8:
    // 0x1f85a8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f85a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f85ac:
    // 0x1f85ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f85b0:
    if (ctx->pc == 0x1F85B0u) {
        ctx->pc = 0x1F85B0u;
            // 0x1f85b0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1F85B4u;
        goto label_1f85b4;
    }
    ctx->pc = 0x1F85ACu;
    {
        const bool branch_taken_0x1f85ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85ACu;
            // 0x1f85b0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85ac) {
            ctx->pc = 0x1F85DCu;
            goto label_1f85dc;
        }
    }
    ctx->pc = 0x1F85B4u;
label_1f85b4:
    // 0x1f85b4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1f85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1f85b8:
    // 0x1f85b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f85bc:
    // 0x1f85bc: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x1f85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_1f85c0:
    // 0x1f85c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f85c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f85c4:
    // 0x1f85c4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f85c8:
    // 0x1f85c8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f85cc:
    // 0x1f85cc: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f85ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_1f85d0:
    // 0x1f85d0: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f85d4:
    // 0x1f85d4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1f85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_1f85d8:
    // 0x1f85d8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1f85d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1f85dc:
    // 0x1f85dc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1f85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_1f85e0:
    // 0x1f85e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f85e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f85e4:
    // 0x1f85e4: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x1f85e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
label_1f85e8:
    // 0x1f85e8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1f85e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f85ec:
    // 0x1f85ec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1f85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f85f0:
    // 0x1f85f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f85f4:
    // 0x1f85f4: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1f85f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f85f8:
    // 0x1f85f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f85f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f85fc:
    // 0x1f85fc: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1f85fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f8600:
    // 0x1f8600: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f8600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8604:
    // 0x1f8604: 0x24720030  addiu       $s2, $v1, 0x30
    ctx->pc = 0x1f8604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1f8608:
    // 0x1f8608: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f8608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f860c:
    // 0x1f860c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f8610:
    // 0x1f8610: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1f8610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f8614:
    // 0x1f8614: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f8618:
    // 0x1f8618: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f8618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f861c:
    // 0x1f861c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1f861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f8620:
    // 0x1f8620: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1f8620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f8624:
    // 0x1f8624: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1f8624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f8628:
    // 0x1f8628: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f8628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f862c:
    // 0x1f862c: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1f862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8630:
    // 0x1f8630: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1f8630u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f8634:
    // 0x1f8634: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1f8634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8638:
    // 0x1f8638: 0xe7ab0074  swc1        $f11, 0x74($sp)
    ctx->pc = 0x1f8638u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f863c:
    // 0x1f863c: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1f863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8640:
    // 0x1f8640: 0xe7aa0078  swc1        $f10, 0x78($sp)
    ctx->pc = 0x1f8640u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f8644:
    // 0x1f8644: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1f8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f8648:
    // 0x1f8648: 0xe7a9007c  swc1        $f9, 0x7C($sp)
    ctx->pc = 0x1f8648u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1f864c:
    // 0x1f864c: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1f864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f8650:
    // 0x1f8650: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x1f8650u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f8654:
    // 0x1f8654: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1f8654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8658:
    // 0x1f8658: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x1f8658u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f865c:
    // 0x1f865c: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1f865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8660:
    // 0x1f8660: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1f8660u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f8664:
    // 0x1f8664: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1f8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8668:
    // 0x1f8668: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x1f8668u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f866c:
    // 0x1f866c: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1f866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8670:
    // 0x1f8670: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f8670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f8674:
    // 0x1f8674: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f8674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8678:
    // 0x1f8678: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f8678u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f867c:
    // 0x1f867c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8680:
    // 0x1f8680: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f8680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f8684:
    // 0x1f8684: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f8684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f8688:
    // 0x1f8688: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1f8688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f868c:
    // 0x1f868c: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x1f868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f8690:
    // 0x1f8690: 0xc7aa0070  lwc1        $f10, 0x70($sp)
    ctx->pc = 0x1f8690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f8694:
    // 0x1f8694: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x1f8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f8698:
    // 0x1f8698: 0xc7a80084  lwc1        $f8, 0x84($sp)
    ctx->pc = 0x1f8698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f869c:
    // 0x1f869c: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1f869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f86a0:
    // 0x1f86a0: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1f86a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f86a4:
    // 0x1f86a4: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x1f86a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f86a8:
    // 0x1f86a8: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x1f86a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f86ac:
    // 0x1f86ac: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1f86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f86b0:
    // 0x1f86b0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1f86b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f86b4:
    // 0x1f86b4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1f86b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f86b8:
    // 0x1f86b8: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1f86b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f86bc:
    // 0x1f86bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f86bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1f86c0:
    // 0x1f86c0: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1f86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f86c4:
    // 0x1f86c4: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1f86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f86c8:
    // 0x1f86c8: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f86c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f86cc:
    // 0x1f86cc: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f86ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f86d0:
    // 0x1f86d0: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f86d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f86d4:
    // 0x1f86d4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1f86d8:
    // 0x1f86d8: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f86d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f86dc:
    // 0x1f86dc: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f86dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f86e0:
    // 0x1f86e0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1f86e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1f86e4:
    // 0x1f86e4: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f86e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f86e8:
    // 0x1f86e8: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f86e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f86ec:
    // 0x1f86ec: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f86ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f86f0:
    // 0x1f86f0: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f86f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f86f4:
    // 0x1f86f4: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f86f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f86f8:
    // 0x1f86f8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1f86f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1f86fc:
    // 0x1f86fc: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f86fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f8700:
    // 0x1f8700: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8704:
    // 0x1f8704: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1f8704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1f8708:
    // 0x1f8708: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1f8708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1f870c:
    // 0x1f870c: 0x4e1ffea  bgez        $a3, . + 4 + (-0x16 << 2)
label_1f8710:
    if (ctx->pc == 0x1F8710u) {
        ctx->pc = 0x1F8710u;
            // 0x1f8710: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->pc = 0x1F8714u;
        goto label_1f8714;
    }
    ctx->pc = 0x1F870Cu;
    {
        const bool branch_taken_0x1f870c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1F8710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F870Cu;
            // 0x1f8710: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f870c) {
            ctx->pc = 0x1F86B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f86b8;
        }
    }
    ctx->pc = 0x1F8714u;
label_1f8714:
    // 0x1f8714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f8718:
    // 0x1f8718: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f871c:
    // 0x1f871c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1f871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f8720:
    // 0x1f8720: 0xc09e998  jal         func_27A660
label_1f8724:
    if (ctx->pc == 0x1F8724u) {
        ctx->pc = 0x1F8724u;
            // 0x1f8724: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F8728u;
        goto label_1f8728;
    }
    ctx->pc = 0x1F8720u;
    SET_GPR_U32(ctx, 31, 0x1F8728u);
    ctx->pc = 0x1F8724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8720u;
            // 0x1f8724: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A660u;
    if (runtime->hasFunction(0x27A660u)) {
        auto targetFn = runtime->lookupFunction(0x27A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8728u; }
        if (ctx->pc != 0x1F8728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A660_0x27a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8728u; }
        if (ctx->pc != 0x1F8728u) { return; }
    }
    ctx->pc = 0x1F8728u;
label_1f8728:
    // 0x1f8728: 0xc7a700b0  lwc1        $f7, 0xB0($sp)
    ctx->pc = 0x1f8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f872c:
    // 0x1f872c: 0xc6480000  lwc1        $f8, 0x0($s2)
    ctx->pc = 0x1f872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f8730:
    // 0x1f8730: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x1f8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8734:
    // 0x1f8734: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x1f8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f8738:
    // 0x1f8738: 0x46074201  sub.s       $f8, $f8, $f7
    ctx->pc = 0x1f8738u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_1f873c:
    // 0x1f873c: 0x460531c1  sub.s       $f7, $f6, $f5
    ctx->pc = 0x1f873cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1f8740:
    // 0x1f8740: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8744:
    // 0x1f8744: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1f8744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8748:
    // 0x1f8748: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x1f8748u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_1f874c:
    // 0x1f874c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1f874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8750:
    // 0x1f8750: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x1f8750u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f8754:
    // 0x1f8754: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1f8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8758:
    // 0x1f8758: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1f8758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f875c:
    // 0x1f875c: 0xc7a400bc  lwc1        $f4, 0xBC($sp)
    ctx->pc = 0x1f875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8760:
    // 0x1f8760: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1f8760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1f8764:
    // 0x1f8764: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1f8764u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1f8768:
    // 0x1f8768: 0xc645000c  lwc1        $f5, 0xC($s2)
    ctx->pc = 0x1f8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f876c:
    // 0x1f876c: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x1f876cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_1f8770:
    // 0x1f8770: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1f8770u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1f8774:
    // 0x1f8774: 0x460630dc  madd.s      $f3, $f6, $f6
    ctx->pc = 0x1f8774u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_1f8778:
    // 0x1f8778: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1f8778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f877c:
    // 0x1f877c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f877cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8780:
    // 0x1f8780: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f8784:
    if (ctx->pc == 0x1F8784u) {
        ctx->pc = 0x1F8784u;
            // 0x1f8784: 0x46042901  sub.s       $f4, $f5, $f4 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
        ctx->pc = 0x1F8788u;
        goto label_1f8788;
    }
    ctx->pc = 0x1F8780u;
    {
        const bool branch_taken_0x1f8780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8780u;
            // 0x1f8784: 0x46042901  sub.s       $f4, $f5, $f4 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8780) {
            ctx->pc = 0x1F8790u;
            goto label_1f8790;
        }
    }
    ctx->pc = 0x1F8788u;
label_1f8788:
    // 0x1f8788: 0x10000073  b           . + 4 + (0x73 << 2)
label_1f878c:
    if (ctx->pc == 0x1F878Cu) {
        ctx->pc = 0x1F878Cu;
            // 0x1f878c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8790u;
        goto label_1f8790;
    }
    ctx->pc = 0x1F8788u;
    {
        const bool branch_taken_0x1f8788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8788u;
            // 0x1f878c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8788) {
            ctx->pc = 0x1F8958u;
            goto label_1f8958;
        }
    }
    ctx->pc = 0x1F8790u;
label_1f8790:
    // 0x1f8790: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f8790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8794:
    // 0x1f8794: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_1f8798:
    if (ctx->pc == 0x1F8798u) {
        ctx->pc = 0x1F8798u;
            // 0x1f8798: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x1F879Cu;
        goto label_1f879c;
    }
    ctx->pc = 0x1F8794u;
    {
        const bool branch_taken_0x1f8794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8794) {
            ctx->pc = 0x1F8798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8794u;
            // 0x1f8798: 0xc7a300d0  lwc1        $f3, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F87BCu;
            goto label_1f87bc;
        }
    }
    ctx->pc = 0x1F879Cu;
label_1f879c:
    // 0x1f879c: 0x0  nop
    ctx->pc = 0x1f879cu;
    // NOP
label_1f87a0:
    // 0x1f87a0: 0x0  nop
    ctx->pc = 0x1f87a0u;
    // NOP
label_1f87a4:
    // 0x1f87a4: 0x46030004  c1          0x30004
    ctx->pc = 0x1f87a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1f87a8:
    // 0x1f87a8: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x1f87a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f87ac:
    // 0x1f87ac: 0xe7a700f4  swc1        $f7, 0xF4($sp)
    ctx->pc = 0x1f87acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f87b0:
    // 0x1f87b0: 0xe7a600f8  swc1        $f6, 0xF8($sp)
    ctx->pc = 0x1f87b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f87b4:
    // 0x1f87b4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f87b8:
    if (ctx->pc == 0x1F87B8u) {
        ctx->pc = 0x1F87B8u;
            // 0x1f87b8: 0xe7a400fc  swc1        $f4, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->pc = 0x1F87BCu;
        goto label_1f87bc;
    }
    ctx->pc = 0x1F87B4u;
    {
        const bool branch_taken_0x1f87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F87B4u;
            // 0x1f87b8: 0xe7a400fc  swc1        $f4, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87b4) {
            ctx->pc = 0x1F8878u;
            goto label_1f8878;
        }
    }
    ctx->pc = 0x1F87BCu;
label_1f87bc:
    // 0x1f87bc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1f87bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f87c0:
    // 0x1f87c0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1f87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f87c4:
    // 0x1f87c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f87c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f87c8:
    // 0x1f87c8: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x1f87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f87cc:
    // 0x1f87cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f87d0:
    // 0x1f87d0: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x1f87d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f87d4:
    // 0x1f87d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f87d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f87d8:
    // 0x1f87d8: 0x46021a01  sub.s       $f8, $f3, $f2
    ctx->pc = 0x1f87d8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f87dc:
    // 0x1f87dc: 0xc7a500d8  lwc1        $f5, 0xD8($sp)
    ctx->pc = 0x1f87dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f87e0:
    // 0x1f87e0: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1f87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f87e4:
    // 0x1f87e4: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x1f87e4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1f87e8:
    // 0x1f87e8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f87e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f87ec:
    // 0x1f87ec: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x1f87ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f87f0:
    // 0x1f87f0: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x1f87f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f87f4:
    // 0x1f87f4: 0xe7a800a0  swc1        $f8, 0xA0($sp)
    ctx->pc = 0x1f87f4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f87f8:
    // 0x1f87f8: 0xe7a600a4  swc1        $f6, 0xA4($sp)
    ctx->pc = 0x1f87f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f87fc:
    // 0x1f87fc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1f87fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1f8800:
    // 0x1f8800: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1f8800u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f8804:
    // 0x1f8804: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x1f8804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f8808:
    // 0x1f8808: 0x46004145  abs.s       $f5, $f8
    ctx->pc = 0x1f8808u;
    ctx->f[5] = FPU_ABS_S(ctx->f[8]);
label_1f880c:
    // 0x1f880c: 0x460030c5  abs.s       $f3, $f6
    ctx->pc = 0x1f880cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[6]);
label_1f8810:
    // 0x1f8810: 0x46002085  abs.s       $f2, $f4
    ctx->pc = 0x1f8810u;
    ctx->f[2] = FPU_ABS_S(ctx->f[4]);
label_1f8814:
    // 0x1f8814: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x1f8814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8818:
    // 0x1f8818: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f881c:
    if (ctx->pc == 0x1F881Cu) {
        ctx->pc = 0x1F8820u;
        goto label_1f8820;
    }
    ctx->pc = 0x1F8818u;
    {
        const bool branch_taken_0x1f8818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8818) {
            ctx->pc = 0x1F882Cu;
            goto label_1f882c;
        }
    }
    ctx->pc = 0x1F8820u;
label_1f8820:
    // 0x1f8820: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f8820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8824:
    // 0x1f8824: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x1f8824u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_1f8828:
    // 0x1f8828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f882c:
    // 0x1f882c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x1f882cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8830:
    // 0x1f8830: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1f8834:
    if (ctx->pc == 0x1F8834u) {
        ctx->pc = 0x1F8834u;
            // 0x1f8834: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1F8838u;
        goto label_1f8838;
    }
    ctx->pc = 0x1F8830u;
    {
        const bool branch_taken_0x1f8830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8830) {
            ctx->pc = 0x1F8834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8830u;
            // 0x1f8834: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8840u;
            goto label_1f8840;
        }
    }
    ctx->pc = 0x1F8838u;
label_1f8838:
    // 0x1f8838: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f8838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f883c:
    // 0x1f883c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f883cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f8840:
    // 0x1f8840: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1f8840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_1f8844:
    // 0x1f8844: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1f8848:
    // 0x1f8848: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1f8848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_1f884c:
    // 0x1f884c: 0xc46300a0  lwc1        $f3, 0xA0($v1)
    ctx->pc = 0x1f884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8850:
    // 0x1f8850: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1f8850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1f8854:
    // 0x1f8854: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f8854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f8858:
    // 0x1f8858: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1f8858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1f885c:
    // 0x1f885c: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1f885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1f8860:
    // 0x1f8860: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1f8860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f8864:
    // 0x1f8864: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1f8864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1f8868:
    // 0x1f8868: 0xc48200a0  lwc1        $f2, 0xA0($a0)
    ctx->pc = 0x1f8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f886c:
    // 0x1f886c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1f886cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f8870:
    // 0x1f8870: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1f8870u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1f8874:
    // 0x1f8874: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1f8874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f8878:
    // 0x1f8878: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x1f8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f887c:
    // 0x1f887c: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x1f887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f8880:
    // 0x1f8880: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f8880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8884:
    // 0x1f8884: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f8884u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1f8888:
    // 0x1f8888: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1f8888u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1f888c:
    // 0x1f888c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1f888cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f8890:
    // 0x1f8890: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x1f8890u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f8894:
    // 0x1f8894: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x1f8894u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8898:
    // 0x1f8898: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1f889c:
    if (ctx->pc == 0x1F889Cu) {
        ctx->pc = 0x1F88A0u;
        goto label_1f88a0;
    }
    ctx->pc = 0x1F8898u;
    {
        const bool branch_taken_0x1f8898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8898) {
            ctx->pc = 0x1F88BCu;
            goto label_1f88bc;
        }
    }
    ctx->pc = 0x1F88A0u;
label_1f88a0:
    // 0x1f88a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f88a4:
    // 0x1f88a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f88a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f88a8:
    // 0x1f88a8: 0x0  nop
    ctx->pc = 0x1f88a8u;
    // NOP
label_1f88ac:
    // 0x1f88ac: 0x46031156  rsqrt.s     $f5, $f2, $f3
    ctx->pc = 0x1f88acu;
    ctx->f[5] = 1.0f / sqrtf(ctx->f[2]);
label_1f88b0:
    // 0x1f88b0: 0x0  nop
    ctx->pc = 0x1f88b0u;
    // NOP
label_1f88b4:
    // 0x1f88b4: 0x0  nop
    ctx->pc = 0x1f88b4u;
    // NOP
label_1f88b8:
    // 0x1f88b8: 0x0  nop
    ctx->pc = 0x1f88b8u;
    // NOP
label_1f88bc:
    // 0x1f88bc: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x1f88bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f88c0:
    // 0x1f88c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f88c4:
    // 0x1f88c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f88c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f88c8:
    // 0x1f88c8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f88c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f88cc:
    // 0x1f88cc: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x1f88ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f88d0:
    // 0x1f88d0: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f88d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f88d4:
    // 0x1f88d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f88d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f88d8:
    // 0x1f88d8: 0x0  nop
    ctx->pc = 0x1f88d8u;
    // NOP
label_1f88dc:
    // 0x1f88dc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f88dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f88e0:
    // 0x1f88e0: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f88e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f88e4:
    // 0x1f88e4: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f88e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f88e8:
    // 0x1f88e8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f88e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f88ec:
    // 0x1f88ec: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f88ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f88f0:
    // 0x1f88f0: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1f88f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f88f4:
    // 0x1f88f4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1f88f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1f88f8:
    // 0x1f88f8: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x1f88f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f88fc:
    // 0x1f88fc: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x1f88fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f8900:
    // 0x1f8900: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f8900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8904:
    // 0x1f8904: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x1f8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f8908:
    // 0x1f8908: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1f8908u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1f890c:
    // 0x1f890c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x1f890cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1f8910:
    // 0x1f8910: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1f8910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1f8914:
    // 0x1f8914: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f8914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f8918:
    // 0x1f8918: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f8918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f891c:
    // 0x1f891c: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1f891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8920:
    // 0x1f8920: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f8920u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f8924:
    // 0x1f8924: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f8924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f8928:
    // 0x1f8928: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f8928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f892c:
    // 0x1f892c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8930:
    // 0x1f8930: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f8930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8934:
    // 0x1f8934: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f8934u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f8938:
    // 0x1f8938: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f8938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f893c:
    // 0x1f893c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f893cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f8940:
    // 0x1f8940: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1f8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8944:
    // 0x1f8944: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1f8944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8948:
    // 0x1f8948: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1f8948u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f894c:
    // 0x1f894c: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x1f894cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_1f8950:
    // 0x1f8950: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1f8950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f8954:
    // 0x1f8954: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f8954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f8958:
    // 0x1f8958: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f895c:
    if (ctx->pc == 0x1F895Cu) {
        ctx->pc = 0x1F8960u;
        goto label_1f8960;
    }
    ctx->pc = 0x1F8958u;
    {
        const bool branch_taken_0x1f8958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8958) {
            ctx->pc = 0x1F8974u;
            goto label_1f8974;
        }
    }
    ctx->pc = 0x1F8960u;
label_1f8960:
    // 0x1f8960: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f8960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f8964:
    // 0x1f8964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f8968:
    // 0x1f8968: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f8968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f896c:
    // 0x1f896c: 0x320f809  jalr        $t9
label_1f8970:
    if (ctx->pc == 0x1F8970u) {
        ctx->pc = 0x1F8970u;
            // 0x1f8970: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1F8974u;
        goto label_1f8974;
    }
    ctx->pc = 0x1F896Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F8974u);
        ctx->pc = 0x1F8970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F896Cu;
            // 0x1f8970: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F8974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F8974u; }
            if (ctx->pc != 0x1F8974u) { return; }
        }
        }
    }
    ctx->pc = 0x1F8974u;
label_1f8974:
    // 0x1f8974: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8978:
    // 0x1f8978: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f8978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f897c:
    // 0x1f897c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f8980:
    // 0x1f8980: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f8980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f8984:
    // 0x1f8984: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f8984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f8988:
    // 0x1f8988: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f8988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f898c:
    // 0x1f898c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8990:
    if (ctx->pc == 0x1F8990u) {
        ctx->pc = 0x1F8990u;
            // 0x1f8990: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F8994u;
        goto label_1f8994;
    }
    ctx->pc = 0x1F898Cu;
    {
        const bool branch_taken_0x1f898c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F898Cu;
            // 0x1f8990: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f898c) {
            ctx->pc = 0x1F89BCu;
            goto label_1f89bc;
        }
    }
    ctx->pc = 0x1F8994u;
label_1f8994:
    // 0x1f8994: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f8994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f8998:
    // 0x1f8998: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f8998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f899c:
    // 0x1f899c: 0x2463b010  addiu       $v1, $v1, -0x4FF0
    ctx->pc = 0x1f899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946832));
label_1f89a0:
    // 0x1f89a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f89a4:
    // 0x1f89a4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f89a8:
    // 0x1f89a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f89ac:
    // 0x1f89ac: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f89acu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f89b0:
    // 0x1f89b0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f89b4:
    // 0x1f89b4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f89b8:
    // 0x1f89b8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f89bc:
    // 0x1f89bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f89bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f89c0:
    // 0x1f89c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f89c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f89c4:
    // 0x1f89c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f89c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f89c8:
    // 0x1f89c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f89c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f89cc:
    // 0x1f89cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f89ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f89d0:
    // 0x1f89d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f89d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f89d4:
    // 0x1f89d4: 0x3e00008  jr          $ra
label_1f89d8:
    if (ctx->pc == 0x1F89D8u) {
        ctx->pc = 0x1F89D8u;
            // 0x1f89d8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1F89DCu;
        goto label_1f89dc;
    }
    ctx->pc = 0x1F89D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F89D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F89D4u;
            // 0x1f89d8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F89DCu;
label_1f89dc:
    // 0x1f89dc: 0x0  nop
    ctx->pc = 0x1f89dcu;
    // NOP
}
