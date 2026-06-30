#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A8410
// Address: 0x3a8410 - 0x3a86f0
void sub_003A8410_0x3a8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8410_0x3a8410");
#endif

    switch (ctx->pc) {
        case 0x3a8410u: goto label_3a8410;
        case 0x3a8414u: goto label_3a8414;
        case 0x3a8418u: goto label_3a8418;
        case 0x3a841cu: goto label_3a841c;
        case 0x3a8420u: goto label_3a8420;
        case 0x3a8424u: goto label_3a8424;
        case 0x3a8428u: goto label_3a8428;
        case 0x3a842cu: goto label_3a842c;
        case 0x3a8430u: goto label_3a8430;
        case 0x3a8434u: goto label_3a8434;
        case 0x3a8438u: goto label_3a8438;
        case 0x3a843cu: goto label_3a843c;
        case 0x3a8440u: goto label_3a8440;
        case 0x3a8444u: goto label_3a8444;
        case 0x3a8448u: goto label_3a8448;
        case 0x3a844cu: goto label_3a844c;
        case 0x3a8450u: goto label_3a8450;
        case 0x3a8454u: goto label_3a8454;
        case 0x3a8458u: goto label_3a8458;
        case 0x3a845cu: goto label_3a845c;
        case 0x3a8460u: goto label_3a8460;
        case 0x3a8464u: goto label_3a8464;
        case 0x3a8468u: goto label_3a8468;
        case 0x3a846cu: goto label_3a846c;
        case 0x3a8470u: goto label_3a8470;
        case 0x3a8474u: goto label_3a8474;
        case 0x3a8478u: goto label_3a8478;
        case 0x3a847cu: goto label_3a847c;
        case 0x3a8480u: goto label_3a8480;
        case 0x3a8484u: goto label_3a8484;
        case 0x3a8488u: goto label_3a8488;
        case 0x3a848cu: goto label_3a848c;
        case 0x3a8490u: goto label_3a8490;
        case 0x3a8494u: goto label_3a8494;
        case 0x3a8498u: goto label_3a8498;
        case 0x3a849cu: goto label_3a849c;
        case 0x3a84a0u: goto label_3a84a0;
        case 0x3a84a4u: goto label_3a84a4;
        case 0x3a84a8u: goto label_3a84a8;
        case 0x3a84acu: goto label_3a84ac;
        case 0x3a84b0u: goto label_3a84b0;
        case 0x3a84b4u: goto label_3a84b4;
        case 0x3a84b8u: goto label_3a84b8;
        case 0x3a84bcu: goto label_3a84bc;
        case 0x3a84c0u: goto label_3a84c0;
        case 0x3a84c4u: goto label_3a84c4;
        case 0x3a84c8u: goto label_3a84c8;
        case 0x3a84ccu: goto label_3a84cc;
        case 0x3a84d0u: goto label_3a84d0;
        case 0x3a84d4u: goto label_3a84d4;
        case 0x3a84d8u: goto label_3a84d8;
        case 0x3a84dcu: goto label_3a84dc;
        case 0x3a84e0u: goto label_3a84e0;
        case 0x3a84e4u: goto label_3a84e4;
        case 0x3a84e8u: goto label_3a84e8;
        case 0x3a84ecu: goto label_3a84ec;
        case 0x3a84f0u: goto label_3a84f0;
        case 0x3a84f4u: goto label_3a84f4;
        case 0x3a84f8u: goto label_3a84f8;
        case 0x3a84fcu: goto label_3a84fc;
        case 0x3a8500u: goto label_3a8500;
        case 0x3a8504u: goto label_3a8504;
        case 0x3a8508u: goto label_3a8508;
        case 0x3a850cu: goto label_3a850c;
        case 0x3a8510u: goto label_3a8510;
        case 0x3a8514u: goto label_3a8514;
        case 0x3a8518u: goto label_3a8518;
        case 0x3a851cu: goto label_3a851c;
        case 0x3a8520u: goto label_3a8520;
        case 0x3a8524u: goto label_3a8524;
        case 0x3a8528u: goto label_3a8528;
        case 0x3a852cu: goto label_3a852c;
        case 0x3a8530u: goto label_3a8530;
        case 0x3a8534u: goto label_3a8534;
        case 0x3a8538u: goto label_3a8538;
        case 0x3a853cu: goto label_3a853c;
        case 0x3a8540u: goto label_3a8540;
        case 0x3a8544u: goto label_3a8544;
        case 0x3a8548u: goto label_3a8548;
        case 0x3a854cu: goto label_3a854c;
        case 0x3a8550u: goto label_3a8550;
        case 0x3a8554u: goto label_3a8554;
        case 0x3a8558u: goto label_3a8558;
        case 0x3a855cu: goto label_3a855c;
        case 0x3a8560u: goto label_3a8560;
        case 0x3a8564u: goto label_3a8564;
        case 0x3a8568u: goto label_3a8568;
        case 0x3a856cu: goto label_3a856c;
        case 0x3a8570u: goto label_3a8570;
        case 0x3a8574u: goto label_3a8574;
        case 0x3a8578u: goto label_3a8578;
        case 0x3a857cu: goto label_3a857c;
        case 0x3a8580u: goto label_3a8580;
        case 0x3a8584u: goto label_3a8584;
        case 0x3a8588u: goto label_3a8588;
        case 0x3a858cu: goto label_3a858c;
        case 0x3a8590u: goto label_3a8590;
        case 0x3a8594u: goto label_3a8594;
        case 0x3a8598u: goto label_3a8598;
        case 0x3a859cu: goto label_3a859c;
        case 0x3a85a0u: goto label_3a85a0;
        case 0x3a85a4u: goto label_3a85a4;
        case 0x3a85a8u: goto label_3a85a8;
        case 0x3a85acu: goto label_3a85ac;
        case 0x3a85b0u: goto label_3a85b0;
        case 0x3a85b4u: goto label_3a85b4;
        case 0x3a85b8u: goto label_3a85b8;
        case 0x3a85bcu: goto label_3a85bc;
        case 0x3a85c0u: goto label_3a85c0;
        case 0x3a85c4u: goto label_3a85c4;
        case 0x3a85c8u: goto label_3a85c8;
        case 0x3a85ccu: goto label_3a85cc;
        case 0x3a85d0u: goto label_3a85d0;
        case 0x3a85d4u: goto label_3a85d4;
        case 0x3a85d8u: goto label_3a85d8;
        case 0x3a85dcu: goto label_3a85dc;
        case 0x3a85e0u: goto label_3a85e0;
        case 0x3a85e4u: goto label_3a85e4;
        case 0x3a85e8u: goto label_3a85e8;
        case 0x3a85ecu: goto label_3a85ec;
        case 0x3a85f0u: goto label_3a85f0;
        case 0x3a85f4u: goto label_3a85f4;
        case 0x3a85f8u: goto label_3a85f8;
        case 0x3a85fcu: goto label_3a85fc;
        case 0x3a8600u: goto label_3a8600;
        case 0x3a8604u: goto label_3a8604;
        case 0x3a8608u: goto label_3a8608;
        case 0x3a860cu: goto label_3a860c;
        case 0x3a8610u: goto label_3a8610;
        case 0x3a8614u: goto label_3a8614;
        case 0x3a8618u: goto label_3a8618;
        case 0x3a861cu: goto label_3a861c;
        case 0x3a8620u: goto label_3a8620;
        case 0x3a8624u: goto label_3a8624;
        case 0x3a8628u: goto label_3a8628;
        case 0x3a862cu: goto label_3a862c;
        case 0x3a8630u: goto label_3a8630;
        case 0x3a8634u: goto label_3a8634;
        case 0x3a8638u: goto label_3a8638;
        case 0x3a863cu: goto label_3a863c;
        case 0x3a8640u: goto label_3a8640;
        case 0x3a8644u: goto label_3a8644;
        case 0x3a8648u: goto label_3a8648;
        case 0x3a864cu: goto label_3a864c;
        case 0x3a8650u: goto label_3a8650;
        case 0x3a8654u: goto label_3a8654;
        case 0x3a8658u: goto label_3a8658;
        case 0x3a865cu: goto label_3a865c;
        case 0x3a8660u: goto label_3a8660;
        case 0x3a8664u: goto label_3a8664;
        case 0x3a8668u: goto label_3a8668;
        case 0x3a866cu: goto label_3a866c;
        case 0x3a8670u: goto label_3a8670;
        case 0x3a8674u: goto label_3a8674;
        case 0x3a8678u: goto label_3a8678;
        case 0x3a867cu: goto label_3a867c;
        case 0x3a8680u: goto label_3a8680;
        case 0x3a8684u: goto label_3a8684;
        case 0x3a8688u: goto label_3a8688;
        case 0x3a868cu: goto label_3a868c;
        case 0x3a8690u: goto label_3a8690;
        case 0x3a8694u: goto label_3a8694;
        case 0x3a8698u: goto label_3a8698;
        case 0x3a869cu: goto label_3a869c;
        case 0x3a86a0u: goto label_3a86a0;
        case 0x3a86a4u: goto label_3a86a4;
        case 0x3a86a8u: goto label_3a86a8;
        case 0x3a86acu: goto label_3a86ac;
        case 0x3a86b0u: goto label_3a86b0;
        case 0x3a86b4u: goto label_3a86b4;
        case 0x3a86b8u: goto label_3a86b8;
        case 0x3a86bcu: goto label_3a86bc;
        case 0x3a86c0u: goto label_3a86c0;
        case 0x3a86c4u: goto label_3a86c4;
        case 0x3a86c8u: goto label_3a86c8;
        case 0x3a86ccu: goto label_3a86cc;
        case 0x3a86d0u: goto label_3a86d0;
        case 0x3a86d4u: goto label_3a86d4;
        case 0x3a86d8u: goto label_3a86d8;
        case 0x3a86dcu: goto label_3a86dc;
        case 0x3a86e0u: goto label_3a86e0;
        case 0x3a86e4u: goto label_3a86e4;
        case 0x3a86e8u: goto label_3a86e8;
        case 0x3a86ecu: goto label_3a86ec;
        default: break;
    }

    ctx->pc = 0x3a8410u;

label_3a8410:
    // 0x3a8410: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3a8410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3a8414:
    // 0x3a8414: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a8414u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a8418:
    // 0x3a8418: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a8418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a841c:
    // 0x3a841c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3a8420:
    // 0x3a8420: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a8420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3a8424:
    // 0x3a8424: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a8424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3a8428:
    // 0x3a8428: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a8428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a842c:
    // 0x3a842c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a8430:
    // 0x3a8430: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a8430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8434:
    // 0x3a8434: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a8434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a8438:
    // 0x3a8438: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3a8438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3a843c:
    // 0x3a843c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a8440:
    // 0x3a8440: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3a8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3a8444:
    // 0x3a8444: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a8444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a8448:
    // 0x3a8448: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x3a8448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a844c:
    // 0x3a844c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a8450:
    // 0x3a8450: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x3a8450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a8454:
    // 0x3a8454: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a8454u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a8458:
    // 0x3a8458: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a8458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a845c:
    // 0x3a845c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a845cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a8460:
    // 0x3a8460: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3a8460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3a8464:
    // 0x3a8464: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a8464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a8468:
    // 0x3a8468: 0x24910038  addiu       $s1, $a0, 0x38
    ctx->pc = 0x3a8468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_3a846c:
    // 0x3a846c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a8470:
    // 0x3a8470: 0x906411a1  lbu         $a0, 0x11A1($v1)
    ctx->pc = 0x3a8470u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4513)));
label_3a8474:
    // 0x3a8474: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
label_3a8478:
    if (ctx->pc == 0x3A8478u) {
        ctx->pc = 0x3A8478u;
            // 0x3a8478: 0x26b20008  addiu       $s2, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x3A847Cu;
        goto label_3a847c;
    }
    ctx->pc = 0x3A8474u;
    {
        const bool branch_taken_0x3a8474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8474u;
            // 0x3a8478: 0x26b20008  addiu       $s2, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8474) {
            ctx->pc = 0x3A86B8u;
            goto label_3a86b8;
        }
    }
    ctx->pc = 0x3A847Cu;
label_3a847c:
    // 0x3a847c: 0x8c640da0  lw          $a0, 0xDA0($v1)
    ctx->pc = 0x3a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3a8480:
    // 0x3a8480: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x3a8480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_3a8484:
    // 0x3a8484: 0x5480008d  bnel        $a0, $zero, . + 4 + (0x8D << 2)
label_3a8488:
    if (ctx->pc == 0x3A8488u) {
        ctx->pc = 0x3A8488u;
            // 0x3a8488: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3A848Cu;
        goto label_3a848c;
    }
    ctx->pc = 0x3A8484u;
    {
        const bool branch_taken_0x3a8484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8484) {
            ctx->pc = 0x3A8488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8484u;
            // 0x3a8488: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A86BCu;
            goto label_3a86bc;
        }
    }
    ctx->pc = 0x3A848Cu;
label_3a848c:
    // 0x3a848c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3a848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a8490:
    // 0x3a8490: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3a8490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a8494:
    // 0x3a8494: 0x908400e4  lbu         $a0, 0xE4($a0)
    ctx->pc = 0x3a8494u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
label_3a8498:
    // 0x3a8498: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x3a8498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_3a849c:
    // 0x3a849c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3a849cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a84a0:
    // 0x3a84a0: 0x14800085  bnez        $a0, . + 4 + (0x85 << 2)
label_3a84a4:
    if (ctx->pc == 0x3A84A4u) {
        ctx->pc = 0x3A84A8u;
        goto label_3a84a8;
    }
    ctx->pc = 0x3A84A0u;
    {
        const bool branch_taken_0x3a84a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a84a0) {
            ctx->pc = 0x3A86B8u;
            goto label_3a86b8;
        }
    }
    ctx->pc = 0x3A84A8u;
label_3a84a8:
    // 0x3a84a8: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3a84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3a84ac:
    // 0x3a84ac: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x3a84acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_3a84b0:
    // 0x3a84b0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3a84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3a84b4:
    // 0x3a84b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a84b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a84b8:
    // 0x3a84b8: 0xc4610de4  lwc1        $f1, 0xDE4($v1)
    ctx->pc = 0x3a84b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a84bc:
    // 0x3a84bc: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_3a84c0:
    // 0x3a84c0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3a84c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_3a84c4:
    // 0x3a84c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3a84c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a84c8:
    // 0x3a84c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a84c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a84cc:
    // 0x3a84cc: 0x0  nop
    ctx->pc = 0x3a84ccu;
    // NOP
label_3a84d0:
    // 0x3a84d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3a84d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3a84d4:
    // 0x3a84d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a84d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a84d8:
    // 0x3a84d8: 0x0  nop
    ctx->pc = 0x3a84d8u;
    // NOP
label_3a84dc:
    // 0x3a84dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a84dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a84e0:
    // 0x3a84e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a84e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a84e4:
    // 0x3a84e4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3a84e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3a84e8:
    // 0x3a84e8: 0x0  nop
    ctx->pc = 0x3a84e8u;
    // NOP
label_3a84ec:
    // 0x3a84ec: 0x6030003  bgezl       $s0, . + 4 + (0x3 << 2)
label_3a84f0:
    if (ctx->pc == 0x3A84F0u) {
        ctx->pc = 0x3A84F0u;
            // 0x3a84f0: 0x2a0103e8  slti        $at, $s0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->pc = 0x3A84F4u;
        goto label_3a84f4;
    }
    ctx->pc = 0x3A84ECu;
    {
        const bool branch_taken_0x3a84ec = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3a84ec) {
            ctx->pc = 0x3A84F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A84ECu;
            // 0x3a84f0: 0x2a0103e8  slti        $at, $s0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A84FCu;
            goto label_3a84fc;
        }
    }
    ctx->pc = 0x3A84F4u;
label_3a84f4:
    // 0x3a84f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a84f8:
    if (ctx->pc == 0x3A84F8u) {
        ctx->pc = 0x3A84F8u;
            // 0x3a84f8: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->pc = 0x3A84FCu;
        goto label_3a84fc;
    }
    ctx->pc = 0x3A84F4u;
    {
        const bool branch_taken_0x3a84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A84F4u;
            // 0x3a84f8: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a84f4) {
            ctx->pc = 0x3A8508u;
            goto label_3a8508;
        }
    }
    ctx->pc = 0x3A84FCu;
label_3a84fc:
    // 0x3a84fc: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_3a8500:
    if (ctx->pc == 0x3A8500u) {
        ctx->pc = 0x3A8500u;
            // 0x3a8500: 0x8c650d6c  lw          $a1, 0xD6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
        ctx->pc = 0x3A8504u;
        goto label_3a8504;
    }
    ctx->pc = 0x3A84FCu;
    {
        const bool branch_taken_0x3a84fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a84fc) {
            ctx->pc = 0x3A8500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A84FCu;
            // 0x3a8500: 0x8c650d6c  lw          $a1, 0xD6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A850Cu;
            goto label_3a850c;
        }
    }
    ctx->pc = 0x3A8504u;
label_3a8504:
    // 0x3a8504: 0x241003e7  addiu       $s0, $zero, 0x3E7
    ctx->pc = 0x3a8504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_3a8508:
    // 0x3a8508: 0x8c650d6c  lw          $a1, 0xD6C($v1)
    ctx->pc = 0x3a8508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_3a850c:
    // 0x3a850c: 0x24640440  addiu       $a0, $v1, 0x440
    ctx->pc = 0x3a850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
label_3a8510:
    // 0x3a8510: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a8510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a8514:
    // 0x3a8514: 0x2442cd10  addiu       $v0, $v0, -0x32F0
    ctx->pc = 0x3a8514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954256));
label_3a8518:
    // 0x3a8518: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x3a8518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_3a851c:
    // 0x3a851c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a851cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a8520:
    // 0x3a8520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a8524:
    // 0x3a8524: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x3a8524u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8528:
    // 0x3a8528: 0xc0754b4  jal         func_1D52D0
label_3a852c:
    if (ctx->pc == 0x3A852Cu) {
        ctx->pc = 0x3A852Cu;
            // 0x3a852c: 0xc6340024  lwc1        $f20, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x3A8530u;
        goto label_3a8530;
    }
    ctx->pc = 0x3A8528u;
    SET_GPR_U32(ctx, 31, 0x3A8530u);
    ctx->pc = 0x3A852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8528u;
            // 0x3a852c: 0xc6340024  lwc1        $f20, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8530u; }
        if (ctx->pc != 0x3A8530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8530u; }
        if (ctx->pc != 0x3A8530u) { return; }
    }
    ctx->pc = 0x3A8530u;
label_3a8530:
    // 0x3a8530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a8530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8534:
    // 0x3a8534: 0x0  nop
    ctx->pc = 0x3a8534u;
    // NOP
label_3a8538:
    // 0x3a8538: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3a8538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a853c:
    // 0x3a853c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3a8540:
    if (ctx->pc == 0x3A8540u) {
        ctx->pc = 0x3A8540u;
            // 0x3a8540: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x3A8544u;
        goto label_3a8544;
    }
    ctx->pc = 0x3A853Cu;
    {
        const bool branch_taken_0x3a853c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a853c) {
            ctx->pc = 0x3A8540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A853Cu;
            // 0x3a8540: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8550u;
            goto label_3a8550;
        }
    }
    ctx->pc = 0x3A8544u;
label_3a8544:
    // 0x3a8544: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a8544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a8548:
    // 0x3a8548: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3a8548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a854c:
    // 0x3a854c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3a854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3a8550:
    // 0x3a8550: 0x86340008  lh          $s4, 0x8($s1)
    ctx->pc = 0x3a8550u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_3a8554:
    // 0x3a8554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a8554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8558:
    // 0x3a8558: 0x8633000a  lh          $s3, 0xA($s1)
    ctx->pc = 0x3a8558u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_3a855c:
    // 0x3a855c: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x3a855cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
label_3a8560:
    // 0x3a8560: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x3a8560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_3a8564:
    // 0x3a8564: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3a8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8568:
    // 0x3a8568: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x3a8568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3a856c:
    // 0x3a856c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3a8570:
    if (ctx->pc == 0x3A8570u) {
        ctx->pc = 0x3A8570u;
            // 0x3a8570: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A8574u;
        goto label_3a8574;
    }
    ctx->pc = 0x3A856Cu;
    {
        const bool branch_taken_0x3a856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A856Cu;
            // 0x3a8570: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a856c) {
            ctx->pc = 0x3A8594u;
            goto label_3a8594;
        }
    }
    ctx->pc = 0x3A8574u;
label_3a8574:
    // 0x3a8574: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a8578:
    // 0x3a8578: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a857c:
    // 0x3a857c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a857cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8580:
    // 0x3a8580: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a8580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a8584:
    // 0x3a8584: 0x320f809  jalr        $t9
label_3a8588:
    if (ctx->pc == 0x3A8588u) {
        ctx->pc = 0x3A8588u;
            // 0x3a8588: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A858Cu;
        goto label_3a858c;
    }
    ctx->pc = 0x3A8584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A858Cu);
        ctx->pc = 0x3A8588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8584u;
            // 0x3a8588: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A858Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A858Cu; }
            if (ctx->pc != 0x3A858Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A858Cu;
label_3a858c:
    // 0x3a858c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8590:
    // 0x3a8590: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x3a8590u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
label_3a8594:
    // 0x3a8594: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3a8594u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8598:
    // 0x3a8598: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3a8598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a859c:
    // 0x3a859c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a859cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a85a0:
    // 0x3a85a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3a85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a85a4:
    // 0x3a85a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3a85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a85a8:
    // 0x3a85a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3a85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a85ac:
    // 0x3a85ac: 0x90570116  lbu         $s7, 0x116($v0)
    ctx->pc = 0x3a85acu;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3a85b0:
    // 0x3a85b0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3a85b0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a85b4:
    // 0x3a85b4: 0x0  nop
    ctx->pc = 0x3a85b4u;
    // NOP
label_3a85b8:
    // 0x3a85b8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a85b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a85bc:
    // 0x3a85bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a85bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a85c0:
    // 0x3a85c0: 0x0  nop
    ctx->pc = 0x3a85c0u;
    // NOP
label_3a85c4:
    // 0x3a85c4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3a85c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3a85c8:
    // 0x3a85c8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3a85c8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a85cc:
    // 0x3a85cc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x3a85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a85d0:
    // 0x3a85d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a85d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a85d4:
    // 0x3a85d4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3a85d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a85d8:
    // 0x3a85d8: 0x4603255c  madd.s      $f21, $f4, $f3
    ctx->pc = 0x3a85d8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3a85dc:
    // 0x3a85dc: 0xc04f2d4  jal         func_13CB50
label_3a85e0:
    if (ctx->pc == 0x3A85E0u) {
        ctx->pc = 0x3A85E0u;
            // 0x3a85e0: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A85E4u;
        goto label_3a85e4;
    }
    ctx->pc = 0x3A85DCu;
    SET_GPR_U32(ctx, 31, 0x3A85E4u);
    ctx->pc = 0x3A85E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A85DCu;
            // 0x3a85e0: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A85E4u; }
        if (ctx->pc != 0x3A85E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A85E4u; }
        if (ctx->pc != 0x3A85E4u) { return; }
    }
    ctx->pc = 0x3A85E4u;
label_3a85e4:
    // 0x3a85e4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3a85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3a85e8:
    // 0x3a85e8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a85ec:
    // 0x3a85ec: 0x84672100  lh          $a3, 0x2100($v1)
    ctx->pc = 0x3a85ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8448)));
label_3a85f0:
    // 0x3a85f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3a85f4:
    // 0x3a85f4: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x3a85f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3a85f8:
    // 0x3a85f8: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x3a85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_3a85fc:
    // 0x3a85fc: 0xe7b600d4  swc1        $f22, 0xD4($sp)
    ctx->pc = 0x3a85fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3a8600:
    // 0x3a8600: 0x32e400ff  andi        $a0, $s7, 0xFF
    ctx->pc = 0x3a8600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3a8604:
    // 0x3a8604: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a8604u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8608:
    // 0x3a8608: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a8608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a860c:
    // 0x3a860c: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a860cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a8610:
    // 0x3a8610: 0x92a8002a  lbu         $t0, 0x2A($s5)
    ctx->pc = 0x3a8610u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 42)));
label_3a8614:
    // 0x3a8614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a8614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8618:
    // 0x3a8618: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x3a8618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_3a861c:
    // 0x3a861c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a861cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a8620:
    // 0x3a8620: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a8620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a8624:
    // 0x3a8624: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x3a8624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_3a8628:
    // 0x3a8628: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a8628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a862c:
    // 0x3a862c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3a862cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a8630:
    // 0x3a8630: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3a8630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a8634:
    // 0x3a8634: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x3a8634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_3a8638:
    // 0x3a8638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a8638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a863c:
    // 0x3a863c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a8640:
    // 0x3a8640: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a8640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a8644:
    // 0x3a8644: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3a8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8648:
    // 0x3a8648: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a864c:
    // 0x3a864c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a864cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a8650:
    // 0x3a8650: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x3a8650u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3a8654:
    // 0x3a8654: 0x460013c2  mul.s       $f15, $f2, $f0
    ctx->pc = 0x3a8654u;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a8658:
    // 0x3a8658: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x3a8658u;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
label_3a865c:
    // 0x3a865c: 0xc0bc284  jal         func_2F0A10
label_3a8660:
    if (ctx->pc == 0x3A8660u) {
        ctx->pc = 0x3A8660u;
            // 0x3a8660: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->pc = 0x3A8664u;
        goto label_3a8664;
    }
    ctx->pc = 0x3A865Cu;
    SET_GPR_U32(ctx, 31, 0x3A8664u);
    ctx->pc = 0x3A8660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A865Cu;
            // 0x3a8660: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8664u; }
        if (ctx->pc != 0x3A8664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8664u; }
        if (ctx->pc != 0x3A8664u) { return; }
    }
    ctx->pc = 0x3A8664u;
label_3a8664:
    // 0x3a8664: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3a8664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a8668:
    // 0x3a8668: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a8668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a866c:
    // 0x3a866c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a866cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8670:
    // 0x3a8670: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a8670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8674:
    // 0x3a8674: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a8674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8678:
    // 0x3a8678: 0xc0ea924  jal         func_3AA490
label_3a867c:
    if (ctx->pc == 0x3A867Cu) {
        ctx->pc = 0x3A867Cu;
            // 0x3a867c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A8680u;
        goto label_3a8680;
    }
    ctx->pc = 0x3A8678u;
    SET_GPR_U32(ctx, 31, 0x3A8680u);
    ctx->pc = 0x3A867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8678u;
            // 0x3a867c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AA490u;
    if (runtime->hasFunction(0x3AA490u)) {
        auto targetFn = runtime->lookupFunction(0x3AA490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8680u; }
        if (ctx->pc != 0x3A8680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AA490_0x3aa490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8680u; }
        if (ctx->pc != 0x3A8680u) { return; }
    }
    ctx->pc = 0x3A8680u;
label_3a8680:
    // 0x3a8680: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x3a8680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a8684:
    // 0x3a8684: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3a8684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8688:
    // 0x3a8688: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a8688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a868c:
    // 0x3a868c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8690:
    // 0x3a8690: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a8690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8694:
    // 0x3a8694: 0xc0ea800  jal         func_3AA000
label_3a8698:
    if (ctx->pc == 0x3A8698u) {
        ctx->pc = 0x3A8698u;
            // 0x3a8698: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A869Cu;
        goto label_3a869c;
    }
    ctx->pc = 0x3A8694u;
    SET_GPR_U32(ctx, 31, 0x3A869Cu);
    ctx->pc = 0x3A8698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8694u;
            // 0x3a8698: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AA000u;
    if (runtime->hasFunction(0x3AA000u)) {
        auto targetFn = runtime->lookupFunction(0x3AA000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A869Cu; }
        if (ctx->pc != 0x3A869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AA000_0x3aa000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A869Cu; }
        if (ctx->pc != 0x3A869Cu) { return; }
    }
    ctx->pc = 0x3A869Cu;
label_3a869c:
    // 0x3a869c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a86a0:
    // 0x3a86a0: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x3a86a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_3a86a4:
    // 0x3a86a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a86a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a86a8:
    // 0x3a86a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a86a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a86ac:
    // 0x3a86ac: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3a86acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a86b0:
    // 0x3a86b0: 0xc0ea73c  jal         func_3A9CF0
label_3a86b4:
    if (ctx->pc == 0x3A86B4u) {
        ctx->pc = 0x3A86B4u;
            // 0x3a86b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A86B8u;
        goto label_3a86b8;
    }
    ctx->pc = 0x3A86B0u;
    SET_GPR_U32(ctx, 31, 0x3A86B8u);
    ctx->pc = 0x3A86B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A86B0u;
            // 0x3a86b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A9CF0u;
    if (runtime->hasFunction(0x3A9CF0u)) {
        auto targetFn = runtime->lookupFunction(0x3A9CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A86B8u; }
        if (ctx->pc != 0x3A86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A9CF0_0x3a9cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A86B8u; }
        if (ctx->pc != 0x3A86B8u) { return; }
    }
    ctx->pc = 0x3A86B8u;
label_3a86b8:
    // 0x3a86b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a86b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a86bc:
    // 0x3a86bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a86c0:
    // 0x3a86c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a86c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a86c4:
    // 0x3a86c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a86c8:
    // 0x3a86c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a86c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a86cc:
    // 0x3a86cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a86ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a86d0:
    // 0x3a86d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a86d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a86d4:
    // 0x3a86d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a86d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a86d8:
    // 0x3a86d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a86d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a86dc:
    // 0x3a86dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a86dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a86e0:
    // 0x3a86e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a86e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a86e4:
    // 0x3a86e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a86e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a86e8:
    // 0x3a86e8: 0x3e00008  jr          $ra
label_3a86ec:
    if (ctx->pc == 0x3A86ECu) {
        ctx->pc = 0x3A86ECu;
            // 0x3a86ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3A86F0u;
        goto label_fallthrough_0x3a86e8;
    }
    ctx->pc = 0x3A86E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A86ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A86E8u;
            // 0x3a86ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3a86e8:
    ctx->pc = 0x3A86F0u;
}
