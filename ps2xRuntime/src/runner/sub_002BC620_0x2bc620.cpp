#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC620
// Address: 0x2bc620 - 0x2bc770
void sub_002BC620_0x2bc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC620_0x2bc620");
#endif

    switch (ctx->pc) {
        case 0x2bc620u: goto label_2bc620;
        case 0x2bc624u: goto label_2bc624;
        case 0x2bc628u: goto label_2bc628;
        case 0x2bc62cu: goto label_2bc62c;
        case 0x2bc630u: goto label_2bc630;
        case 0x2bc634u: goto label_2bc634;
        case 0x2bc638u: goto label_2bc638;
        case 0x2bc63cu: goto label_2bc63c;
        case 0x2bc640u: goto label_2bc640;
        case 0x2bc644u: goto label_2bc644;
        case 0x2bc648u: goto label_2bc648;
        case 0x2bc64cu: goto label_2bc64c;
        case 0x2bc650u: goto label_2bc650;
        case 0x2bc654u: goto label_2bc654;
        case 0x2bc658u: goto label_2bc658;
        case 0x2bc65cu: goto label_2bc65c;
        case 0x2bc660u: goto label_2bc660;
        case 0x2bc664u: goto label_2bc664;
        case 0x2bc668u: goto label_2bc668;
        case 0x2bc66cu: goto label_2bc66c;
        case 0x2bc670u: goto label_2bc670;
        case 0x2bc674u: goto label_2bc674;
        case 0x2bc678u: goto label_2bc678;
        case 0x2bc67cu: goto label_2bc67c;
        case 0x2bc680u: goto label_2bc680;
        case 0x2bc684u: goto label_2bc684;
        case 0x2bc688u: goto label_2bc688;
        case 0x2bc68cu: goto label_2bc68c;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc694u: goto label_2bc694;
        case 0x2bc698u: goto label_2bc698;
        case 0x2bc69cu: goto label_2bc69c;
        case 0x2bc6a0u: goto label_2bc6a0;
        case 0x2bc6a4u: goto label_2bc6a4;
        case 0x2bc6a8u: goto label_2bc6a8;
        case 0x2bc6acu: goto label_2bc6ac;
        case 0x2bc6b0u: goto label_2bc6b0;
        case 0x2bc6b4u: goto label_2bc6b4;
        case 0x2bc6b8u: goto label_2bc6b8;
        case 0x2bc6bcu: goto label_2bc6bc;
        case 0x2bc6c0u: goto label_2bc6c0;
        case 0x2bc6c4u: goto label_2bc6c4;
        case 0x2bc6c8u: goto label_2bc6c8;
        case 0x2bc6ccu: goto label_2bc6cc;
        case 0x2bc6d0u: goto label_2bc6d0;
        case 0x2bc6d4u: goto label_2bc6d4;
        case 0x2bc6d8u: goto label_2bc6d8;
        case 0x2bc6dcu: goto label_2bc6dc;
        case 0x2bc6e0u: goto label_2bc6e0;
        case 0x2bc6e4u: goto label_2bc6e4;
        case 0x2bc6e8u: goto label_2bc6e8;
        case 0x2bc6ecu: goto label_2bc6ec;
        case 0x2bc6f0u: goto label_2bc6f0;
        case 0x2bc6f4u: goto label_2bc6f4;
        case 0x2bc6f8u: goto label_2bc6f8;
        case 0x2bc6fcu: goto label_2bc6fc;
        case 0x2bc700u: goto label_2bc700;
        case 0x2bc704u: goto label_2bc704;
        case 0x2bc708u: goto label_2bc708;
        case 0x2bc70cu: goto label_2bc70c;
        case 0x2bc710u: goto label_2bc710;
        case 0x2bc714u: goto label_2bc714;
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc71cu: goto label_2bc71c;
        case 0x2bc720u: goto label_2bc720;
        case 0x2bc724u: goto label_2bc724;
        case 0x2bc728u: goto label_2bc728;
        case 0x2bc72cu: goto label_2bc72c;
        case 0x2bc730u: goto label_2bc730;
        case 0x2bc734u: goto label_2bc734;
        case 0x2bc738u: goto label_2bc738;
        case 0x2bc73cu: goto label_2bc73c;
        case 0x2bc740u: goto label_2bc740;
        case 0x2bc744u: goto label_2bc744;
        case 0x2bc748u: goto label_2bc748;
        case 0x2bc74cu: goto label_2bc74c;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc754u: goto label_2bc754;
        case 0x2bc758u: goto label_2bc758;
        case 0x2bc75cu: goto label_2bc75c;
        case 0x2bc760u: goto label_2bc760;
        case 0x2bc764u: goto label_2bc764;
        case 0x2bc768u: goto label_2bc768;
        case 0x2bc76cu: goto label_2bc76c;
        default: break;
    }

    ctx->pc = 0x2bc620u;

label_2bc620:
    // 0x2bc620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bc624:
    // 0x2bc624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bc628:
    // 0x2bc628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bc62c:
    // 0x2bc62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bc630:
    // 0x2bc630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc634:
    // 0x2bc634: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_2bc638:
    if (ctx->pc == 0x2BC638u) {
        ctx->pc = 0x2BC638u;
            // 0x2bc638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC63Cu;
        goto label_2bc63c;
    }
    ctx->pc = 0x2BC634u;
    {
        const bool branch_taken_0x2bc634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC634u;
            // 0x2bc638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc634) {
            ctx->pc = 0x2BC754u;
            goto label_2bc754;
        }
    }
    ctx->pc = 0x2BC63Cu;
label_2bc63c:
    // 0x2bc63c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bc640:
    // 0x2bc640: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bc644:
    // 0x2bc644: 0x24632090  addiu       $v1, $v1, 0x2090
    ctx->pc = 0x2bc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
label_2bc648:
    // 0x2bc648: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bc648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bc64c:
    // 0x2bc64c: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x2bc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
label_2bc650:
    // 0x2bc650: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bc650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bc654:
    // 0x2bc654: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bc654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bc658:
    // 0x2bc658: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bc658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bc65c:
    // 0x2bc65c: 0xc0407c0  jal         func_101F00
label_2bc660:
    if (ctx->pc == 0x2BC660u) {
        ctx->pc = 0x2BC660u;
            // 0x2bc660: 0x24a5c520  addiu       $a1, $a1, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
        ctx->pc = 0x2BC664u;
        goto label_2bc664;
    }
    ctx->pc = 0x2BC65Cu;
    SET_GPR_U32(ctx, 31, 0x2BC664u);
    ctx->pc = 0x2BC660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC65Cu;
            // 0x2bc660: 0x24a5c520  addiu       $a1, $a1, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC664u; }
        if (ctx->pc != 0x2BC664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC664u; }
        if (ctx->pc != 0x2BC664u) { return; }
    }
    ctx->pc = 0x2BC664u;
label_2bc664:
    // 0x2bc664: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bc668:
    // 0x2bc668: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bc66c:
    if (ctx->pc == 0x2BC66Cu) {
        ctx->pc = 0x2BC66Cu;
            // 0x2bc66c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BC670u;
        goto label_2bc670;
    }
    ctx->pc = 0x2BC668u;
    {
        const bool branch_taken_0x2bc668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc668) {
            ctx->pc = 0x2BC66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC668u;
            // 0x2bc66c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC698u;
            goto label_2bc698;
        }
    }
    ctx->pc = 0x2BC670u;
label_2bc670:
    // 0x2bc670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bc674:
    if (ctx->pc == 0x2BC674u) {
        ctx->pc = 0x2BC678u;
        goto label_2bc678;
    }
    ctx->pc = 0x2BC670u;
    {
        const bool branch_taken_0x2bc670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc670) {
            ctx->pc = 0x2BC694u;
            goto label_2bc694;
        }
    }
    ctx->pc = 0x2BC678u;
label_2bc678:
    // 0x2bc678: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bc67c:
    if (ctx->pc == 0x2BC67Cu) {
        ctx->pc = 0x2BC680u;
        goto label_2bc680;
    }
    ctx->pc = 0x2BC678u;
    {
        const bool branch_taken_0x2bc678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc678) {
            ctx->pc = 0x2BC694u;
            goto label_2bc694;
        }
    }
    ctx->pc = 0x2BC680u;
label_2bc680:
    // 0x2bc680: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bc684:
    // 0x2bc684: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bc688:
    if (ctx->pc == 0x2BC688u) {
        ctx->pc = 0x2BC68Cu;
        goto label_2bc68c;
    }
    ctx->pc = 0x2BC684u;
    {
        const bool branch_taken_0x2bc684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc684) {
            ctx->pc = 0x2BC694u;
            goto label_2bc694;
        }
    }
    ctx->pc = 0x2BC68Cu;
label_2bc68c:
    // 0x2bc68c: 0xc0400a8  jal         func_1002A0
label_2bc690:
    if (ctx->pc == 0x2BC690u) {
        ctx->pc = 0x2BC694u;
        goto label_2bc694;
    }
    ctx->pc = 0x2BC68Cu;
    SET_GPR_U32(ctx, 31, 0x2BC694u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC694u; }
        if (ctx->pc != 0x2BC694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC694u; }
        if (ctx->pc != 0x2BC694u) { return; }
    }
    ctx->pc = 0x2BC694u;
label_2bc694:
    // 0x2bc694: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bc698:
    // 0x2bc698: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bc69c:
    if (ctx->pc == 0x2BC69Cu) {
        ctx->pc = 0x2BC69Cu;
            // 0x2bc69c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BC6A0u;
        goto label_2bc6a0;
    }
    ctx->pc = 0x2BC698u;
    {
        const bool branch_taken_0x2bc698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc698) {
            ctx->pc = 0x2BC69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC698u;
            // 0x2bc69c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6C8u;
            goto label_2bc6c8;
        }
    }
    ctx->pc = 0x2BC6A0u;
label_2bc6a0:
    // 0x2bc6a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bc6a4:
    if (ctx->pc == 0x2BC6A4u) {
        ctx->pc = 0x2BC6A8u;
        goto label_2bc6a8;
    }
    ctx->pc = 0x2BC6A0u;
    {
        const bool branch_taken_0x2bc6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6a0) {
            ctx->pc = 0x2BC6C4u;
            goto label_2bc6c4;
        }
    }
    ctx->pc = 0x2BC6A8u;
label_2bc6a8:
    // 0x2bc6a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bc6ac:
    if (ctx->pc == 0x2BC6ACu) {
        ctx->pc = 0x2BC6B0u;
        goto label_2bc6b0;
    }
    ctx->pc = 0x2BC6A8u;
    {
        const bool branch_taken_0x2bc6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6a8) {
            ctx->pc = 0x2BC6C4u;
            goto label_2bc6c4;
        }
    }
    ctx->pc = 0x2BC6B0u;
label_2bc6b0:
    // 0x2bc6b0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bc6b4:
    // 0x2bc6b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bc6b8:
    if (ctx->pc == 0x2BC6B8u) {
        ctx->pc = 0x2BC6BCu;
        goto label_2bc6bc;
    }
    ctx->pc = 0x2BC6B4u;
    {
        const bool branch_taken_0x2bc6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6b4) {
            ctx->pc = 0x2BC6C4u;
            goto label_2bc6c4;
        }
    }
    ctx->pc = 0x2BC6BCu;
label_2bc6bc:
    // 0x2bc6bc: 0xc0400a8  jal         func_1002A0
label_2bc6c0:
    if (ctx->pc == 0x2BC6C0u) {
        ctx->pc = 0x2BC6C4u;
        goto label_2bc6c4;
    }
    ctx->pc = 0x2BC6BCu;
    SET_GPR_U32(ctx, 31, 0x2BC6C4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6C4u; }
        if (ctx->pc != 0x2BC6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6C4u; }
        if (ctx->pc != 0x2BC6C4u) { return; }
    }
    ctx->pc = 0x2BC6C4u;
label_2bc6c4:
    // 0x2bc6c4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bc6c8:
    // 0x2bc6c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bc6cc:
    if (ctx->pc == 0x2BC6CCu) {
        ctx->pc = 0x2BC6D0u;
        goto label_2bc6d0;
    }
    ctx->pc = 0x2BC6C8u;
    {
        const bool branch_taken_0x2bc6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6c8) {
            ctx->pc = 0x2BC6E4u;
            goto label_2bc6e4;
        }
    }
    ctx->pc = 0x2BC6D0u;
label_2bc6d0:
    // 0x2bc6d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bc6d4:
    // 0x2bc6d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bc6d8:
    // 0x2bc6d8: 0x24632078  addiu       $v1, $v1, 0x2078
    ctx->pc = 0x2bc6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8312));
label_2bc6dc:
    // 0x2bc6dc: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bc6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bc6e0:
    // 0x2bc6e0: 0xac400d40  sw          $zero, 0xD40($v0)
    ctx->pc = 0x2bc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3392), GPR_U32(ctx, 0));
label_2bc6e4:
    // 0x2bc6e4: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bc6e8:
    if (ctx->pc == 0x2BC6E8u) {
        ctx->pc = 0x2BC6E8u;
            // 0x2bc6e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BC6ECu;
        goto label_2bc6ec;
    }
    ctx->pc = 0x2BC6E4u;
    {
        const bool branch_taken_0x2bc6e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6e4) {
            ctx->pc = 0x2BC6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC6E4u;
            // 0x2bc6e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC740u;
            goto label_2bc740;
        }
    }
    ctx->pc = 0x2BC6ECu;
label_2bc6ec:
    // 0x2bc6ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bc6f0:
    // 0x2bc6f0: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bc6f4:
    // 0x2bc6f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bc6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bc6f8:
    // 0x2bc6f8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bc6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bc6fc:
    // 0x2bc6fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bc700:
    if (ctx->pc == 0x2BC700u) {
        ctx->pc = 0x2BC700u;
            // 0x2bc700: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BC704u;
        goto label_2bc704;
    }
    ctx->pc = 0x2BC6FCu;
    {
        const bool branch_taken_0x2bc6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6fc) {
            ctx->pc = 0x2BC700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC6FCu;
            // 0x2bc700: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC718u;
            goto label_2bc718;
        }
    }
    ctx->pc = 0x2BC704u;
label_2bc704:
    // 0x2bc704: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc708:
    // 0x2bc708: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bc708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bc70c:
    // 0x2bc70c: 0x320f809  jalr        $t9
label_2bc710:
    if (ctx->pc == 0x2BC710u) {
        ctx->pc = 0x2BC710u;
            // 0x2bc710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BC714u;
        goto label_2bc714;
    }
    ctx->pc = 0x2BC70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC714u);
        ctx->pc = 0x2BC710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC70Cu;
            // 0x2bc710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC714u; }
            if (ctx->pc != 0x2BC714u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC714u;
label_2bc714:
    // 0x2bc714: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bc714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bc718:
    // 0x2bc718: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bc71c:
    if (ctx->pc == 0x2BC71Cu) {
        ctx->pc = 0x2BC71Cu;
            // 0x2bc71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC720u;
        goto label_2bc720;
    }
    ctx->pc = 0x2BC718u;
    {
        const bool branch_taken_0x2bc718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc718) {
            ctx->pc = 0x2BC71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC718u;
            // 0x2bc71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC734u;
            goto label_2bc734;
        }
    }
    ctx->pc = 0x2BC720u;
label_2bc720:
    // 0x2bc720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bc720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bc724:
    // 0x2bc724: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bc724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bc728:
    // 0x2bc728: 0x320f809  jalr        $t9
label_2bc72c:
    if (ctx->pc == 0x2BC72Cu) {
        ctx->pc = 0x2BC72Cu;
            // 0x2bc72c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BC730u;
        goto label_2bc730;
    }
    ctx->pc = 0x2BC728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BC730u);
        ctx->pc = 0x2BC72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC728u;
            // 0x2bc72c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC730u; }
            if (ctx->pc != 0x2BC730u) { return; }
        }
        }
    }
    ctx->pc = 0x2BC730u;
label_2bc730:
    // 0x2bc730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc734:
    // 0x2bc734: 0xc075bf8  jal         func_1D6FE0
label_2bc738:
    if (ctx->pc == 0x2BC738u) {
        ctx->pc = 0x2BC738u;
            // 0x2bc738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC73Cu;
        goto label_2bc73c;
    }
    ctx->pc = 0x2BC734u;
    SET_GPR_U32(ctx, 31, 0x2BC73Cu);
    ctx->pc = 0x2BC738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC734u;
            // 0x2bc738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC73Cu; }
        if (ctx->pc != 0x2BC73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC73Cu; }
        if (ctx->pc != 0x2BC73Cu) { return; }
    }
    ctx->pc = 0x2BC73Cu;
label_2bc73c:
    // 0x2bc73c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bc73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bc740:
    // 0x2bc740: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bc740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bc744:
    // 0x2bc744: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bc748:
    if (ctx->pc == 0x2BC748u) {
        ctx->pc = 0x2BC748u;
            // 0x2bc748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC74Cu;
        goto label_2bc74c;
    }
    ctx->pc = 0x2BC744u;
    {
        const bool branch_taken_0x2bc744 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bc744) {
            ctx->pc = 0x2BC748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC744u;
            // 0x2bc748: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC758u;
            goto label_2bc758;
        }
    }
    ctx->pc = 0x2BC74Cu;
label_2bc74c:
    // 0x2bc74c: 0xc0400a8  jal         func_1002A0
label_2bc750:
    if (ctx->pc == 0x2BC750u) {
        ctx->pc = 0x2BC750u;
            // 0x2bc750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC754u;
        goto label_2bc754;
    }
    ctx->pc = 0x2BC74Cu;
    SET_GPR_U32(ctx, 31, 0x2BC754u);
    ctx->pc = 0x2BC750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC74Cu;
            // 0x2bc750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC754u; }
        if (ctx->pc != 0x2BC754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC754u; }
        if (ctx->pc != 0x2BC754u) { return; }
    }
    ctx->pc = 0x2BC754u;
label_2bc754:
    // 0x2bc754: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bc754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc758:
    // 0x2bc758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc75c:
    // 0x2bc75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc760:
    // 0x2bc760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc764:
    // 0x2bc764: 0x3e00008  jr          $ra
label_2bc768:
    if (ctx->pc == 0x2BC768u) {
        ctx->pc = 0x2BC768u;
            // 0x2bc768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BC76Cu;
        goto label_2bc76c;
    }
    ctx->pc = 0x2BC764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC764u;
            // 0x2bc768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC76Cu;
label_2bc76c:
    // 0x2bc76c: 0x0  nop
    ctx->pc = 0x2bc76cu;
    // NOP
}
