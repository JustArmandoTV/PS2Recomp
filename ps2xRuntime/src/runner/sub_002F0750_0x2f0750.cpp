#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0750
// Address: 0x2f0750 - 0x2f0870
void sub_002F0750_0x2f0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0750_0x2f0750");
#endif

    switch (ctx->pc) {
        case 0x2f0750u: goto label_2f0750;
        case 0x2f0754u: goto label_2f0754;
        case 0x2f0758u: goto label_2f0758;
        case 0x2f075cu: goto label_2f075c;
        case 0x2f0760u: goto label_2f0760;
        case 0x2f0764u: goto label_2f0764;
        case 0x2f0768u: goto label_2f0768;
        case 0x2f076cu: goto label_2f076c;
        case 0x2f0770u: goto label_2f0770;
        case 0x2f0774u: goto label_2f0774;
        case 0x2f0778u: goto label_2f0778;
        case 0x2f077cu: goto label_2f077c;
        case 0x2f0780u: goto label_2f0780;
        case 0x2f0784u: goto label_2f0784;
        case 0x2f0788u: goto label_2f0788;
        case 0x2f078cu: goto label_2f078c;
        case 0x2f0790u: goto label_2f0790;
        case 0x2f0794u: goto label_2f0794;
        case 0x2f0798u: goto label_2f0798;
        case 0x2f079cu: goto label_2f079c;
        case 0x2f07a0u: goto label_2f07a0;
        case 0x2f07a4u: goto label_2f07a4;
        case 0x2f07a8u: goto label_2f07a8;
        case 0x2f07acu: goto label_2f07ac;
        case 0x2f07b0u: goto label_2f07b0;
        case 0x2f07b4u: goto label_2f07b4;
        case 0x2f07b8u: goto label_2f07b8;
        case 0x2f07bcu: goto label_2f07bc;
        case 0x2f07c0u: goto label_2f07c0;
        case 0x2f07c4u: goto label_2f07c4;
        case 0x2f07c8u: goto label_2f07c8;
        case 0x2f07ccu: goto label_2f07cc;
        case 0x2f07d0u: goto label_2f07d0;
        case 0x2f07d4u: goto label_2f07d4;
        case 0x2f07d8u: goto label_2f07d8;
        case 0x2f07dcu: goto label_2f07dc;
        case 0x2f07e0u: goto label_2f07e0;
        case 0x2f07e4u: goto label_2f07e4;
        case 0x2f07e8u: goto label_2f07e8;
        case 0x2f07ecu: goto label_2f07ec;
        case 0x2f07f0u: goto label_2f07f0;
        case 0x2f07f4u: goto label_2f07f4;
        case 0x2f07f8u: goto label_2f07f8;
        case 0x2f07fcu: goto label_2f07fc;
        case 0x2f0800u: goto label_2f0800;
        case 0x2f0804u: goto label_2f0804;
        case 0x2f0808u: goto label_2f0808;
        case 0x2f080cu: goto label_2f080c;
        case 0x2f0810u: goto label_2f0810;
        case 0x2f0814u: goto label_2f0814;
        case 0x2f0818u: goto label_2f0818;
        case 0x2f081cu: goto label_2f081c;
        case 0x2f0820u: goto label_2f0820;
        case 0x2f0824u: goto label_2f0824;
        case 0x2f0828u: goto label_2f0828;
        case 0x2f082cu: goto label_2f082c;
        case 0x2f0830u: goto label_2f0830;
        case 0x2f0834u: goto label_2f0834;
        case 0x2f0838u: goto label_2f0838;
        case 0x2f083cu: goto label_2f083c;
        case 0x2f0840u: goto label_2f0840;
        case 0x2f0844u: goto label_2f0844;
        case 0x2f0848u: goto label_2f0848;
        case 0x2f084cu: goto label_2f084c;
        case 0x2f0850u: goto label_2f0850;
        case 0x2f0854u: goto label_2f0854;
        case 0x2f0858u: goto label_2f0858;
        case 0x2f085cu: goto label_2f085c;
        case 0x2f0860u: goto label_2f0860;
        case 0x2f0864u: goto label_2f0864;
        case 0x2f0868u: goto label_2f0868;
        case 0x2f086cu: goto label_2f086c;
        default: break;
    }

    ctx->pc = 0x2f0750u;

label_2f0750:
    // 0x2f0750: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2f0750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f0754:
    // 0x2f0754: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x2f0754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f0758:
    // 0x2f0758: 0xad000078  sw          $zero, 0x78($t0)
    ctx->pc = 0x2f0758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 0));
label_2f075c:
    // 0x2f075c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f0760:
    // 0x2f0760: 0x8c670ea4  lw          $a3, 0xEA4($v1)
    ctx->pc = 0x2f0760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_2f0764:
    // 0x2f0764: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2f0764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2f0768:
    // 0x2f0768: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2f0768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2f076c:
    // 0x2f076c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f0770:
    // 0x2f0770: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2f0770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f0774:
    // 0x2f0774: 0x8ce30140  lw          $v1, 0x140($a3)
    ctx->pc = 0x2f0774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 320)));
label_2f0778:
    // 0x2f0778: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f0778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2f077c:
    // 0x2f077c: 0xad030068  sw          $v1, 0x68($t0)
    ctx->pc = 0x2f077cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 104), GPR_U32(ctx, 3));
label_2f0780:
    // 0x2f0780: 0x3e00008  jr          $ra
label_2f0784:
    if (ctx->pc == 0x2F0784u) {
        ctx->pc = 0x2F0784u;
            // 0x2f0784: 0xa0860054  sb          $a2, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2F0788u;
        goto label_2f0788;
    }
    ctx->pc = 0x2F0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0780u;
            // 0x2f0784: 0xa0860054  sb          $a2, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0788u;
label_2f0788:
    // 0x2f0788: 0x0  nop
    ctx->pc = 0x2f0788u;
    // NOP
label_2f078c:
    // 0x2f078c: 0x0  nop
    ctx->pc = 0x2f078cu;
    // NOP
label_2f0790:
    // 0x2f0790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f0794:
    // 0x2f0794: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f0794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f0798:
    // 0x2f0798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f079c:
    // 0x2f079c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f07a0:
    // 0x2f07a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f07a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f07a4:
    // 0x2f07a4: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x2f07a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_2f07a8:
    // 0x2f07a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f07a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f07ac:
    // 0x2f07ac: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x2f07acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_2f07b0:
    // 0x2f07b0: 0x320f809  jalr        $t9
label_2f07b4:
    if (ctx->pc == 0x2F07B4u) {
        ctx->pc = 0x2F07B4u;
            // 0x2f07b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F07B8u;
        goto label_2f07b8;
    }
    ctx->pc = 0x2F07B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F07B8u);
        ctx->pc = 0x2F07B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07B0u;
            // 0x2f07b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F07B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F07B8u; }
            if (ctx->pc != 0x2F07B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F07B8u;
label_2f07b8:
    // 0x2f07b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f07b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f07bc:
    // 0x2f07bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f07bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f07c0:
    // 0x2f07c0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2f07c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2f07c4:
    // 0x2f07c4: 0x320f809  jalr        $t9
label_2f07c8:
    if (ctx->pc == 0x2F07C8u) {
        ctx->pc = 0x2F07C8u;
            // 0x2f07c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F07CCu;
        goto label_2f07cc;
    }
    ctx->pc = 0x2F07C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F07CCu);
        ctx->pc = 0x2F07C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07C4u;
            // 0x2f07c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F07CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F07CCu; }
            if (ctx->pc != 0x2F07CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F07CCu;
label_2f07cc:
    // 0x2f07cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f07d0:
    // 0x2f07d0: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x2f07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_2f07d4:
    // 0x2f07d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f07d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f07d8:
    // 0x2f07d8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f07d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f07dc:
    // 0x2f07dc: 0x320f809  jalr        $t9
label_2f07e0:
    if (ctx->pc == 0x2F07E0u) {
        ctx->pc = 0x2F07E4u;
        goto label_2f07e4;
    }
    ctx->pc = 0x2F07DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F07E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F07E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F07E4u; }
            if (ctx->pc != 0x2F07E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F07E4u;
label_2f07e4:
    // 0x2f07e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f07e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f07e8:
    // 0x2f07e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f07e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f07ec:
    // 0x2f07ec: 0x3e00008  jr          $ra
label_2f07f0:
    if (ctx->pc == 0x2F07F0u) {
        ctx->pc = 0x2F07F0u;
            // 0x2f07f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F07F4u;
        goto label_2f07f4;
    }
    ctx->pc = 0x2F07ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F07F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F07ECu;
            // 0x2f07f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F07F4u;
label_2f07f4:
    // 0x2f07f4: 0x0  nop
    ctx->pc = 0x2f07f4u;
    // NOP
label_2f07f8:
    // 0x2f07f8: 0x0  nop
    ctx->pc = 0x2f07f8u;
    // NOP
label_2f07fc:
    // 0x2f07fc: 0x0  nop
    ctx->pc = 0x2f07fcu;
    // NOP
label_2f0800:
    // 0x2f0800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f0804:
    // 0x2f0804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f0808:
    // 0x2f0808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f080c:
    // 0x2f080c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f0810:
    // 0x2f0810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0814:
    // 0x2f0814: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2f0818:
    if (ctx->pc == 0x2F0818u) {
        ctx->pc = 0x2F0818u;
            // 0x2f0818: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F081Cu;
        goto label_2f081c;
    }
    ctx->pc = 0x2F0814u;
    {
        const bool branch_taken_0x2f0814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0814u;
            // 0x2f0818: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0814) {
            ctx->pc = 0x2F0858u;
            goto label_2f0858;
        }
    }
    ctx->pc = 0x2F081Cu;
label_2f081c:
    // 0x2f081c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f0820:
    // 0x2f0820: 0x24423220  addiu       $v0, $v0, 0x3220
    ctx->pc = 0x2f0820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12832));
label_2f0824:
    // 0x2f0824: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2f0828:
    if (ctx->pc == 0x2F0828u) {
        ctx->pc = 0x2F0828u;
            // 0x2f0828: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F082Cu;
        goto label_2f082c;
    }
    ctx->pc = 0x2F0824u;
    {
        const bool branch_taken_0x2f0824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0824u;
            // 0x2f0828: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0824) {
            ctx->pc = 0x2F0840u;
            goto label_2f0840;
        }
    }
    ctx->pc = 0x2F082Cu;
label_2f082c:
    // 0x2f082c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f0830:
    // 0x2f0830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0834:
    // 0x2f0834: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2f0834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2f0838:
    // 0x2f0838: 0xc057a68  jal         func_15E9A0
label_2f083c:
    if (ctx->pc == 0x2F083Cu) {
        ctx->pc = 0x2F083Cu;
            // 0x2f083c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0840u;
        goto label_2f0840;
    }
    ctx->pc = 0x2F0838u;
    SET_GPR_U32(ctx, 31, 0x2F0840u);
    ctx->pc = 0x2F083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0838u;
            // 0x2f083c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0840u; }
        if (ctx->pc != 0x2F0840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0840u; }
        if (ctx->pc != 0x2F0840u) { return; }
    }
    ctx->pc = 0x2F0840u;
label_2f0840:
    // 0x2f0840: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2f0840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2f0844:
    // 0x2f0844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f0844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2f0848:
    // 0x2f0848: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2f084c:
    if (ctx->pc == 0x2F084Cu) {
        ctx->pc = 0x2F084Cu;
            // 0x2f084c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0850u;
        goto label_2f0850;
    }
    ctx->pc = 0x2F0848u;
    {
        const bool branch_taken_0x2f0848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f0848) {
            ctx->pc = 0x2F084Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0848u;
            // 0x2f084c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F085Cu;
            goto label_2f085c;
        }
    }
    ctx->pc = 0x2F0850u;
label_2f0850:
    // 0x2f0850: 0xc0400a8  jal         func_1002A0
label_2f0854:
    if (ctx->pc == 0x2F0854u) {
        ctx->pc = 0x2F0854u;
            // 0x2f0854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0858u;
        goto label_2f0858;
    }
    ctx->pc = 0x2F0850u;
    SET_GPR_U32(ctx, 31, 0x2F0858u);
    ctx->pc = 0x2F0854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0850u;
            // 0x2f0854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0858u; }
        if (ctx->pc != 0x2F0858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0858u; }
        if (ctx->pc != 0x2F0858u) { return; }
    }
    ctx->pc = 0x2F0858u;
label_2f0858:
    // 0x2f0858: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f0858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f085c:
    // 0x2f085c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f085cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0860:
    // 0x2f0860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0864:
    // 0x2f0864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0868:
    // 0x2f0868: 0x3e00008  jr          $ra
label_2f086c:
    if (ctx->pc == 0x2F086Cu) {
        ctx->pc = 0x2F086Cu;
            // 0x2f086c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2F0870u;
        goto label_fallthrough_0x2f0868;
    }
    ctx->pc = 0x2F0868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0868u;
            // 0x2f086c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f0868:
    ctx->pc = 0x2F0870u;
}
