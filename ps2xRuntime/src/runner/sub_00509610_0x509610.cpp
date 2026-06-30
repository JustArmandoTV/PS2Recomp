#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509610
// Address: 0x509610 - 0x5096a0
void sub_00509610_0x509610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509610_0x509610");
#endif

    switch (ctx->pc) {
        case 0x509610u: goto label_509610;
        case 0x509614u: goto label_509614;
        case 0x509618u: goto label_509618;
        case 0x50961cu: goto label_50961c;
        case 0x509620u: goto label_509620;
        case 0x509624u: goto label_509624;
        case 0x509628u: goto label_509628;
        case 0x50962cu: goto label_50962c;
        case 0x509630u: goto label_509630;
        case 0x509634u: goto label_509634;
        case 0x509638u: goto label_509638;
        case 0x50963cu: goto label_50963c;
        case 0x509640u: goto label_509640;
        case 0x509644u: goto label_509644;
        case 0x509648u: goto label_509648;
        case 0x50964cu: goto label_50964c;
        case 0x509650u: goto label_509650;
        case 0x509654u: goto label_509654;
        case 0x509658u: goto label_509658;
        case 0x50965cu: goto label_50965c;
        case 0x509660u: goto label_509660;
        case 0x509664u: goto label_509664;
        case 0x509668u: goto label_509668;
        case 0x50966cu: goto label_50966c;
        case 0x509670u: goto label_509670;
        case 0x509674u: goto label_509674;
        case 0x509678u: goto label_509678;
        case 0x50967cu: goto label_50967c;
        case 0x509680u: goto label_509680;
        case 0x509684u: goto label_509684;
        case 0x509688u: goto label_509688;
        case 0x50968cu: goto label_50968c;
        case 0x509690u: goto label_509690;
        case 0x509694u: goto label_509694;
        case 0x509698u: goto label_509698;
        case 0x50969cu: goto label_50969c;
        default: break;
    }

    ctx->pc = 0x509610u;

label_509610:
    // 0x509610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x509610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_509614:
    // 0x509614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x509614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_509618:
    // 0x509618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x509618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50961c:
    // 0x50961c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50961cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_509620:
    // 0x509620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x509620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_509624:
    // 0x509624: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x509624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_509628:
    // 0x509628: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x509628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_50962c:
    // 0x50962c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x50962cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_509630:
    // 0x509630: 0x8c500550  lw          $s0, 0x550($v0)
    ctx->pc = 0x509630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_509634:
    // 0x509634: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x509634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_509638:
    // 0x509638: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x509638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_50963c:
    // 0x50963c: 0xc44da480  lwc1        $f13, -0x5B80($v0)
    ctx->pc = 0x50963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_509640:
    // 0x509640: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x509640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_509644:
    // 0x509644: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x509644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_509648:
    // 0x509648: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x509648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_50964c:
    // 0x50964c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_509650:
    // 0x509650: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x509650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_509654:
    // 0x509654: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x509654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_509658:
    // 0x509658: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x509658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_50965c:
    // 0x50965c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x50965cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_509660:
    // 0x509660: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x509660u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_509664:
    // 0x509664: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x509664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509668:
    // 0x509668: 0x320f809  jalr        $t9
label_50966c:
    if (ctx->pc == 0x50966Cu) {
        ctx->pc = 0x50966Cu;
            // 0x50966c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509670u;
        goto label_509670;
    }
    ctx->pc = 0x509668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509670u);
        ctx->pc = 0x50966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509668u;
            // 0x50966c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509670u; }
            if (ctx->pc != 0x509670u) { return; }
        }
        }
    }
    ctx->pc = 0x509670u;
label_509670:
    // 0x509670: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x509670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_509674:
    // 0x509674: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x509674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_509678:
    // 0x509678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x509678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50967c:
    // 0x50967c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50967cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_509680:
    // 0x509680: 0x320f809  jalr        $t9
label_509684:
    if (ctx->pc == 0x509684u) {
        ctx->pc = 0x509684u;
            // 0x509684: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509688u;
        goto label_509688;
    }
    ctx->pc = 0x509680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509688u);
        ctx->pc = 0x509684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509680u;
            // 0x509684: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509688u; }
            if (ctx->pc != 0x509688u) { return; }
        }
        }
    }
    ctx->pc = 0x509688u;
label_509688:
    // 0x509688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x509688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50968c:
    // 0x50968c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50968cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_509690:
    // 0x509690: 0x3e00008  jr          $ra
label_509694:
    if (ctx->pc == 0x509694u) {
        ctx->pc = 0x509694u;
            // 0x509694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x509698u;
        goto label_509698;
    }
    ctx->pc = 0x509690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509690u;
            // 0x509694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509698u;
label_509698:
    // 0x509698: 0x0  nop
    ctx->pc = 0x509698u;
    // NOP
label_50969c:
    // 0x50969c: 0x0  nop
    ctx->pc = 0x50969cu;
    // NOP
}
