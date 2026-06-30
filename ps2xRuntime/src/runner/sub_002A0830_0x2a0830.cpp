#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0830
// Address: 0x2a0830 - 0x2a08f0
void sub_002A0830_0x2a0830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0830_0x2a0830");
#endif

    switch (ctx->pc) {
        case 0x2a0830u: goto label_2a0830;
        case 0x2a0834u: goto label_2a0834;
        case 0x2a0838u: goto label_2a0838;
        case 0x2a083cu: goto label_2a083c;
        case 0x2a0840u: goto label_2a0840;
        case 0x2a0844u: goto label_2a0844;
        case 0x2a0848u: goto label_2a0848;
        case 0x2a084cu: goto label_2a084c;
        case 0x2a0850u: goto label_2a0850;
        case 0x2a0854u: goto label_2a0854;
        case 0x2a0858u: goto label_2a0858;
        case 0x2a085cu: goto label_2a085c;
        case 0x2a0860u: goto label_2a0860;
        case 0x2a0864u: goto label_2a0864;
        case 0x2a0868u: goto label_2a0868;
        case 0x2a086cu: goto label_2a086c;
        case 0x2a0870u: goto label_2a0870;
        case 0x2a0874u: goto label_2a0874;
        case 0x2a0878u: goto label_2a0878;
        case 0x2a087cu: goto label_2a087c;
        case 0x2a0880u: goto label_2a0880;
        case 0x2a0884u: goto label_2a0884;
        case 0x2a0888u: goto label_2a0888;
        case 0x2a088cu: goto label_2a088c;
        case 0x2a0890u: goto label_2a0890;
        case 0x2a0894u: goto label_2a0894;
        case 0x2a0898u: goto label_2a0898;
        case 0x2a089cu: goto label_2a089c;
        case 0x2a08a0u: goto label_2a08a0;
        case 0x2a08a4u: goto label_2a08a4;
        case 0x2a08a8u: goto label_2a08a8;
        case 0x2a08acu: goto label_2a08ac;
        case 0x2a08b0u: goto label_2a08b0;
        case 0x2a08b4u: goto label_2a08b4;
        case 0x2a08b8u: goto label_2a08b8;
        case 0x2a08bcu: goto label_2a08bc;
        case 0x2a08c0u: goto label_2a08c0;
        case 0x2a08c4u: goto label_2a08c4;
        case 0x2a08c8u: goto label_2a08c8;
        case 0x2a08ccu: goto label_2a08cc;
        case 0x2a08d0u: goto label_2a08d0;
        case 0x2a08d4u: goto label_2a08d4;
        case 0x2a08d8u: goto label_2a08d8;
        case 0x2a08dcu: goto label_2a08dc;
        case 0x2a08e0u: goto label_2a08e0;
        case 0x2a08e4u: goto label_2a08e4;
        case 0x2a08e8u: goto label_2a08e8;
        case 0x2a08ecu: goto label_2a08ec;
        default: break;
    }

    ctx->pc = 0x2a0830u;

label_2a0830:
    // 0x2a0830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0834:
    // 0x2a0834: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0838:
    // 0x2a0838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a083c:
    // 0x2a083c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2a0840:
    // 0x2a0840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0844:
    // 0x2a0844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0848:
    // 0x2a0848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a084c:
    // 0x2a084c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a084cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0850:
    // 0x2a0850: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a0850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a0854:
    // 0x2a0854: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0858:
    // 0x2a0858: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2a085c:
    // 0x2a085c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a085cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a0860:
    // 0x2a0860: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0864:
    // 0x2a0864: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2a0864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_2a0868:
    // 0x2a0868: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x2a0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
label_2a086c:
    // 0x2a086c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a086cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a0870:
    // 0x2a0870: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0874:
    // 0x2a0874: 0x2442f910  addiu       $v0, $v0, -0x6F0
    ctx->pc = 0x2a0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
label_2a0878:
    // 0x2a0878: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a0878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a087c:
    // 0x2a087c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2a087cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_2a0880:
    // 0x2a0880: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x2a0880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
label_2a0884:
    // 0x2a0884: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a0884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a0888:
    // 0x2a0888: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2a088c:
    if (ctx->pc == 0x2A088Cu) {
        ctx->pc = 0x2A088Cu;
            // 0x2a088c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0890u;
        goto label_2a0890;
    }
    ctx->pc = 0x2A0888u;
    {
        const bool branch_taken_0x2a0888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0888u;
            // 0x2a088c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0888) {
            ctx->pc = 0x2A08A8u;
            goto label_2a08a8;
        }
    }
    ctx->pc = 0x2A0890u;
label_2a0890:
    // 0x2a0890: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2a0890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2a0894:
    // 0x2a0894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a0898:
    if (ctx->pc == 0x2A0898u) {
        ctx->pc = 0x2A089Cu;
        goto label_2a089c;
    }
    ctx->pc = 0x2A0894u;
    {
        const bool branch_taken_0x2a0894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0894) {
            ctx->pc = 0x2A08A8u;
            goto label_2a08a8;
        }
    }
    ctx->pc = 0x2A089Cu;
label_2a089c:
    // 0x2a089c: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x2a089cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2a08a0:
    // 0x2a08a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a08a4:
    // 0x2a08a4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2a08a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a08a8:
    // 0x2a08a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a08ac:
    // 0x2a08ac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a08acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2a08b0:
    // 0x2a08b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2a08b4:
    // 0x2a08b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a08b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a08b8:
    // 0x2a08b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a08b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a08bc:
    // 0x2a08bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a08bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a08c0:
    // 0x2a08c0: 0x320f809  jalr        $t9
label_2a08c4:
    if (ctx->pc == 0x2A08C4u) {
        ctx->pc = 0x2A08C4u;
            // 0x2a08c4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2A08C8u;
        goto label_2a08c8;
    }
    ctx->pc = 0x2A08C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A08C8u);
        ctx->pc = 0x2A08C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08C0u;
            // 0x2a08c4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A08C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A08C8u; }
            if (ctx->pc != 0x2A08C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A08C8u;
label_2a08c8:
    // 0x2a08c8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2a08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2a08cc:
    // 0x2a08cc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2a08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2a08d0:
    // 0x2a08d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a08d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a08d4:
    // 0x2a08d4: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x2a08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_2a08d8:
    // 0x2a08d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a08d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a08dc:
    // 0x2a08dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a08dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a08e0:
    // 0x2a08e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a08e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a08e4:
    // 0x2a08e4: 0x3e00008  jr          $ra
label_2a08e8:
    if (ctx->pc == 0x2A08E8u) {
        ctx->pc = 0x2A08E8u;
            // 0x2a08e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A08ECu;
        goto label_2a08ec;
    }
    ctx->pc = 0x2A08E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A08E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08E4u;
            // 0x2a08e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A08ECu;
label_2a08ec:
    // 0x2a08ec: 0x0  nop
    ctx->pc = 0x2a08ecu;
    // NOP
}
