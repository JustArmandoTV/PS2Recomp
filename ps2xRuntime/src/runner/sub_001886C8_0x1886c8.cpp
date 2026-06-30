#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001886C8
// Address: 0x1886c8 - 0x188840
void sub_001886C8_0x1886c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001886C8_0x1886c8");
#endif

    switch (ctx->pc) {
        case 0x1886c8u: goto label_1886c8;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886d0u: goto label_1886d0;
        case 0x1886d4u: goto label_1886d4;
        case 0x1886d8u: goto label_1886d8;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886e0u: goto label_1886e0;
        case 0x1886e4u: goto label_1886e4;
        case 0x1886e8u: goto label_1886e8;
        case 0x1886ecu: goto label_1886ec;
        case 0x1886f0u: goto label_1886f0;
        case 0x1886f4u: goto label_1886f4;
        case 0x1886f8u: goto label_1886f8;
        case 0x1886fcu: goto label_1886fc;
        case 0x188700u: goto label_188700;
        case 0x188704u: goto label_188704;
        case 0x188708u: goto label_188708;
        case 0x18870cu: goto label_18870c;
        case 0x188710u: goto label_188710;
        case 0x188714u: goto label_188714;
        case 0x188718u: goto label_188718;
        case 0x18871cu: goto label_18871c;
        case 0x188720u: goto label_188720;
        case 0x188724u: goto label_188724;
        case 0x188728u: goto label_188728;
        case 0x18872cu: goto label_18872c;
        case 0x188730u: goto label_188730;
        case 0x188734u: goto label_188734;
        case 0x188738u: goto label_188738;
        case 0x18873cu: goto label_18873c;
        case 0x188740u: goto label_188740;
        case 0x188744u: goto label_188744;
        case 0x188748u: goto label_188748;
        case 0x18874cu: goto label_18874c;
        case 0x188750u: goto label_188750;
        case 0x188754u: goto label_188754;
        case 0x188758u: goto label_188758;
        case 0x18875cu: goto label_18875c;
        case 0x188760u: goto label_188760;
        case 0x188764u: goto label_188764;
        case 0x188768u: goto label_188768;
        case 0x18876cu: goto label_18876c;
        case 0x188770u: goto label_188770;
        case 0x188774u: goto label_188774;
        case 0x188778u: goto label_188778;
        case 0x18877cu: goto label_18877c;
        case 0x188780u: goto label_188780;
        case 0x188784u: goto label_188784;
        case 0x188788u: goto label_188788;
        case 0x18878cu: goto label_18878c;
        case 0x188790u: goto label_188790;
        case 0x188794u: goto label_188794;
        case 0x188798u: goto label_188798;
        case 0x18879cu: goto label_18879c;
        case 0x1887a0u: goto label_1887a0;
        case 0x1887a4u: goto label_1887a4;
        case 0x1887a8u: goto label_1887a8;
        case 0x1887acu: goto label_1887ac;
        case 0x1887b0u: goto label_1887b0;
        case 0x1887b4u: goto label_1887b4;
        case 0x1887b8u: goto label_1887b8;
        case 0x1887bcu: goto label_1887bc;
        case 0x1887c0u: goto label_1887c0;
        case 0x1887c4u: goto label_1887c4;
        case 0x1887c8u: goto label_1887c8;
        case 0x1887ccu: goto label_1887cc;
        case 0x1887d0u: goto label_1887d0;
        case 0x1887d4u: goto label_1887d4;
        case 0x1887d8u: goto label_1887d8;
        case 0x1887dcu: goto label_1887dc;
        case 0x1887e0u: goto label_1887e0;
        case 0x1887e4u: goto label_1887e4;
        case 0x1887e8u: goto label_1887e8;
        case 0x1887ecu: goto label_1887ec;
        case 0x1887f0u: goto label_1887f0;
        case 0x1887f4u: goto label_1887f4;
        case 0x1887f8u: goto label_1887f8;
        case 0x1887fcu: goto label_1887fc;
        case 0x188800u: goto label_188800;
        case 0x188804u: goto label_188804;
        case 0x188808u: goto label_188808;
        case 0x18880cu: goto label_18880c;
        case 0x188810u: goto label_188810;
        case 0x188814u: goto label_188814;
        case 0x188818u: goto label_188818;
        case 0x18881cu: goto label_18881c;
        case 0x188820u: goto label_188820;
        case 0x188824u: goto label_188824;
        case 0x188828u: goto label_188828;
        case 0x18882cu: goto label_18882c;
        case 0x188830u: goto label_188830;
        case 0x188834u: goto label_188834;
        case 0x188838u: goto label_188838;
        case 0x18883cu: goto label_18883c;
        default: break;
    }

    ctx->pc = 0x1886c8u;

label_1886c8:
    // 0x1886c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1886c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1886cc:
    // 0x1886cc: 0x2442fe28  addiu       $v0, $v0, -0x1D8
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966824));
label_1886d0:
    // 0x1886d0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1886d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1886d4:
    // 0x1886d4: 0x3e00008  jr          $ra
label_1886d8:
    if (ctx->pc == 0x1886D8u) {
        ctx->pc = 0x1886D8u;
            // 0x1886d8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x1886DCu;
        goto label_1886dc;
    }
    ctx->pc = 0x1886D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886D4u;
            // 0x1886d8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1886DCu;
label_1886dc:
    // 0x1886dc: 0x0  nop
    ctx->pc = 0x1886dcu;
    // NOP
label_1886e0:
    // 0x1886e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1886e4:
    // 0x1886e4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1886e8:
    // 0x1886e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1886ec:
    // 0x1886ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1886ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1886f0:
    // 0x1886f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1886f4:
    // 0x1886f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1886f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1886f8:
    // 0x1886f8: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x1886f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1886fc:
    // 0x1886fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1886fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188700:
    // 0x188700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_188704:
    // 0x188704: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
label_188708:
    // 0x188708: 0x26316938  addiu       $s1, $s1, 0x6938
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26936));
label_18870c:
    // 0x18870c: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_188710:
    // 0x188710: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x188710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_188714:
    // 0x188714: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x188714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_188718:
    // 0x188718: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x188718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_18871c:
    // 0x18871c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18871cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188720:
    // 0x188720: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x188720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_188724:
    // 0x188724: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188728:
    // 0x188728: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
label_18872c:
    // 0x18872c: 0x2610fba0  addiu       $s0, $s0, -0x460
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966176));
label_188730:
    // 0x188730: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_188734:
    // 0x188734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188738:
    // 0x188738: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18873c:
    // 0x18873c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_188740:
    if (ctx->pc == 0x188740u) {
        ctx->pc = 0x188740u;
            // 0x188740: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x188744u;
        goto label_188744;
    }
    ctx->pc = 0x18873Cu;
    {
        const bool branch_taken_0x18873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18873Cu;
            // 0x188740: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18873c) {
            ctx->pc = 0x188758u;
            goto label_188758;
        }
    }
    ctx->pc = 0x188744u;
label_188744:
    // 0x188744: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x188744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_188748:
    // 0x188748: 0x40f809  jalr        $v0
label_18874c:
    if (ctx->pc == 0x18874Cu) {
        ctx->pc = 0x188750u;
        goto label_188750;
    }
    ctx->pc = 0x188748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188750u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x188750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188750u; }
            if (ctx->pc != 0x188750u) { return; }
        }
        }
    }
    ctx->pc = 0x188750u;
label_188750:
    // 0x188750: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x188750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_188754:
    // 0x188754: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x188754u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_188758:
    // 0x188758: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_18875c:
    // 0x18875c: 0x643fff6  bgezl       $s2, . + 4 + (-0xA << 2)
label_188760:
    if (ctx->pc == 0x188760u) {
        ctx->pc = 0x188760u;
            // 0x188760: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x188764u;
        goto label_188764;
    }
    ctx->pc = 0x18875Cu;
    {
        const bool branch_taken_0x18875c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x18875c) {
            ctx->pc = 0x188760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18875Cu;
            // 0x188760: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188738;
        }
    }
    ctx->pc = 0x188764u;
label_188764:
    // 0x188764: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x188764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_188768:
    // 0x188768: 0x24846918  addiu       $a0, $a0, 0x6918
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26904));
label_18876c:
    // 0x18876c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x18876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_188770:
    // 0x188770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x188770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_188774:
    // 0x188774: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188778:
    // 0x188778: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x188778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18877c:
    // 0x18877c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18877cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188780:
    // 0x188780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188784:
    // 0x188784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_188788:
    // 0x188788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18878c:
    // 0x18878c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18878cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_188790:
    // 0x188790: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x188790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_188794:
    // 0x188794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_188798:
    // 0x188798: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x188798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18879c:
    // 0x18879c: 0x3e00008  jr          $ra
label_1887a0:
    if (ctx->pc == 0x1887A0u) {
        ctx->pc = 0x1887A0u;
            // 0x1887a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1887A4u;
        goto label_1887a4;
    }
    ctx->pc = 0x18879Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1887A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18879Cu;
            // 0x1887a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1887A4u;
label_1887a4:
    // 0x1887a4: 0x0  nop
    ctx->pc = 0x1887a4u;
    // NOP
label_1887a8:
    // 0x1887a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1887ac:
    // 0x1887ac: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1887acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1887b0:
    // 0x1887b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1887b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1887b4:
    // 0x1887b4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1887b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1887b8:
    // 0x1887b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1887bc:
    if (ctx->pc == 0x1887BCu) {
        ctx->pc = 0x1887BCu;
            // 0x1887bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1887C0u;
        goto label_1887c0;
    }
    ctx->pc = 0x1887B8u;
    {
        const bool branch_taken_0x1887b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1887BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887B8u;
            // 0x1887bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887b8) {
            ctx->pc = 0x1887D0u;
            goto label_1887d0;
        }
    }
    ctx->pc = 0x1887C0u;
label_1887c0:
    // 0x1887c0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1887c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1887c4:
    // 0x1887c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1887c8:
    if (ctx->pc == 0x1887C8u) {
        ctx->pc = 0x1887C8u;
            // 0x1887c8: 0x248480b0  addiu       $a0, $a0, -0x7F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934704));
        ctx->pc = 0x1887CCu;
        goto label_1887cc;
    }
    ctx->pc = 0x1887C4u;
    {
        const bool branch_taken_0x1887c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887C4u;
            // 0x1887c8: 0x248480b0  addiu       $a0, $a0, -0x7F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887c4) {
            ctx->pc = 0x1887E0u;
            goto label_1887e0;
        }
    }
    ctx->pc = 0x1887CCu;
label_1887cc:
    // 0x1887cc: 0x0  nop
    ctx->pc = 0x1887ccu;
    // NOP
label_1887d0:
    // 0x1887d0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_1887d4:
    if (ctx->pc == 0x1887D4u) {
        ctx->pc = 0x1887D4u;
            // 0x1887d4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x1887D8u;
        goto label_1887d8;
    }
    ctx->pc = 0x1887D0u;
    {
        const bool branch_taken_0x1887d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1887d0) {
            ctx->pc = 0x1887D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1887D0u;
            // 0x1887d4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1887F0u;
            goto label_1887f0;
        }
    }
    ctx->pc = 0x1887D8u;
label_1887d8:
    // 0x1887d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1887d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1887dc:
    // 0x1887dc: 0x248480d8  addiu       $a0, $a0, -0x7F28
    ctx->pc = 0x1887dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934744));
label_1887e0:
    // 0x1887e0: 0xc061fea  jal         func_187FA8
label_1887e4:
    if (ctx->pc == 0x1887E4u) {
        ctx->pc = 0x1887E8u;
        goto label_1887e8;
    }
    ctx->pc = 0x1887E0u;
    SET_GPR_U32(ctx, 31, 0x1887E8u);
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887E8u; }
        if (ctx->pc != 0x1887E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FA8_0x187fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887E8u; }
        if (ctx->pc != 0x1887E8u) { return; }
    }
    ctx->pc = 0x1887E8u;
label_1887e8:
    // 0x1887e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1887ec:
    if (ctx->pc == 0x1887ECu) {
        ctx->pc = 0x1887ECu;
            // 0x1887ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1887F0u;
        goto label_1887f0;
    }
    ctx->pc = 0x1887E8u;
    {
        const bool branch_taken_0x1887e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887E8u;
            // 0x1887ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887e8) {
            ctx->pc = 0x188830u;
            goto label_188830;
        }
    }
    ctx->pc = 0x1887F0u;
label_1887f0:
    // 0x1887f0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1887f4:
    // 0x1887f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1887f8:
    // 0x1887f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1887fc:
    // 0x1887fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_188800:
    // 0x188800: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x188800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_188804:
    // 0x188804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188808:
    // 0x188808: 0x3c01006d  lui         $at, 0x6D
    ctx->pc = 0x188808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)109 << 16));
label_18880c:
    // 0x18880c: 0x2421fba0  addiu       $at, $at, -0x460
    ctx->pc = 0x18880cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294966176));
label_188810:
    // 0x188810: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x188810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_188814:
    // 0x188814: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188818:
    // 0x188818: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_18881c:
    if (ctx->pc == 0x18881Cu) {
        ctx->pc = 0x18881Cu;
            // 0x18881c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x188820u;
        goto label_188820;
    }
    ctx->pc = 0x188818u;
    {
        const bool branch_taken_0x188818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188818) {
            ctx->pc = 0x18881Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188818u;
            // 0x18881c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188830u;
            goto label_188830;
        }
    }
    ctx->pc = 0x188820u;
label_188820:
    // 0x188820: 0x60f809  jalr        $v1
label_188824:
    if (ctx->pc == 0x188824u) {
        ctx->pc = 0x188824u;
            // 0x188824: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x188828u;
        goto label_188828;
    }
    ctx->pc = 0x188820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188828u);
        ctx->pc = 0x188824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188820u;
            // 0x188824: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x188828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188828u; }
            if (ctx->pc != 0x188828u) { return; }
        }
        }
    }
    ctx->pc = 0x188828u;
label_188828:
    // 0x188828: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x188828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18882c:
    // 0x18882c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18882cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188830:
    // 0x188830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188834:
    // 0x188834: 0x3e00008  jr          $ra
label_188838:
    if (ctx->pc == 0x188838u) {
        ctx->pc = 0x188838u;
            // 0x188838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18883Cu;
        goto label_18883c;
    }
    ctx->pc = 0x188834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188834u;
            // 0x188838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18883Cu;
label_18883c:
    // 0x18883c: 0x0  nop
    ctx->pc = 0x18883cu;
    // NOP
}
