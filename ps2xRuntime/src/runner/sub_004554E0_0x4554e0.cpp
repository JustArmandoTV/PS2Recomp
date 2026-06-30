#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004554E0
// Address: 0x4554e0 - 0x455580
void sub_004554E0_0x4554e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004554E0_0x4554e0");
#endif

    switch (ctx->pc) {
        case 0x4554e0u: goto label_4554e0;
        case 0x4554e4u: goto label_4554e4;
        case 0x4554e8u: goto label_4554e8;
        case 0x4554ecu: goto label_4554ec;
        case 0x4554f0u: goto label_4554f0;
        case 0x4554f4u: goto label_4554f4;
        case 0x4554f8u: goto label_4554f8;
        case 0x4554fcu: goto label_4554fc;
        case 0x455500u: goto label_455500;
        case 0x455504u: goto label_455504;
        case 0x455508u: goto label_455508;
        case 0x45550cu: goto label_45550c;
        case 0x455510u: goto label_455510;
        case 0x455514u: goto label_455514;
        case 0x455518u: goto label_455518;
        case 0x45551cu: goto label_45551c;
        case 0x455520u: goto label_455520;
        case 0x455524u: goto label_455524;
        case 0x455528u: goto label_455528;
        case 0x45552cu: goto label_45552c;
        case 0x455530u: goto label_455530;
        case 0x455534u: goto label_455534;
        case 0x455538u: goto label_455538;
        case 0x45553cu: goto label_45553c;
        case 0x455540u: goto label_455540;
        case 0x455544u: goto label_455544;
        case 0x455548u: goto label_455548;
        case 0x45554cu: goto label_45554c;
        case 0x455550u: goto label_455550;
        case 0x455554u: goto label_455554;
        case 0x455558u: goto label_455558;
        case 0x45555cu: goto label_45555c;
        case 0x455560u: goto label_455560;
        case 0x455564u: goto label_455564;
        case 0x455568u: goto label_455568;
        case 0x45556cu: goto label_45556c;
        case 0x455570u: goto label_455570;
        case 0x455574u: goto label_455574;
        case 0x455578u: goto label_455578;
        case 0x45557cu: goto label_45557c;
        default: break;
    }

    ctx->pc = 0x4554e0u;

label_4554e0:
    // 0x4554e0: 0x3e00008  jr          $ra
label_4554e4:
    if (ctx->pc == 0x4554E4u) {
        ctx->pc = 0x4554E4u;
            // 0x4554e4: 0xc48000f4  lwc1        $f0, 0xF4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4554E8u;
        goto label_4554e8;
    }
    ctx->pc = 0x4554E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4554E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4554E0u;
            // 0x4554e4: 0xc48000f4  lwc1        $f0, 0xF4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4554E8u;
label_4554e8:
    // 0x4554e8: 0x0  nop
    ctx->pc = 0x4554e8u;
    // NOP
label_4554ec:
    // 0x4554ec: 0x0  nop
    ctx->pc = 0x4554ecu;
    // NOP
label_4554f0:
    // 0x4554f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4554f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4554f4:
    // 0x4554f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4554f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4554f8:
    // 0x4554f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4554f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4554fc:
    // 0x4554fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4554fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_455500:
    // 0x455500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x455500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_455504:
    // 0x455504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x455504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_455508:
    // 0x455508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x455508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45550c:
    // 0x45550c: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x45550cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_455510:
    // 0x455510: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_455514:
    if (ctx->pc == 0x455514u) {
        ctx->pc = 0x455514u;
            // 0x455514: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455518u;
        goto label_455518;
    }
    ctx->pc = 0x455510u;
    {
        const bool branch_taken_0x455510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x455514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455510u;
            // 0x455514: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455510) {
            ctx->pc = 0x455558u;
            goto label_455558;
        }
    }
    ctx->pc = 0x455518u;
label_455518:
    // 0x455518: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x455518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45551c:
    // 0x45551c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45551cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455520:
    // 0x455520: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x455520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_455524:
    // 0x455524: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x455524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_455528:
    // 0x455528: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x455528u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45552c:
    // 0x45552c: 0xae8000e0  sw          $zero, 0xE0($s4)
    ctx->pc = 0x45552cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
label_455530:
    // 0x455530: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x455530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_455534:
    // 0x455534: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x455534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_455538:
    // 0x455538: 0x320f809  jalr        $t9
label_45553c:
    if (ctx->pc == 0x45553Cu) {
        ctx->pc = 0x45553Cu;
            // 0x45553c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455540u;
        goto label_455540;
    }
    ctx->pc = 0x455538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x455540u);
        ctx->pc = 0x45553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455538u;
            // 0x45553c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x455540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x455540u; }
            if (ctx->pc != 0x455540u) { return; }
        }
        }
    }
    ctx->pc = 0x455540u;
label_455540:
    // 0x455540: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x455540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_455544:
    // 0x455544: 0xae8000e8  sw          $zero, 0xE8($s4)
    ctx->pc = 0x455544u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 0));
label_455548:
    // 0x455548: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x455548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_45554c:
    // 0x45554c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_455550:
    if (ctx->pc == 0x455550u) {
        ctx->pc = 0x455550u;
            // 0x455550: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x455554u;
        goto label_455554;
    }
    ctx->pc = 0x45554Cu;
    {
        const bool branch_taken_0x45554c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x455550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45554Cu;
            // 0x455550: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45554c) {
            ctx->pc = 0x455520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_455520;
        }
    }
    ctx->pc = 0x455554u;
label_455554:
    // 0x455554: 0x0  nop
    ctx->pc = 0x455554u;
    // NOP
label_455558:
    // 0x455558: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x455558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_45555c:
    // 0x45555c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45555cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_455560:
    // 0x455560: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x455560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_455564:
    // 0x455564: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x455564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_455568:
    // 0x455568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x455568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45556c:
    // 0x45556c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45556cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_455570:
    // 0x455570: 0x3e00008  jr          $ra
label_455574:
    if (ctx->pc == 0x455574u) {
        ctx->pc = 0x455574u;
            // 0x455574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x455578u;
        goto label_455578;
    }
    ctx->pc = 0x455570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455570u;
            // 0x455574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x455578u;
label_455578:
    // 0x455578: 0x0  nop
    ctx->pc = 0x455578u;
    // NOP
label_45557c:
    // 0x45557c: 0x0  nop
    ctx->pc = 0x45557cu;
    // NOP
}
