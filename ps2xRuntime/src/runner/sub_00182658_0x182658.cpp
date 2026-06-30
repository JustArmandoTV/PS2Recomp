#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182658
// Address: 0x182658 - 0x1828d8
void sub_00182658_0x182658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182658_0x182658");
#endif

    switch (ctx->pc) {
        case 0x182658u: goto label_182658;
        case 0x18265cu: goto label_18265c;
        case 0x182660u: goto label_182660;
        case 0x182664u: goto label_182664;
        case 0x182668u: goto label_182668;
        case 0x18266cu: goto label_18266c;
        case 0x182670u: goto label_182670;
        case 0x182674u: goto label_182674;
        case 0x182678u: goto label_182678;
        case 0x18267cu: goto label_18267c;
        case 0x182680u: goto label_182680;
        case 0x182684u: goto label_182684;
        case 0x182688u: goto label_182688;
        case 0x18268cu: goto label_18268c;
        case 0x182690u: goto label_182690;
        case 0x182694u: goto label_182694;
        case 0x182698u: goto label_182698;
        case 0x18269cu: goto label_18269c;
        case 0x1826a0u: goto label_1826a0;
        case 0x1826a4u: goto label_1826a4;
        case 0x1826a8u: goto label_1826a8;
        case 0x1826acu: goto label_1826ac;
        case 0x1826b0u: goto label_1826b0;
        case 0x1826b4u: goto label_1826b4;
        case 0x1826b8u: goto label_1826b8;
        case 0x1826bcu: goto label_1826bc;
        case 0x1826c0u: goto label_1826c0;
        case 0x1826c4u: goto label_1826c4;
        case 0x1826c8u: goto label_1826c8;
        case 0x1826ccu: goto label_1826cc;
        case 0x1826d0u: goto label_1826d0;
        case 0x1826d4u: goto label_1826d4;
        case 0x1826d8u: goto label_1826d8;
        case 0x1826dcu: goto label_1826dc;
        case 0x1826e0u: goto label_1826e0;
        case 0x1826e4u: goto label_1826e4;
        case 0x1826e8u: goto label_1826e8;
        case 0x1826ecu: goto label_1826ec;
        case 0x1826f0u: goto label_1826f0;
        case 0x1826f4u: goto label_1826f4;
        case 0x1826f8u: goto label_1826f8;
        case 0x1826fcu: goto label_1826fc;
        case 0x182700u: goto label_182700;
        case 0x182704u: goto label_182704;
        case 0x182708u: goto label_182708;
        case 0x18270cu: goto label_18270c;
        case 0x182710u: goto label_182710;
        case 0x182714u: goto label_182714;
        case 0x182718u: goto label_182718;
        case 0x18271cu: goto label_18271c;
        case 0x182720u: goto label_182720;
        case 0x182724u: goto label_182724;
        case 0x182728u: goto label_182728;
        case 0x18272cu: goto label_18272c;
        case 0x182730u: goto label_182730;
        case 0x182734u: goto label_182734;
        case 0x182738u: goto label_182738;
        case 0x18273cu: goto label_18273c;
        case 0x182740u: goto label_182740;
        case 0x182744u: goto label_182744;
        case 0x182748u: goto label_182748;
        case 0x18274cu: goto label_18274c;
        case 0x182750u: goto label_182750;
        case 0x182754u: goto label_182754;
        case 0x182758u: goto label_182758;
        case 0x18275cu: goto label_18275c;
        case 0x182760u: goto label_182760;
        case 0x182764u: goto label_182764;
        case 0x182768u: goto label_182768;
        case 0x18276cu: goto label_18276c;
        case 0x182770u: goto label_182770;
        case 0x182774u: goto label_182774;
        case 0x182778u: goto label_182778;
        case 0x18277cu: goto label_18277c;
        case 0x182780u: goto label_182780;
        case 0x182784u: goto label_182784;
        case 0x182788u: goto label_182788;
        case 0x18278cu: goto label_18278c;
        case 0x182790u: goto label_182790;
        case 0x182794u: goto label_182794;
        case 0x182798u: goto label_182798;
        case 0x18279cu: goto label_18279c;
        case 0x1827a0u: goto label_1827a0;
        case 0x1827a4u: goto label_1827a4;
        case 0x1827a8u: goto label_1827a8;
        case 0x1827acu: goto label_1827ac;
        case 0x1827b0u: goto label_1827b0;
        case 0x1827b4u: goto label_1827b4;
        case 0x1827b8u: goto label_1827b8;
        case 0x1827bcu: goto label_1827bc;
        case 0x1827c0u: goto label_1827c0;
        case 0x1827c4u: goto label_1827c4;
        case 0x1827c8u: goto label_1827c8;
        case 0x1827ccu: goto label_1827cc;
        case 0x1827d0u: goto label_1827d0;
        case 0x1827d4u: goto label_1827d4;
        case 0x1827d8u: goto label_1827d8;
        case 0x1827dcu: goto label_1827dc;
        case 0x1827e0u: goto label_1827e0;
        case 0x1827e4u: goto label_1827e4;
        case 0x1827e8u: goto label_1827e8;
        case 0x1827ecu: goto label_1827ec;
        case 0x1827f0u: goto label_1827f0;
        case 0x1827f4u: goto label_1827f4;
        case 0x1827f8u: goto label_1827f8;
        case 0x1827fcu: goto label_1827fc;
        case 0x182800u: goto label_182800;
        case 0x182804u: goto label_182804;
        case 0x182808u: goto label_182808;
        case 0x18280cu: goto label_18280c;
        case 0x182810u: goto label_182810;
        case 0x182814u: goto label_182814;
        case 0x182818u: goto label_182818;
        case 0x18281cu: goto label_18281c;
        case 0x182820u: goto label_182820;
        case 0x182824u: goto label_182824;
        case 0x182828u: goto label_182828;
        case 0x18282cu: goto label_18282c;
        case 0x182830u: goto label_182830;
        case 0x182834u: goto label_182834;
        case 0x182838u: goto label_182838;
        case 0x18283cu: goto label_18283c;
        case 0x182840u: goto label_182840;
        case 0x182844u: goto label_182844;
        case 0x182848u: goto label_182848;
        case 0x18284cu: goto label_18284c;
        case 0x182850u: goto label_182850;
        case 0x182854u: goto label_182854;
        case 0x182858u: goto label_182858;
        case 0x18285cu: goto label_18285c;
        case 0x182860u: goto label_182860;
        case 0x182864u: goto label_182864;
        case 0x182868u: goto label_182868;
        case 0x18286cu: goto label_18286c;
        case 0x182870u: goto label_182870;
        case 0x182874u: goto label_182874;
        case 0x182878u: goto label_182878;
        case 0x18287cu: goto label_18287c;
        case 0x182880u: goto label_182880;
        case 0x182884u: goto label_182884;
        case 0x182888u: goto label_182888;
        case 0x18288cu: goto label_18288c;
        case 0x182890u: goto label_182890;
        case 0x182894u: goto label_182894;
        case 0x182898u: goto label_182898;
        case 0x18289cu: goto label_18289c;
        case 0x1828a0u: goto label_1828a0;
        case 0x1828a4u: goto label_1828a4;
        case 0x1828a8u: goto label_1828a8;
        case 0x1828acu: goto label_1828ac;
        case 0x1828b0u: goto label_1828b0;
        case 0x1828b4u: goto label_1828b4;
        case 0x1828b8u: goto label_1828b8;
        case 0x1828bcu: goto label_1828bc;
        case 0x1828c0u: goto label_1828c0;
        case 0x1828c4u: goto label_1828c4;
        case 0x1828c8u: goto label_1828c8;
        case 0x1828ccu: goto label_1828cc;
        case 0x1828d0u: goto label_1828d0;
        case 0x1828d4u: goto label_1828d4;
        default: break;
    }

    ctx->pc = 0x182658u;

label_182658:
    // 0x182658: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x182658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_18265c:
    // 0x18265c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18265cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_182660:
    // 0x182660: 0x8c423f38  lw          $v0, 0x3F38($v0)
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16184)));
label_182664:
    // 0x182664: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_182668:
    if (ctx->pc == 0x182668u) {
        ctx->pc = 0x182668u;
            // 0x182668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18266Cu;
        goto label_18266c;
    }
    ctx->pc = 0x182664u;
    {
        const bool branch_taken_0x182664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182664u;
            // 0x182668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182664) {
            ctx->pc = 0x182674u;
            goto label_182674;
        }
    }
    ctx->pc = 0x18266Cu;
label_18266c:
    // 0x18266c: 0x40f809  jalr        $v0
label_182670:
    if (ctx->pc == 0x182670u) {
        ctx->pc = 0x182674u;
        goto label_182674;
    }
    ctx->pc = 0x18266Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x182674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182674u; }
            if (ctx->pc != 0x182674u) { return; }
        }
        }
    }
    ctx->pc = 0x182674u;
label_182674:
    // 0x182674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182678:
    // 0x182678: 0x3e00008  jr          $ra
label_18267c:
    if (ctx->pc == 0x18267Cu) {
        ctx->pc = 0x18267Cu;
            // 0x18267c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182680u;
        goto label_182680;
    }
    ctx->pc = 0x182678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182678u;
            // 0x18267c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182680u;
label_182680:
    // 0x182680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_182684:
    // 0x182684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_182688:
    // 0x182688: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x182688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18268c:
    // 0x18268c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_182690:
    // 0x182690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x182690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_182694:
    // 0x182694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_182698:
    // 0x182698: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_18269c:
    if (ctx->pc == 0x18269Cu) {
        ctx->pc = 0x18269Cu;
            // 0x18269c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1826A0u;
        goto label_1826a0;
    }
    ctx->pc = 0x182698u;
    {
        const bool branch_taken_0x182698 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18269Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182698u;
            // 0x18269c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182698) {
            ctx->pc = 0x1826C0u;
            goto label_1826c0;
        }
    }
    ctx->pc = 0x1826A0u;
label_1826a0:
    // 0x1826a0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1826a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1826a4:
    // 0x1826a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1826a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1826a8:
    // 0x1826a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1826a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1826ac:
    // 0x1826ac: 0x24847370  addiu       $a0, $a0, 0x7370
    ctx->pc = 0x1826acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29552));
label_1826b0:
    // 0x1826b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1826b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1826b4:
    // 0x1826b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1826b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1826b8:
    // 0x1826b8: 0x8059f4e  j           func_167D38
label_1826bc:
    if (ctx->pc == 0x1826BCu) {
        ctx->pc = 0x1826BCu;
            // 0x1826bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1826C0u;
        goto label_1826c0;
    }
    ctx->pc = 0x1826B8u;
    ctx->pc = 0x1826BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826B8u;
            // 0x1826bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1826C0u;
label_1826c0:
    // 0x1826c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1826c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1826c4:
    // 0x1826c4: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x1826c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1826c8:
    // 0x1826c8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1826c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1826cc:
    // 0x1826cc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1826ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1826d0:
    // 0x1826d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1826d4:
    if (ctx->pc == 0x1826D4u) {
        ctx->pc = 0x1826D4u;
            // 0x1826d4: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->pc = 0x1826D8u;
        goto label_1826d8;
    }
    ctx->pc = 0x1826D0u;
    {
        const bool branch_taken_0x1826d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1826D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1826D0u;
            // 0x1826d4: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826d0) {
            ctx->pc = 0x1826E0u;
            goto label_1826e0;
        }
    }
    ctx->pc = 0x1826D8u;
label_1826d8:
    // 0x1826d8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1826dc:
    if (ctx->pc == 0x1826DCu) {
        ctx->pc = 0x1826E0u;
        goto label_1826e0;
    }
    ctx->pc = 0x1826D8u;
    {
        const bool branch_taken_0x1826d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1826d8) {
            ctx->pc = 0x182700u;
            goto label_182700;
        }
    }
    ctx->pc = 0x1826E0u;
label_1826e0:
    // 0x1826e0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1826e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1826e4:
    // 0x1826e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1826e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1826e8:
    // 0x1826e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1826e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1826ec:
    // 0x1826ec: 0x24847398  addiu       $a0, $a0, 0x7398
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29592));
label_1826f0:
    // 0x1826f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1826f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1826f4:
    // 0x1826f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1826f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1826f8:
    // 0x1826f8: 0x8059f4e  j           func_167D38
label_1826fc:
    if (ctx->pc == 0x1826FCu) {
        ctx->pc = 0x1826FCu;
            // 0x1826fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x182700u;
        goto label_182700;
    }
    ctx->pc = 0x1826F8u;
    ctx->pc = 0x1826FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826F8u;
            // 0x1826fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182700u;
label_182700:
    // 0x182700: 0xc0608d6  jal         func_182358
label_182704:
    if (ctx->pc == 0x182704u) {
        ctx->pc = 0x182708u;
        goto label_182708;
    }
    ctx->pc = 0x182700u;
    SET_GPR_U32(ctx, 31, 0x182708u);
    ctx->pc = 0x182358u;
    if (runtime->hasFunction(0x182358u)) {
        auto targetFn = runtime->lookupFunction(0x182358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182708u; }
        if (ctx->pc != 0x182708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182358_0x182358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182708u; }
        if (ctx->pc != 0x182708u) { return; }
    }
    ctx->pc = 0x182708u;
label_182708:
    // 0x182708: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x182708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
label_18270c:
    // 0x18270c: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x18270cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
label_182710:
    // 0x182710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_182714:
    // 0x182714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182718:
    // 0x182718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18271c:
    // 0x18271c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18271cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_182720:
    // 0x182720: 0x3e00008  jr          $ra
label_182724:
    if (ctx->pc == 0x182724u) {
        ctx->pc = 0x182724u;
            // 0x182724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x182728u;
        goto label_182728;
    }
    ctx->pc = 0x182720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182720u;
            // 0x182724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182728u;
label_182728:
    // 0x182728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18272c:
    // 0x18272c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_182730:
    // 0x182730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_182734:
    // 0x182734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_182738:
    // 0x182738: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x182738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18273c:
    // 0x18273c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x18273cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_182740:
    // 0x182740: 0x8e3000e8  lw          $s0, 0xE8($s1)
    ctx->pc = 0x182740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_182744:
    // 0x182744: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_182748:
    if (ctx->pc == 0x182748u) {
        ctx->pc = 0x182748u;
            // 0x182748: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18274Cu;
        goto label_18274c;
    }
    ctx->pc = 0x182744u;
    {
        const bool branch_taken_0x182744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x182744) {
            ctx->pc = 0x182748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182744u;
            // 0x182748: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182788u;
            goto label_182788;
        }
    }
    ctx->pc = 0x18274Cu;
label_18274c:
    // 0x18274c: 0xc05cc84  jal         func_173210
label_182750:
    if (ctx->pc == 0x182750u) {
        ctx->pc = 0x182754u;
        goto label_182754;
    }
    ctx->pc = 0x18274Cu;
    SET_GPR_U32(ctx, 31, 0x182754u);
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182754u; }
        if (ctx->pc != 0x182754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182754u; }
        if (ctx->pc != 0x182754u) { return; }
    }
    ctx->pc = 0x182754u;
label_182754:
    // 0x182754: 0xc05b714  jal         func_16DC50
label_182758:
    if (ctx->pc == 0x182758u) {
        ctx->pc = 0x18275Cu;
        goto label_18275c;
    }
    ctx->pc = 0x182754u;
    SET_GPR_U32(ctx, 31, 0x18275Cu);
    ctx->pc = 0x16DC50u;
    if (runtime->hasFunction(0x16DC50u)) {
        auto targetFn = runtime->lookupFunction(0x16DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18275Cu; }
        if (ctx->pc != 0x18275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC50_0x16dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18275Cu; }
        if (ctx->pc != 0x18275Cu) { return; }
    }
    ctx->pc = 0x18275Cu;
label_18275c:
    // 0x18275c: 0xc0607b2  jal         func_181EC8
label_182760:
    if (ctx->pc == 0x182760u) {
        ctx->pc = 0x182760u;
            // 0x182760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x182764u;
        goto label_182764;
    }
    ctx->pc = 0x18275Cu;
    SET_GPR_U32(ctx, 31, 0x182764u);
    ctx->pc = 0x182760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18275Cu;
            // 0x182760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181EC8u;
    if (runtime->hasFunction(0x181EC8u)) {
        auto targetFn = runtime->lookupFunction(0x181EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182764u; }
        if (ctx->pc != 0x182764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181EC8_0x181ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182764u; }
        if (ctx->pc != 0x182764u) { return; }
    }
    ctx->pc = 0x182764u;
label_182764:
    // 0x182764: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x182764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_182768:
    // 0x182768: 0xc06074e  jal         func_181D38
label_18276c:
    if (ctx->pc == 0x18276Cu) {
        ctx->pc = 0x18276Cu;
            // 0x18276c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x182770u;
        goto label_182770;
    }
    ctx->pc = 0x182768u;
    SET_GPR_U32(ctx, 31, 0x182770u);
    ctx->pc = 0x18276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182768u;
            // 0x18276c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181D38u;
    if (runtime->hasFunction(0x181D38u)) {
        auto targetFn = runtime->lookupFunction(0x181D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182770u; }
        if (ctx->pc != 0x182770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181D38_0x181d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182770u; }
        if (ctx->pc != 0x182770u) { return; }
    }
    ctx->pc = 0x182770u;
label_182770:
    // 0x182770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182774:
    // 0x182774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_182778:
    // 0x182778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18277c:
    // 0x18277c: 0x805b71a  j           func_16DC68
label_182780:
    if (ctx->pc == 0x182780u) {
        ctx->pc = 0x182780u;
            // 0x182780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x182784u;
        goto label_182784;
    }
    ctx->pc = 0x18277Cu;
    ctx->pc = 0x182780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18277Cu;
            // 0x182780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC68u;
    if (runtime->hasFunction(0x16DC68u)) {
        auto targetFn = runtime->lookupFunction(0x16DC68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016DC68_0x16dc68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182784u;
label_182784:
    // 0x182784: 0x0  nop
    ctx->pc = 0x182784u;
    // NOP
label_182788:
    // 0x182788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18278c:
    // 0x18278c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18278cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182790:
    // 0x182790: 0x3e00008  jr          $ra
label_182794:
    if (ctx->pc == 0x182794u) {
        ctx->pc = 0x182794u;
            // 0x182794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x182798u;
        goto label_182798;
    }
    ctx->pc = 0x182790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182790u;
            // 0x182794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182798u;
label_182798:
    // 0x182798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18279c:
    // 0x18279c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1827a0:
    // 0x1827a0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1827a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1827a4:
    // 0x1827a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1827a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1827a8:
    // 0x1827a8: 0x80607c6  j           func_181F18
label_1827ac:
    if (ctx->pc == 0x1827ACu) {
        ctx->pc = 0x1827ACu;
            // 0x1827ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1827B0u;
        goto label_1827b0;
    }
    ctx->pc = 0x1827A8u;
    ctx->pc = 0x1827ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827A8u;
            // 0x1827ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F18u;
    {
        auto targetFn = runtime->lookupFunction(0x181F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1827B0u;
label_1827b0:
    // 0x1827b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1827b4:
    // 0x1827b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1827b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1827b8:
    // 0x1827b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1827b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1827bc:
    // 0x1827bc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_1827c0:
    // 0x1827c0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1827c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1827c4:
    // 0x1827c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1827c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1827c8:
    // 0x1827c8: 0x80607e2  j           func_181F88
label_1827cc:
    if (ctx->pc == 0x1827CCu) {
        ctx->pc = 0x1827CCu;
            // 0x1827cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1827D0u;
        goto label_1827d0;
    }
    ctx->pc = 0x1827C8u;
    ctx->pc = 0x1827CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827C8u;
            // 0x1827cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F88u;
    {
        auto targetFn = runtime->lookupFunction(0x181F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1827D0u;
label_1827d0:
    // 0x1827d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1827d4:
    // 0x1827d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1827d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1827d8:
    // 0x1827d8: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1827dc:
    // 0x1827dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1827dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1827e0:
    // 0x1827e0: 0x80608d6  j           func_182358
label_1827e4:
    if (ctx->pc == 0x1827E4u) {
        ctx->pc = 0x1827E4u;
            // 0x1827e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1827E8u;
        goto label_1827e8;
    }
    ctx->pc = 0x1827E0u;
    ctx->pc = 0x1827E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827E0u;
            // 0x1827e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182358u;
    if (runtime->hasFunction(0x182358u)) {
        auto targetFn = runtime->lookupFunction(0x182358u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00182358_0x182358(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1827E8u;
label_1827e8:
    // 0x1827e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1827ec:
    // 0x1827ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1827ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1827f0:
    // 0x1827f0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x1827f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_1827f4:
    // 0x1827f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1827f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1827f8:
    // 0x1827f8: 0x8060916  j           func_182458
label_1827fc:
    if (ctx->pc == 0x1827FCu) {
        ctx->pc = 0x1827FCu;
            // 0x1827fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182800u;
        goto label_182800;
    }
    ctx->pc = 0x1827F8u;
    ctx->pc = 0x1827FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1827F8u;
            // 0x1827fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182458u;
    {
        auto targetFn = runtime->lookupFunction(0x182458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x182800u;
label_182800:
    // 0x182800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_182804:
    // 0x182804: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x182804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_182808:
    // 0x182808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18280c:
    // 0x18280c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182810:
    // 0x182810: 0x8059f4e  j           func_167D38
label_182814:
    if (ctx->pc == 0x182814u) {
        ctx->pc = 0x182814u;
            // 0x182814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182818u;
        goto label_182818;
    }
    ctx->pc = 0x182810u;
    ctx->pc = 0x182814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182810u;
            // 0x182814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182818u;
label_182818:
    // 0x182818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18281c:
    // 0x18281c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x18281cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182820:
    // 0x182820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182824:
    // 0x182824: 0x5410008  bgez        $t2, . + 4 + (0x8 << 2)
label_182828:
    if (ctx->pc == 0x182828u) {
        ctx->pc = 0x182828u;
            // 0x182828: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18282Cu;
        goto label_18282c;
    }
    ctx->pc = 0x182824u;
    {
        const bool branch_taken_0x182824 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x182828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182824u;
            // 0x182828: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182824) {
            ctx->pc = 0x182848u;
            goto label_182848;
        }
    }
    ctx->pc = 0x18282Cu;
label_18282c:
    // 0x18282c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18282cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_182830:
    // 0x182830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182834:
    // 0x182834: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x182834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_182838:
    // 0x182838: 0x24847400  addiu       $a0, $a0, 0x7400
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29696));
label_18283c:
    // 0x18283c: 0x805b99c  j           func_16E670
label_182840:
    if (ctx->pc == 0x182840u) {
        ctx->pc = 0x182840u;
            // 0x182840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182844u;
        goto label_182844;
    }
    ctx->pc = 0x18283Cu;
    ctx->pc = 0x182840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18283Cu;
            // 0x182840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182844u;
label_182844:
    // 0x182844: 0x0  nop
    ctx->pc = 0x182844u;
    // NOP
label_182848:
    // 0x182848: 0x5610007  bgez        $t3, . + 4 + (0x7 << 2)
label_18284c:
    if (ctx->pc == 0x18284Cu) {
        ctx->pc = 0x18284Cu;
            // 0x18284c: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->pc = 0x182850u;
        goto label_182850;
    }
    ctx->pc = 0x182848u;
    {
        const bool branch_taken_0x182848 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x18284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182848u;
            // 0x18284c: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182848) {
            ctx->pc = 0x182868u;
            goto label_182868;
        }
    }
    ctx->pc = 0x182850u;
label_182850:
    // 0x182850: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x182850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_182854:
    // 0x182854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182858:
    // 0x182858: 0x24847430  addiu       $a0, $a0, 0x7430
    ctx->pc = 0x182858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
label_18285c:
    // 0x18285c: 0x805b99c  j           func_16E670
label_182860:
    if (ctx->pc == 0x182860u) {
        ctx->pc = 0x182860u;
            // 0x182860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182864u;
        goto label_182864;
    }
    ctx->pc = 0x18285Cu;
    ctx->pc = 0x182860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18285Cu;
            // 0x182860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182864u;
label_182864:
    // 0x182864: 0x0  nop
    ctx->pc = 0x182864u;
    // NOP
label_182868:
    // 0x182868: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_18286c:
    // 0x18286c: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x18286cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_182870:
    // 0x182870: 0x29220021  slti        $v0, $t1, 0x21
    ctx->pc = 0x182870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)33) ? 1 : 0);
label_182874:
    // 0x182874: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_182878:
    if (ctx->pc == 0x182878u) {
        ctx->pc = 0x182878u;
            // 0x182878: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->pc = 0x18287Cu;
        goto label_18287c;
    }
    ctx->pc = 0x182874u;
    {
        const bool branch_taken_0x182874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182874u;
            // 0x182878: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182874) {
            ctx->pc = 0x182898u;
            goto label_182898;
        }
    }
    ctx->pc = 0x18287Cu;
label_18287c:
    // 0x18287c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_182880:
    // 0x182880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182884:
    // 0x182884: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x182884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_182888:
    // 0x182888: 0x24847460  addiu       $a0, $a0, 0x7460
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29792));
label_18288c:
    // 0x18288c: 0x805b99c  j           func_16E670
label_182890:
    if (ctx->pc == 0x182890u) {
        ctx->pc = 0x182890u;
            // 0x182890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x182894u;
        goto label_182894;
    }
    ctx->pc = 0x18288Cu;
    ctx->pc = 0x182890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18288Cu;
            // 0x182890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182894u;
label_182894:
    // 0x182894: 0x0  nop
    ctx->pc = 0x182894u;
    // NOP
label_182898:
    // 0x182898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18289c:
    // 0x18289c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x18289cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1828a0:
    // 0x1828a0: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x1828a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
label_1828a4:
    // 0x1828a4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1828a8:
    // 0x1828a8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1828ac:
    // 0x1828ac: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_1828b0:
    // 0x1828b0: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
label_1828b4:
    // 0x1828b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1828b8:
    // 0x1828b8: 0xac6acef8  sw          $t2, -0x3108($v1)
    ctx->pc = 0x1828b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954744), GPR_U32(ctx, 10));
label_1828bc:
    // 0x1828bc: 0xac8bcefc  sw          $t3, -0x3104($a0)
    ctx->pc = 0x1828bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954748), GPR_U32(ctx, 11));
label_1828c0:
    // 0x1828c0: 0xaca7ced4  sw          $a3, -0x312C($a1)
    ctx->pc = 0x1828c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954708), GPR_U32(ctx, 7));
label_1828c4:
    // 0x1828c4: 0xacc2ced8  sw          $v0, -0x3128($a2)
    ctx->pc = 0x1828c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954712), GPR_U32(ctx, 2));
label_1828c8:
    // 0x1828c8: 0xad09ced0  sw          $t1, -0x3130($t0)
    ctx->pc = 0x1828c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294954704), GPR_U32(ctx, 9));
label_1828cc:
    // 0x1828cc: 0x3e00008  jr          $ra
label_1828d0:
    if (ctx->pc == 0x1828D0u) {
        ctx->pc = 0x1828D0u;
            // 0x1828d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1828D4u;
        goto label_1828d4;
    }
    ctx->pc = 0x1828CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828CCu;
            // 0x1828d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1828D4u;
label_1828d4:
    // 0x1828d4: 0x0  nop
    ctx->pc = 0x1828d4u;
    // NOP
}
