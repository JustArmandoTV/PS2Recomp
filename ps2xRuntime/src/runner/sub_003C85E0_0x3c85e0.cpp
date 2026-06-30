#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C85E0
// Address: 0x3c85e0 - 0x3c8780
void sub_003C85E0_0x3c85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C85E0_0x3c85e0");
#endif

    switch (ctx->pc) {
        case 0x3c85e0u: goto label_3c85e0;
        case 0x3c85e4u: goto label_3c85e4;
        case 0x3c85e8u: goto label_3c85e8;
        case 0x3c85ecu: goto label_3c85ec;
        case 0x3c85f0u: goto label_3c85f0;
        case 0x3c85f4u: goto label_3c85f4;
        case 0x3c85f8u: goto label_3c85f8;
        case 0x3c85fcu: goto label_3c85fc;
        case 0x3c8600u: goto label_3c8600;
        case 0x3c8604u: goto label_3c8604;
        case 0x3c8608u: goto label_3c8608;
        case 0x3c860cu: goto label_3c860c;
        case 0x3c8610u: goto label_3c8610;
        case 0x3c8614u: goto label_3c8614;
        case 0x3c8618u: goto label_3c8618;
        case 0x3c861cu: goto label_3c861c;
        case 0x3c8620u: goto label_3c8620;
        case 0x3c8624u: goto label_3c8624;
        case 0x3c8628u: goto label_3c8628;
        case 0x3c862cu: goto label_3c862c;
        case 0x3c8630u: goto label_3c8630;
        case 0x3c8634u: goto label_3c8634;
        case 0x3c8638u: goto label_3c8638;
        case 0x3c863cu: goto label_3c863c;
        case 0x3c8640u: goto label_3c8640;
        case 0x3c8644u: goto label_3c8644;
        case 0x3c8648u: goto label_3c8648;
        case 0x3c864cu: goto label_3c864c;
        case 0x3c8650u: goto label_3c8650;
        case 0x3c8654u: goto label_3c8654;
        case 0x3c8658u: goto label_3c8658;
        case 0x3c865cu: goto label_3c865c;
        case 0x3c8660u: goto label_3c8660;
        case 0x3c8664u: goto label_3c8664;
        case 0x3c8668u: goto label_3c8668;
        case 0x3c866cu: goto label_3c866c;
        case 0x3c8670u: goto label_3c8670;
        case 0x3c8674u: goto label_3c8674;
        case 0x3c8678u: goto label_3c8678;
        case 0x3c867cu: goto label_3c867c;
        case 0x3c8680u: goto label_3c8680;
        case 0x3c8684u: goto label_3c8684;
        case 0x3c8688u: goto label_3c8688;
        case 0x3c868cu: goto label_3c868c;
        case 0x3c8690u: goto label_3c8690;
        case 0x3c8694u: goto label_3c8694;
        case 0x3c8698u: goto label_3c8698;
        case 0x3c869cu: goto label_3c869c;
        case 0x3c86a0u: goto label_3c86a0;
        case 0x3c86a4u: goto label_3c86a4;
        case 0x3c86a8u: goto label_3c86a8;
        case 0x3c86acu: goto label_3c86ac;
        case 0x3c86b0u: goto label_3c86b0;
        case 0x3c86b4u: goto label_3c86b4;
        case 0x3c86b8u: goto label_3c86b8;
        case 0x3c86bcu: goto label_3c86bc;
        case 0x3c86c0u: goto label_3c86c0;
        case 0x3c86c4u: goto label_3c86c4;
        case 0x3c86c8u: goto label_3c86c8;
        case 0x3c86ccu: goto label_3c86cc;
        case 0x3c86d0u: goto label_3c86d0;
        case 0x3c86d4u: goto label_3c86d4;
        case 0x3c86d8u: goto label_3c86d8;
        case 0x3c86dcu: goto label_3c86dc;
        case 0x3c86e0u: goto label_3c86e0;
        case 0x3c86e4u: goto label_3c86e4;
        case 0x3c86e8u: goto label_3c86e8;
        case 0x3c86ecu: goto label_3c86ec;
        case 0x3c86f0u: goto label_3c86f0;
        case 0x3c86f4u: goto label_3c86f4;
        case 0x3c86f8u: goto label_3c86f8;
        case 0x3c86fcu: goto label_3c86fc;
        case 0x3c8700u: goto label_3c8700;
        case 0x3c8704u: goto label_3c8704;
        case 0x3c8708u: goto label_3c8708;
        case 0x3c870cu: goto label_3c870c;
        case 0x3c8710u: goto label_3c8710;
        case 0x3c8714u: goto label_3c8714;
        case 0x3c8718u: goto label_3c8718;
        case 0x3c871cu: goto label_3c871c;
        case 0x3c8720u: goto label_3c8720;
        case 0x3c8724u: goto label_3c8724;
        case 0x3c8728u: goto label_3c8728;
        case 0x3c872cu: goto label_3c872c;
        case 0x3c8730u: goto label_3c8730;
        case 0x3c8734u: goto label_3c8734;
        case 0x3c8738u: goto label_3c8738;
        case 0x3c873cu: goto label_3c873c;
        case 0x3c8740u: goto label_3c8740;
        case 0x3c8744u: goto label_3c8744;
        case 0x3c8748u: goto label_3c8748;
        case 0x3c874cu: goto label_3c874c;
        case 0x3c8750u: goto label_3c8750;
        case 0x3c8754u: goto label_3c8754;
        case 0x3c8758u: goto label_3c8758;
        case 0x3c875cu: goto label_3c875c;
        case 0x3c8760u: goto label_3c8760;
        case 0x3c8764u: goto label_3c8764;
        case 0x3c8768u: goto label_3c8768;
        case 0x3c876cu: goto label_3c876c;
        case 0x3c8770u: goto label_3c8770;
        case 0x3c8774u: goto label_3c8774;
        case 0x3c8778u: goto label_3c8778;
        case 0x3c877cu: goto label_3c877c;
        default: break;
    }

    ctx->pc = 0x3c85e0u;

label_3c85e0:
    // 0x3c85e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c85e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c85e4:
    // 0x3c85e4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3c85e8:
    // 0x3c85e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c85e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c85ec:
    // 0x3c85ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c85f0:
    // 0x3c85f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c85f4:
    // 0x3c85f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c85f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c85f8:
    // 0x3c85f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c85fc:
    // 0x3c85fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c85fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8600:
    // 0x3c8600: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c8600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8604:
    // 0x3c8604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c8604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8608:
    // 0x3c8608: 0xc0ee760  jal         func_3B9D80
label_3c860c:
    if (ctx->pc == 0x3C860Cu) {
        ctx->pc = 0x3C860Cu;
            // 0x3c860c: 0x3445aee2  ori         $a1, $v0, 0xAEE2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44770);
        ctx->pc = 0x3C8610u;
        goto label_3c8610;
    }
    ctx->pc = 0x3C8608u;
    SET_GPR_U32(ctx, 31, 0x3C8610u);
    ctx->pc = 0x3C860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8608u;
            // 0x3c860c: 0x3445aee2  ori         $a1, $v0, 0xAEE2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44770);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8610u; }
        if (ctx->pc != 0x3C8610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8610u; }
        if (ctx->pc != 0x3C8610u) { return; }
    }
    ctx->pc = 0x3C8610u;
label_3c8610:
    // 0x3c8610: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c8610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c8614:
    // 0x3c8614: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3c8614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3c8618:
    // 0x3c8618: 0x24638e10  addiu       $v1, $v1, -0x71F0
    ctx->pc = 0x3c8618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938128));
label_3c861c:
    // 0x3c861c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c861cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3c8620:
    // 0x3c8620: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x3c8620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
label_3c8624:
    // 0x3c8624: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_3c8628:
    if (ctx->pc == 0x3C8628u) {
        ctx->pc = 0x3C8628u;
            // 0x3c8628: 0xae32005c  sw          $s2, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
        ctx->pc = 0x3C862Cu;
        goto label_3c862c;
    }
    ctx->pc = 0x3C8624u;
    {
        const bool branch_taken_0x3c8624 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C8628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8624u;
            // 0x3c8628: 0xae32005c  sw          $s2, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8624) {
            ctx->pc = 0x3C8630u;
            goto label_3c8630;
        }
    }
    ctx->pc = 0x3C862Cu;
label_3c862c:
    // 0x3c862c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x3c862cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_3c8630:
    // 0x3c8630: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8634:
    // 0x3c8634: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x3c8634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_3c8638:
    // 0x3c8638: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x3c8638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3c863c:
    // 0x3c863c: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x3c863cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
label_3c8640:
    // 0x3c8640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c8640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8644:
    // 0x3c8644: 0x24e79bc0  addiu       $a3, $a3, -0x6440
    ctx->pc = 0x3c8644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941632));
label_3c8648:
    // 0x3c8648: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x3c8648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c864c:
    // 0x3c864c: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x3c864cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3c8650:
    // 0x3c8650: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3c8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3c8654:
    // 0x3c8654: 0xa6260062  sh          $a2, 0x62($s1)
    ctx->pc = 0x3c8654u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 6));
label_3c8658:
    // 0x3c8658: 0xa6260060  sh          $a2, 0x60($s1)
    ctx->pc = 0x3c8658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 6));
label_3c865c:
    // 0x3c865c: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x3c865cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_3c8660:
    // 0x3c8660: 0xa6260064  sh          $a2, 0x64($s1)
    ctx->pc = 0x3c8660u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 6));
label_3c8664:
    // 0x3c8664: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x3c8664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
label_3c8668:
    // 0x3c8668: 0x8c650110  lw          $a1, 0x110($v1)
    ctx->pc = 0x3c8668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3c866c:
    // 0x3c866c: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
label_3c8670:
    if (ctx->pc == 0x3C8670u) {
        ctx->pc = 0x3C8670u;
            // 0x3c8670: 0x2442ab70  addiu       $v0, $v0, -0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945648));
        ctx->pc = 0x3C8674u;
        goto label_3c8674;
    }
    ctx->pc = 0x3C866Cu;
    {
        const bool branch_taken_0x3c866c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3C8670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C866Cu;
            // 0x3c8670: 0x2442ab70  addiu       $v0, $v0, -0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c866c) {
            ctx->pc = 0x3C8698u;
            goto label_3c8698;
        }
    }
    ctx->pc = 0x3C8674u;
label_3c8674:
    // 0x3c8674: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3c8674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3c8678:
    // 0x3c8678: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x3c8678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c867c:
    // 0x3c867c: 0x8c840e84  lw          $a0, 0xE84($a0)
    ctx->pc = 0x3c867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3716)));
label_3c8680:
    // 0x3c8680: 0x80840e3f  lb          $a0, 0xE3F($a0)
    ctx->pc = 0x3c8680u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3647)));
label_3c8684:
    // 0x3c8684: 0x54a40005  bnel        $a1, $a0, . + 4 + (0x5 << 2)
label_3c8688:
    if (ctx->pc == 0x3C8688u) {
        ctx->pc = 0x3C8688u;
            // 0x3c8688: 0x8e260058  lw          $a2, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x3C868Cu;
        goto label_3c868c;
    }
    ctx->pc = 0x3C8684u;
    {
        const bool branch_taken_0x3c8684 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c8684) {
            ctx->pc = 0x3C8688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8684u;
            // 0x3c8688: 0x8e260058  lw          $a2, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C869Cu;
            goto label_3c869c;
        }
    }
    ctx->pc = 0x3C868Cu;
label_3c868c:
    // 0x3c868c: 0x86240064  lh          $a0, 0x64($s1)
    ctx->pc = 0x3c868cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_3c8690:
    // 0x3c8690: 0x24840046  addiu       $a0, $a0, 0x46
    ctx->pc = 0x3c8690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 70));
label_3c8694:
    // 0x3c8694: 0xa6240064  sh          $a0, 0x64($s1)
    ctx->pc = 0x3c8694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 4));
label_3c8698:
    // 0x3c8698: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x3c8698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3c869c:
    // 0x3c869c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c869cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c86a0:
    // 0x3c86a0: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x3c86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
label_3c86a4:
    // 0x3c86a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c86a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c86a8:
    // 0x3c86a8: 0x24c5000d  addiu       $a1, $a2, 0xD
    ctx->pc = 0x3c86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
label_3c86ac:
    // 0x3c86ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c86acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c86b0:
    // 0x3c86b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3c86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3c86b4:
    // 0x3c86b4: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x3c86b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_3c86b8:
    // 0x3c86b8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3c86b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_3c86bc:
    // 0x3c86bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c86c0:
    // 0x3c86c0: 0x10c40009  beq         $a2, $a0, . + 4 + (0x9 << 2)
label_3c86c4:
    if (ctx->pc == 0x3C86C4u) {
        ctx->pc = 0x3C86C4u;
            // 0x3c86c4: 0x4601011c  madd.s      $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->pc = 0x3C86C8u;
        goto label_3c86c8;
    }
    ctx->pc = 0x3C86C0u;
    {
        const bool branch_taken_0x3c86c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C86C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C86C0u;
            // 0x3c86c4: 0x4601011c  madd.s      $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86c0) {
            ctx->pc = 0x3C86E8u;
            goto label_3c86e8;
        }
    }
    ctx->pc = 0x3C86C8u;
label_3c86c8:
    // 0x3c86c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c86c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c86cc:
    // 0x3c86cc: 0x50c40007  beql        $a2, $a0, . + 4 + (0x7 << 2)
label_3c86d0:
    if (ctx->pc == 0x3C86D0u) {
        ctx->pc = 0x3C86D0u;
            // 0x3c86d0: 0x24440200  addiu       $a0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3C86D4u;
        goto label_3c86d4;
    }
    ctx->pc = 0x3C86CCu;
    {
        const bool branch_taken_0x3c86cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c86cc) {
            ctx->pc = 0x3C86D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C86CCu;
            // 0x3c86d0: 0x24440200  addiu       $a0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C86ECu;
            goto label_3c86ec;
        }
    }
    ctx->pc = 0x3C86D4u;
label_3c86d4:
    // 0x3c86d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c86d8:
    // 0x3c86d8: 0x50c40004  beql        $a2, $a0, . + 4 + (0x4 << 2)
label_3c86dc:
    if (ctx->pc == 0x3C86DCu) {
        ctx->pc = 0x3C86DCu;
            // 0x3c86dc: 0x244401f0  addiu       $a0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->pc = 0x3C86E0u;
        goto label_3c86e0;
    }
    ctx->pc = 0x3C86D8u;
    {
        const bool branch_taken_0x3c86d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c86d8) {
            ctx->pc = 0x3C86DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C86D8u;
            // 0x3c86dc: 0x244401f0  addiu       $a0, $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C86ECu;
            goto label_3c86ec;
        }
    }
    ctx->pc = 0x3C86E0u;
label_3c86e0:
    // 0x3c86e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c86e4:
    if (ctx->pc == 0x3C86E4u) {
        ctx->pc = 0x3C86E4u;
            // 0x3c86e4: 0x24440220  addiu       $a0, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->pc = 0x3C86E8u;
        goto label_3c86e8;
    }
    ctx->pc = 0x3C86E0u;
    {
        const bool branch_taken_0x3c86e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C86E0u;
            // 0x3c86e4: 0x24440220  addiu       $a0, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86e0) {
            ctx->pc = 0x3C86ECu;
            goto label_3c86ec;
        }
    }
    ctx->pc = 0x3C86E8u;
label_3c86e8:
    // 0x3c86e8: 0x24440210  addiu       $a0, $v0, 0x210
    ctx->pc = 0x3c86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_3c86ec:
    // 0x3c86ec: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x3c86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c86f0:
    // 0x3c86f0: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x3c86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3c86f4:
    // 0x3c86f4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3c86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c86f8:
    // 0x3c86f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c86f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c86fc:
    // 0x3c86fc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3c86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3c8700:
    // 0x3c8700: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c8700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c8704:
    // 0x3c8704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c8704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c8708:
    // 0x3c8708: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3c8708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3c870c:
    // 0x3c870c: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x3c870cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
label_3c8710:
    // 0x3c8710: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x3c8710u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3c8714:
    // 0x3c8714: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3c8714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c8718:
    // 0x3c8718: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3c8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c871c:
    // 0x3c871c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3c871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c8720:
    // 0x3c8720: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x3c8720u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_3c8724:
    // 0x3c8724: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x3c8724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3c8728:
    // 0x3c8728: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c8728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c872c:
    // 0x3c872c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c872cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8730:
    // 0x3c8730: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c8730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3c8734:
    // 0x3c8734: 0x0  nop
    ctx->pc = 0x3c8734u;
    // NOP
label_3c8738:
    // 0x3c8738: 0xa6220066  sh          $v0, 0x66($s1)
    ctx->pc = 0x3c8738u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 2));
label_3c873c:
    // 0x3c873c: 0x8c6289d0  lw          $v0, -0x7630($v1)
    ctx->pc = 0x3c873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3c8740:
    // 0x3c8740: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3c8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3c8744:
    // 0x3c8744: 0x50440003  beql        $v0, $a0, . + 4 + (0x3 << 2)
label_3c8748:
    if (ctx->pc == 0x3C8748u) {
        ctx->pc = 0x3C8748u;
            // 0x3c8748: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3C874Cu;
        goto label_3c874c;
    }
    ctx->pc = 0x3C8744u;
    {
        const bool branch_taken_0x3c8744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3c8744) {
            ctx->pc = 0x3C8748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8744u;
            // 0x3c8748: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C8754u;
            goto label_3c8754;
        }
    }
    ctx->pc = 0x3C874Cu;
label_3c874c:
    // 0x3c874c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3c8750:
    if (ctx->pc == 0x3C8750u) {
        ctx->pc = 0x3C8750u;
            // 0x3c8750: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8754u;
        goto label_3c8754;
    }
    ctx->pc = 0x3C874Cu;
    {
        const bool branch_taken_0x3c874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C874Cu;
            // 0x3c8750: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c874c) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C8754u;
label_3c8754:
    // 0x3c8754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8758:
    // 0x3c8758: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c875c:
    // 0x3c875c: 0x320f809  jalr        $t9
label_3c8760:
    if (ctx->pc == 0x3C8760u) {
        ctx->pc = 0x3C8760u;
            // 0x3c8760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8764u;
        goto label_3c8764;
    }
    ctx->pc = 0x3C875Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8764u);
        ctx->pc = 0x3C8760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C875Cu;
            // 0x3c8760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8764u; }
            if (ctx->pc != 0x3C8764u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8764u;
label_3c8764:
    // 0x3c8764: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c8764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8768:
    // 0x3c8768: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c8768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c876c:
    // 0x3c876c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c876cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8770:
    // 0x3c8770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8774:
    // 0x3c8774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8778:
    // 0x3c8778: 0x3e00008  jr          $ra
label_3c877c:
    if (ctx->pc == 0x3C877Cu) {
        ctx->pc = 0x3C877Cu;
            // 0x3c877c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C8780u;
        goto label_fallthrough_0x3c8778;
    }
    ctx->pc = 0x3C8778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8778u;
            // 0x3c877c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c8778:
    ctx->pc = 0x3C8780u;
}
