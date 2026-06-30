#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B5D0
// Address: 0x12b5d0 - 0x12b820
void sub_0012B5D0_0x12b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B5D0_0x12b5d0");
#endif

    switch (ctx->pc) {
        case 0x12b5d0u: goto label_12b5d0;
        case 0x12b5d4u: goto label_12b5d4;
        case 0x12b5d8u: goto label_12b5d8;
        case 0x12b5dcu: goto label_12b5dc;
        case 0x12b5e0u: goto label_12b5e0;
        case 0x12b5e4u: goto label_12b5e4;
        case 0x12b5e8u: goto label_12b5e8;
        case 0x12b5ecu: goto label_12b5ec;
        case 0x12b5f0u: goto label_12b5f0;
        case 0x12b5f4u: goto label_12b5f4;
        case 0x12b5f8u: goto label_12b5f8;
        case 0x12b5fcu: goto label_12b5fc;
        case 0x12b600u: goto label_12b600;
        case 0x12b604u: goto label_12b604;
        case 0x12b608u: goto label_12b608;
        case 0x12b60cu: goto label_12b60c;
        case 0x12b610u: goto label_12b610;
        case 0x12b614u: goto label_12b614;
        case 0x12b618u: goto label_12b618;
        case 0x12b61cu: goto label_12b61c;
        case 0x12b620u: goto label_12b620;
        case 0x12b624u: goto label_12b624;
        case 0x12b628u: goto label_12b628;
        case 0x12b62cu: goto label_12b62c;
        case 0x12b630u: goto label_12b630;
        case 0x12b634u: goto label_12b634;
        case 0x12b638u: goto label_12b638;
        case 0x12b63cu: goto label_12b63c;
        case 0x12b640u: goto label_12b640;
        case 0x12b644u: goto label_12b644;
        case 0x12b648u: goto label_12b648;
        case 0x12b64cu: goto label_12b64c;
        case 0x12b650u: goto label_12b650;
        case 0x12b654u: goto label_12b654;
        case 0x12b658u: goto label_12b658;
        case 0x12b65cu: goto label_12b65c;
        case 0x12b660u: goto label_12b660;
        case 0x12b664u: goto label_12b664;
        case 0x12b668u: goto label_12b668;
        case 0x12b66cu: goto label_12b66c;
        case 0x12b670u: goto label_12b670;
        case 0x12b674u: goto label_12b674;
        case 0x12b678u: goto label_12b678;
        case 0x12b67cu: goto label_12b67c;
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        case 0x12b6e0u: goto label_12b6e0;
        case 0x12b6e4u: goto label_12b6e4;
        case 0x12b6e8u: goto label_12b6e8;
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b6f0u: goto label_12b6f0;
        case 0x12b6f4u: goto label_12b6f4;
        case 0x12b6f8u: goto label_12b6f8;
        case 0x12b6fcu: goto label_12b6fc;
        case 0x12b700u: goto label_12b700;
        case 0x12b704u: goto label_12b704;
        case 0x12b708u: goto label_12b708;
        case 0x12b70cu: goto label_12b70c;
        case 0x12b710u: goto label_12b710;
        case 0x12b714u: goto label_12b714;
        case 0x12b718u: goto label_12b718;
        case 0x12b71cu: goto label_12b71c;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b728u: goto label_12b728;
        case 0x12b72cu: goto label_12b72c;
        case 0x12b730u: goto label_12b730;
        case 0x12b734u: goto label_12b734;
        case 0x12b738u: goto label_12b738;
        case 0x12b73cu: goto label_12b73c;
        case 0x12b740u: goto label_12b740;
        case 0x12b744u: goto label_12b744;
        case 0x12b748u: goto label_12b748;
        case 0x12b74cu: goto label_12b74c;
        case 0x12b750u: goto label_12b750;
        case 0x12b754u: goto label_12b754;
        case 0x12b758u: goto label_12b758;
        case 0x12b75cu: goto label_12b75c;
        case 0x12b760u: goto label_12b760;
        case 0x12b764u: goto label_12b764;
        case 0x12b768u: goto label_12b768;
        case 0x12b76cu: goto label_12b76c;
        case 0x12b770u: goto label_12b770;
        case 0x12b774u: goto label_12b774;
        case 0x12b778u: goto label_12b778;
        case 0x12b77cu: goto label_12b77c;
        case 0x12b780u: goto label_12b780;
        case 0x12b784u: goto label_12b784;
        case 0x12b788u: goto label_12b788;
        case 0x12b78cu: goto label_12b78c;
        case 0x12b790u: goto label_12b790;
        case 0x12b794u: goto label_12b794;
        case 0x12b798u: goto label_12b798;
        case 0x12b79cu: goto label_12b79c;
        case 0x12b7a0u: goto label_12b7a0;
        case 0x12b7a4u: goto label_12b7a4;
        case 0x12b7a8u: goto label_12b7a8;
        case 0x12b7acu: goto label_12b7ac;
        case 0x12b7b0u: goto label_12b7b0;
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7bcu: goto label_12b7bc;
        case 0x12b7c0u: goto label_12b7c0;
        case 0x12b7c4u: goto label_12b7c4;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7ccu: goto label_12b7cc;
        case 0x12b7d0u: goto label_12b7d0;
        case 0x12b7d4u: goto label_12b7d4;
        case 0x12b7d8u: goto label_12b7d8;
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b7e4u: goto label_12b7e4;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7ecu: goto label_12b7ec;
        case 0x12b7f0u: goto label_12b7f0;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b7f8u: goto label_12b7f8;
        case 0x12b7fcu: goto label_12b7fc;
        case 0x12b800u: goto label_12b800;
        case 0x12b804u: goto label_12b804;
        case 0x12b808u: goto label_12b808;
        case 0x12b80cu: goto label_12b80c;
        case 0x12b810u: goto label_12b810;
        case 0x12b814u: goto label_12b814;
        case 0x12b818u: goto label_12b818;
        case 0x12b81cu: goto label_12b81c;
        default: break;
    }

    ctx->pc = 0x12b5d0u;

label_12b5d0:
    // 0x12b5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12b5d4:
    // 0x12b5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12b5d8:
    // 0x12b5d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_12b5dc:
    // 0x12b5dc: 0x8c8f01d4  lw          $t7, 0x1D4($a0)
    ctx->pc = 0x12b5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_12b5e0:
    // 0x12b5e0: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
label_12b5e4:
    if (ctx->pc == 0x12B5E4u) {
        ctx->pc = 0x12B5E4u;
            // 0x12b5e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B5E8u;
        goto label_12b5e8;
    }
    ctx->pc = 0x12B5E0u;
    {
        const bool branch_taken_0x12b5e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5E0u;
            // 0x12b5e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5e0) {
            ctx->pc = 0x12B61Cu;
            goto label_12b61c;
        }
    }
    ctx->pc = 0x12B5E8u;
label_12b5e8:
    // 0x12b5e8: 0xc04a2e4  jal         func_128B90
label_12b5ec:
    if (ctx->pc == 0x12B5ECu) {
        ctx->pc = 0x12B5ECu;
            // 0x12b5ec: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x12B5F0u;
        goto label_12b5f0;
    }
    ctx->pc = 0x12B5E8u;
    SET_GPR_U32(ctx, 31, 0x12B5F0u);
    ctx->pc = 0x12B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5E8u;
            // 0x12b5ec: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5F0u; }
        if (ctx->pc != 0x12B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B90_0x128b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B5F0u; }
        if (ctx->pc != 0x12B5F0u) { return; }
    }
    ctx->pc = 0x12B5F0u;
label_12b5f0:
    // 0x12b5f0: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x12b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
label_12b5f4:
    // 0x12b5f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_12b5f8:
    if (ctx->pc == 0x12B5F8u) {
        ctx->pc = 0x12B5F8u;
            // 0x12b5f8: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12B5FCu;
        goto label_12b5fc;
    }
    ctx->pc = 0x12B5F4u;
    {
        const bool branch_taken_0x12b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B5F4u;
            // 0x12b5f8: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5f4) {
            ctx->pc = 0x12B620u;
            goto label_12b620;
        }
    }
    ctx->pc = 0x12B5FCu;
label_12b5fc:
    // 0x12b5fc: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x12b5fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_12b600:
    // 0x12b600: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12b600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_12b604:
    // 0x12b604: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12b604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12b608:
    // 0x12b608: 0x0  nop
    ctx->pc = 0x12b608u;
    // NOP
label_12b60c:
    // 0x12b60c: 0x0  nop
    ctx->pc = 0x12b60cu;
    // NOP
label_12b610:
    // 0x12b610: 0x0  nop
    ctx->pc = 0x12b610u;
    // NOP
label_12b614:
    // 0x12b614: 0x5e1fffa  bgez        $t7, . + 4 + (-0x6 << 2)
label_12b618:
    if (ctx->pc == 0x12B618u) {
        ctx->pc = 0x12B618u;
            // 0x12b618: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x12B61Cu;
        goto label_12b61c;
    }
    ctx->pc = 0x12B614u;
    {
        const bool branch_taken_0x12b614 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B614u;
            // 0x12b618: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b614) {
            ctx->pc = 0x12B600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b600;
        }
    }
    ctx->pc = 0x12B61Cu;
label_12b61c:
    // 0x12b61c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x12b61cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b620:
    // 0x12b620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b624:
    // 0x12b624: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_12b628:
    // 0x12b628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12b628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12b62c:
    // 0x12b62c: 0x3e00008  jr          $ra
label_12b630:
    if (ctx->pc == 0x12B630u) {
        ctx->pc = 0x12B630u;
            // 0x12b630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12B634u;
        goto label_12b634;
    }
    ctx->pc = 0x12B62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B62Cu;
            // 0x12b630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B634u;
label_12b634:
    // 0x12b634: 0x0  nop
    ctx->pc = 0x12b634u;
    // NOP
label_12b638:
    // 0x12b638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12b63c:
    // 0x12b63c: 0x2caf0020  sltiu       $t7, $a1, 0x20
    ctx->pc = 0x12b63cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_12b640:
    // 0x12b640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12b644:
    // 0x12b644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12b648:
    // 0x12b648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12b64c:
    // 0x12b64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b650:
    // 0x12b650: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_12b654:
    // 0x12b654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b658:
    // 0x12b658: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
label_12b65c:
    if (ctx->pc == 0x12B65Cu) {
        ctx->pc = 0x12B65Cu;
            // 0x12b65c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B660u;
        goto label_12b660;
    }
    ctx->pc = 0x12B658u;
    {
        const bool branch_taken_0x12b658 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B658u;
            // 0x12b65c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b658) {
            ctx->pc = 0x12B688u;
            goto label_12b688;
        }
    }
    ctx->pc = 0x12B660u;
label_12b660:
    // 0x12b660: 0x240f0016  addiu       $t7, $zero, 0x16
    ctx->pc = 0x12b660u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_12b664:
    // 0x12b664: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12b664u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b668:
    // 0x12b668: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x12b668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
label_12b66c:
    // 0x12b66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b670:
    // 0x12b670: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12b670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12b674:
    // 0x12b674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12b678:
    // 0x12b678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12b67c:
    // 0x12b67c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12b680:
    // 0x12b680: 0x3e00008  jr          $ra
label_12b684:
    if (ctx->pc == 0x12B684u) {
        ctx->pc = 0x12B684u;
            // 0x12b684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12B688u;
        goto label_12b688;
    }
    ctx->pc = 0x12B680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B680u;
            // 0x12b684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B688u;
label_12b688:
    // 0x12b688: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x12b688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_12b68c:
    // 0x12b68c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_12b690:
    if (ctx->pc == 0x12B690u) {
        ctx->pc = 0x12B690u;
            // 0x12b690: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x12B694u;
        goto label_12b694;
    }
    ctx->pc = 0x12B68Cu;
    {
        const bool branch_taken_0x12b68c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B68Cu;
            // 0x12b690: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b68c) {
            ctx->pc = 0x12B6ACu;
            goto label_12b6ac;
        }
    }
    ctx->pc = 0x12B694u;
label_12b694:
    // 0x12b694: 0xc04ad74  jal         func_12B5D0
label_12b698:
    if (ctx->pc == 0x12B698u) {
        ctx->pc = 0x12B69Cu;
        goto label_12b69c;
    }
    ctx->pc = 0x12B694u;
    SET_GPR_U32(ctx, 31, 0x12B69Cu);
    ctx->pc = 0x12B5D0u;
    goto label_12b5d0;
    ctx->pc = 0x12B69Cu;
label_12b69c:
    // 0x12b69c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_12b6a0:
    if (ctx->pc == 0x12B6A0u) {
        ctx->pc = 0x12B6A0u;
            // 0x12b6a0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12B6A4u;
        goto label_12b6a4;
    }
    ctx->pc = 0x12B69Cu;
    {
        const bool branch_taken_0x12b69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B69Cu;
            // 0x12b6a0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b69c) {
            ctx->pc = 0x12B66Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b66c;
        }
    }
    ctx->pc = 0x12B6A4u;
label_12b6a4:
    // 0x12b6a4: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_12b6a8:
    // 0x12b6a8: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x12b6a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_12b6ac:
    // 0x12b6ac: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x12b6acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
label_12b6b0:
    // 0x12b6b0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12b6b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12b6b4:
    // 0x12b6b4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_12b6b8:
    if (ctx->pc == 0x12B6B8u) {
        ctx->pc = 0x12B6B8u;
            // 0x12b6b8: 0xadf20000  sw          $s2, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x12B6BCu;
        goto label_12b6bc;
    }
    ctx->pc = 0x12B6B4u;
    {
        const bool branch_taken_0x12b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6B4u;
            // 0x12b6b8: 0xadf20000  sw          $s2, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6b4) {
            ctx->pc = 0x12B66Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b66c;
        }
    }
    ctx->pc = 0x12B6BCu;
label_12b6bc:
    // 0x12b6bc: 0x0  nop
    ctx->pc = 0x12b6bcu;
    // NOP
label_12b6c0:
    // 0x12b6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12b6c4:
    // 0x12b6c4: 0x2caf0020  sltiu       $t7, $a1, 0x20
    ctx->pc = 0x12b6c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_12b6c8:
    // 0x12b6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12b6cc:
    // 0x12b6cc: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x12b6ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b6d0:
    // 0x12b6d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12b6d4:
    // 0x12b6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12b6d8:
    // 0x12b6d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12b6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b6dc:
    // 0x12b6dc: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
label_12b6e0:
    if (ctx->pc == 0x12B6E0u) {
        ctx->pc = 0x12B6E0u;
            // 0x12b6e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B6E4u;
        goto label_12b6e4;
    }
    ctx->pc = 0x12B6DCu;
    {
        const bool branch_taken_0x12b6dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6DCu;
            // 0x12b6e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6dc) {
            ctx->pc = 0x12B758u;
            goto label_12b758;
        }
    }
    ctx->pc = 0x12B6E4u;
label_12b6e4:
    // 0x12b6e4: 0x8c8e01d4  lw          $t6, 0x1D4($a0)
    ctx->pc = 0x12b6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_12b6e8:
    // 0x12b6e8: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_12b6ec:
    if (ctx->pc == 0x12B6ECu) {
        ctx->pc = 0x12B6ECu;
            // 0x12b6ec: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x12B6F0u;
        goto label_12b6f0;
    }
    ctx->pc = 0x12B6E8u;
    {
        const bool branch_taken_0x12b6e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6E8u;
            // 0x12b6ec: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6e8) {
            ctx->pc = 0x12B708u;
            goto label_12b708;
        }
    }
    ctx->pc = 0x12B6F0u;
label_12b6f0:
    // 0x12b6f0: 0xc04ad74  jal         func_12B5D0
label_12b6f4:
    if (ctx->pc == 0x12B6F4u) {
        ctx->pc = 0x12B6F8u;
        goto label_12b6f8;
    }
    ctx->pc = 0x12B6F0u;
    SET_GPR_U32(ctx, 31, 0x12B6F8u);
    ctx->pc = 0x12B5D0u;
    goto label_12b5d0;
    ctx->pc = 0x12B6F8u;
label_12b6f8:
    // 0x12b6f8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_12b6fc:
    if (ctx->pc == 0x12B6FCu) {
        ctx->pc = 0x12B6FCu;
            // 0x12b6fc: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12B700u;
        goto label_12b700;
    }
    ctx->pc = 0x12B6F8u;
    {
        const bool branch_taken_0x12b6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B6F8u;
            // 0x12b6fc: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6f8) {
            ctx->pc = 0x12B760u;
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B700u;
label_12b700:
    // 0x12b700: 0x8e2e01d4  lw          $t6, 0x1D4($s1)
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_12b704:
    // 0x12b704: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12b704u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12b708:
    // 0x12b708: 0x1ee6821  addu        $t5, $t7, $t6
    ctx->pc = 0x12b708u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12b70c:
    // 0x12b70c: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x12b70cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_12b710:
    // 0x12b710: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
label_12b714:
    if (ctx->pc == 0x12B714u) {
        ctx->pc = 0x12B714u;
            // 0x12b714: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12B718u;
        goto label_12b718;
    }
    ctx->pc = 0x12B710u;
    {
        const bool branch_taken_0x12b710 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B710u;
            // 0x12b714: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b710) {
            ctx->pc = 0x12B740u;
            goto label_12b740;
        }
    }
    ctx->pc = 0x12B718u;
label_12b718:
    // 0x12b718: 0xc04ae40  jal         func_12B900
label_12b71c:
    if (ctx->pc == 0x12B71Cu) {
        ctx->pc = 0x12B71Cu;
            // 0x12b71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B720u;
        goto label_12b720;
    }
    ctx->pc = 0x12B718u;
    SET_GPR_U32(ctx, 31, 0x12B720u);
    ctx->pc = 0x12B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B718u;
            // 0x12b71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B900u;
    if (runtime->hasFunction(0x12B900u)) {
        auto targetFn = runtime->lookupFunction(0x12B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B720u; }
        if (ctx->pc != 0x12B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B900_0x12b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B720u; }
        if (ctx->pc != 0x12B720u) { return; }
    }
    ctx->pc = 0x12B720u;
label_12b720:
    // 0x12b720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b724:
    // 0x12b724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12b728:
    // 0x12b728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12b728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b72c:
    // 0x12b72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12b730:
    // 0x12b730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b734:
    // 0x12b734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b738:
    // 0x12b738: 0x804ae2a  j           func_12B8A8
label_12b73c:
    if (ctx->pc == 0x12B73Cu) {
        ctx->pc = 0x12B73Cu;
            // 0x12b73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12B740u;
        goto label_12b740;
    }
    ctx->pc = 0x12B738u;
    ctx->pc = 0x12B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B738u;
            // 0x12b73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B8A8u;
    {
        auto targetFn = runtime->lookupFunction(0x12B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12B740u;
label_12b740:
    // 0x12b740: 0x11cf0007  beq         $t6, $t7, . + 4 + (0x7 << 2)
label_12b744:
    if (ctx->pc == 0x12B744u) {
        ctx->pc = 0x12B744u;
            // 0x12b744: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B748u;
        goto label_12b748;
    }
    ctx->pc = 0x12B740u;
    {
        const bool branch_taken_0x12b740 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B740u;
            // 0x12b744: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b740) {
            ctx->pc = 0x12B760u;
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B748u;
label_12b748:
    // 0x12b748: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12b748u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b74c:
    // 0x12b74c: 0x55cf000a  bnel        $t6, $t7, . + 4 + (0xA << 2)
label_12b750:
    if (ctx->pc == 0x12B750u) {
        ctx->pc = 0x12B750u;
            // 0x12b750: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x12B754u;
        goto label_12b754;
    }
    ctx->pc = 0x12B74Cu;
    {
        const bool branch_taken_0x12b74c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b74c) {
            ctx->pc = 0x12B750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B74Cu;
            // 0x12b750: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B778u;
            goto label_12b778;
        }
    }
    ctx->pc = 0x12B754u;
label_12b754:
    // 0x12b754: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12b754u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b758:
    // 0x12b758: 0x240f0016  addiu       $t7, $zero, 0x16
    ctx->pc = 0x12b758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_12b75c:
    // 0x12b75c: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12b760:
    // 0x12b760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b764:
    // 0x12b764: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x12b764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12b768:
    // 0x12b768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12b76c:
    // 0x12b76c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12b770:
    // 0x12b770: 0x3e00008  jr          $ra
label_12b774:
    if (ctx->pc == 0x12B774u) {
        ctx->pc = 0x12B774u;
            // 0x12b774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12B778u;
        goto label_12b778;
    }
    ctx->pc = 0x12B770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B770u;
            // 0x12b774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B778u;
label_12b778:
    // 0x12b778: 0x1c0f809  jalr        $t6
label_12b77c:
    if (ctx->pc == 0x12B77Cu) {
        ctx->pc = 0x12B77Cu;
            // 0x12b77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B780u;
        goto label_12b780;
    }
    ctx->pc = 0x12B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 14);
        SET_GPR_U32(ctx, 31, 0x12B780u);
        ctx->pc = 0x12B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B778u;
            // 0x12b77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12B780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12B780u; }
            if (ctx->pc != 0x12B780u) { return; }
        }
        }
    }
    ctx->pc = 0x12B780u;
label_12b780:
    // 0x12b780: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_12b784:
    if (ctx->pc == 0x12B784u) {
        ctx->pc = 0x12B784u;
            // 0x12b784: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B788u;
        goto label_12b788;
    }
    ctx->pc = 0x12B780u;
    {
        const bool branch_taken_0x12b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B780u;
            // 0x12b784: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b780) {
            ctx->pc = 0x12B760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B788u;
label_12b788:
    // 0x12b788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12b78c:
    // 0x12b78c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b790:
    // 0x12b790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12b794:
    // 0x12b794: 0x2caf0020  sltiu       $t7, $a1, 0x20
    ctx->pc = 0x12b794u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_12b798:
    // 0x12b798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12b79c:
    // 0x12b79c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12b7a0:
    // 0x12b7a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12b7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b7a4:
    // 0x12b7a4: 0x11e00018  beqz        $t7, . + 4 + (0x18 << 2)
label_12b7a8:
    if (ctx->pc == 0x12B7A8u) {
        ctx->pc = 0x12B7A8u;
            // 0x12b7a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B7ACu;
        goto label_12b7ac;
    }
    ctx->pc = 0x12B7A4u;
    {
        const bool branch_taken_0x12b7a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7A4u;
            // 0x12b7a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7a4) {
            ctx->pc = 0x12B808u;
            goto label_12b808;
        }
    }
    ctx->pc = 0x12B7ACu;
label_12b7ac:
    // 0x12b7ac: 0x8c8e01d4  lw          $t6, 0x1D4($a0)
    ctx->pc = 0x12b7acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_12b7b0:
    // 0x12b7b0: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_12b7b4:
    if (ctx->pc == 0x12B7B4u) {
        ctx->pc = 0x12B7B4u;
            // 0x12b7b4: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x12B7B8u;
        goto label_12b7b8;
    }
    ctx->pc = 0x12B7B0u;
    {
        const bool branch_taken_0x12b7b0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7B0u;
            // 0x12b7b4: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7b0) {
            ctx->pc = 0x12B7D0u;
            goto label_12b7d0;
        }
    }
    ctx->pc = 0x12B7B8u;
label_12b7b8:
    // 0x12b7b8: 0xc04ad74  jal         func_12B5D0
label_12b7bc:
    if (ctx->pc == 0x12B7BCu) {
        ctx->pc = 0x12B7C0u;
        goto label_12b7c0;
    }
    ctx->pc = 0x12B7B8u;
    SET_GPR_U32(ctx, 31, 0x12B7C0u);
    ctx->pc = 0x12B5D0u;
    goto label_12b5d0;
    ctx->pc = 0x12B7C0u;
label_12b7c0:
    // 0x12b7c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_12b7c4:
    if (ctx->pc == 0x12B7C4u) {
        ctx->pc = 0x12B7C4u;
            // 0x12b7c4: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12B7C8u;
        goto label_12b7c8;
    }
    ctx->pc = 0x12B7C0u;
    {
        const bool branch_taken_0x12b7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7C0u;
            // 0x12b7c4: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7c0) {
            ctx->pc = 0x12B808u;
            goto label_12b808;
        }
    }
    ctx->pc = 0x12B7C8u;
label_12b7c8:
    // 0x12b7c8: 0x8e2e01d4  lw          $t6, 0x1D4($s1)
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_12b7cc:
    // 0x12b7cc: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12b7d0:
    // 0x12b7d0: 0x1ee6821  addu        $t5, $t7, $t6
    ctx->pc = 0x12b7d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12b7d4:
    // 0x12b7d4: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x12b7d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_12b7d8:
    // 0x12b7d8: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
label_12b7dc:
    if (ctx->pc == 0x12B7DCu) {
        ctx->pc = 0x12B7DCu;
            // 0x12b7dc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12B7E0u;
        goto label_12b7e0;
    }
    ctx->pc = 0x12B7D8u;
    {
        const bool branch_taken_0x12b7d8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7D8u;
            // 0x12b7dc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d8) {
            ctx->pc = 0x12B808u;
            goto label_12b808;
        }
    }
    ctx->pc = 0x12B7E0u;
label_12b7e0:
    // 0x12b7e0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b7e4:
    // 0x12b7e4: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
label_12b7e8:
    if (ctx->pc == 0x12B7E8u) {
        ctx->pc = 0x12B7E8u;
            // 0x12b7e8: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x12B7ECu;
        goto label_12b7ec;
    }
    ctx->pc = 0x12B7E4u;
    {
        const bool branch_taken_0x12b7e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7E4u;
            // 0x12b7e8: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7e4) {
            ctx->pc = 0x12B808u;
            goto label_12b808;
        }
    }
    ctx->pc = 0x12B7ECu;
label_12b7ec:
    // 0x12b7ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12b7ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b7f0:
    // 0x12b7f0: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
label_12b7f4:
    if (ctx->pc == 0x12B7F4u) {
        ctx->pc = 0x12B7F4u;
            // 0x12b7f4: 0x240c0003  addiu       $t4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x12B7F8u;
        goto label_12b7f8;
    }
    ctx->pc = 0x12B7F0u;
    {
        const bool branch_taken_0x12b7f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7F0u;
            // 0x12b7f4: 0x240c0003  addiu       $t4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7f0) {
            ctx->pc = 0x12B808u;
            goto label_12b808;
        }
    }
    ctx->pc = 0x12B7F8u;
label_12b7f8:
    // 0x12b7f8: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x12b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
label_12b7fc:
    // 0x12b7fc: 0x1c0f809  jalr        $t6
label_12b800:
    if (ctx->pc == 0x12B800u) {
        ctx->pc = 0x12B800u;
            // 0x12b800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B804u;
        goto label_12b804;
    }
    ctx->pc = 0x12B7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 14);
        SET_GPR_U32(ctx, 31, 0x12B804u);
        ctx->pc = 0x12B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B7FCu;
            // 0x12b800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12B804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12B804u; }
            if (ctx->pc != 0x12B804u) { return; }
        }
        }
    }
    ctx->pc = 0x12B804u;
label_12b804:
    // 0x12b804: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12b804u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b808:
    // 0x12b808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b80c:
    // 0x12b80c: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x12b80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12b810:
    // 0x12b810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12b814:
    // 0x12b814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12b818:
    // 0x12b818: 0x3e00008  jr          $ra
label_12b81c:
    if (ctx->pc == 0x12B81Cu) {
        ctx->pc = 0x12B81Cu;
            // 0x12b81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12B820u;
        goto label_fallthrough_0x12b818;
    }
    ctx->pc = 0x12B818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B818u;
            // 0x12b81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x12b818:
    ctx->pc = 0x12B820u;
}
