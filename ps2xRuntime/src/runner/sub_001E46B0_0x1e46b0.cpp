#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E46B0
// Address: 0x1e46b0 - 0x1e47a0
void sub_001E46B0_0x1e46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E46B0_0x1e46b0");
#endif

    switch (ctx->pc) {
        case 0x1e46b0u: goto label_1e46b0;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46b8u: goto label_1e46b8;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46e8u: goto label_1e46e8;
        case 0x1e46ecu: goto label_1e46ec;
        case 0x1e46f0u: goto label_1e46f0;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e46f8u: goto label_1e46f8;
        case 0x1e46fcu: goto label_1e46fc;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4704u: goto label_1e4704;
        case 0x1e4708u: goto label_1e4708;
        case 0x1e470cu: goto label_1e470c;
        case 0x1e4710u: goto label_1e4710;
        case 0x1e4714u: goto label_1e4714;
        case 0x1e4718u: goto label_1e4718;
        case 0x1e471cu: goto label_1e471c;
        case 0x1e4720u: goto label_1e4720;
        case 0x1e4724u: goto label_1e4724;
        case 0x1e4728u: goto label_1e4728;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        default: break;
    }

    ctx->pc = 0x1e46b0u;

label_1e46b0:
    // 0x1e46b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e46b4:
    // 0x1e46b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e46b8:
    // 0x1e46b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e46b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e46bc:
    // 0x1e46bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e46c0:
    // 0x1e46c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e46c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e46c4:
    // 0x1e46c4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e46c8:
    // 0x1e46c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e46cc:
    // 0x1e46cc: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x1e46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_1e46d0:
    // 0x1e46d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e46d4:
    // 0x1e46d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e46d8:
    // 0x1e46d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e46dc:
    // 0x1e46dc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1e46dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_1e46e0:
    // 0x1e46e0: 0x2463d9e0  addiu       $v1, $v1, -0x2620
    ctx->pc = 0x1e46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
label_1e46e4:
    // 0x1e46e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e46e8:
    // 0x1e46e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e46e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e46ec:
    // 0x1e46ec: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x1e46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
label_1e46f0:
    // 0x1e46f0: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1e46f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
label_1e46f4:
    // 0x1e46f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e46f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e46f8:
    // 0x1e46f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e46fc:
    // 0x1e46fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4700:
    // 0x1e4700: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e4704:
    // 0x1e4704: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1e4704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
label_1e4708:
    // 0x1e4708: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e470c:
    // 0x1e470c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1e470cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1e4710:
    // 0x1e4710: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e4714:
    // 0x1e4714: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1e4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e4718:
    // 0x1e4718: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e4718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e471c:
    // 0x1e471c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1e471cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1e4720:
    // 0x1e4720: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1e4720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1e4724:
    // 0x1e4724: 0x8c6a000c  lw          $t2, 0xC($v1)
    ctx->pc = 0x1e4724u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e4728:
    // 0x1e4728: 0x80e20010  lb          $v0, 0x10($a3)
    ctx->pc = 0x1e4728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1e472c:
    // 0x1e472c: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e4730:
    // 0x1e4730: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e4734:
    // 0x1e4734: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e4734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e4738:
    // 0x1e4738: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e4738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e473c:
    // 0x1e473c: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x1e473cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e4740:
    // 0x1e4740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e4744:
    if (ctx->pc == 0x1E4744u) {
        ctx->pc = 0x1E4744u;
            // 0x1e4744: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4748u;
        goto label_1e4748;
    }
    ctx->pc = 0x1E4740u;
    {
        const bool branch_taken_0x1e4740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4740u;
            // 0x1e4744: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4740) {
            ctx->pc = 0x1E4750u;
            goto label_1e4750;
        }
    }
    ctx->pc = 0x1E4748u;
label_1e4748:
    // 0x1e4748: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e474c:
    if (ctx->pc == 0x1E474Cu) {
        ctx->pc = 0x1E474Cu;
            // 0x1e474c: 0x256305a0  addiu       $v1, $t3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1440));
        ctx->pc = 0x1E4750u;
        goto label_1e4750;
    }
    ctx->pc = 0x1E4748u;
    {
        const bool branch_taken_0x1e4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4748u;
            // 0x1e474c: 0x256305a0  addiu       $v1, $t3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4748) {
            ctx->pc = 0x1E4754u;
            goto label_1e4754;
        }
    }
    ctx->pc = 0x1E4750u;
label_1e4750:
    // 0x1e4750: 0x256301a0  addiu       $v1, $t3, 0x1A0
    ctx->pc = 0x1e4750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 416));
label_1e4754:
    // 0x1e4754: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1e4758:
    // 0x1e4758: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e475c:
    // 0x1e475c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1e4760:
    // 0x1e4760: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1e4760u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4764:
    // 0x1e4764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e4764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e4768:
    // 0x1e4768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e476c:
    // 0x1e476c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e476cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4770:
    // 0x1e4770: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1e4774:
    // 0x1e4774: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e4774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e4778:
    // 0x1e4778: 0x40f809  jalr        $v0
label_1e477c:
    if (ctx->pc == 0x1E477Cu) {
        ctx->pc = 0x1E4780u;
        goto label_1e4780;
    }
    ctx->pc = 0x1E4778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4780u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4780u; }
            if (ctx->pc != 0x1E4780u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4780u;
label_1e4780:
    // 0x1e4780: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e4780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e4784:
    // 0x1e4784: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e4784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1e4788:
    // 0x1e4788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e478c:
    // 0x1e478c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e478cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4790:
    // 0x1e4790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4794:
    // 0x1e4794: 0x3e00008  jr          $ra
label_1e4798:
    if (ctx->pc == 0x1E4798u) {
        ctx->pc = 0x1E4798u;
            // 0x1e4798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E479Cu;
        goto label_1e479c;
    }
    ctx->pc = 0x1E4794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4794u;
            // 0x1e4798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E479Cu;
label_1e479c:
    // 0x1e479c: 0x0  nop
    ctx->pc = 0x1e479cu;
    // NOP
}
