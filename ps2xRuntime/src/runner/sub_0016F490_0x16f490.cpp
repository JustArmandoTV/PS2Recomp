#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016F490
// Address: 0x16f490 - 0x16f860
void sub_0016F490_0x16f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F490_0x16f490");
#endif

    switch (ctx->pc) {
        case 0x16f490u: goto label_16f490;
        case 0x16f494u: goto label_16f494;
        case 0x16f498u: goto label_16f498;
        case 0x16f49cu: goto label_16f49c;
        case 0x16f4a0u: goto label_16f4a0;
        case 0x16f4a4u: goto label_16f4a4;
        case 0x16f4a8u: goto label_16f4a8;
        case 0x16f4acu: goto label_16f4ac;
        case 0x16f4b0u: goto label_16f4b0;
        case 0x16f4b4u: goto label_16f4b4;
        case 0x16f4b8u: goto label_16f4b8;
        case 0x16f4bcu: goto label_16f4bc;
        case 0x16f4c0u: goto label_16f4c0;
        case 0x16f4c4u: goto label_16f4c4;
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f4ccu: goto label_16f4cc;
        case 0x16f4d0u: goto label_16f4d0;
        case 0x16f4d4u: goto label_16f4d4;
        case 0x16f4d8u: goto label_16f4d8;
        case 0x16f4dcu: goto label_16f4dc;
        case 0x16f4e0u: goto label_16f4e0;
        case 0x16f4e4u: goto label_16f4e4;
        case 0x16f4e8u: goto label_16f4e8;
        case 0x16f4ecu: goto label_16f4ec;
        case 0x16f4f0u: goto label_16f4f0;
        case 0x16f4f4u: goto label_16f4f4;
        case 0x16f4f8u: goto label_16f4f8;
        case 0x16f4fcu: goto label_16f4fc;
        case 0x16f500u: goto label_16f500;
        case 0x16f504u: goto label_16f504;
        case 0x16f508u: goto label_16f508;
        case 0x16f50cu: goto label_16f50c;
        case 0x16f510u: goto label_16f510;
        case 0x16f514u: goto label_16f514;
        case 0x16f518u: goto label_16f518;
        case 0x16f51cu: goto label_16f51c;
        case 0x16f520u: goto label_16f520;
        case 0x16f524u: goto label_16f524;
        case 0x16f528u: goto label_16f528;
        case 0x16f52cu: goto label_16f52c;
        case 0x16f530u: goto label_16f530;
        case 0x16f534u: goto label_16f534;
        case 0x16f538u: goto label_16f538;
        case 0x16f53cu: goto label_16f53c;
        case 0x16f540u: goto label_16f540;
        case 0x16f544u: goto label_16f544;
        case 0x16f548u: goto label_16f548;
        case 0x16f54cu: goto label_16f54c;
        case 0x16f550u: goto label_16f550;
        case 0x16f554u: goto label_16f554;
        case 0x16f558u: goto label_16f558;
        case 0x16f55cu: goto label_16f55c;
        case 0x16f560u: goto label_16f560;
        case 0x16f564u: goto label_16f564;
        case 0x16f568u: goto label_16f568;
        case 0x16f56cu: goto label_16f56c;
        case 0x16f570u: goto label_16f570;
        case 0x16f574u: goto label_16f574;
        case 0x16f578u: goto label_16f578;
        case 0x16f57cu: goto label_16f57c;
        case 0x16f580u: goto label_16f580;
        case 0x16f584u: goto label_16f584;
        case 0x16f588u: goto label_16f588;
        case 0x16f58cu: goto label_16f58c;
        case 0x16f590u: goto label_16f590;
        case 0x16f594u: goto label_16f594;
        case 0x16f598u: goto label_16f598;
        case 0x16f59cu: goto label_16f59c;
        case 0x16f5a0u: goto label_16f5a0;
        case 0x16f5a4u: goto label_16f5a4;
        case 0x16f5a8u: goto label_16f5a8;
        case 0x16f5acu: goto label_16f5ac;
        case 0x16f5b0u: goto label_16f5b0;
        case 0x16f5b4u: goto label_16f5b4;
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5bcu: goto label_16f5bc;
        case 0x16f5c0u: goto label_16f5c0;
        case 0x16f5c4u: goto label_16f5c4;
        case 0x16f5c8u: goto label_16f5c8;
        case 0x16f5ccu: goto label_16f5cc;
        case 0x16f5d0u: goto label_16f5d0;
        case 0x16f5d4u: goto label_16f5d4;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f5dcu: goto label_16f5dc;
        case 0x16f5e0u: goto label_16f5e0;
        case 0x16f5e4u: goto label_16f5e4;
        case 0x16f5e8u: goto label_16f5e8;
        case 0x16f5ecu: goto label_16f5ec;
        case 0x16f5f0u: goto label_16f5f0;
        case 0x16f5f4u: goto label_16f5f4;
        case 0x16f5f8u: goto label_16f5f8;
        case 0x16f5fcu: goto label_16f5fc;
        case 0x16f600u: goto label_16f600;
        case 0x16f604u: goto label_16f604;
        case 0x16f608u: goto label_16f608;
        case 0x16f60cu: goto label_16f60c;
        case 0x16f610u: goto label_16f610;
        case 0x16f614u: goto label_16f614;
        case 0x16f618u: goto label_16f618;
        case 0x16f61cu: goto label_16f61c;
        case 0x16f620u: goto label_16f620;
        case 0x16f624u: goto label_16f624;
        case 0x16f628u: goto label_16f628;
        case 0x16f62cu: goto label_16f62c;
        case 0x16f630u: goto label_16f630;
        case 0x16f634u: goto label_16f634;
        case 0x16f638u: goto label_16f638;
        case 0x16f63cu: goto label_16f63c;
        case 0x16f640u: goto label_16f640;
        case 0x16f644u: goto label_16f644;
        case 0x16f648u: goto label_16f648;
        case 0x16f64cu: goto label_16f64c;
        case 0x16f650u: goto label_16f650;
        case 0x16f654u: goto label_16f654;
        case 0x16f658u: goto label_16f658;
        case 0x16f65cu: goto label_16f65c;
        case 0x16f660u: goto label_16f660;
        case 0x16f664u: goto label_16f664;
        case 0x16f668u: goto label_16f668;
        case 0x16f66cu: goto label_16f66c;
        case 0x16f670u: goto label_16f670;
        case 0x16f674u: goto label_16f674;
        case 0x16f678u: goto label_16f678;
        case 0x16f67cu: goto label_16f67c;
        case 0x16f680u: goto label_16f680;
        case 0x16f684u: goto label_16f684;
        case 0x16f688u: goto label_16f688;
        case 0x16f68cu: goto label_16f68c;
        case 0x16f690u: goto label_16f690;
        case 0x16f694u: goto label_16f694;
        case 0x16f698u: goto label_16f698;
        case 0x16f69cu: goto label_16f69c;
        case 0x16f6a0u: goto label_16f6a0;
        case 0x16f6a4u: goto label_16f6a4;
        case 0x16f6a8u: goto label_16f6a8;
        case 0x16f6acu: goto label_16f6ac;
        case 0x16f6b0u: goto label_16f6b0;
        case 0x16f6b4u: goto label_16f6b4;
        case 0x16f6b8u: goto label_16f6b8;
        case 0x16f6bcu: goto label_16f6bc;
        case 0x16f6c0u: goto label_16f6c0;
        case 0x16f6c4u: goto label_16f6c4;
        case 0x16f6c8u: goto label_16f6c8;
        case 0x16f6ccu: goto label_16f6cc;
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6d4u: goto label_16f6d4;
        case 0x16f6d8u: goto label_16f6d8;
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6e0u: goto label_16f6e0;
        case 0x16f6e4u: goto label_16f6e4;
        case 0x16f6e8u: goto label_16f6e8;
        case 0x16f6ecu: goto label_16f6ec;
        case 0x16f6f0u: goto label_16f6f0;
        case 0x16f6f4u: goto label_16f6f4;
        case 0x16f6f8u: goto label_16f6f8;
        case 0x16f6fcu: goto label_16f6fc;
        case 0x16f700u: goto label_16f700;
        case 0x16f704u: goto label_16f704;
        case 0x16f708u: goto label_16f708;
        case 0x16f70cu: goto label_16f70c;
        case 0x16f710u: goto label_16f710;
        case 0x16f714u: goto label_16f714;
        case 0x16f718u: goto label_16f718;
        case 0x16f71cu: goto label_16f71c;
        case 0x16f720u: goto label_16f720;
        case 0x16f724u: goto label_16f724;
        case 0x16f728u: goto label_16f728;
        case 0x16f72cu: goto label_16f72c;
        case 0x16f730u: goto label_16f730;
        case 0x16f734u: goto label_16f734;
        case 0x16f738u: goto label_16f738;
        case 0x16f73cu: goto label_16f73c;
        case 0x16f740u: goto label_16f740;
        case 0x16f744u: goto label_16f744;
        case 0x16f748u: goto label_16f748;
        case 0x16f74cu: goto label_16f74c;
        case 0x16f750u: goto label_16f750;
        case 0x16f754u: goto label_16f754;
        case 0x16f758u: goto label_16f758;
        case 0x16f75cu: goto label_16f75c;
        case 0x16f760u: goto label_16f760;
        case 0x16f764u: goto label_16f764;
        case 0x16f768u: goto label_16f768;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f770u: goto label_16f770;
        case 0x16f774u: goto label_16f774;
        case 0x16f778u: goto label_16f778;
        case 0x16f77cu: goto label_16f77c;
        case 0x16f780u: goto label_16f780;
        case 0x16f784u: goto label_16f784;
        case 0x16f788u: goto label_16f788;
        case 0x16f78cu: goto label_16f78c;
        case 0x16f790u: goto label_16f790;
        case 0x16f794u: goto label_16f794;
        case 0x16f798u: goto label_16f798;
        case 0x16f79cu: goto label_16f79c;
        case 0x16f7a0u: goto label_16f7a0;
        case 0x16f7a4u: goto label_16f7a4;
        case 0x16f7a8u: goto label_16f7a8;
        case 0x16f7acu: goto label_16f7ac;
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f7b4u: goto label_16f7b4;
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7bcu: goto label_16f7bc;
        case 0x16f7c0u: goto label_16f7c0;
        case 0x16f7c4u: goto label_16f7c4;
        case 0x16f7c8u: goto label_16f7c8;
        case 0x16f7ccu: goto label_16f7cc;
        case 0x16f7d0u: goto label_16f7d0;
        case 0x16f7d4u: goto label_16f7d4;
        case 0x16f7d8u: goto label_16f7d8;
        case 0x16f7dcu: goto label_16f7dc;
        case 0x16f7e0u: goto label_16f7e0;
        case 0x16f7e4u: goto label_16f7e4;
        case 0x16f7e8u: goto label_16f7e8;
        case 0x16f7ecu: goto label_16f7ec;
        case 0x16f7f0u: goto label_16f7f0;
        case 0x16f7f4u: goto label_16f7f4;
        case 0x16f7f8u: goto label_16f7f8;
        case 0x16f7fcu: goto label_16f7fc;
        case 0x16f800u: goto label_16f800;
        case 0x16f804u: goto label_16f804;
        case 0x16f808u: goto label_16f808;
        case 0x16f80cu: goto label_16f80c;
        case 0x16f810u: goto label_16f810;
        case 0x16f814u: goto label_16f814;
        case 0x16f818u: goto label_16f818;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f820u: goto label_16f820;
        case 0x16f824u: goto label_16f824;
        case 0x16f828u: goto label_16f828;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f830u: goto label_16f830;
        case 0x16f834u: goto label_16f834;
        case 0x16f838u: goto label_16f838;
        case 0x16f83cu: goto label_16f83c;
        case 0x16f840u: goto label_16f840;
        case 0x16f844u: goto label_16f844;
        case 0x16f848u: goto label_16f848;
        case 0x16f84cu: goto label_16f84c;
        case 0x16f850u: goto label_16f850;
        case 0x16f854u: goto label_16f854;
        case 0x16f858u: goto label_16f858;
        case 0x16f85cu: goto label_16f85c;
        default: break;
    }

    ctx->pc = 0x16f490u;

label_16f490:
    // 0x16f490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16f494:
    // 0x16f494: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16f498:
    // 0x16f498: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16f498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f49c:
    // 0x16f49c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x16f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_16f4a0:
    // 0x16f4a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16f4a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f4a4:
    // 0x16f4a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_16f4a8:
    // 0x16f4a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_16f4ac:
    // 0x16f4ac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x16f4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_16f4b0:
    // 0x16f4b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x16f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16f4b4:
    // 0x16f4b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16f4b8:
    // 0x16f4b8: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x16f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_16f4bc:
    // 0x16f4bc: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x16f4bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16f4c0:
    // 0x16f4c0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_16f4c4:
    if (ctx->pc == 0x16F4C4u) {
        ctx->pc = 0x16F4C4u;
            // 0x16f4c4: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x16F4C8u;
        goto label_16f4c8;
    }
    ctx->pc = 0x16F4C0u;
    {
        const bool branch_taken_0x16f4c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x16F4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4C0u;
            // 0x16f4c4: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4c0) {
            ctx->pc = 0x16F4ECu;
            goto label_16f4ec;
        }
    }
    ctx->pc = 0x16F4C8u;
label_16f4c8:
    // 0x16f4c8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x16f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_16f4cc:
    // 0x16f4cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x16f4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16f4d0:
    // 0x16f4d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_16f4d4:
    if (ctx->pc == 0x16F4D4u) {
        ctx->pc = 0x16F4D4u;
            // 0x16f4d4: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x16F4D8u;
        goto label_16f4d8;
    }
    ctx->pc = 0x16F4D0u;
    {
        const bool branch_taken_0x16f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f4d0) {
            ctx->pc = 0x16F4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4D0u;
            // 0x16f4d4: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F4F0u;
            goto label_16f4f0;
        }
    }
    ctx->pc = 0x16F4D8u;
label_16f4d8:
    // 0x16f4d8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x16f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_16f4dc:
    // 0x16f4dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_16f4e0:
    if (ctx->pc == 0x16F4E0u) {
        ctx->pc = 0x16F4E0u;
            // 0x16f4e0: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x16F4E4u;
        goto label_16f4e4;
    }
    ctx->pc = 0x16F4DCu;
    {
        const bool branch_taken_0x16f4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4dc) {
            ctx->pc = 0x16F4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4DCu;
            // 0x16f4e0: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F4F0u;
            goto label_16f4f0;
        }
    }
    ctx->pc = 0x16F4E4u;
label_16f4e4:
    // 0x16f4e4: 0x40f809  jalr        $v0
label_16f4e8:
    if (ctx->pc == 0x16F4E8u) {
        ctx->pc = 0x16F4E8u;
            // 0x16f4e8: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = 0x16F4ECu;
        goto label_16f4ec;
    }
    ctx->pc = 0x16F4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F4ECu);
        ctx->pc = 0x16F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4E4u;
            // 0x16f4e8: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F4ECu; }
            if (ctx->pc != 0x16F4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x16F4ECu;
label_16f4ec:
    // 0x16f4ec: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_16f4f0:
    // 0x16f4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f4f4:
    // 0x16f4f4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_16f4f8:
    if (ctx->pc == 0x16F4F8u) {
        ctx->pc = 0x16F4F8u;
            // 0x16f4f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16F4FCu;
        goto label_16f4fc;
    }
    ctx->pc = 0x16F4F4u;
    {
        const bool branch_taken_0x16f4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f4f4) {
            ctx->pc = 0x16F4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4F4u;
            // 0x16f4f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F528u;
            goto label_16f528;
        }
    }
    ctx->pc = 0x16F4FCu;
label_16f4fc:
    // 0x16f4fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f500:
    // 0x16f500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f504:
    // 0x16f504: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x16f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16f508:
    // 0x16f508: 0x40f809  jalr        $v0
label_16f50c:
    if (ctx->pc == 0x16F50Cu) {
        ctx->pc = 0x16F50Cu;
            // 0x16f50c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F510u;
        goto label_16f510;
    }
    ctx->pc = 0x16F508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F510u);
        ctx->pc = 0x16F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F508u;
            // 0x16f50c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F510u; }
            if (ctx->pc != 0x16F510u) { return; }
        }
        }
    }
    ctx->pc = 0x16F510u;
label_16f510:
    // 0x16f510: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_16f514:
    if (ctx->pc == 0x16F514u) {
        ctx->pc = 0x16F514u;
            // 0x16f514: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16F518u;
        goto label_16f518;
    }
    ctx->pc = 0x16F510u;
    {
        const bool branch_taken_0x16f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f510) {
            ctx->pc = 0x16F514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F510u;
            // 0x16f514: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F528u;
            goto label_16f528;
        }
    }
    ctx->pc = 0x16F518u;
label_16f518:
    // 0x16f518: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f51c:
    // 0x16f51c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_16f520:
    if (ctx->pc == 0x16F520u) {
        ctx->pc = 0x16F520u;
            // 0x16f520: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16F524u;
        goto label_16f524;
    }
    ctx->pc = 0x16F51Cu;
    {
        const bool branch_taken_0x16f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F51Cu;
            // 0x16f520: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f51c) {
            ctx->pc = 0x16F83Cu;
            goto label_16f83c;
        }
    }
    ctx->pc = 0x16F524u;
label_16f524:
    // 0x16f524: 0x0  nop
    ctx->pc = 0x16f524u;
    // NOP
label_16f528:
    // 0x16f528: 0x26530014  addiu       $s3, $s2, 0x14
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_16f52c:
    // 0x16f52c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x16f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_16f530:
    // 0x16f530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f534:
    // 0x16f534: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x16f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16f538:
    // 0x16f538: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f53c:
    // 0x16f53c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f53cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_16f540:
    // 0x16f540: 0x60f809  jalr        $v1
label_16f544:
    if (ctx->pc == 0x16F544u) {
        ctx->pc = 0x16F544u;
            // 0x16f544: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F548u;
        goto label_16f548;
    }
    ctx->pc = 0x16F540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F548u);
        ctx->pc = 0x16F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F540u;
            // 0x16f544: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F548u; }
            if (ctx->pc != 0x16F548u) { return; }
        }
        }
    }
    ctx->pc = 0x16F548u;
label_16f548:
    // 0x16f548: 0xc059386  jal         func_164E18
label_16f54c:
    if (ctx->pc == 0x16F54Cu) {
        ctx->pc = 0x16F54Cu;
            // 0x16f54c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F550u;
        goto label_16f550;
    }
    ctx->pc = 0x16F548u;
    SET_GPR_U32(ctx, 31, 0x16F550u);
    ctx->pc = 0x16F54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F548u;
            // 0x16f54c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F550u; }
        if (ctx->pc != 0x16F550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F550u; }
        if (ctx->pc != 0x16F550u) { return; }
    }
    ctx->pc = 0x16F550u;
label_16f550:
    // 0x16f550: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_16f554:
    if (ctx->pc == 0x16F554u) {
        ctx->pc = 0x16F558u;
        goto label_16f558;
    }
    ctx->pc = 0x16F550u;
    {
        const bool branch_taken_0x16f550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f550) {
            ctx->pc = 0x16F6D8u;
            goto label_16f6d8;
        }
    }
    ctx->pc = 0x16F558u;
label_16f558:
    // 0x16f558: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_16f55c:
    // 0x16f55c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x16f55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_16f560:
    // 0x16f560: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_16f564:
    if (ctx->pc == 0x16F564u) {
        ctx->pc = 0x16F564u;
            // 0x16f564: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->pc = 0x16F568u;
        goto label_16f568;
    }
    ctx->pc = 0x16F560u;
    {
        const bool branch_taken_0x16f560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F560u;
            // 0x16f564: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f560) {
            ctx->pc = 0x16F6D8u;
            goto label_16f6d8;
        }
    }
    ctx->pc = 0x16F568u;
label_16f568:
    // 0x16f568: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x16f568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f56c:
    // 0x16f56c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x16f56cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16f570:
    // 0x16f570: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x16f570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_16f574:
    // 0x16f574: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_16f578:
    // 0x16f578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16f57c:
    // 0x16f57c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16f580:
    // 0x16f580: 0x14450055  bne         $v0, $a1, . + 4 + (0x55 << 2)
label_16f584:
    if (ctx->pc == 0x16F584u) {
        ctx->pc = 0x16F584u;
            // 0x16f584: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x16F588u;
        goto label_16f588;
    }
    ctx->pc = 0x16F580u;
    {
        const bool branch_taken_0x16f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x16F584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F580u;
            // 0x16f584: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f580) {
            ctx->pc = 0x16F6D8u;
            goto label_16f6d8;
        }
    }
    ctx->pc = 0x16F588u;
label_16f588:
    // 0x16f588: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16f588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16f58c:
    // 0x16f58c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x16f58cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_16f590:
    // 0x16f590: 0xc059ca2  jal         func_167288
label_16f594:
    if (ctx->pc == 0x16F594u) {
        ctx->pc = 0x16F594u;
            // 0x16f594: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16F598u;
        goto label_16f598;
    }
    ctx->pc = 0x16F590u;
    SET_GPR_U32(ctx, 31, 0x16F598u);
    ctx->pc = 0x16F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F590u;
            // 0x16f594: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167288u;
    if (runtime->hasFunction(0x167288u)) {
        auto targetFn = runtime->lookupFunction(0x167288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F598u; }
        if (ctx->pc != 0x16F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167288_0x167288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F598u; }
        if (ctx->pc != 0x16F598u) { return; }
    }
    ctx->pc = 0x16F598u;
label_16f598:
    // 0x16f598: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_16f59c:
    if (ctx->pc == 0x16F59Cu) {
        ctx->pc = 0x16F59Cu;
            // 0x16f59c: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x16F5A0u;
        goto label_16f5a0;
    }
    ctx->pc = 0x16F598u;
    {
        const bool branch_taken_0x16f598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f598) {
            ctx->pc = 0x16F59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F598u;
            // 0x16f59c: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F5F8u;
            goto label_16f5f8;
        }
    }
    ctx->pc = 0x16F5A0u;
label_16f5a0:
    // 0x16f5a0: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x16f5a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_16f5a4:
    // 0x16f5a4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x16f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_16f5a8:
    // 0x16f5a8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x16f5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_16f5ac:
    // 0x16f5ac: 0x54400081  bnel        $v0, $zero, . + 4 + (0x81 << 2)
label_16f5b0:
    if (ctx->pc == 0x16F5B0u) {
        ctx->pc = 0x16F5B0u;
            // 0x16f5b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16F5B4u;
        goto label_16f5b4;
    }
    ctx->pc = 0x16F5ACu;
    {
        const bool branch_taken_0x16f5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f5ac) {
            ctx->pc = 0x16F5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5ACu;
            // 0x16f5b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F7B4u;
            goto label_16f7b4;
        }
    }
    ctx->pc = 0x16F5B4u;
label_16f5b4:
    // 0x16f5b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f5b8:
    // 0x16f5b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16f5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f5bc:
    // 0x16f5bc: 0xc061c20  jal         func_187080
label_16f5c0:
    if (ctx->pc == 0x16F5C0u) {
        ctx->pc = 0x16F5C0u;
            // 0x16f5c0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F5C4u;
        goto label_16f5c4;
    }
    ctx->pc = 0x16F5BCu;
    SET_GPR_U32(ctx, 31, 0x16F5C4u);
    ctx->pc = 0x16F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5BCu;
            // 0x16f5c0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F5C4u; }
        if (ctx->pc != 0x16F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F5C4u; }
        if (ctx->pc != 0x16F5C4u) { return; }
    }
    ctx->pc = 0x16F5C4u;
label_16f5c4:
    // 0x16f5c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f5c8:
    // 0x16f5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f5cc:
    // 0x16f5cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f5d0:
    // 0x16f5d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16f5d4:
    // 0x16f5d4: 0x40f809  jalr        $v0
label_16f5d8:
    if (ctx->pc == 0x16F5D8u) {
        ctx->pc = 0x16F5D8u;
            // 0x16f5d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F5DCu;
        goto label_16f5dc;
    }
    ctx->pc = 0x16F5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F5DCu);
        ctx->pc = 0x16F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5D4u;
            // 0x16f5d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F5DCu; }
            if (ctx->pc != 0x16F5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x16F5DCu;
label_16f5dc:
    // 0x16f5dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f5e0:
    // 0x16f5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f5e4:
    // 0x16f5e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f5e8:
    // 0x16f5e8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f5ec:
    // 0x16f5ec: 0x40f809  jalr        $v0
label_16f5f0:
    if (ctx->pc == 0x16F5F0u) {
        ctx->pc = 0x16F5F0u;
            // 0x16f5f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F5F4u;
        goto label_16f5f4;
    }
    ctx->pc = 0x16F5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F5F4u);
        ctx->pc = 0x16F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5ECu;
            // 0x16f5f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F5F4u; }
            if (ctx->pc != 0x16F5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x16F5F4u;
label_16f5f4:
    // 0x16f5f4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x16f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_16f5f8:
    // 0x16f5f8: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_16f5fc:
    if (ctx->pc == 0x16F5FCu) {
        ctx->pc = 0x16F5FCu;
            // 0x16f5fc: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F600u;
        goto label_16f600;
    }
    ctx->pc = 0x16F5F8u;
    {
        const bool branch_taken_0x16f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5F8u;
            // 0x16f5fc: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5f8) {
            ctx->pc = 0x16F83Cu;
            goto label_16f83c;
        }
    }
    ctx->pc = 0x16F600u;
label_16f600:
    // 0x16f600: 0x10000028  b           . + 4 + (0x28 << 2)
label_16f604:
    if (ctx->pc == 0x16F604u) {
        ctx->pc = 0x16F604u;
            // 0x16f604: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16F608u;
        goto label_16f608;
    }
    ctx->pc = 0x16F600u;
    {
        const bool branch_taken_0x16f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F600u;
            // 0x16f604: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f600) {
            ctx->pc = 0x16F6A4u;
            goto label_16f6a4;
        }
    }
    ctx->pc = 0x16F608u;
label_16f608:
    // 0x16f608: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x16f608u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16f60c:
    // 0x16f60c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_16f610:
    if (ctx->pc == 0x16F610u) {
        ctx->pc = 0x16F610u;
            // 0x16f610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F614u;
        goto label_16f614;
    }
    ctx->pc = 0x16F60Cu;
    {
        const bool branch_taken_0x16f60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f60c) {
            ctx->pc = 0x16F610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F60Cu;
            // 0x16f610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F65Cu;
            goto label_16f65c;
        }
    }
    ctx->pc = 0x16F614u;
label_16f614:
    // 0x16f614: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f618:
    // 0x16f618: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x16f618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16f61c:
    // 0x16f61c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_16f620:
    if (ctx->pc == 0x16F620u) {
        ctx->pc = 0x16F620u;
            // 0x16f620: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F624u;
        goto label_16f624;
    }
    ctx->pc = 0x16F61Cu;
    {
        const bool branch_taken_0x16f61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f61c) {
            ctx->pc = 0x16F620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F61Cu;
            // 0x16f620: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F65Cu;
            goto label_16f65c;
        }
    }
    ctx->pc = 0x16F624u;
label_16f624:
    // 0x16f624: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f628:
    // 0x16f628: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16f628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16f62c:
    // 0x16f62c: 0x0  nop
    ctx->pc = 0x16f62cu;
    // NOP
label_16f630:
    // 0x16f630: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x16f630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_16f634:
    // 0x16f634: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_16f638:
    if (ctx->pc == 0x16F638u) {
        ctx->pc = 0x16F638u;
            // 0x16f638: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x16F63Cu;
        goto label_16f63c;
    }
    ctx->pc = 0x16F634u;
    {
        const bool branch_taken_0x16f634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f634) {
            ctx->pc = 0x16F638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F634u;
            // 0x16f638: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F658u;
            goto label_16f658;
        }
    }
    ctx->pc = 0x16F63Cu;
label_16f63c:
    // 0x16f63c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x16f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_16f640:
    // 0x16f640: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16f644:
    // 0x16f644: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x16f644u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16f648:
    // 0x16f648: 0x0  nop
    ctx->pc = 0x16f648u;
    // NOP
label_16f64c:
    // 0x16f64c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_16f650:
    if (ctx->pc == 0x16F650u) {
        ctx->pc = 0x16F650u;
            // 0x16f650: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x16F654u;
        goto label_16f654;
    }
    ctx->pc = 0x16F64Cu;
    {
        const bool branch_taken_0x16f64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f64c) {
            ctx->pc = 0x16F650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F64Cu;
            // 0x16f650: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16f630;
        }
    }
    ctx->pc = 0x16F654u;
label_16f654:
    // 0x16f654: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x16f654u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16f658:
    // 0x16f658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f65c:
    // 0x16f65c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16f65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f660:
    // 0x16f660: 0xc061c20  jal         func_187080
label_16f664:
    if (ctx->pc == 0x16F664u) {
        ctx->pc = 0x16F664u;
            // 0x16f664: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F668u;
        goto label_16f668;
    }
    ctx->pc = 0x16F660u;
    SET_GPR_U32(ctx, 31, 0x16F668u);
    ctx->pc = 0x16F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F660u;
            // 0x16f664: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F668u; }
        if (ctx->pc != 0x16F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F668u; }
        if (ctx->pc != 0x16F668u) { return; }
    }
    ctx->pc = 0x16F668u;
label_16f668:
    // 0x16f668: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f66c:
    // 0x16f66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f670:
    // 0x16f670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f674:
    // 0x16f674: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16f678:
    // 0x16f678: 0x40f809  jalr        $v0
label_16f67c:
    if (ctx->pc == 0x16F67Cu) {
        ctx->pc = 0x16F67Cu;
            // 0x16f67c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F680u;
        goto label_16f680;
    }
    ctx->pc = 0x16F678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F680u);
        ctx->pc = 0x16F67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F678u;
            // 0x16f67c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F680u; }
            if (ctx->pc != 0x16F680u) { return; }
        }
        }
    }
    ctx->pc = 0x16F680u;
label_16f680:
    // 0x16f680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f684:
    // 0x16f684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f688:
    // 0x16f688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f68c:
    // 0x16f68c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f690:
    // 0x16f690: 0x40f809  jalr        $v0
label_16f694:
    if (ctx->pc == 0x16F694u) {
        ctx->pc = 0x16F694u;
            // 0x16f694: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F698u;
        goto label_16f698;
    }
    ctx->pc = 0x16F690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F698u);
        ctx->pc = 0x16F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F690u;
            // 0x16f694: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F698u; }
            if (ctx->pc != 0x16F698u) { return; }
        }
        }
    }
    ctx->pc = 0x16F698u;
label_16f698:
    // 0x16f698: 0x16000069  bnez        $s0, . + 4 + (0x69 << 2)
label_16f69c:
    if (ctx->pc == 0x16F69Cu) {
        ctx->pc = 0x16F69Cu;
            // 0x16f69c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16F6A0u;
        goto label_16f6a0;
    }
    ctx->pc = 0x16F698u;
    {
        const bool branch_taken_0x16f698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F698u;
            // 0x16f69c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f698) {
            ctx->pc = 0x16F840u;
            goto label_16f840;
        }
    }
    ctx->pc = 0x16F6A0u;
label_16f6a0:
    // 0x16f6a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f6a4:
    // 0x16f6a4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x16f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_16f6a8:
    // 0x16f6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f6ac:
    // 0x16f6ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f6b0:
    // 0x16f6b0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16f6b4:
    // 0x16f6b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_16f6b8:
    // 0x16f6b8: 0x40f809  jalr        $v0
label_16f6bc:
    if (ctx->pc == 0x16F6BCu) {
        ctx->pc = 0x16F6BCu;
            // 0x16f6bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F6C0u;
        goto label_16f6c0;
    }
    ctx->pc = 0x16F6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F6C0u);
        ctx->pc = 0x16F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6B8u;
            // 0x16f6bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F6C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F6C0u; }
            if (ctx->pc != 0x16F6C0u) { return; }
        }
        }
    }
    ctx->pc = 0x16F6C0u;
label_16f6c0:
    // 0x16f6c0: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_16f6c4:
    // 0x16f6c4: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
label_16f6c8:
    if (ctx->pc == 0x16F6C8u) {
        ctx->pc = 0x16F6C8u;
            // 0x16f6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F6CCu;
        goto label_16f6cc;
    }
    ctx->pc = 0x16F6C4u;
    {
        const bool branch_taken_0x16f6c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6C4u;
            // 0x16f6c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6c4) {
            ctx->pc = 0x16F608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16f608;
        }
    }
    ctx->pc = 0x16F6CCu;
label_16f6cc:
    // 0x16f6cc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_16f6d0:
    if (ctx->pc == 0x16F6D0u) {
        ctx->pc = 0x16F6D0u;
            // 0x16f6d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16F6D4u;
        goto label_16f6d4;
    }
    ctx->pc = 0x16F6CCu;
    {
        const bool branch_taken_0x16f6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6CCu;
            // 0x16f6d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6cc) {
            ctx->pc = 0x16F840u;
            goto label_16f840;
        }
    }
    ctx->pc = 0x16F6D4u;
label_16f6d4:
    // 0x16f6d4: 0x0  nop
    ctx->pc = 0x16f6d4u;
    // NOP
label_16f6d8:
    // 0x16f6d8: 0xc05c064  jal         func_170190
label_16f6dc:
    if (ctx->pc == 0x16F6DCu) {
        ctx->pc = 0x16F6DCu;
            // 0x16f6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F6E0u;
        goto label_16f6e0;
    }
    ctx->pc = 0x16F6D8u;
    SET_GPR_U32(ctx, 31, 0x16F6E0u);
    ctx->pc = 0x16F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6D8u;
            // 0x16f6dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6E0u; }
        if (ctx->pc != 0x16F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6E0u; }
        if (ctx->pc != 0x16F6E0u) { return; }
    }
    ctx->pc = 0x16F6E0u;
label_16f6e0:
    // 0x16f6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f6e4:
    // 0x16f6e4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x16f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_16f6e8:
    // 0x16f6e8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x16f6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16f6ec:
    // 0x16f6ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_16f6f0:
    if (ctx->pc == 0x16F6F0u) {
        ctx->pc = 0x16F6F4u;
        goto label_16f6f4;
    }
    ctx->pc = 0x16F6ECu;
    {
        const bool branch_taken_0x16f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f6ec) {
            ctx->pc = 0x16F728u;
            goto label_16f728;
        }
    }
    ctx->pc = 0x16F6F4u;
label_16f6f4:
    // 0x16f6f4: 0xc059386  jal         func_164E18
label_16f6f8:
    if (ctx->pc == 0x16F6F8u) {
        ctx->pc = 0x16F6F8u;
            // 0x16f6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F6FCu;
        goto label_16f6fc;
    }
    ctx->pc = 0x16F6F4u;
    SET_GPR_U32(ctx, 31, 0x16F6FCu);
    ctx->pc = 0x16F6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6F4u;
            // 0x16f6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6FCu; }
        if (ctx->pc != 0x16F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6FCu; }
        if (ctx->pc != 0x16F6FCu) { return; }
    }
    ctx->pc = 0x16F6FCu;
label_16f6fc:
    // 0x16f6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f700:
    // 0x16f700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f704:
    // 0x16f704: 0x56020011  bnel        $s0, $v0, . + 4 + (0x11 << 2)
label_16f708:
    if (ctx->pc == 0x16F708u) {
        ctx->pc = 0x16F708u;
            // 0x16f708: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F70Cu;
        goto label_16f70c;
    }
    ctx->pc = 0x16F704u;
    {
        const bool branch_taken_0x16f704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f704) {
            ctx->pc = 0x16F708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F704u;
            // 0x16f708: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F74Cu;
            goto label_16f74c;
        }
    }
    ctx->pc = 0x16F70Cu;
label_16f70c:
    // 0x16f70c: 0xc05c0fe  jal         func_1703F8
label_16f710:
    if (ctx->pc == 0x16F710u) {
        ctx->pc = 0x16F710u;
            // 0x16f710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F714u;
        goto label_16f714;
    }
    ctx->pc = 0x16F70Cu;
    SET_GPR_U32(ctx, 31, 0x16F714u);
    ctx->pc = 0x16F710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F70Cu;
            // 0x16f710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703F8u;
    if (runtime->hasFunction(0x1703F8u)) {
        auto targetFn = runtime->lookupFunction(0x1703F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F714u; }
        if (ctx->pc != 0x16F714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001703F8_0x1703f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F714u; }
        if (ctx->pc != 0x16F714u) { return; }
    }
    ctx->pc = 0x16F714u;
label_16f714:
    // 0x16f714: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
label_16f718:
    if (ctx->pc == 0x16F718u) {
        ctx->pc = 0x16F71Cu;
        goto label_16f71c;
    }
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F74Cu;
            goto label_16f74c;
        }
    }
    ctx->pc = 0x16F71Cu;
label_16f71c:
    // 0x16f71c: 0x1000000b  b           . + 4 + (0xB << 2)
label_16f720:
    if (ctx->pc == 0x16F720u) {
        ctx->pc = 0x16F720u;
            // 0x16f720: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F724u;
        goto label_16f724;
    }
    ctx->pc = 0x16F71Cu;
    {
        const bool branch_taken_0x16f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F71Cu;
            // 0x16f720: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f71c) {
            ctx->pc = 0x16F74Cu;
            goto label_16f74c;
        }
    }
    ctx->pc = 0x16F724u;
label_16f724:
    // 0x16f724: 0x0  nop
    ctx->pc = 0x16f724u;
    // NOP
label_16f728:
    // 0x16f728: 0xc059386  jal         func_164E18
label_16f72c:
    if (ctx->pc == 0x16F72Cu) {
        ctx->pc = 0x16F72Cu;
            // 0x16f72c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F730u;
        goto label_16f730;
    }
    ctx->pc = 0x16F728u;
    SET_GPR_U32(ctx, 31, 0x16F730u);
    ctx->pc = 0x16F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F728u;
            // 0x16f72c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F730u; }
        if (ctx->pc != 0x16F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F730u; }
        if (ctx->pc != 0x16F730u) { return; }
    }
    ctx->pc = 0x16F730u;
label_16f730:
    // 0x16f730: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16f734:
    // 0x16f734: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_16f738:
    if (ctx->pc == 0x16F738u) {
        ctx->pc = 0x16F73Cu;
        goto label_16f73c;
    }
    ctx->pc = 0x16F734u;
    {
        const bool branch_taken_0x16f734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f734) {
            ctx->pc = 0x16F74Cu;
            goto label_16f74c;
        }
    }
    ctx->pc = 0x16F73Cu;
label_16f73c:
    // 0x16f73c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x16f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_16f740:
    // 0x16f740: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x16f740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_16f744:
    // 0x16f744: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x16f744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16f748:
    // 0x16f748: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x16f748u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16f74c:
    // 0x16f74c: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_16f750:
    if (ctx->pc == 0x16F750u) {
        ctx->pc = 0x16F750u;
            // 0x16f750: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x16F754u;
        goto label_16f754;
    }
    ctx->pc = 0x16F74Cu;
    {
        const bool branch_taken_0x16f74c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F74Cu;
            // 0x16f750: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f74c) {
            ctx->pc = 0x16F778u;
            goto label_16f778;
        }
    }
    ctx->pc = 0x16F754u;
label_16f754:
    // 0x16f754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f758:
    // 0x16f758: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x16f758u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_16f75c:
    // 0x16f75c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16f75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f760:
    // 0x16f760: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f764:
    // 0x16f764: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_16f768:
    // 0x16f768: 0x60f809  jalr        $v1
label_16f76c:
    if (ctx->pc == 0x16F76Cu) {
        ctx->pc = 0x16F76Cu;
            // 0x16f76c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F770u;
        goto label_16f770;
    }
    ctx->pc = 0x16F768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F770u);
        ctx->pc = 0x16F76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F768u;
            // 0x16f76c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F770u; }
            if (ctx->pc != 0x16F770u) { return; }
        }
        }
    }
    ctx->pc = 0x16F770u;
label_16f770:
    // 0x16f770: 0x10000033  b           . + 4 + (0x33 << 2)
label_16f774:
    if (ctx->pc == 0x16F774u) {
        ctx->pc = 0x16F774u;
            // 0x16f774: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16F778u;
        goto label_16f778;
    }
    ctx->pc = 0x16F770u;
    {
        const bool branch_taken_0x16f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F770u;
            // 0x16f774: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f770) {
            ctx->pc = 0x16F840u;
            goto label_16f840;
        }
    }
    ctx->pc = 0x16F778u;
label_16f778:
    // 0x16f778: 0xc05c058  jal         func_170160
label_16f77c:
    if (ctx->pc == 0x16F77Cu) {
        ctx->pc = 0x16F77Cu;
            // 0x16f77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F780u;
        goto label_16f780;
    }
    ctx->pc = 0x16F778u;
    SET_GPR_U32(ctx, 31, 0x16F780u);
    ctx->pc = 0x16F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F778u;
            // 0x16f77c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170160u;
    if (runtime->hasFunction(0x170160u)) {
        auto targetFn = runtime->lookupFunction(0x170160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F780u; }
        if (ctx->pc != 0x16F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170160_0x170160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F780u; }
        if (ctx->pc != 0x16F780u) { return; }
    }
    ctx->pc = 0x16F780u;
label_16f780:
    // 0x16f780: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x16f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16f784:
    // 0x16f784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f788:
    // 0x16f788: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f78c:
    // 0x16f78c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x16f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16f790:
    // 0x16f790: 0x40f809  jalr        $v0
label_16f794:
    if (ctx->pc == 0x16F794u) {
        ctx->pc = 0x16F794u;
            // 0x16f794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F798u;
        goto label_16f798;
    }
    ctx->pc = 0x16F790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F798u);
        ctx->pc = 0x16F794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F790u;
            // 0x16f794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F798u; }
            if (ctx->pc != 0x16F798u) { return; }
        }
        }
    }
    ctx->pc = 0x16F798u;
label_16f798:
    // 0x16f798: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x16f798u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_16f79c:
    // 0x16f79c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16f7a0:
    // 0x16f7a0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16f7a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_16f7a4:
    // 0x16f7a4: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x16f7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16f7a8:
    // 0x16f7a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_16f7ac:
    if (ctx->pc == 0x16F7ACu) {
        ctx->pc = 0x16F7B0u;
        goto label_16f7b0;
    }
    ctx->pc = 0x16F7A8u;
    {
        const bool branch_taken_0x16f7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f7a8) {
            ctx->pc = 0x16F7D0u;
            goto label_16f7d0;
        }
    }
    ctx->pc = 0x16F7B0u;
label_16f7b0:
    // 0x16f7b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f7b4:
    // 0x16f7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f7b8:
    // 0x16f7b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16f7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f7bc:
    // 0x16f7bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f7c0:
    // 0x16f7c0: 0x40f809  jalr        $v0
label_16f7c4:
    if (ctx->pc == 0x16F7C4u) {
        ctx->pc = 0x16F7C4u;
            // 0x16f7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F7C8u;
        goto label_16f7c8;
    }
    ctx->pc = 0x16F7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F7C8u);
        ctx->pc = 0x16F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7C0u;
            // 0x16f7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F7C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F7C8u; }
            if (ctx->pc != 0x16F7C8u) { return; }
        }
        }
    }
    ctx->pc = 0x16F7C8u;
label_16f7c8:
    // 0x16f7c8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_16f7cc:
    if (ctx->pc == 0x16F7CCu) {
        ctx->pc = 0x16F7CCu;
            // 0x16f7cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16F7D0u;
        goto label_16f7d0;
    }
    ctx->pc = 0x16F7C8u;
    {
        const bool branch_taken_0x16f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7C8u;
            // 0x16f7cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7c8) {
            ctx->pc = 0x16F840u;
            goto label_16f840;
        }
    }
    ctx->pc = 0x16F7D0u;
label_16f7d0:
    // 0x16f7d0: 0xc059386  jal         func_164E18
label_16f7d4:
    if (ctx->pc == 0x16F7D4u) {
        ctx->pc = 0x16F7D4u;
            // 0x16f7d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F7D8u;
        goto label_16f7d8;
    }
    ctx->pc = 0x16F7D0u;
    SET_GPR_U32(ctx, 31, 0x16F7D8u);
    ctx->pc = 0x16F7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7D0u;
            // 0x16f7d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F7D8u; }
        if (ctx->pc != 0x16F7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F7D8u; }
        if (ctx->pc != 0x16F7D8u) { return; }
    }
    ctx->pc = 0x16F7D8u;
label_16f7d8:
    // 0x16f7d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16f7dc:
    // 0x16f7dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_16f7e0:
    if (ctx->pc == 0x16F7E0u) {
        ctx->pc = 0x16F7E0u;
            // 0x16f7e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F7E4u;
        goto label_16f7e4;
    }
    ctx->pc = 0x16F7DCu;
    {
        const bool branch_taken_0x16f7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7DCu;
            // 0x16f7e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7dc) {
            ctx->pc = 0x16F7F8u;
            goto label_16f7f8;
        }
    }
    ctx->pc = 0x16F7E4u;
label_16f7e4:
    // 0x16f7e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f7e8:
    // 0x16f7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f7ec:
    // 0x16f7ec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f7f0:
    // 0x16f7f0: 0x40f809  jalr        $v0
label_16f7f4:
    if (ctx->pc == 0x16F7F4u) {
        ctx->pc = 0x16F7F4u;
            // 0x16f7f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F7F8u;
        goto label_16f7f8;
    }
    ctx->pc = 0x16F7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F7F8u);
        ctx->pc = 0x16F7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7F0u;
            // 0x16f7f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F7F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F7F8u; }
            if (ctx->pc != 0x16F7F8u) { return; }
        }
        }
    }
    ctx->pc = 0x16F7F8u;
label_16f7f8:
    // 0x16f7f8: 0xc059386  jal         func_164E18
label_16f7fc:
    if (ctx->pc == 0x16F7FCu) {
        ctx->pc = 0x16F7FCu;
            // 0x16f7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F800u;
        goto label_16f800;
    }
    ctx->pc = 0x16F7F8u;
    SET_GPR_U32(ctx, 31, 0x16F800u);
    ctx->pc = 0x16F7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7F8u;
            // 0x16f7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F800u; }
        if (ctx->pc != 0x16F800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F800u; }
        if (ctx->pc != 0x16F800u) { return; }
    }
    ctx->pc = 0x16F800u;
label_16f800:
    // 0x16f800: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_16f804:
    // 0x16f804: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_16f808:
    if (ctx->pc == 0x16F808u) {
        ctx->pc = 0x16F808u;
            // 0x16f808: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x16F80Cu;
        goto label_16f80c;
    }
    ctx->pc = 0x16F804u;
    {
        const bool branch_taken_0x16f804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f804) {
            ctx->pc = 0x16F808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F804u;
            // 0x16f808: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F828u;
            goto label_16f828;
        }
    }
    ctx->pc = 0x16F80Cu;
label_16f80c:
    // 0x16f80c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f810:
    // 0x16f810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f814:
    // 0x16f814: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16f814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f818:
    // 0x16f818: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f81c:
    // 0x16f81c: 0x40f809  jalr        $v0
label_16f820:
    if (ctx->pc == 0x16F820u) {
        ctx->pc = 0x16F820u;
            // 0x16f820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16F824u;
        goto label_16f824;
    }
    ctx->pc = 0x16F81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F824u);
        ctx->pc = 0x16F820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F81Cu;
            // 0x16f820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F824u; }
            if (ctx->pc != 0x16F824u) { return; }
        }
        }
    }
    ctx->pc = 0x16F824u;
label_16f824:
    // 0x16f824: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x16f824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_16f828:
    // 0x16f828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f82c:
    // 0x16f82c: 0xc059474  jal         func_1651D0
label_16f830:
    if (ctx->pc == 0x16F830u) {
        ctx->pc = 0x16F830u;
            // 0x16f830: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x16F834u;
        goto label_16f834;
    }
    ctx->pc = 0x16F82Cu;
    SET_GPR_U32(ctx, 31, 0x16F834u);
    ctx->pc = 0x16F830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F82Cu;
            // 0x16f830: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1651D0u;
    if (runtime->hasFunction(0x1651D0u)) {
        auto targetFn = runtime->lookupFunction(0x1651D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F834u; }
        if (ctx->pc != 0x16F834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001651D0_0x1651d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F834u; }
        if (ctx->pc != 0x16F834u) { return; }
    }
    ctx->pc = 0x16F834u;
label_16f834:
    // 0x16f834: 0xc059494  jal         func_165250
label_16f838:
    if (ctx->pc == 0x16F838u) {
        ctx->pc = 0x16F838u;
            // 0x16f838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F83Cu;
        goto label_16f83c;
    }
    ctx->pc = 0x16F834u;
    SET_GPR_U32(ctx, 31, 0x16F83Cu);
    ctx->pc = 0x16F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F834u;
            // 0x16f838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165250u;
    if (runtime->hasFunction(0x165250u)) {
        auto targetFn = runtime->lookupFunction(0x165250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F83Cu; }
        if (ctx->pc != 0x16F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165250_0x165250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F83Cu; }
        if (ctx->pc != 0x16F83Cu) { return; }
    }
    ctx->pc = 0x16F83Cu;
label_16f83c:
    // 0x16f83c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16f83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16f840:
    // 0x16f840: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16f840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16f844:
    // 0x16f844: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16f844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16f848:
    // 0x16f848: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16f848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16f84c:
    // 0x16f84c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x16f84cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f850:
    // 0x16f850: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x16f850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16f854:
    // 0x16f854: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16f854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16f858:
    // 0x16f858: 0x3e00008  jr          $ra
label_16f85c:
    if (ctx->pc == 0x16F85Cu) {
        ctx->pc = 0x16F85Cu;
            // 0x16f85c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16F860u;
        goto label_fallthrough_0x16f858;
    }
    ctx->pc = 0x16F858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F858u;
            // 0x16f85c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16f858:
    ctx->pc = 0x16F860u;
}
