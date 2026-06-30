#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D590
// Address: 0x53d590 - 0x53d6f0
void sub_0053D590_0x53d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D590_0x53d590");
#endif

    switch (ctx->pc) {
        case 0x53d590u: goto label_53d590;
        case 0x53d594u: goto label_53d594;
        case 0x53d598u: goto label_53d598;
        case 0x53d59cu: goto label_53d59c;
        case 0x53d5a0u: goto label_53d5a0;
        case 0x53d5a4u: goto label_53d5a4;
        case 0x53d5a8u: goto label_53d5a8;
        case 0x53d5acu: goto label_53d5ac;
        case 0x53d5b0u: goto label_53d5b0;
        case 0x53d5b4u: goto label_53d5b4;
        case 0x53d5b8u: goto label_53d5b8;
        case 0x53d5bcu: goto label_53d5bc;
        case 0x53d5c0u: goto label_53d5c0;
        case 0x53d5c4u: goto label_53d5c4;
        case 0x53d5c8u: goto label_53d5c8;
        case 0x53d5ccu: goto label_53d5cc;
        case 0x53d5d0u: goto label_53d5d0;
        case 0x53d5d4u: goto label_53d5d4;
        case 0x53d5d8u: goto label_53d5d8;
        case 0x53d5dcu: goto label_53d5dc;
        case 0x53d5e0u: goto label_53d5e0;
        case 0x53d5e4u: goto label_53d5e4;
        case 0x53d5e8u: goto label_53d5e8;
        case 0x53d5ecu: goto label_53d5ec;
        case 0x53d5f0u: goto label_53d5f0;
        case 0x53d5f4u: goto label_53d5f4;
        case 0x53d5f8u: goto label_53d5f8;
        case 0x53d5fcu: goto label_53d5fc;
        case 0x53d600u: goto label_53d600;
        case 0x53d604u: goto label_53d604;
        case 0x53d608u: goto label_53d608;
        case 0x53d60cu: goto label_53d60c;
        case 0x53d610u: goto label_53d610;
        case 0x53d614u: goto label_53d614;
        case 0x53d618u: goto label_53d618;
        case 0x53d61cu: goto label_53d61c;
        case 0x53d620u: goto label_53d620;
        case 0x53d624u: goto label_53d624;
        case 0x53d628u: goto label_53d628;
        case 0x53d62cu: goto label_53d62c;
        case 0x53d630u: goto label_53d630;
        case 0x53d634u: goto label_53d634;
        case 0x53d638u: goto label_53d638;
        case 0x53d63cu: goto label_53d63c;
        case 0x53d640u: goto label_53d640;
        case 0x53d644u: goto label_53d644;
        case 0x53d648u: goto label_53d648;
        case 0x53d64cu: goto label_53d64c;
        case 0x53d650u: goto label_53d650;
        case 0x53d654u: goto label_53d654;
        case 0x53d658u: goto label_53d658;
        case 0x53d65cu: goto label_53d65c;
        case 0x53d660u: goto label_53d660;
        case 0x53d664u: goto label_53d664;
        case 0x53d668u: goto label_53d668;
        case 0x53d66cu: goto label_53d66c;
        case 0x53d670u: goto label_53d670;
        case 0x53d674u: goto label_53d674;
        case 0x53d678u: goto label_53d678;
        case 0x53d67cu: goto label_53d67c;
        case 0x53d680u: goto label_53d680;
        case 0x53d684u: goto label_53d684;
        case 0x53d688u: goto label_53d688;
        case 0x53d68cu: goto label_53d68c;
        case 0x53d690u: goto label_53d690;
        case 0x53d694u: goto label_53d694;
        case 0x53d698u: goto label_53d698;
        case 0x53d69cu: goto label_53d69c;
        case 0x53d6a0u: goto label_53d6a0;
        case 0x53d6a4u: goto label_53d6a4;
        case 0x53d6a8u: goto label_53d6a8;
        case 0x53d6acu: goto label_53d6ac;
        case 0x53d6b0u: goto label_53d6b0;
        case 0x53d6b4u: goto label_53d6b4;
        case 0x53d6b8u: goto label_53d6b8;
        case 0x53d6bcu: goto label_53d6bc;
        case 0x53d6c0u: goto label_53d6c0;
        case 0x53d6c4u: goto label_53d6c4;
        case 0x53d6c8u: goto label_53d6c8;
        case 0x53d6ccu: goto label_53d6cc;
        case 0x53d6d0u: goto label_53d6d0;
        case 0x53d6d4u: goto label_53d6d4;
        case 0x53d6d8u: goto label_53d6d8;
        case 0x53d6dcu: goto label_53d6dc;
        case 0x53d6e0u: goto label_53d6e0;
        case 0x53d6e4u: goto label_53d6e4;
        case 0x53d6e8u: goto label_53d6e8;
        case 0x53d6ecu: goto label_53d6ec;
        default: break;
    }

    ctx->pc = 0x53d590u;

label_53d590:
    // 0x53d590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53d594:
    // 0x53d594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53d598:
    // 0x53d598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53d59c:
    // 0x53d59c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53d5a0:
    // 0x53d5a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53d5a4:
    // 0x53d5a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d5a8:
    // 0x53d5a8: 0x8c503e28  lw          $s0, 0x3E28($v0)
    ctx->pc = 0x53d5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53d5ac:
    // 0x53d5ac: 0xac850074  sw          $a1, 0x74($a0)
    ctx->pc = 0x53d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
label_53d5b0:
    // 0x53d5b0: 0x9082009d  lbu         $v0, 0x9D($a0)
    ctx->pc = 0x53d5b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 157)));
label_53d5b4:
    // 0x53d5b4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_53d5b8:
    if (ctx->pc == 0x53D5B8u) {
        ctx->pc = 0x53D5B8u;
            // 0x53d5b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D5BCu;
        goto label_53d5bc;
    }
    ctx->pc = 0x53D5B4u;
    {
        const bool branch_taken_0x53d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D5B4u;
            // 0x53d5b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d5b4) {
            ctx->pc = 0x53D6A8u;
            goto label_53d6a8;
        }
    }
    ctx->pc = 0x53D5BCu;
label_53d5bc:
    // 0x53d5bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53d5c0:
    // 0x53d5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53d5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53d5c4:
    // 0x53d5c4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x53d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_53d5c8:
    // 0x53d5c8: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x53d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53d5cc:
    // 0x53d5cc: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x53d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_53d5d0:
    // 0x53d5d0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x53d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53d5d4:
    // 0x53d5d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x53d5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_53d5d8:
    // 0x53d5d8: 0xe640008c  swc1        $f0, 0x8C($s2)
    ctx->pc = 0x53d5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
label_53d5dc:
    // 0x53d5dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d5e0:
    // 0x53d5e0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x53d5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_53d5e4:
    // 0x53d5e4: 0x320f809  jalr        $t9
label_53d5e8:
    if (ctx->pc == 0x53D5E8u) {
        ctx->pc = 0x53D5E8u;
            // 0x53d5e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D5ECu;
        goto label_53d5ec;
    }
    ctx->pc = 0x53D5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D5ECu);
        ctx->pc = 0x53D5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D5E4u;
            // 0x53d5e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D5ECu; }
            if (ctx->pc != 0x53D5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x53D5ECu;
label_53d5ec:
    // 0x53d5ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_53d5f0:
    if (ctx->pc == 0x53D5F0u) {
        ctx->pc = 0x53D5F0u;
            // 0x53d5f0: 0xc641008c  lwc1        $f1, 0x8C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53D5F4u;
        goto label_53d5f4;
    }
    ctx->pc = 0x53D5ECu;
    {
        const bool branch_taken_0x53d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d5ec) {
            ctx->pc = 0x53D5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D5ECu;
            // 0x53d5f0: 0xc641008c  lwc1        $f1, 0x8C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D5FCu;
            goto label_53d5fc;
        }
    }
    ctx->pc = 0x53D5F4u;
label_53d5f4:
    // 0x53d5f4: 0x1000000d  b           . + 4 + (0xD << 2)
label_53d5f8:
    if (ctx->pc == 0x53D5F8u) {
        ctx->pc = 0x53D5F8u;
            // 0x53d5f8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53D5FCu;
        goto label_53d5fc;
    }
    ctx->pc = 0x53D5F4u;
    {
        const bool branch_taken_0x53d5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D5F4u;
            // 0x53d5f8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d5f4) {
            ctx->pc = 0x53D62Cu;
            goto label_53d62c;
        }
    }
    ctx->pc = 0x53D5FCu;
label_53d5fc:
    // 0x53d5fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x53d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_53d600:
    // 0x53d600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x53d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53d604:
    // 0x53d604: 0x0  nop
    ctx->pc = 0x53d604u;
    // NOP
label_53d608:
    // 0x53d608: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x53d608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53d60c:
    // 0x53d60c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_53d610:
    if (ctx->pc == 0x53D610u) {
        ctx->pc = 0x53D610u;
            // 0x53d610: 0x9242009e  lbu         $v0, 0x9E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 158)));
        ctx->pc = 0x53D614u;
        goto label_53d614;
    }
    ctx->pc = 0x53D60Cu;
    {
        const bool branch_taken_0x53d60c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53d60c) {
            ctx->pc = 0x53D610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D60Cu;
            // 0x53d610: 0x9242009e  lbu         $v0, 0x9E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 158)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D630u;
            goto label_53d630;
        }
    }
    ctx->pc = 0x53D614u;
label_53d614:
    // 0x53d614: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d618:
    // 0x53d618: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x53d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_53d61c:
    // 0x53d61c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53d61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53d620:
    // 0x53d620: 0x320f809  jalr        $t9
label_53d624:
    if (ctx->pc == 0x53D624u) {
        ctx->pc = 0x53D624u;
            // 0x53d624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D628u;
        goto label_53d628;
    }
    ctx->pc = 0x53D620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D628u);
        ctx->pc = 0x53D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D620u;
            // 0x53d624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D628u; }
            if (ctx->pc != 0x53D628u) { return; }
        }
        }
    }
    ctx->pc = 0x53D628u;
label_53d628:
    // 0x53d628: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x53d628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d62c:
    // 0x53d62c: 0x9242009e  lbu         $v0, 0x9E($s2)
    ctx->pc = 0x53d62cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 158)));
label_53d630:
    // 0x53d630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_53d634:
    if (ctx->pc == 0x53D634u) {
        ctx->pc = 0x53D638u;
        goto label_53d638;
    }
    ctx->pc = 0x53D630u;
    {
        const bool branch_taken_0x53d630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d630) {
            ctx->pc = 0x53D640u;
            goto label_53d640;
        }
    }
    ctx->pc = 0x53D638u;
label_53d638:
    // 0x53d638: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x53d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_53d63c:
    // 0x53d63c: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x53d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_53d640:
    // 0x53d640: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
label_53d644:
    if (ctx->pc == 0x53D644u) {
        ctx->pc = 0x53D644u;
            // 0x53d644: 0x9242009d  lbu         $v0, 0x9D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 157)));
        ctx->pc = 0x53D648u;
        goto label_53d648;
    }
    ctx->pc = 0x53D640u;
    {
        const bool branch_taken_0x53d640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d640) {
            ctx->pc = 0x53D644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D640u;
            // 0x53d644: 0x9242009d  lbu         $v0, 0x9D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 157)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D6ACu;
            goto label_53d6ac;
        }
    }
    ctx->pc = 0x53D648u;
label_53d648:
    // 0x53d648: 0xa240009d  sb          $zero, 0x9D($s2)
    ctx->pc = 0x53d648u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 157), (uint8_t)GPR_U32(ctx, 0));
label_53d64c:
    // 0x53d64c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d650:
    // 0x53d650: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x53d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_53d654:
    // 0x53d654: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x53d654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_53d658:
    // 0x53d658: 0x320f809  jalr        $t9
label_53d65c:
    if (ctx->pc == 0x53D65Cu) {
        ctx->pc = 0x53D65Cu;
            // 0x53d65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D660u;
        goto label_53d660;
    }
    ctx->pc = 0x53D658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D660u);
        ctx->pc = 0x53D65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D658u;
            // 0x53d65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D660u; }
            if (ctx->pc != 0x53D660u) { return; }
        }
        }
    }
    ctx->pc = 0x53D660u;
label_53d660:
    // 0x53d660: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_53d664:
    if (ctx->pc == 0x53D664u) {
        ctx->pc = 0x53D664u;
            // 0x53d664: 0x824200a0  lb          $v0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x53D668u;
        goto label_53d668;
    }
    ctx->pc = 0x53D660u;
    {
        const bool branch_taken_0x53d660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d660) {
            ctx->pc = 0x53D664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D660u;
            // 0x53d664: 0x824200a0  lb          $v0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D67Cu;
            goto label_53d67c;
        }
    }
    ctx->pc = 0x53D668u;
label_53d668:
    // 0x53d668: 0x824200a0  lb          $v0, 0xA0($s2)
    ctx->pc = 0x53d668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
label_53d66c:
    // 0x53d66c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_53d670:
    if (ctx->pc == 0x53D670u) {
        ctx->pc = 0x53D674u;
        goto label_53d674;
    }
    ctx->pc = 0x53D66Cu;
    {
        const bool branch_taken_0x53d66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d66c) {
            ctx->pc = 0x53D6A8u;
            goto label_53d6a8;
        }
    }
    ctx->pc = 0x53D674u;
label_53d674:
    // 0x53d674: 0x10000018  b           . + 4 + (0x18 << 2)
label_53d678:
    if (ctx->pc == 0x53D678u) {
        ctx->pc = 0x53D678u;
            // 0x53d678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D67Cu;
        goto label_53d67c;
    }
    ctx->pc = 0x53D674u;
    {
        const bool branch_taken_0x53d674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D674u;
            // 0x53d678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d674) {
            ctx->pc = 0x53D6D8u;
            goto label_53d6d8;
        }
    }
    ctx->pc = 0x53D67Cu;
label_53d67c:
    // 0x53d67c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_53d680:
    if (ctx->pc == 0x53D680u) {
        ctx->pc = 0x53D680u;
            // 0x53d680: 0x9242009d  lbu         $v0, 0x9D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 157)));
        ctx->pc = 0x53D684u;
        goto label_53d684;
    }
    ctx->pc = 0x53D67Cu;
    {
        const bool branch_taken_0x53d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53d67c) {
            ctx->pc = 0x53D680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D67Cu;
            // 0x53d680: 0x9242009d  lbu         $v0, 0x9D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 157)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D698u;
            goto label_53d698;
        }
    }
    ctx->pc = 0x53D684u;
label_53d684:
    // 0x53d684: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x53d684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53d688:
    // 0x53d688: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x53d688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_53d68c:
    // 0x53d68c: 0x320f809  jalr        $t9
label_53d690:
    if (ctx->pc == 0x53D690u) {
        ctx->pc = 0x53D690u;
            // 0x53d690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D694u;
        goto label_53d694;
    }
    ctx->pc = 0x53D68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D694u);
        ctx->pc = 0x53D690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D68Cu;
            // 0x53d690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D694u; }
            if (ctx->pc != 0x53D694u) { return; }
        }
        }
    }
    ctx->pc = 0x53D694u;
label_53d694:
    // 0x53d694: 0x9242009d  lbu         $v0, 0x9D($s2)
    ctx->pc = 0x53d694u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 157)));
label_53d698:
    // 0x53d698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_53d69c:
    if (ctx->pc == 0x53D69Cu) {
        ctx->pc = 0x53D6A0u;
        goto label_53d6a0;
    }
    ctx->pc = 0x53D698u;
    {
        const bool branch_taken_0x53d698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d698) {
            ctx->pc = 0x53D6A8u;
            goto label_53d6a8;
        }
    }
    ctx->pc = 0x53D6A0u;
label_53d6a0:
    // 0x53d6a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_53d6a4:
    if (ctx->pc == 0x53D6A4u) {
        ctx->pc = 0x53D6A4u;
            // 0x53d6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53D6A8u;
        goto label_53d6a8;
    }
    ctx->pc = 0x53D6A0u;
    {
        const bool branch_taken_0x53d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D6A0u;
            // 0x53d6a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d6a0) {
            ctx->pc = 0x53D6D8u;
            goto label_53d6d8;
        }
    }
    ctx->pc = 0x53D6A8u;
label_53d6a8:
    // 0x53d6a8: 0x9242009d  lbu         $v0, 0x9D($s2)
    ctx->pc = 0x53d6a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 157)));
label_53d6ac:
    // 0x53d6ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_53d6b0:
    if (ctx->pc == 0x53D6B0u) {
        ctx->pc = 0x53D6B0u;
            // 0x53d6b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53D6B4u;
        goto label_53d6b4;
    }
    ctx->pc = 0x53D6ACu;
    {
        const bool branch_taken_0x53d6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d6ac) {
            ctx->pc = 0x53D6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D6ACu;
            // 0x53d6b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D6D8u;
            goto label_53d6d8;
        }
    }
    ctx->pc = 0x53D6B4u;
label_53d6b4:
    // 0x53d6b4: 0xa240009e  sb          $zero, 0x9E($s2)
    ctx->pc = 0x53d6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 158), (uint8_t)GPR_U32(ctx, 0));
label_53d6b8:
    // 0x53d6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53d6bc:
    // 0x53d6bc: 0xa242009d  sb          $v0, 0x9D($s2)
    ctx->pc = 0x53d6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 157), (uint8_t)GPR_U32(ctx, 2));
label_53d6c0:
    // 0x53d6c0: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x53d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_53d6c4:
    // 0x53d6c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x53d6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53d6c8:
    // 0x53d6c8: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x53d6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_53d6cc:
    // 0x53d6cc: 0x320f809  jalr        $t9
label_53d6d0:
    if (ctx->pc == 0x53D6D0u) {
        ctx->pc = 0x53D6D0u;
            // 0x53d6d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D6D4u;
        goto label_53d6d4;
    }
    ctx->pc = 0x53D6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D6D4u);
        ctx->pc = 0x53D6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D6CCu;
            // 0x53d6d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D6D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D6D4u; }
            if (ctx->pc != 0x53D6D4u) { return; }
        }
        }
    }
    ctx->pc = 0x53D6D4u;
label_53d6d4:
    // 0x53d6d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x53d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53d6d8:
    // 0x53d6d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53d6dc:
    // 0x53d6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53d6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53d6e0:
    // 0x53d6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53d6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53d6e4:
    // 0x53d6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d6e8:
    // 0x53d6e8: 0x3e00008  jr          $ra
label_53d6ec:
    if (ctx->pc == 0x53D6ECu) {
        ctx->pc = 0x53D6ECu;
            // 0x53d6ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53D6F0u;
        goto label_fallthrough_0x53d6e8;
    }
    ctx->pc = 0x53D6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D6E8u;
            // 0x53d6ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x53d6e8:
    ctx->pc = 0x53D6F0u;
}
