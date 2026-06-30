#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384560
// Address: 0x384560 - 0x3846f0
void sub_00384560_0x384560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384560_0x384560");
#endif

    switch (ctx->pc) {
        case 0x384560u: goto label_384560;
        case 0x384564u: goto label_384564;
        case 0x384568u: goto label_384568;
        case 0x38456cu: goto label_38456c;
        case 0x384570u: goto label_384570;
        case 0x384574u: goto label_384574;
        case 0x384578u: goto label_384578;
        case 0x38457cu: goto label_38457c;
        case 0x384580u: goto label_384580;
        case 0x384584u: goto label_384584;
        case 0x384588u: goto label_384588;
        case 0x38458cu: goto label_38458c;
        case 0x384590u: goto label_384590;
        case 0x384594u: goto label_384594;
        case 0x384598u: goto label_384598;
        case 0x38459cu: goto label_38459c;
        case 0x3845a0u: goto label_3845a0;
        case 0x3845a4u: goto label_3845a4;
        case 0x3845a8u: goto label_3845a8;
        case 0x3845acu: goto label_3845ac;
        case 0x3845b0u: goto label_3845b0;
        case 0x3845b4u: goto label_3845b4;
        case 0x3845b8u: goto label_3845b8;
        case 0x3845bcu: goto label_3845bc;
        case 0x3845c0u: goto label_3845c0;
        case 0x3845c4u: goto label_3845c4;
        case 0x3845c8u: goto label_3845c8;
        case 0x3845ccu: goto label_3845cc;
        case 0x3845d0u: goto label_3845d0;
        case 0x3845d4u: goto label_3845d4;
        case 0x3845d8u: goto label_3845d8;
        case 0x3845dcu: goto label_3845dc;
        case 0x3845e0u: goto label_3845e0;
        case 0x3845e4u: goto label_3845e4;
        case 0x3845e8u: goto label_3845e8;
        case 0x3845ecu: goto label_3845ec;
        case 0x3845f0u: goto label_3845f0;
        case 0x3845f4u: goto label_3845f4;
        case 0x3845f8u: goto label_3845f8;
        case 0x3845fcu: goto label_3845fc;
        case 0x384600u: goto label_384600;
        case 0x384604u: goto label_384604;
        case 0x384608u: goto label_384608;
        case 0x38460cu: goto label_38460c;
        case 0x384610u: goto label_384610;
        case 0x384614u: goto label_384614;
        case 0x384618u: goto label_384618;
        case 0x38461cu: goto label_38461c;
        case 0x384620u: goto label_384620;
        case 0x384624u: goto label_384624;
        case 0x384628u: goto label_384628;
        case 0x38462cu: goto label_38462c;
        case 0x384630u: goto label_384630;
        case 0x384634u: goto label_384634;
        case 0x384638u: goto label_384638;
        case 0x38463cu: goto label_38463c;
        case 0x384640u: goto label_384640;
        case 0x384644u: goto label_384644;
        case 0x384648u: goto label_384648;
        case 0x38464cu: goto label_38464c;
        case 0x384650u: goto label_384650;
        case 0x384654u: goto label_384654;
        case 0x384658u: goto label_384658;
        case 0x38465cu: goto label_38465c;
        case 0x384660u: goto label_384660;
        case 0x384664u: goto label_384664;
        case 0x384668u: goto label_384668;
        case 0x38466cu: goto label_38466c;
        case 0x384670u: goto label_384670;
        case 0x384674u: goto label_384674;
        case 0x384678u: goto label_384678;
        case 0x38467cu: goto label_38467c;
        case 0x384680u: goto label_384680;
        case 0x384684u: goto label_384684;
        case 0x384688u: goto label_384688;
        case 0x38468cu: goto label_38468c;
        case 0x384690u: goto label_384690;
        case 0x384694u: goto label_384694;
        case 0x384698u: goto label_384698;
        case 0x38469cu: goto label_38469c;
        case 0x3846a0u: goto label_3846a0;
        case 0x3846a4u: goto label_3846a4;
        case 0x3846a8u: goto label_3846a8;
        case 0x3846acu: goto label_3846ac;
        case 0x3846b0u: goto label_3846b0;
        case 0x3846b4u: goto label_3846b4;
        case 0x3846b8u: goto label_3846b8;
        case 0x3846bcu: goto label_3846bc;
        case 0x3846c0u: goto label_3846c0;
        case 0x3846c4u: goto label_3846c4;
        case 0x3846c8u: goto label_3846c8;
        case 0x3846ccu: goto label_3846cc;
        case 0x3846d0u: goto label_3846d0;
        case 0x3846d4u: goto label_3846d4;
        case 0x3846d8u: goto label_3846d8;
        case 0x3846dcu: goto label_3846dc;
        case 0x3846e0u: goto label_3846e0;
        case 0x3846e4u: goto label_3846e4;
        case 0x3846e8u: goto label_3846e8;
        case 0x3846ecu: goto label_3846ec;
        default: break;
    }

    ctx->pc = 0x384560u;

label_384560:
    // 0x384560: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x384560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_384564:
    // 0x384564: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x384564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_384568:
    // 0x384568: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x384568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_38456c:
    // 0x38456c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x38456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_384570:
    // 0x384570: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x384570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_384574:
    // 0x384574: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x384574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_384578:
    // 0x384578: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x384578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38457c:
    // 0x38457c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x38457cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384580:
    // 0x384580: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x384580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_384584:
    // 0x384584: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x384584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_384588:
    // 0x384588: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x384588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38458c:
    // 0x38458c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_384590:
    // 0x384590: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x384590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_384594:
    // 0x384594: 0x26f30004  addiu       $s3, $s7, 0x4
    ctx->pc = 0x384594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_384598:
    // 0x384598: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38459c:
    // 0x38459c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38459cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3845a0:
    // 0x3845a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3845a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3845a4:
    // 0x3845a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3845a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3845a8:
    // 0x3845a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3845a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3845ac:
    // 0x3845ac: 0x8c5489e8  lw          $s4, -0x7618($v0)
    ctx->pc = 0x3845acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3845b0:
    // 0x3845b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3845b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3845b4:
    // 0x3845b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3845b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3845b8:
    // 0x3845b8: 0x8c50d120  lw          $s0, -0x2EE0($v0)
    ctx->pc = 0x3845b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3845bc:
    // 0x3845bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3845bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3845c0:
    // 0x3845c0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3845c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3845c4:
    // 0x3845c4: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x3845c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_3845c8:
    // 0x3845c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3845c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3845cc:
    // 0x3845cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3845ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3845d0:
    // 0x3845d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3845d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3845d4:
    // 0x3845d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3845d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3845d8:
    // 0x3845d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3845d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3845dc:
    // 0x3845dc: 0xc04cc34  jal         func_1330D0
label_3845e0:
    if (ctx->pc == 0x3845E0u) {
        ctx->pc = 0x3845E0u;
            // 0x3845e0: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3845E4u;
        goto label_3845e4;
    }
    ctx->pc = 0x3845DCu;
    SET_GPR_U32(ctx, 31, 0x3845E4u);
    ctx->pc = 0x3845E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3845DCu;
            // 0x3845e0: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3845E4u; }
        if (ctx->pc != 0x3845E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3845E4u; }
        if (ctx->pc != 0x3845E4u) { return; }
    }
    ctx->pc = 0x3845E4u;
label_3845e4:
    // 0x3845e4: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x3845e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3845e8:
    // 0x3845e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3845e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3845ec:
    // 0x3845ec: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_3845f0:
    if (ctx->pc == 0x3845F0u) {
        ctx->pc = 0x3845F4u;
        goto label_3845f4;
    }
    ctx->pc = 0x3845ECu;
    {
        const bool branch_taken_0x3845ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3845ec) {
            ctx->pc = 0x384658u;
            goto label_384658;
        }
    }
    ctx->pc = 0x3845F4u;
label_3845f4:
    // 0x3845f4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x3845f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3845f8:
    // 0x3845f8: 0x4610027  bgez        $v1, . + 4 + (0x27 << 2)
label_3845fc:
    if (ctx->pc == 0x3845FCu) {
        ctx->pc = 0x384600u;
        goto label_384600;
    }
    ctx->pc = 0x3845F8u;
    {
        const bool branch_taken_0x3845f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3845f8) {
            ctx->pc = 0x384698u;
            goto label_384698;
        }
    }
    ctx->pc = 0x384600u;
label_384600:
    // 0x384600: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x384600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_384604:
    // 0x384604: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x384604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_384608:
    // 0x384608: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x384608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38460c:
    // 0x38460c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x38460cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_384610:
    // 0x384610: 0x320f809  jalr        $t9
label_384614:
    if (ctx->pc == 0x384614u) {
        ctx->pc = 0x384614u;
            // 0x384614: 0x34450bae  ori         $a1, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->pc = 0x384618u;
        goto label_384618;
    }
    ctx->pc = 0x384610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x384618u);
        ctx->pc = 0x384614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384610u;
            // 0x384614: 0x34450bae  ori         $a1, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x384618u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x384618u; }
            if (ctx->pc != 0x384618u) { return; }
        }
        }
    }
    ctx->pc = 0x384618u;
label_384618:
    // 0x384618: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x384618u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_38461c:
    // 0x38461c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x38461cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_384620:
    // 0x384620: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x384620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_384624:
    // 0x384624: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x384624u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_384628:
    // 0x384628: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x384628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38462c:
    // 0x38462c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_384630:
    // 0x384630: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x384630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_384634:
    // 0x384634: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x384634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_384638:
    // 0x384638: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x384638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_38463c:
    // 0x38463c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_384640:
    // 0x384640: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x384640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_384644:
    // 0x384644: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x384644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_384648:
    // 0x384648: 0x320f809  jalr        $t9
label_38464c:
    if (ctx->pc == 0x38464Cu) {
        ctx->pc = 0x38464Cu;
            // 0x38464c: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x384650u;
        goto label_384650;
    }
    ctx->pc = 0x384648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x384650u);
        ctx->pc = 0x38464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384648u;
            // 0x38464c: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x384650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x384650u; }
            if (ctx->pc != 0x384650u) { return; }
        }
        }
    }
    ctx->pc = 0x384650u;
label_384650:
    // 0x384650: 0x10000011  b           . + 4 + (0x11 << 2)
label_384654:
    if (ctx->pc == 0x384654u) {
        ctx->pc = 0x384658u;
        goto label_384658;
    }
    ctx->pc = 0x384650u;
    {
        const bool branch_taken_0x384650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384650) {
            ctx->pc = 0x384698u;
            goto label_384698;
        }
    }
    ctx->pc = 0x384658u;
label_384658:
    // 0x384658: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x384658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
label_38465c:
    // 0x38465c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x38465cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_384660:
    // 0x384660: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x384660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_384664:
    // 0x384664: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x384664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_384668:
    // 0x384668: 0x84650004  lh          $a1, 0x4($v1)
    ctx->pc = 0x384668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_38466c:
    // 0x38466c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_384670:
    if (ctx->pc == 0x384670u) {
        ctx->pc = 0x384670u;
            // 0x384670: 0x24760004  addiu       $s6, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x384674u;
        goto label_384674;
    }
    ctx->pc = 0x38466Cu;
    {
        const bool branch_taken_0x38466c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x384670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38466Cu;
            // 0x384670: 0x24760004  addiu       $s6, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38466c) {
            ctx->pc = 0x384698u;
            goto label_384698;
        }
    }
    ctx->pc = 0x384674u;
label_384674:
    // 0x384674: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x384674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_384678:
    // 0x384678: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x384678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_38467c:
    // 0x38467c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38467cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_384680:
    // 0x384680: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x384680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_384684:
    // 0x384684: 0x320f809  jalr        $t9
label_384688:
    if (ctx->pc == 0x384688u) {
        ctx->pc = 0x38468Cu;
        goto label_38468c;
    }
    ctx->pc = 0x384684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38468Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38468Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38468Cu; }
            if (ctx->pc != 0x38468Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38468Cu;
label_38468c:
    // 0x38468c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_384690:
    // 0x384690: 0xa6c30000  sh          $v1, 0x0($s6)
    ctx->pc = 0x384690u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
label_384694:
    // 0x384694: 0x0  nop
    ctx->pc = 0x384694u;
    // NOP
label_384698:
    // 0x384698: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x384698u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38469c:
    // 0x38469c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38469cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3846a0:
    // 0x3846a0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x3846a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_3846a4:
    // 0x3846a4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3846a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3846a8:
    // 0x3846a8: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_3846ac:
    if (ctx->pc == 0x3846ACu) {
        ctx->pc = 0x3846ACu;
            // 0x3846ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3846B0u;
        goto label_3846b0;
    }
    ctx->pc = 0x3846A8u;
    {
        const bool branch_taken_0x3846a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3846ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3846A8u;
            // 0x3846ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3846a8) {
            ctx->pc = 0x3845CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3845cc;
        }
    }
    ctx->pc = 0x3846B0u;
label_3846b0:
    // 0x3846b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3846b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3846b4:
    // 0x3846b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3846b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3846b8:
    // 0x3846b8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3846b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3846bc:
    // 0x3846bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3846bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3846c0:
    // 0x3846c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3846c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3846c4:
    // 0x3846c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3846c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3846c8:
    // 0x3846c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3846c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3846cc:
    // 0x3846cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3846ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3846d0:
    // 0x3846d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3846d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3846d4:
    // 0x3846d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3846d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3846d8:
    // 0x3846d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3846d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3846dc:
    // 0x3846dc: 0x3e00008  jr          $ra
label_3846e0:
    if (ctx->pc == 0x3846E0u) {
        ctx->pc = 0x3846E0u;
            // 0x3846e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3846E4u;
        goto label_3846e4;
    }
    ctx->pc = 0x3846DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3846E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3846DCu;
            // 0x3846e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3846E4u;
label_3846e4:
    // 0x3846e4: 0x0  nop
    ctx->pc = 0x3846e4u;
    // NOP
label_3846e8:
    // 0x3846e8: 0x0  nop
    ctx->pc = 0x3846e8u;
    // NOP
label_3846ec:
    // 0x3846ec: 0x0  nop
    ctx->pc = 0x3846ecu;
    // NOP
}
