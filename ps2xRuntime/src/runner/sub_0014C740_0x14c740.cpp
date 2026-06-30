#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C740
// Address: 0x14c740 - 0x14c800
void sub_0014C740_0x14c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C740_0x14c740");
#endif

    switch (ctx->pc) {
        case 0x14c7f4u: goto label_14c7f4;
        default: break;
    }

    ctx->pc = 0x14c740u;

    // 0x14c740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c748: 0x94a80004  lhu         $t0, 0x4($a1)
    ctx->pc = 0x14c748u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14c74c: 0x3103000a  andi        $v1, $t0, 0xA
    ctx->pc = 0x14c74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)10);
    // 0x14c750: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C750u;
    {
        const bool branch_taken_0x14c750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c750) {
            ctx->pc = 0x14C774u;
            goto label_14c774;
        }
    }
    ctx->pc = 0x14C758u;
    // 0x14c758: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14c758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14c75c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x14c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c760: 0x2463585c  addiu       $v1, $v1, 0x585C
    ctx->pc = 0x14c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22620));
    // 0x14c764: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14c768: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c76c: 0x51030022  beql        $t0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14C76Cu;
    {
        const bool branch_taken_0x14c76c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c76c) {
            ctx->pc = 0x14C770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C76Cu;
            // 0x14c770: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C7F8u;
            goto label_14c7f8;
        }
    }
    ctx->pc = 0x14C774u;
label_14c774:
    // 0x14c774: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c778: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x14c778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x14c77c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c780: 0x2442585c  addiu       $v0, $v0, 0x585C
    ctx->pc = 0x14c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22620));
    // 0x14c784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c788: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x14c788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x14c78c: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x14c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x14c790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C790u;
    {
        const bool branch_taken_0x14c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C790u;
            // 0x14c794: 0x7383e  dsrl32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c790) {
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C798u;
    // 0x14c798: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x14c798u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x14c79c: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x14c79cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x14c7a0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x14c7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x14c7a4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x14c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x14c7a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c7ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x14c7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_14c7b0:
    // 0x14c7b0: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x14c7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x14c7b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C7B4u;
    {
        const bool branch_taken_0x14c7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7b4) {
            ctx->pc = 0x14C7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7B4u;
            // 0x14c7b8: 0x8f8581d4  lw          $a1, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C7D8u;
            goto label_14c7d8;
        }
    }
    ctx->pc = 0x14C7BCu;
    // 0x14c7bc: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x14c7bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14c7c0: 0x94a2001e  lhu         $v0, 0x1E($a1)
    ctx->pc = 0x14c7c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x14c7c4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14c7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x14c7c8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x14c7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x14c7cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c7d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x14c7d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14c7d4: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14c7d8:
    // 0x14c7d8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x14c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x14c7dc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14c7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14c7e0: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14c7e4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x14c7e4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x14c7e8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14c7ec: 0xc057540  jal         func_15D500
    ctx->pc = 0x14C7ECu;
    SET_GPR_U32(ctx, 31, 0x14C7F4u);
    ctx->pc = 0x14C7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7ECu;
            // 0x14c7f0: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7F4u; }
        if (ctx->pc != 0x14C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7F4u; }
        if (ctx->pc != 0x14C7F4u) { return; }
    }
    ctx->pc = 0x14C7F4u;
label_14c7f4:
    // 0x14c7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c7f8:
    // 0x14c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x14C7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7F8u;
            // 0x14c7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C800u;
}
