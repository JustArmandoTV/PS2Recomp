#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044AE80
// Address: 0x44ae80 - 0x44af20
void sub_0044AE80_0x44ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044AE80_0x44ae80");
#endif

    switch (ctx->pc) {
        case 0x44aeb0u: goto label_44aeb0;
        case 0x44aeccu: goto label_44aecc;
        case 0x44aee8u: goto label_44aee8;
        case 0x44af04u: goto label_44af04;
        default: break;
    }

    ctx->pc = 0x44ae80u;

    // 0x44ae80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44ae84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ae88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44ae8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae90: 0xa0447548  sb          $a0, 0x7548($v0)
    ctx->pc = 0x44ae90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30024), (uint8_t)GPR_U32(ctx, 4));
    // 0x44ae94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44ae98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae9c: 0xa0607550  sb          $zero, 0x7550($v1)
    ctx->pc = 0x44ae9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30032), (uint8_t)GPR_U32(ctx, 0));
    // 0x44aea0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x44aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x44aea4: 0x3c0500c0  lui         $a1, 0xC0
    ctx->pc = 0x44aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
    // 0x44aea8: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x44AEA8u;
    SET_GPR_U32(ctx, 31, 0x44AEB0u);
    ctx->pc = 0x44AEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AEA8u;
            // 0x44aeac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AEB0u; }
        if (ctx->pc != 0x44AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AEB0u; }
        if (ctx->pc != 0x44AEB0u) { return; }
    }
    ctx->pc = 0x44AEB0u;
label_44aeb0:
    // 0x44aeb0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x44aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x44aeb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44aeb8: 0xac827558  sw          $v0, 0x7558($a0)
    ctx->pc = 0x44aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30040), GPR_U32(ctx, 2));
    // 0x44aebc: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x44aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x44aec0: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x44aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x44aec4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x44AEC4u;
    SET_GPR_U32(ctx, 31, 0x44AECCu);
    ctx->pc = 0x44AEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AEC4u;
            // 0x44aec8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AECCu; }
        if (ctx->pc != 0x44AECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AECCu; }
        if (ctx->pc != 0x44AECCu) { return; }
    }
    ctx->pc = 0x44AECCu;
label_44aecc:
    // 0x44aecc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x44aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x44aed0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44aed4: 0xac827578  sw          $v0, 0x7578($a0)
    ctx->pc = 0x44aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30072), GPR_U32(ctx, 2));
    // 0x44aed8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x44aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x44aedc: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x44aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x44aee0: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x44AEE0u;
    SET_GPR_U32(ctx, 31, 0x44AEE8u);
    ctx->pc = 0x44AEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AEE0u;
            // 0x44aee4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AEE8u; }
        if (ctx->pc != 0x44AEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AEE8u; }
        if (ctx->pc != 0x44AEE8u) { return; }
    }
    ctx->pc = 0x44AEE8u;
label_44aee8:
    // 0x44aee8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x44aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x44aeec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44aef0: 0xac82757c  sw          $v0, 0x757C($a0)
    ctx->pc = 0x44aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30076), GPR_U32(ctx, 2));
    // 0x44aef4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x44aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x44aef8: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x44aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x44aefc: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x44AEFCu;
    SET_GPR_U32(ctx, 31, 0x44AF04u);
    ctx->pc = 0x44AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AEFCu;
            // 0x44af00: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AF04u; }
        if (ctx->pc != 0x44AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AF04u; }
        if (ctx->pc != 0x44AF04u) { return; }
    }
    ctx->pc = 0x44AF04u;
label_44af04:
    // 0x44af04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44af04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44af08: 0xac627560  sw          $v0, 0x7560($v1)
    ctx->pc = 0x44af08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 30048), GPR_U32(ctx, 2));
    // 0x44af0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44af0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44af10: 0x3e00008  jr          $ra
    ctx->pc = 0x44AF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AF10u;
            // 0x44af14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AF18u;
    // 0x44af18: 0x0  nop
    ctx->pc = 0x44af18u;
    // NOP
    // 0x44af1c: 0x0  nop
    ctx->pc = 0x44af1cu;
    // NOP
}
