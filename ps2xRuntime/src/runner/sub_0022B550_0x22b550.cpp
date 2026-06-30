#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B550
// Address: 0x22b550 - 0x22b760
void sub_0022B550_0x22b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B550_0x22b550");
#endif

    switch (ctx->pc) {
        case 0x22b550u: goto label_22b550;
        case 0x22b554u: goto label_22b554;
        case 0x22b558u: goto label_22b558;
        case 0x22b55cu: goto label_22b55c;
        case 0x22b560u: goto label_22b560;
        case 0x22b564u: goto label_22b564;
        case 0x22b568u: goto label_22b568;
        case 0x22b56cu: goto label_22b56c;
        case 0x22b570u: goto label_22b570;
        case 0x22b574u: goto label_22b574;
        case 0x22b578u: goto label_22b578;
        case 0x22b57cu: goto label_22b57c;
        case 0x22b580u: goto label_22b580;
        case 0x22b584u: goto label_22b584;
        case 0x22b588u: goto label_22b588;
        case 0x22b58cu: goto label_22b58c;
        case 0x22b590u: goto label_22b590;
        case 0x22b594u: goto label_22b594;
        case 0x22b598u: goto label_22b598;
        case 0x22b59cu: goto label_22b59c;
        case 0x22b5a0u: goto label_22b5a0;
        case 0x22b5a4u: goto label_22b5a4;
        case 0x22b5a8u: goto label_22b5a8;
        case 0x22b5acu: goto label_22b5ac;
        case 0x22b5b0u: goto label_22b5b0;
        case 0x22b5b4u: goto label_22b5b4;
        case 0x22b5b8u: goto label_22b5b8;
        case 0x22b5bcu: goto label_22b5bc;
        case 0x22b5c0u: goto label_22b5c0;
        case 0x22b5c4u: goto label_22b5c4;
        case 0x22b5c8u: goto label_22b5c8;
        case 0x22b5ccu: goto label_22b5cc;
        case 0x22b5d0u: goto label_22b5d0;
        case 0x22b5d4u: goto label_22b5d4;
        case 0x22b5d8u: goto label_22b5d8;
        case 0x22b5dcu: goto label_22b5dc;
        case 0x22b5e0u: goto label_22b5e0;
        case 0x22b5e4u: goto label_22b5e4;
        case 0x22b5e8u: goto label_22b5e8;
        case 0x22b5ecu: goto label_22b5ec;
        case 0x22b5f0u: goto label_22b5f0;
        case 0x22b5f4u: goto label_22b5f4;
        case 0x22b5f8u: goto label_22b5f8;
        case 0x22b5fcu: goto label_22b5fc;
        case 0x22b600u: goto label_22b600;
        case 0x22b604u: goto label_22b604;
        case 0x22b608u: goto label_22b608;
        case 0x22b60cu: goto label_22b60c;
        case 0x22b610u: goto label_22b610;
        case 0x22b614u: goto label_22b614;
        case 0x22b618u: goto label_22b618;
        case 0x22b61cu: goto label_22b61c;
        case 0x22b620u: goto label_22b620;
        case 0x22b624u: goto label_22b624;
        case 0x22b628u: goto label_22b628;
        case 0x22b62cu: goto label_22b62c;
        case 0x22b630u: goto label_22b630;
        case 0x22b634u: goto label_22b634;
        case 0x22b638u: goto label_22b638;
        case 0x22b63cu: goto label_22b63c;
        case 0x22b640u: goto label_22b640;
        case 0x22b644u: goto label_22b644;
        case 0x22b648u: goto label_22b648;
        case 0x22b64cu: goto label_22b64c;
        case 0x22b650u: goto label_22b650;
        case 0x22b654u: goto label_22b654;
        case 0x22b658u: goto label_22b658;
        case 0x22b65cu: goto label_22b65c;
        case 0x22b660u: goto label_22b660;
        case 0x22b664u: goto label_22b664;
        case 0x22b668u: goto label_22b668;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b670u: goto label_22b670;
        case 0x22b674u: goto label_22b674;
        case 0x22b678u: goto label_22b678;
        case 0x22b67cu: goto label_22b67c;
        case 0x22b680u: goto label_22b680;
        case 0x22b684u: goto label_22b684;
        case 0x22b688u: goto label_22b688;
        case 0x22b68cu: goto label_22b68c;
        case 0x22b690u: goto label_22b690;
        case 0x22b694u: goto label_22b694;
        case 0x22b698u: goto label_22b698;
        case 0x22b69cu: goto label_22b69c;
        case 0x22b6a0u: goto label_22b6a0;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6acu: goto label_22b6ac;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6b8u: goto label_22b6b8;
        case 0x22b6bcu: goto label_22b6bc;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6c4u: goto label_22b6c4;
        case 0x22b6c8u: goto label_22b6c8;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6d0u: goto label_22b6d0;
        case 0x22b6d4u: goto label_22b6d4;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6dcu: goto label_22b6dc;
        case 0x22b6e0u: goto label_22b6e0;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6e8u: goto label_22b6e8;
        case 0x22b6ecu: goto label_22b6ec;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b6f8u: goto label_22b6f8;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b700u: goto label_22b700;
        case 0x22b704u: goto label_22b704;
        case 0x22b708u: goto label_22b708;
        case 0x22b70cu: goto label_22b70c;
        case 0x22b710u: goto label_22b710;
        case 0x22b714u: goto label_22b714;
        case 0x22b718u: goto label_22b718;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b720u: goto label_22b720;
        case 0x22b724u: goto label_22b724;
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        default: break;
    }

    ctx->pc = 0x22b550u;

label_22b550:
    // 0x22b550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22b554:
    // 0x22b554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22b558:
    // 0x22b558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22b55c:
    // 0x22b55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b560:
    // 0x22b560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b564:
    // 0x22b564: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
label_22b568:
    if (ctx->pc == 0x22B568u) {
        ctx->pc = 0x22B568u;
            // 0x22b568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B56Cu;
        goto label_22b56c;
    }
    ctx->pc = 0x22B564u;
    {
        const bool branch_taken_0x22b564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B564u;
            // 0x22b568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b564) {
            ctx->pc = 0x22B744u;
            goto label_22b744;
        }
    }
    ctx->pc = 0x22B56Cu;
label_22b56c:
    // 0x22b56c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22b570:
    // 0x22b570: 0x2442eed0  addiu       $v0, $v0, -0x1130
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962896));
label_22b574:
    // 0x22b574: 0xc08aaec  jal         func_22ABB0
label_22b578:
    if (ctx->pc == 0x22B578u) {
        ctx->pc = 0x22B578u;
            // 0x22b578: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22B57Cu;
        goto label_22b57c;
    }
    ctx->pc = 0x22B574u;
    SET_GPR_U32(ctx, 31, 0x22B57Cu);
    ctx->pc = 0x22B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B574u;
            // 0x22b578: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B57Cu; }
        if (ctx->pc != 0x22B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022ABB0_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B57Cu; }
        if (ctx->pc != 0x22B57Cu) { return; }
    }
    ctx->pc = 0x22B57Cu;
label_22b57c:
    // 0x22b57c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x22b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_22b580:
    // 0x22b580: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22b584:
    if (ctx->pc == 0x22B584u) {
        ctx->pc = 0x22B584u;
            // 0x22b584: 0x26220058  addiu       $v0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x22B588u;
        goto label_22b588;
    }
    ctx->pc = 0x22B580u;
    {
        const bool branch_taken_0x22b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b580) {
            ctx->pc = 0x22B584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B580u;
            // 0x22b584: 0x26220058  addiu       $v0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B5C4u;
            goto label_22b5c4;
        }
    }
    ctx->pc = 0x22B588u;
label_22b588:
    // 0x22b588: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x22b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_22b58c:
    // 0x22b58c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22b590:
    // 0x22b590: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22b594:
    // 0x22b594: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22b598:
    if (ctx->pc == 0x22B598u) {
        ctx->pc = 0x22B59Cu;
        goto label_22b59c;
    }
    ctx->pc = 0x22B594u;
    {
        const bool branch_taken_0x22b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b594) {
            ctx->pc = 0x22B5C0u;
            goto label_22b5c0;
        }
    }
    ctx->pc = 0x22B59Cu;
label_22b59c:
    // 0x22b59c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b5a0:
    // 0x22b5a0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x22b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_22b5a4:
    // 0x22b5a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b5a8:
    // 0x22b5a8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b5ac:
    // 0x22b5ac: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x22b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_22b5b0:
    // 0x22b5b0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b5b4:
    // 0x22b5b4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b5b8:
    // 0x22b5b8: 0xc0a7ab4  jal         func_29EAD0
label_22b5bc:
    if (ctx->pc == 0x22B5BCu) {
        ctx->pc = 0x22B5BCu;
            // 0x22b5bc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22B5C0u;
        goto label_22b5c0;
    }
    ctx->pc = 0x22B5B8u;
    SET_GPR_U32(ctx, 31, 0x22B5C0u);
    ctx->pc = 0x22B5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5B8u;
            // 0x22b5bc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5C0u; }
        if (ctx->pc != 0x22B5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B5C0u; }
        if (ctx->pc != 0x22B5C0u) { return; }
    }
    ctx->pc = 0x22B5C0u;
label_22b5c0:
    // 0x22b5c0: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x22b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_22b5c4:
    // 0x22b5c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22b5c8:
    if (ctx->pc == 0x22B5C8u) {
        ctx->pc = 0x22B5CCu;
        goto label_22b5cc;
    }
    ctx->pc = 0x22B5C4u;
    {
        const bool branch_taken_0x22b5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b5c4) {
            ctx->pc = 0x22B604u;
            goto label_22b604;
        }
    }
    ctx->pc = 0x22B5CCu;
label_22b5cc:
    // 0x22b5cc: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x22b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_22b5d0:
    // 0x22b5d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22b5d4:
    // 0x22b5d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22b5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22b5d8:
    // 0x22b5d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22b5dc:
    if (ctx->pc == 0x22B5DCu) {
        ctx->pc = 0x22B5E0u;
        goto label_22b5e0;
    }
    ctx->pc = 0x22B5D8u;
    {
        const bool branch_taken_0x22b5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b5d8) {
            ctx->pc = 0x22B604u;
            goto label_22b604;
        }
    }
    ctx->pc = 0x22B5E0u;
label_22b5e0:
    // 0x22b5e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b5e4:
    // 0x22b5e4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x22b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_22b5e8:
    // 0x22b5e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b5ec:
    // 0x22b5ec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b5f0:
    // 0x22b5f0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x22b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22b5f4:
    // 0x22b5f4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b5f8:
    // 0x22b5f8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b5fc:
    // 0x22b5fc: 0xc0a7ab4  jal         func_29EAD0
label_22b600:
    if (ctx->pc == 0x22B600u) {
        ctx->pc = 0x22B600u;
            // 0x22b600: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22B604u;
        goto label_22b604;
    }
    ctx->pc = 0x22B5FCu;
    SET_GPR_U32(ctx, 31, 0x22B604u);
    ctx->pc = 0x22B600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B5FCu;
            // 0x22b600: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B604u; }
        if (ctx->pc != 0x22B604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B604u; }
        if (ctx->pc != 0x22B604u) { return; }
    }
    ctx->pc = 0x22B604u;
label_22b604:
    // 0x22b604: 0x52200046  beql        $s1, $zero, . + 4 + (0x46 << 2)
label_22b608:
    if (ctx->pc == 0x22B608u) {
        ctx->pc = 0x22B608u;
            // 0x22b608: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x22B60Cu;
        goto label_22b60c;
    }
    ctx->pc = 0x22B604u;
    {
        const bool branch_taken_0x22b604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b604) {
            ctx->pc = 0x22B608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B604u;
            // 0x22b608: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B720u;
            goto label_22b720;
        }
    }
    ctx->pc = 0x22B60Cu;
label_22b60c:
    // 0x22b60c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22b610:
    // 0x22b610: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x22b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
label_22b614:
    // 0x22b614: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22b614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22b618:
    // 0x22b618: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x22b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_22b61c:
    // 0x22b61c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_22b620:
    if (ctx->pc == 0x22B620u) {
        ctx->pc = 0x22B620u;
            // 0x22b620: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->pc = 0x22B624u;
        goto label_22b624;
    }
    ctx->pc = 0x22B61Cu;
    {
        const bool branch_taken_0x22b61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b61c) {
            ctx->pc = 0x22B620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B61Cu;
            // 0x22b620: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B668u;
            goto label_22b668;
        }
    }
    ctx->pc = 0x22B624u;
label_22b624:
    // 0x22b624: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x22b624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22b628:
    // 0x22b628: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22b62c:
    if (ctx->pc == 0x22B62Cu) {
        ctx->pc = 0x22B630u;
        goto label_22b630;
    }
    ctx->pc = 0x22B628u;
    {
        const bool branch_taken_0x22b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b628) {
            ctx->pc = 0x22B664u;
            goto label_22b664;
        }
    }
    ctx->pc = 0x22B630u;
label_22b630:
    // 0x22b630: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x22b630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_22b634:
    // 0x22b634: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22b638:
    // 0x22b638: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x22b638u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22b63c:
    // 0x22b63c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_22b640:
    // 0x22b640: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22b640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22b644:
    // 0x22b644: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22b648:
    if (ctx->pc == 0x22B648u) {
        ctx->pc = 0x22B64Cu;
        goto label_22b64c;
    }
    ctx->pc = 0x22B644u;
    {
        const bool branch_taken_0x22b644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b644) {
            ctx->pc = 0x22B664u;
            goto label_22b664;
        }
    }
    ctx->pc = 0x22B64Cu;
label_22b64c:
    // 0x22b64c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22b650:
    if (ctx->pc == 0x22B650u) {
        ctx->pc = 0x22B654u;
        goto label_22b654;
    }
    ctx->pc = 0x22B64Cu;
    {
        const bool branch_taken_0x22b64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b64c) {
            ctx->pc = 0x22B664u;
            goto label_22b664;
        }
    }
    ctx->pc = 0x22B654u;
label_22b654:
    // 0x22b654: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b658:
    // 0x22b658: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22b658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22b65c:
    // 0x22b65c: 0x320f809  jalr        $t9
label_22b660:
    if (ctx->pc == 0x22B660u) {
        ctx->pc = 0x22B660u;
            // 0x22b660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22B664u;
        goto label_22b664;
    }
    ctx->pc = 0x22B65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B664u);
        ctx->pc = 0x22B660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B65Cu;
            // 0x22b660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B664u; }
            if (ctx->pc != 0x22B664u) { return; }
        }
        }
    }
    ctx->pc = 0x22B664u;
label_22b664:
    // 0x22b664: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x22b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_22b668:
    // 0x22b668: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_22b66c:
    if (ctx->pc == 0x22B66Cu) {
        ctx->pc = 0x22B66Cu;
            // 0x22b66c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x22B670u;
        goto label_22b670;
    }
    ctx->pc = 0x22B668u;
    {
        const bool branch_taken_0x22b668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b668) {
            ctx->pc = 0x22B66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B668u;
            // 0x22b66c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B6ACu;
            goto label_22b6ac;
        }
    }
    ctx->pc = 0x22B670u;
label_22b670:
    // 0x22b670: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x22b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_22b674:
    // 0x22b674: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22b678:
    // 0x22b678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22b67c:
    // 0x22b67c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22b680:
    if (ctx->pc == 0x22B680u) {
        ctx->pc = 0x22B684u;
        goto label_22b684;
    }
    ctx->pc = 0x22B67Cu;
    {
        const bool branch_taken_0x22b67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b67c) {
            ctx->pc = 0x22B6A8u;
            goto label_22b6a8;
        }
    }
    ctx->pc = 0x22B684u;
label_22b684:
    // 0x22b684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b688:
    // 0x22b688: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x22b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_22b68c:
    // 0x22b68c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b690:
    // 0x22b690: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b694:
    // 0x22b694: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x22b694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_22b698:
    // 0x22b698: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b69c:
    // 0x22b69c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b6a0:
    // 0x22b6a0: 0xc0a7ab4  jal         func_29EAD0
label_22b6a4:
    if (ctx->pc == 0x22B6A4u) {
        ctx->pc = 0x22B6A4u;
            // 0x22b6a4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x22B6A8u;
        goto label_22b6a8;
    }
    ctx->pc = 0x22B6A0u;
    SET_GPR_U32(ctx, 31, 0x22B6A8u);
    ctx->pc = 0x22B6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6A0u;
            // 0x22b6a4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6A8u; }
        if (ctx->pc != 0x22B6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6A8u; }
        if (ctx->pc != 0x22B6A8u) { return; }
    }
    ctx->pc = 0x22B6A8u;
label_22b6a8:
    // 0x22b6a8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x22b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_22b6ac:
    // 0x22b6ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22b6b0:
    if (ctx->pc == 0x22B6B0u) {
        ctx->pc = 0x22B6B4u;
        goto label_22b6b4;
    }
    ctx->pc = 0x22B6ACu;
    {
        const bool branch_taken_0x22b6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6ac) {
            ctx->pc = 0x22B6F8u;
            goto label_22b6f8;
        }
    }
    ctx->pc = 0x22B6B4u;
label_22b6b4:
    // 0x22b6b4: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x22b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_22b6b8:
    // 0x22b6b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22b6bc:
    if (ctx->pc == 0x22B6BCu) {
        ctx->pc = 0x22B6C0u;
        goto label_22b6c0;
    }
    ctx->pc = 0x22B6B8u;
    {
        const bool branch_taken_0x22b6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6b8) {
            ctx->pc = 0x22B6F8u;
            goto label_22b6f8;
        }
    }
    ctx->pc = 0x22B6C0u;
label_22b6c0:
    // 0x22b6c0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x22b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_22b6c4:
    // 0x22b6c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22b6c8:
    // 0x22b6c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22b6cc:
    // 0x22b6cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22b6d0:
    if (ctx->pc == 0x22B6D0u) {
        ctx->pc = 0x22B6D4u;
        goto label_22b6d4;
    }
    ctx->pc = 0x22B6CCu;
    {
        const bool branch_taken_0x22b6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b6cc) {
            ctx->pc = 0x22B6F8u;
            goto label_22b6f8;
        }
    }
    ctx->pc = 0x22B6D4u;
label_22b6d4:
    // 0x22b6d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b6d8:
    // 0x22b6d8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x22b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_22b6dc:
    // 0x22b6dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b6e0:
    // 0x22b6e0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b6e4:
    // 0x22b6e4: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x22b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_22b6e8:
    // 0x22b6e8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b6ec:
    // 0x22b6ec: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b6f0:
    // 0x22b6f0: 0xc0a7ab4  jal         func_29EAD0
label_22b6f4:
    if (ctx->pc == 0x22B6F4u) {
        ctx->pc = 0x22B6F4u;
            // 0x22b6f4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x22B6F8u;
        goto label_22b6f8;
    }
    ctx->pc = 0x22B6F0u;
    SET_GPR_U32(ctx, 31, 0x22B6F8u);
    ctx->pc = 0x22B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B6F0u;
            // 0x22b6f4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6F8u; }
        if (ctx->pc != 0x22B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B6F8u; }
        if (ctx->pc != 0x22B6F8u) { return; }
    }
    ctx->pc = 0x22B6F8u;
label_22b6f8:
    // 0x22b6f8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_22b6fc:
    if (ctx->pc == 0x22B6FCu) {
        ctx->pc = 0x22B700u;
        goto label_22b700;
    }
    ctx->pc = 0x22B6F8u;
    {
        const bool branch_taken_0x22b6f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6f8) {
            ctx->pc = 0x22B71Cu;
            goto label_22b71c;
        }
    }
    ctx->pc = 0x22B700u;
label_22b700:
    // 0x22b700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22b704:
    // 0x22b704: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_22b708:
    // 0x22b708: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22b70c:
    if (ctx->pc == 0x22B70Cu) {
        ctx->pc = 0x22B70Cu;
            // 0x22b70c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22B710u;
        goto label_22b710;
    }
    ctx->pc = 0x22B708u;
    {
        const bool branch_taken_0x22b708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B708u;
            // 0x22b70c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b708) {
            ctx->pc = 0x22B71Cu;
            goto label_22b71c;
        }
    }
    ctx->pc = 0x22B710u;
label_22b710:
    // 0x22b710: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22b714:
    // 0x22b714: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_22b718:
    // 0x22b718: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22b718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22b71c:
    // 0x22b71c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22b720:
    // 0x22b720: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22b720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22b724:
    // 0x22b724: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_22b728:
    if (ctx->pc == 0x22B728u) {
        ctx->pc = 0x22B728u;
            // 0x22b728: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B72Cu;
        goto label_22b72c;
    }
    ctx->pc = 0x22B724u;
    {
        const bool branch_taken_0x22b724 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22b724) {
            ctx->pc = 0x22B728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B724u;
            // 0x22b728: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B748u;
            goto label_22b748;
        }
    }
    ctx->pc = 0x22B72Cu;
label_22b72c:
    // 0x22b72c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b730:
    // 0x22b730: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22b730u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22b734:
    // 0x22b734: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b738:
    // 0x22b738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b73c:
    // 0x22b73c: 0xc0a7ab4  jal         func_29EAD0
label_22b740:
    if (ctx->pc == 0x22B740u) {
        ctx->pc = 0x22B740u;
            // 0x22b740: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x22B744u;
        goto label_22b744;
    }
    ctx->pc = 0x22B73Cu;
    SET_GPR_U32(ctx, 31, 0x22B744u);
    ctx->pc = 0x22B740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B73Cu;
            // 0x22b740: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B744u; }
        if (ctx->pc != 0x22B744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B744u; }
        if (ctx->pc != 0x22B744u) { return; }
    }
    ctx->pc = 0x22B744u;
label_22b744:
    // 0x22b744: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22b744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b748:
    // 0x22b748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22b74c:
    // 0x22b74c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b750:
    // 0x22b750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b754:
    // 0x22b754: 0x3e00008  jr          $ra
label_22b758:
    if (ctx->pc == 0x22B758u) {
        ctx->pc = 0x22B758u;
            // 0x22b758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22B75Cu;
        goto label_22b75c;
    }
    ctx->pc = 0x22B754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B754u;
            // 0x22b758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B75Cu;
label_22b75c:
    // 0x22b75c: 0x0  nop
    ctx->pc = 0x22b75cu;
    // NOP
}
