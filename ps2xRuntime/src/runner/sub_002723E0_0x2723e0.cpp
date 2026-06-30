#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002723E0
// Address: 0x2723e0 - 0x272610
void sub_002723E0_0x2723e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002723E0_0x2723e0");
#endif

    switch (ctx->pc) {
        case 0x2723e0u: goto label_2723e0;
        case 0x2723e4u: goto label_2723e4;
        case 0x2723e8u: goto label_2723e8;
        case 0x2723ecu: goto label_2723ec;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723f4u: goto label_2723f4;
        case 0x2723f8u: goto label_2723f8;
        case 0x2723fcu: goto label_2723fc;
        case 0x272400u: goto label_272400;
        case 0x272404u: goto label_272404;
        case 0x272408u: goto label_272408;
        case 0x27240cu: goto label_27240c;
        case 0x272410u: goto label_272410;
        case 0x272414u: goto label_272414;
        case 0x272418u: goto label_272418;
        case 0x27241cu: goto label_27241c;
        case 0x272420u: goto label_272420;
        case 0x272424u: goto label_272424;
        case 0x272428u: goto label_272428;
        case 0x27242cu: goto label_27242c;
        case 0x272430u: goto label_272430;
        case 0x272434u: goto label_272434;
        case 0x272438u: goto label_272438;
        case 0x27243cu: goto label_27243c;
        case 0x272440u: goto label_272440;
        case 0x272444u: goto label_272444;
        case 0x272448u: goto label_272448;
        case 0x27244cu: goto label_27244c;
        case 0x272450u: goto label_272450;
        case 0x272454u: goto label_272454;
        case 0x272458u: goto label_272458;
        case 0x27245cu: goto label_27245c;
        case 0x272460u: goto label_272460;
        case 0x272464u: goto label_272464;
        case 0x272468u: goto label_272468;
        case 0x27246cu: goto label_27246c;
        case 0x272470u: goto label_272470;
        case 0x272474u: goto label_272474;
        case 0x272478u: goto label_272478;
        case 0x27247cu: goto label_27247c;
        case 0x272480u: goto label_272480;
        case 0x272484u: goto label_272484;
        case 0x272488u: goto label_272488;
        case 0x27248cu: goto label_27248c;
        case 0x272490u: goto label_272490;
        case 0x272494u: goto label_272494;
        case 0x272498u: goto label_272498;
        case 0x27249cu: goto label_27249c;
        case 0x2724a0u: goto label_2724a0;
        case 0x2724a4u: goto label_2724a4;
        case 0x2724a8u: goto label_2724a8;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b0u: goto label_2724b0;
        case 0x2724b4u: goto label_2724b4;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724bcu: goto label_2724bc;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724c4u: goto label_2724c4;
        case 0x2724c8u: goto label_2724c8;
        case 0x2724ccu: goto label_2724cc;
        case 0x2724d0u: goto label_2724d0;
        case 0x2724d4u: goto label_2724d4;
        case 0x2724d8u: goto label_2724d8;
        case 0x2724dcu: goto label_2724dc;
        case 0x2724e0u: goto label_2724e0;
        case 0x2724e4u: goto label_2724e4;
        case 0x2724e8u: goto label_2724e8;
        case 0x2724ecu: goto label_2724ec;
        case 0x2724f0u: goto label_2724f0;
        case 0x2724f4u: goto label_2724f4;
        case 0x2724f8u: goto label_2724f8;
        case 0x2724fcu: goto label_2724fc;
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        case 0x272570u: goto label_272570;
        case 0x272574u: goto label_272574;
        case 0x272578u: goto label_272578;
        case 0x27257cu: goto label_27257c;
        case 0x272580u: goto label_272580;
        case 0x272584u: goto label_272584;
        case 0x272588u: goto label_272588;
        case 0x27258cu: goto label_27258c;
        case 0x272590u: goto label_272590;
        case 0x272594u: goto label_272594;
        case 0x272598u: goto label_272598;
        case 0x27259cu: goto label_27259c;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725a4u: goto label_2725a4;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725acu: goto label_2725ac;
        case 0x2725b0u: goto label_2725b0;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725bcu: goto label_2725bc;
        case 0x2725c0u: goto label_2725c0;
        case 0x2725c4u: goto label_2725c4;
        case 0x2725c8u: goto label_2725c8;
        case 0x2725ccu: goto label_2725cc;
        case 0x2725d0u: goto label_2725d0;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725d8u: goto label_2725d8;
        case 0x2725dcu: goto label_2725dc;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725e4u: goto label_2725e4;
        case 0x2725e8u: goto label_2725e8;
        case 0x2725ecu: goto label_2725ec;
        case 0x2725f0u: goto label_2725f0;
        case 0x2725f4u: goto label_2725f4;
        case 0x2725f8u: goto label_2725f8;
        case 0x2725fcu: goto label_2725fc;
        case 0x272600u: goto label_272600;
        case 0x272604u: goto label_272604;
        case 0x272608u: goto label_272608;
        case 0x27260cu: goto label_27260c;
        default: break;
    }

    ctx->pc = 0x2723e0u;

label_2723e0:
    // 0x2723e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2723e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2723e4:
    // 0x2723e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2723e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2723e8:
    // 0x2723e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2723e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2723ec:
    // 0x2723ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2723ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2723f0:
    // 0x2723f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2723f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2723f4:
    // 0x2723f4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_2723f8:
    if (ctx->pc == 0x2723F8u) {
        ctx->pc = 0x2723F8u;
            // 0x2723f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2723FCu;
        goto label_2723fc;
    }
    ctx->pc = 0x2723F4u;
    {
        const bool branch_taken_0x2723f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2723F4u;
            // 0x2723f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723f4) {
            ctx->pc = 0x2724B8u;
            goto label_2724b8;
        }
    }
    ctx->pc = 0x2723FCu;
label_2723fc:
    // 0x2723fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2723fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_272400:
    // 0x272400: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x272400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_272404:
    // 0x272404: 0x2463f350  addiu       $v1, $v1, -0xCB0
    ctx->pc = 0x272404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964048));
label_272408:
    // 0x272408: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x272408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_27240c:
    // 0x27240c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_272410:
    if (ctx->pc == 0x272410u) {
        ctx->pc = 0x272410u;
            // 0x272410: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x272414u;
        goto label_272414;
    }
    ctx->pc = 0x27240Cu;
    {
        const bool branch_taken_0x27240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27240Cu;
            // 0x272410: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27240c) {
            ctx->pc = 0x272460u;
            goto label_272460;
        }
    }
    ctx->pc = 0x272414u;
label_272414:
    // 0x272414: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x272414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_272418:
    // 0x272418: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x272418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27241c:
    // 0x27241c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_272420:
    // 0x272420: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_272424:
    if (ctx->pc == 0x272424u) {
        ctx->pc = 0x272428u;
        goto label_272428;
    }
    ctx->pc = 0x272420u;
    {
        const bool branch_taken_0x272420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272420) {
            ctx->pc = 0x272460u;
            goto label_272460;
        }
    }
    ctx->pc = 0x272428u;
label_272428:
    // 0x272428: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x272428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_27242c:
    // 0x27242c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27242cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_272430:
    // 0x272430: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x272430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_272434:
    // 0x272434: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x272434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_272438:
    // 0x272438: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x272438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27243c:
    // 0x27243c: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x27243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_272440:
    // 0x272440: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x272440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_272444:
    // 0x272444: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_272448:
    // 0x272448: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27244c:
    // 0x27244c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27244cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_272450:
    // 0x272450: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x272450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_272454:
    // 0x272454: 0xc0a7ab4  jal         func_29EAD0
label_272458:
    if (ctx->pc == 0x272458u) {
        ctx->pc = 0x272458u;
            // 0x272458: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x27245Cu;
        goto label_27245c;
    }
    ctx->pc = 0x272454u;
    SET_GPR_U32(ctx, 31, 0x27245Cu);
    ctx->pc = 0x272458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272454u;
            // 0x272458: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27245Cu; }
        if (ctx->pc != 0x27245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27245Cu; }
        if (ctx->pc != 0x27245Cu) { return; }
    }
    ctx->pc = 0x27245Cu;
label_27245c:
    // 0x27245c: 0x0  nop
    ctx->pc = 0x27245cu;
    // NOP
label_272460:
    // 0x272460: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_272464:
    if (ctx->pc == 0x272464u) {
        ctx->pc = 0x272464u;
            // 0x272464: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->pc = 0x272468u;
        goto label_272468;
    }
    ctx->pc = 0x272460u;
    {
        const bool branch_taken_0x272460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272460u;
            // 0x272464: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272460) {
            ctx->pc = 0x272490u;
            goto label_272490;
        }
    }
    ctx->pc = 0x272468u;
label_272468:
    // 0x272468: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x272468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
label_27246c:
    // 0x27246c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_272470:
    if (ctx->pc == 0x272470u) {
        ctx->pc = 0x272470u;
            // 0x272470: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x272474u;
        goto label_272474;
    }
    ctx->pc = 0x27246Cu;
    {
        const bool branch_taken_0x27246c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27246Cu;
            // 0x272470: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27246c) {
            ctx->pc = 0x272490u;
            goto label_272490;
        }
    }
    ctx->pc = 0x272474u;
label_272474:
    // 0x272474: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272478:
    // 0x272478: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x272478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_27247c:
    // 0x27247c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_272480:
    if (ctx->pc == 0x272480u) {
        ctx->pc = 0x272480u;
            // 0x272480: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x272484u;
        goto label_272484;
    }
    ctx->pc = 0x27247Cu;
    {
        const bool branch_taken_0x27247c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x272480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27247Cu;
            // 0x272480: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27247c) {
            ctx->pc = 0x272490u;
            goto label_272490;
        }
    }
    ctx->pc = 0x272484u;
label_272484:
    // 0x272484: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_272488:
    // 0x272488: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x272488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_27248c:
    // 0x27248c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27248cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_272490:
    // 0x272490: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x272490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_272494:
    // 0x272494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_272498:
    // 0x272498: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_27249c:
    if (ctx->pc == 0x27249Cu) {
        ctx->pc = 0x27249Cu;
            // 0x27249c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x2724A0u;
        goto label_2724a0;
    }
    ctx->pc = 0x272498u;
    {
        const bool branch_taken_0x272498 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272498u;
            // 0x27249c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272498) {
            ctx->pc = 0x2724B8u;
            goto label_2724b8;
        }
    }
    ctx->pc = 0x2724A0u;
label_2724a0:
    // 0x2724a0: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2724a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2724a4:
    // 0x2724a4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2724a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2724a8:
    // 0x2724a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2724a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2724ac:
    // 0x2724ac: 0xc0a7ab4  jal         func_29EAD0
label_2724b0:
    if (ctx->pc == 0x2724B0u) {
        ctx->pc = 0x2724B0u;
            // 0x2724b0: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x2724B4u;
        goto label_2724b4;
    }
    ctx->pc = 0x2724ACu;
    SET_GPR_U32(ctx, 31, 0x2724B4u);
    ctx->pc = 0x2724B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2724ACu;
            // 0x2724b0: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724B4u; }
        if (ctx->pc != 0x2724B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724B4u; }
        if (ctx->pc != 0x2724B4u) { return; }
    }
    ctx->pc = 0x2724B4u;
label_2724b4:
    // 0x2724b4: 0x0  nop
    ctx->pc = 0x2724b4u;
    // NOP
label_2724b8:
    // 0x2724b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2724b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2724bc:
    // 0x2724bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2724bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2724c0:
    // 0x2724c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2724c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2724c4:
    // 0x2724c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2724c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2724c8:
    // 0x2724c8: 0x3e00008  jr          $ra
label_2724cc:
    if (ctx->pc == 0x2724CCu) {
        ctx->pc = 0x2724CCu;
            // 0x2724cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2724D0u;
        goto label_2724d0;
    }
    ctx->pc = 0x2724C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2724CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724C8u;
            // 0x2724cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2724D0u;
label_2724d0:
    // 0x2724d0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2724d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_2724d4:
    // 0x2724d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2724d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2724d8:
    // 0x2724d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2724d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2724dc:
    // 0x2724dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2724dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2724e0:
    // 0x2724e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2724e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2724e4:
    // 0x2724e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2724e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2724e8:
    // 0x2724e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2724e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2724ec:
    // 0x2724ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2724ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2724f0:
    // 0x2724f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2724f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2724f4:
    // 0x2724f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2724f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2724f8:
    // 0x2724f8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2724f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2724fc:
    // 0x2724fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2724fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272500:
    // 0x272500: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x272500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_272504:
    // 0x272504: 0x320f809  jalr        $t9
label_272508:
    if (ctx->pc == 0x272508u) {
        ctx->pc = 0x272508u;
            // 0x272508: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27250Cu;
        goto label_27250c;
    }
    ctx->pc = 0x272504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27250Cu);
        ctx->pc = 0x272508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272504u;
            // 0x272508: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27250Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27250Cu; }
            if (ctx->pc != 0x27250Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27250Cu;
label_27250c:
    // 0x27250c: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x27250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_272510:
    // 0x272510: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272514:
    // 0x272514: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x272514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_272518:
    // 0x272518: 0x320f809  jalr        $t9
label_27251c:
    if (ctx->pc == 0x27251Cu) {
        ctx->pc = 0x27251Cu;
            // 0x27251c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272520u;
        goto label_272520;
    }
    ctx->pc = 0x272518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272520u);
        ctx->pc = 0x27251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272518u;
            // 0x27251c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272520u; }
            if (ctx->pc != 0x272520u) { return; }
        }
        }
    }
    ctx->pc = 0x272520u;
label_272520:
    // 0x272520: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x272520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_272524:
    // 0x272524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272528:
    // 0x272528: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_27252c:
    if (ctx->pc == 0x27252Cu) {
        ctx->pc = 0x27252Cu;
            // 0x27252c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272530u;
        goto label_272530;
    }
    ctx->pc = 0x272528u;
    {
        const bool branch_taken_0x272528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272528u;
            // 0x27252c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272528) {
            ctx->pc = 0x2725E0u;
            goto label_2725e0;
        }
    }
    ctx->pc = 0x272530u;
label_272530:
    // 0x272530: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x272530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_272534:
    // 0x272534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272538:
    // 0x272538: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27253c:
    // 0x27253c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27253cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272540:
    // 0x272540: 0x320f809  jalr        $t9
label_272544:
    if (ctx->pc == 0x272544u) {
        ctx->pc = 0x272544u;
            // 0x272544: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x272548u;
        goto label_272548;
    }
    ctx->pc = 0x272540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272548u);
        ctx->pc = 0x272544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272540u;
            // 0x272544: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272548u; }
            if (ctx->pc != 0x272548u) { return; }
        }
        }
    }
    ctx->pc = 0x272548u;
label_272548:
    // 0x272548: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x272548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27254c:
    // 0x27254c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_272550:
    // 0x272550: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_272554:
    if (ctx->pc == 0x272554u) {
        ctx->pc = 0x272554u;
            // 0x272554: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x272558u;
        goto label_272558;
    }
    ctx->pc = 0x272550u;
    {
        const bool branch_taken_0x272550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x272554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272550u;
            // 0x272554: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272550) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x272558u;
label_272558:
    // 0x272558: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_27255c:
    if (ctx->pc == 0x27255Cu) {
        ctx->pc = 0x272560u;
        goto label_272560;
    }
    ctx->pc = 0x272558u;
    {
        const bool branch_taken_0x272558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x272558) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x272560u;
label_272560:
    // 0x272560: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_272564:
    // 0x272564: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_272568:
    if (ctx->pc == 0x272568u) {
        ctx->pc = 0x272568u;
            // 0x272568: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x27256Cu;
        goto label_27256c;
    }
    ctx->pc = 0x272564u;
    {
        const bool branch_taken_0x272564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x272568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272564u;
            // 0x272568: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272564) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x27256Cu;
label_27256c:
    // 0x27256c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_272570:
    if (ctx->pc == 0x272570u) {
        ctx->pc = 0x272574u;
        goto label_272574;
    }
    ctx->pc = 0x27256Cu;
    {
        const bool branch_taken_0x27256c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27256c) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x272574u;
label_272574:
    // 0x272574: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x272574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_272578:
    // 0x272578: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_27257c:
    if (ctx->pc == 0x27257Cu) {
        ctx->pc = 0x27257Cu;
            // 0x27257c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x272580u;
        goto label_272580;
    }
    ctx->pc = 0x272578u;
    {
        const bool branch_taken_0x272578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272578u;
            // 0x27257c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272578) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x272580u;
label_272580:
    // 0x272580: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_272584:
    if (ctx->pc == 0x272584u) {
        ctx->pc = 0x272588u;
        goto label_272588;
    }
    ctx->pc = 0x272580u;
    {
        const bool branch_taken_0x272580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x272580) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x272588u;
label_272588:
    // 0x272588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27258c:
    // 0x27258c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_272590:
    if (ctx->pc == 0x272590u) {
        ctx->pc = 0x272594u;
        goto label_272594;
    }
    ctx->pc = 0x27258Cu;
    {
        const bool branch_taken_0x27258c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27258c) {
            ctx->pc = 0x2725A0u;
            goto label_2725a0;
        }
    }
    ctx->pc = 0x272594u;
label_272594:
    // 0x272594: 0x10000008  b           . + 4 + (0x8 << 2)
label_272598:
    if (ctx->pc == 0x272598u) {
        ctx->pc = 0x27259Cu;
        goto label_27259c;
    }
    ctx->pc = 0x272594u;
    {
        const bool branch_taken_0x272594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272594) {
            ctx->pc = 0x2725B8u;
            goto label_2725b8;
        }
    }
    ctx->pc = 0x27259Cu;
label_27259c:
    // 0x27259c: 0x0  nop
    ctx->pc = 0x27259cu;
    // NOP
label_2725a0:
    // 0x2725a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2725a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2725a4:
    // 0x2725a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2725a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2725a8:
    // 0x2725a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2725a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2725ac:
    // 0x2725ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2725acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2725b0:
    // 0x2725b0: 0xc09c984  jal         func_272610
label_2725b4:
    if (ctx->pc == 0x2725B4u) {
        ctx->pc = 0x2725B4u;
            // 0x2725b4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2725B8u;
        goto label_2725b8;
    }
    ctx->pc = 0x2725B0u;
    SET_GPR_U32(ctx, 31, 0x2725B8u);
    ctx->pc = 0x2725B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2725B0u;
            // 0x2725b4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272610u;
    if (runtime->hasFunction(0x272610u)) {
        auto targetFn = runtime->lookupFunction(0x272610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725B8u; }
        if (ctx->pc != 0x2725B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00272610_0x272610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725B8u; }
        if (ctx->pc != 0x2725B8u) { return; }
    }
    ctx->pc = 0x2725B8u;
label_2725b8:
    // 0x2725b8: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2725bc:
    // 0x2725bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2725bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2725c0:
    // 0x2725c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2725c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2725c4:
    // 0x2725c4: 0x320f809  jalr        $t9
label_2725c8:
    if (ctx->pc == 0x2725C8u) {
        ctx->pc = 0x2725C8u;
            // 0x2725c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2725CCu;
        goto label_2725cc;
    }
    ctx->pc = 0x2725C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2725CCu);
        ctx->pc = 0x2725C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725C4u;
            // 0x2725c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2725CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2725CCu; }
            if (ctx->pc != 0x2725CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2725CCu;
label_2725cc:
    // 0x2725cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2725ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2725d0:
    // 0x2725d0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2725d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2725d4:
    // 0x2725d4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_2725d8:
    if (ctx->pc == 0x2725D8u) {
        ctx->pc = 0x2725D8u;
            // 0x2725d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2725DCu;
        goto label_2725dc;
    }
    ctx->pc = 0x2725D4u;
    {
        const bool branch_taken_0x2725d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725D4u;
            // 0x2725d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725d4) {
            ctx->pc = 0x272530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272530;
        }
    }
    ctx->pc = 0x2725DCu;
label_2725dc:
    // 0x2725dc: 0x0  nop
    ctx->pc = 0x2725dcu;
    // NOP
label_2725e0:
    // 0x2725e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2725e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2725e4:
    // 0x2725e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2725e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2725e8:
    // 0x2725e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2725e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2725ec:
    // 0x2725ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2725ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2725f0:
    // 0x2725f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2725f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2725f4:
    // 0x2725f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2725f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2725f8:
    // 0x2725f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2725f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2725fc:
    // 0x2725fc: 0x3e00008  jr          $ra
label_272600:
    if (ctx->pc == 0x272600u) {
        ctx->pc = 0x272600u;
            // 0x272600: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x272604u;
        goto label_272604;
    }
    ctx->pc = 0x2725FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725FCu;
            // 0x272600: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272604u;
label_272604:
    // 0x272604: 0x0  nop
    ctx->pc = 0x272604u;
    // NOP
label_272608:
    // 0x272608: 0x0  nop
    ctx->pc = 0x272608u;
    // NOP
label_27260c:
    // 0x27260c: 0x0  nop
    ctx->pc = 0x27260cu;
    // NOP
}
