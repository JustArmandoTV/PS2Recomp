#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E700
// Address: 0x29e700 - 0x29e7b0
void sub_0029E700_0x29e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E700_0x29e700");
#endif

    switch (ctx->pc) {
        case 0x29e700u: goto label_29e700;
        case 0x29e704u: goto label_29e704;
        case 0x29e708u: goto label_29e708;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e710u: goto label_29e710;
        case 0x29e714u: goto label_29e714;
        case 0x29e718u: goto label_29e718;
        case 0x29e71cu: goto label_29e71c;
        case 0x29e720u: goto label_29e720;
        case 0x29e724u: goto label_29e724;
        case 0x29e728u: goto label_29e728;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e730u: goto label_29e730;
        case 0x29e734u: goto label_29e734;
        case 0x29e738u: goto label_29e738;
        case 0x29e73cu: goto label_29e73c;
        case 0x29e740u: goto label_29e740;
        case 0x29e744u: goto label_29e744;
        case 0x29e748u: goto label_29e748;
        case 0x29e74cu: goto label_29e74c;
        case 0x29e750u: goto label_29e750;
        case 0x29e754u: goto label_29e754;
        case 0x29e758u: goto label_29e758;
        case 0x29e75cu: goto label_29e75c;
        case 0x29e760u: goto label_29e760;
        case 0x29e764u: goto label_29e764;
        case 0x29e768u: goto label_29e768;
        case 0x29e76cu: goto label_29e76c;
        case 0x29e770u: goto label_29e770;
        case 0x29e774u: goto label_29e774;
        case 0x29e778u: goto label_29e778;
        case 0x29e77cu: goto label_29e77c;
        case 0x29e780u: goto label_29e780;
        case 0x29e784u: goto label_29e784;
        case 0x29e788u: goto label_29e788;
        case 0x29e78cu: goto label_29e78c;
        case 0x29e790u: goto label_29e790;
        case 0x29e794u: goto label_29e794;
        case 0x29e798u: goto label_29e798;
        case 0x29e79cu: goto label_29e79c;
        case 0x29e7a0u: goto label_29e7a0;
        case 0x29e7a4u: goto label_29e7a4;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7acu: goto label_29e7ac;
        default: break;
    }

    ctx->pc = 0x29e700u;

label_29e700:
    // 0x29e700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e704:
    // 0x29e704: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29e704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29e708:
    // 0x29e708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29e70c:
    // 0x29e70c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29e710:
    // 0x29e710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29e714:
    // 0x29e714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29e714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e718:
    // 0x29e718: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29e71c:
    // 0x29e71c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29e71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e720:
    // 0x29e720: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29e720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29e724:
    // 0x29e724: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29e728:
    // 0x29e728: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29e728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29e72c:
    // 0x29e72c: 0x8c4700ac  lw          $a3, 0xAC($v0)
    ctx->pc = 0x29e72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_29e730:
    // 0x29e730: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x29e730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_29e734:
    // 0x29e734: 0x320f809  jalr        $t9
label_29e738:
    if (ctx->pc == 0x29E738u) {
        ctx->pc = 0x29E738u;
            // 0x29e738: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29E73Cu;
        goto label_29e73c;
    }
    ctx->pc = 0x29E734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E73Cu);
        ctx->pc = 0x29E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E734u;
            // 0x29e738: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E73Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E73Cu; }
            if (ctx->pc != 0x29E73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29E73Cu;
label_29e73c:
    // 0x29e73c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x29e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_29e740:
    // 0x29e740: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_29e744:
    // 0x29e744: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x29e744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29e748:
    // 0x29e748: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29e74c:
    // 0x29e74c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e750:
    // 0x29e750: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x29e750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_29e754:
    // 0x29e754: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x29e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_29e758:
    // 0x29e758: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29e758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29e75c:
    // 0x29e75c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x29e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_29e760:
    // 0x29e760: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29e764:
    // 0x29e764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29e768:
    // 0x29e768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e76c:
    // 0x29e76c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x29e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_29e770:
    // 0x29e770: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_29e774:
    // 0x29e774: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29e774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29e778:
    // 0x29e778: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x29e778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_29e77c:
    // 0x29e77c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29e780:
    // 0x29e780: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x29e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_29e784:
    // 0x29e784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29e788:
    // 0x29e788: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x29e788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_29e78c:
    // 0x29e78c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x29e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_29e790:
    // 0x29e790: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29e790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29e794:
    // 0x29e794: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x29e794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_29e798:
    // 0x29e798: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29e79c:
    // 0x29e79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e7a0:
    // 0x29e7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29e7a4:
    // 0x29e7a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29e7a8:
    // 0x29e7a8: 0x3e00008  jr          $ra
label_29e7ac:
    if (ctx->pc == 0x29E7ACu) {
        ctx->pc = 0x29E7ACu;
            // 0x29e7ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x29E7B0u;
        goto label_fallthrough_0x29e7a8;
    }
    ctx->pc = 0x29E7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7A8u;
            // 0x29e7ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29e7a8:
    ctx->pc = 0x29E7B0u;
}
