#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140330
// Address: 0x140330 - 0x1403d0
void sub_00140330_0x140330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140330_0x140330");
#endif

    switch (ctx->pc) {
        case 0x140358u: goto label_140358;
        case 0x140390u: goto label_140390;
        case 0x1403b8u: goto label_1403b8;
        default: break;
    }

    ctx->pc = 0x140330u;

    // 0x140330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140334: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14033c: 0x8c645804  lw          $a0, 0x5804($v1)
    ctx->pc = 0x14033cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22532)));
    // 0x140340: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140344: 0x8c635850  lw          $v1, 0x5850($v1)
    ctx->pc = 0x140344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22608)));
    // 0x140348: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140348u;
    {
        const bool branch_taken_0x140348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x140348) {
            ctx->pc = 0x140368u;
            goto label_140368;
        }
    }
    ctx->pc = 0x140350u;
    // 0x140350: 0xc04f204  jal         func_13C810
    ctx->pc = 0x140350u;
    SET_GPR_U32(ctx, 31, 0x140358u);
    ctx->pc = 0x13C810u;
    if (runtime->hasFunction(0x13C810u)) {
        auto targetFn = runtime->lookupFunction(0x13C810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140358u; }
        if (ctx->pc != 0x140358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C810_0x13c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140358u; }
        if (ctx->pc != 0x140358u) { return; }
    }
    ctx->pc = 0x140358u;
label_140358:
    // 0x140358: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x140358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14035c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140360: 0x8c845804  lw          $a0, 0x5804($a0)
    ctx->pc = 0x140360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22532)));
    // 0x140364: 0xac645850  sw          $a0, 0x5850($v1)
    ctx->pc = 0x140364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22608), GPR_U32(ctx, 4));
label_140368:
    // 0x140368: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x140368u;
    {
        const bool branch_taken_0x140368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x140368) {
            ctx->pc = 0x1403A0u;
            goto label_1403a0;
        }
    }
    ctx->pc = 0x140370u;
    // 0x140370: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x140374: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140378: 0x8c85584c  lw          $a1, 0x584C($a0)
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22604)));
    // 0x14037c: 0x8c64580c  lw          $a0, 0x580C($v1)
    ctx->pc = 0x14037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22540)));
    // 0x140380: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140380u;
    {
        const bool branch_taken_0x140380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x140380) {
            ctx->pc = 0x1403A0u;
            goto label_1403a0;
        }
    }
    ctx->pc = 0x140388u;
    // 0x140388: 0xc04f220  jal         func_13C880
    ctx->pc = 0x140388u;
    SET_GPR_U32(ctx, 31, 0x140390u);
    ctx->pc = 0x13C880u;
    if (runtime->hasFunction(0x13C880u)) {
        auto targetFn = runtime->lookupFunction(0x13C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140390u; }
        if (ctx->pc != 0x140390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C880_0x13c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140390u; }
        if (ctx->pc != 0x140390u) { return; }
    }
    ctx->pc = 0x140390u;
label_140390:
    // 0x140390: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x140390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x140394: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140398: 0x8c84580c  lw          $a0, 0x580C($a0)
    ctx->pc = 0x140398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22540)));
    // 0x14039c: 0xac64584c  sw          $a0, 0x584C($v1)
    ctx->pc = 0x14039cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22604), GPR_U32(ctx, 4));
label_1403a0:
    // 0x1403a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1403a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1403a4: 0x8c6354dc  lw          $v1, 0x54DC($v1)
    ctx->pc = 0x1403a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21724)));
    // 0x1403a8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1403A8u;
    {
        const bool branch_taken_0x1403a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403a8) {
            ctx->pc = 0x1403ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403A8u;
            // 0x1403ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1403C4u;
            goto label_1403c4;
        }
    }
    ctx->pc = 0x1403B0u;
    // 0x1403b0: 0xc057398  jal         func_15CE60
    ctx->pc = 0x1403B0u;
    SET_GPR_U32(ctx, 31, 0x1403B8u);
    ctx->pc = 0x15CE60u;
    if (runtime->hasFunction(0x15CE60u)) {
        auto targetFn = runtime->lookupFunction(0x15CE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403B8u; }
        if (ctx->pc != 0x1403B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE60_0x15ce60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403B8u; }
        if (ctx->pc != 0x1403B8u) { return; }
    }
    ctx->pc = 0x1403B8u;
label_1403b8:
    // 0x1403b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1403b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1403bc: 0xac6054dc  sw          $zero, 0x54DC($v1)
    ctx->pc = 0x1403bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21724), GPR_U32(ctx, 0));
    // 0x1403c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1403c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1403c4:
    // 0x1403c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1403C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1403C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403C4u;
            // 0x1403c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1403CCu;
    // 0x1403cc: 0x0  nop
    ctx->pc = 0x1403ccu;
    // NOP
}
