#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E45F0
// Address: 0x2e45f0 - 0x2e46e0
void sub_002E45F0_0x2e45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E45F0_0x2e45f0");
#endif

    switch (ctx->pc) {
        case 0x2e45f0u: goto label_2e45f0;
        case 0x2e45f4u: goto label_2e45f4;
        case 0x2e45f8u: goto label_2e45f8;
        case 0x2e45fcu: goto label_2e45fc;
        case 0x2e4600u: goto label_2e4600;
        case 0x2e4604u: goto label_2e4604;
        case 0x2e4608u: goto label_2e4608;
        case 0x2e460cu: goto label_2e460c;
        case 0x2e4610u: goto label_2e4610;
        case 0x2e4614u: goto label_2e4614;
        case 0x2e4618u: goto label_2e4618;
        case 0x2e461cu: goto label_2e461c;
        case 0x2e4620u: goto label_2e4620;
        case 0x2e4624u: goto label_2e4624;
        case 0x2e4628u: goto label_2e4628;
        case 0x2e462cu: goto label_2e462c;
        case 0x2e4630u: goto label_2e4630;
        case 0x2e4634u: goto label_2e4634;
        case 0x2e4638u: goto label_2e4638;
        case 0x2e463cu: goto label_2e463c;
        case 0x2e4640u: goto label_2e4640;
        case 0x2e4644u: goto label_2e4644;
        case 0x2e4648u: goto label_2e4648;
        case 0x2e464cu: goto label_2e464c;
        case 0x2e4650u: goto label_2e4650;
        case 0x2e4654u: goto label_2e4654;
        case 0x2e4658u: goto label_2e4658;
        case 0x2e465cu: goto label_2e465c;
        case 0x2e4660u: goto label_2e4660;
        case 0x2e4664u: goto label_2e4664;
        case 0x2e4668u: goto label_2e4668;
        case 0x2e466cu: goto label_2e466c;
        case 0x2e4670u: goto label_2e4670;
        case 0x2e4674u: goto label_2e4674;
        case 0x2e4678u: goto label_2e4678;
        case 0x2e467cu: goto label_2e467c;
        case 0x2e4680u: goto label_2e4680;
        case 0x2e4684u: goto label_2e4684;
        case 0x2e4688u: goto label_2e4688;
        case 0x2e468cu: goto label_2e468c;
        case 0x2e4690u: goto label_2e4690;
        case 0x2e4694u: goto label_2e4694;
        case 0x2e4698u: goto label_2e4698;
        case 0x2e469cu: goto label_2e469c;
        case 0x2e46a0u: goto label_2e46a0;
        case 0x2e46a4u: goto label_2e46a4;
        case 0x2e46a8u: goto label_2e46a8;
        case 0x2e46acu: goto label_2e46ac;
        case 0x2e46b0u: goto label_2e46b0;
        case 0x2e46b4u: goto label_2e46b4;
        case 0x2e46b8u: goto label_2e46b8;
        case 0x2e46bcu: goto label_2e46bc;
        case 0x2e46c0u: goto label_2e46c0;
        case 0x2e46c4u: goto label_2e46c4;
        case 0x2e46c8u: goto label_2e46c8;
        case 0x2e46ccu: goto label_2e46cc;
        case 0x2e46d0u: goto label_2e46d0;
        case 0x2e46d4u: goto label_2e46d4;
        case 0x2e46d8u: goto label_2e46d8;
        case 0x2e46dcu: goto label_2e46dc;
        default: break;
    }

    ctx->pc = 0x2e45f0u;

label_2e45f0:
    // 0x2e45f0: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2e45f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e45f4:
    // 0x2e45f4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2e45f8:
    // 0x2e45f8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e45f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2e45fc:
    // 0x2e45fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2e4600:
    // 0x2e4600: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e4600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2e4604:
    // 0x2e4604: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e4604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2e4608:
    // 0x2e4608: 0xe4ac0000  swc1        $f12, 0x0($a1)
    ctx->pc = 0x2e4608u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2e460c:
    // 0x2e460c: 0xe4ad0004  swc1        $f13, 0x4($a1)
    ctx->pc = 0x2e460cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2e4610:
    // 0x2e4610: 0xe4ae0008  swc1        $f14, 0x8($a1)
    ctx->pc = 0x2e4610u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2e4614:
    // 0x2e4614: 0x8c64e498  lw          $a0, -0x1B68($v1)
    ctx->pc = 0x2e4614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960280)));
label_2e4618:
    // 0x2e4618: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x2e4618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_2e461c:
    // 0x2e461c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e4620:
    // 0x2e4620: 0x3e00008  jr          $ra
label_2e4624:
    if (ctx->pc == 0x2E4624u) {
        ctx->pc = 0x2E4624u;
            // 0x2e4624: 0xaca30080  sw          $v1, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x2E4628u;
        goto label_2e4628;
    }
    ctx->pc = 0x2E4620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4620u;
            // 0x2e4624: 0xaca30080  sw          $v1, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4628u;
label_2e4628:
    // 0x2e4628: 0x0  nop
    ctx->pc = 0x2e4628u;
    // NOP
label_2e462c:
    // 0x2e462c: 0x0  nop
    ctx->pc = 0x2e462cu;
    // NOP
label_2e4630:
    // 0x2e4630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4634:
    // 0x2e4634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e4638:
    // 0x2e4638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e463c:
    // 0x2e463c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4640:
    // 0x2e4640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4644:
    // 0x2e4644: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2e4648:
    if (ctx->pc == 0x2E4648u) {
        ctx->pc = 0x2E4648u;
            // 0x2e4648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E464Cu;
        goto label_2e464c;
    }
    ctx->pc = 0x2E4644u;
    {
        const bool branch_taken_0x2e4644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4644u;
            // 0x2e4648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4644) {
            ctx->pc = 0x2E4688u;
            goto label_2e4688;
        }
    }
    ctx->pc = 0x2E464Cu;
label_2e464c:
    // 0x2e464c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e464cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e4650:
    // 0x2e4650: 0x24422fc0  addiu       $v0, $v0, 0x2FC0
    ctx->pc = 0x2e4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
label_2e4654:
    // 0x2e4654: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2e4658:
    if (ctx->pc == 0x2E4658u) {
        ctx->pc = 0x2E4658u;
            // 0x2e4658: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E465Cu;
        goto label_2e465c;
    }
    ctx->pc = 0x2E4654u;
    {
        const bool branch_taken_0x2e4654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4654u;
            // 0x2e4658: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4654) {
            ctx->pc = 0x2E4670u;
            goto label_2e4670;
        }
    }
    ctx->pc = 0x2E465Cu;
label_2e465c:
    // 0x2e465c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e4660:
    // 0x2e4660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4664:
    // 0x2e4664: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2e4664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2e4668:
    // 0x2e4668: 0xc057a68  jal         func_15E9A0
label_2e466c:
    if (ctx->pc == 0x2E466Cu) {
        ctx->pc = 0x2E466Cu;
            // 0x2e466c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E4670u;
        goto label_2e4670;
    }
    ctx->pc = 0x2E4668u;
    SET_GPR_U32(ctx, 31, 0x2E4670u);
    ctx->pc = 0x2E466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4668u;
            // 0x2e466c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4670u; }
        if (ctx->pc != 0x2E4670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4670u; }
        if (ctx->pc != 0x2E4670u) { return; }
    }
    ctx->pc = 0x2E4670u;
label_2e4670:
    // 0x2e4670: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e4670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2e4674:
    // 0x2e4674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e4674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2e4678:
    // 0x2e4678: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2e467c:
    if (ctx->pc == 0x2E467Cu) {
        ctx->pc = 0x2E467Cu;
            // 0x2e467c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4680u;
        goto label_2e4680;
    }
    ctx->pc = 0x2E4678u;
    {
        const bool branch_taken_0x2e4678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e4678) {
            ctx->pc = 0x2E467Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4678u;
            // 0x2e467c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E468Cu;
            goto label_2e468c;
        }
    }
    ctx->pc = 0x2E4680u;
label_2e4680:
    // 0x2e4680: 0xc0400a8  jal         func_1002A0
label_2e4684:
    if (ctx->pc == 0x2E4684u) {
        ctx->pc = 0x2E4684u;
            // 0x2e4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4688u;
        goto label_2e4688;
    }
    ctx->pc = 0x2E4680u;
    SET_GPR_U32(ctx, 31, 0x2E4688u);
    ctx->pc = 0x2E4684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4680u;
            // 0x2e4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4688u; }
        if (ctx->pc != 0x2E4688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4688u; }
        if (ctx->pc != 0x2E4688u) { return; }
    }
    ctx->pc = 0x2E4688u;
label_2e4688:
    // 0x2e4688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e4688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e468c:
    // 0x2e468c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e468cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4690:
    // 0x2e4690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4694:
    // 0x2e4694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4698:
    // 0x2e4698: 0x3e00008  jr          $ra
label_2e469c:
    if (ctx->pc == 0x2E469Cu) {
        ctx->pc = 0x2E469Cu;
            // 0x2e469c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E46A0u;
        goto label_2e46a0;
    }
    ctx->pc = 0x2E4698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4698u;
            // 0x2e469c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E46A0u;
label_2e46a0:
    // 0x2e46a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2e46a4:
    // 0x2e46a4: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2e46a8:
    // 0x2e46a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2e46ac:
    // 0x2e46ac: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x2e46acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_2e46b0:
    // 0x2e46b0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x2e46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2e46b4:
    // 0x2e46b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e46b8:
    // 0x2e46b8: 0x8c44e418  lw          $a0, -0x1BE8($v0)
    ctx->pc = 0x2e46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
label_2e46bc:
    // 0x2e46bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2e46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e46c0:
    // 0x2e46c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e46c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e46c4:
    // 0x2e46c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2e46c8:
    // 0x2e46c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e46cc:
    // 0x2e46cc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2e46ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2e46d0:
    // 0x2e46d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e46d4:
    // 0x2e46d4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2e46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e46d8:
    // 0x2e46d8: 0x3200008  jr          $t9
label_2e46dc:
    if (ctx->pc == 0x2E46DCu) {
        ctx->pc = 0x2E46E0u;
        goto label_fallthrough_0x2e46d8;
    }
    ctx->pc = 0x2E46D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e46d8:
    ctx->pc = 0x2E46E0u;
}
