#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001833E0
// Address: 0x1833e0 - 0x1834a8
void sub_001833E0_0x1833e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001833E0_0x1833e0");
#endif

    switch (ctx->pc) {
        case 0x18341cu: goto label_18341c;
        case 0x18346cu: goto label_18346c;
        default: break;
    }

    ctx->pc = 0x1833e0u;

    // 0x1833e0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1833e4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1833e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1833e8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x1833ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1833ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1833f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1833f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1833f4: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1833F4u;
    {
        const bool branch_taken_0x1833f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1833F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833F4u;
            // 0x1833f8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833f4) {
            ctx->pc = 0x18340Cu;
            goto label_18340c;
        }
    }
    ctx->pc = 0x1833FCu;
    // 0x1833fc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1833fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183400: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x183404: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x183404u;
    {
        const bool branch_taken_0x183404 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183404u;
            // 0x183408: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183404) {
            ctx->pc = 0x18349Cu;
            goto label_18349c;
        }
    }
    ctx->pc = 0x18340Cu;
label_18340c:
    // 0x18340c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x183410: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183414: 0xc05e086  jal         func_178218
    ctx->pc = 0x183414u;
    SET_GPR_U32(ctx, 31, 0x18341Cu);
    ctx->pc = 0x183418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183414u;
            // 0x183418: 0x248476d0  addiu       $a0, $a0, 0x76D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178218u;
    if (runtime->hasFunction(0x178218u)) {
        auto targetFn = runtime->lookupFunction(0x178218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18341Cu; }
        if (ctx->pc != 0x18341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178218_0x178218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18341Cu; }
        if (ctx->pc != 0x18341Cu) { return; }
    }
    ctx->pc = 0x18341Cu;
label_18341c:
    // 0x18341c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18341cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x183420: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x183420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x183424: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x183424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183428: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18342c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x18342cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183430: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x183430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183434: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183434u;
    {
        const bool branch_taken_0x183434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183434u;
            // 0x183438: 0x2470cf18  addiu       $s0, $v1, -0x30E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183434) {
            ctx->pc = 0x183448u;
            goto label_183448;
        }
    }
    ctx->pc = 0x18343Cu;
    // 0x18343c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18343Cu;
    {
        const bool branch_taken_0x18343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18343Cu;
            // 0x183440: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18343c) {
            ctx->pc = 0x18344Cu;
            goto label_18344c;
        }
    }
    ctx->pc = 0x183444u;
    // 0x183444: 0x0  nop
    ctx->pc = 0x183444u;
    // NOP
label_183448:
    // 0x183448: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x183448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_18344c:
    // 0x18344c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x183450: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x183454: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183458: 0x9449cf2c  lhu         $t1, -0x30D4($v0)
    ctx->pc = 0x183458u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954796)));
    // 0x18345c: 0x9462cf2e  lhu         $v0, -0x30D2($v1)
    ctx->pc = 0x18345cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294954798)));
    // 0x183460: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x183460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x183464: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x183464u;
    SET_GPR_U32(ctx, 31, 0x18346Cu);
    ctx->pc = 0x183468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183464u;
            // 0x183468: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18346Cu; }
        if (ctx->pc != 0x18346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18346Cu; }
        if (ctx->pc != 0x18346Cu) { return; }
    }
    ctx->pc = 0x18346Cu;
label_18346c:
    // 0x18346c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x18346cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x183470: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x183474: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x183478: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x183478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
    // 0x18347c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18347cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x183480: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x183480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x183484: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x183484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x183488: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x183488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x18348c: 0xac80cf04  sw          $zero, -0x30FC($a0)
    ctx->pc = 0x18348cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954756), GPR_U32(ctx, 0));
    // 0x183490: 0xaca0cf08  sw          $zero, -0x30F8($a1)
    ctx->pc = 0x183490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954760), GPR_U32(ctx, 0));
    // 0x183494: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x183494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x183498: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x183498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18349c:
    // 0x18349c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x18349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1834a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1834A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1834A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834A0u;
            // 0x1834a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1834A8u;
}
