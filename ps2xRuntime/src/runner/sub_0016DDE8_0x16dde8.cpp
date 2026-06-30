#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DDE8
// Address: 0x16dde8 - 0x16de70
void sub_0016DDE8_0x16dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DDE8_0x16dde8");
#endif

    switch (ctx->pc) {
        case 0x16de04u: goto label_16de04;
        case 0x16de18u: goto label_16de18;
        case 0x16de20u: goto label_16de20;
        case 0x16de3cu: goto label_16de3c;
        default: break;
    }

    ctx->pc = 0x16dde8u;

    // 0x16dde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ddec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16ddf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ddf4: 0x2450aadc  addiu       $s0, $v0, -0x5524
    ctx->pc = 0x16ddf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945500));
    // 0x16ddf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ddfc: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16DDFCu;
    SET_GPR_U32(ctx, 31, 0x16DE04u);
    ctx->pc = 0x16DE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDFCu;
            // 0x16de00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE04u; }
        if (ctx->pc != 0x16DE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE04u; }
        if (ctx->pc != 0x16DE04u) { return; }
    }
    ctx->pc = 0x16DE04u;
label_16de04:
    // 0x16de04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16de08: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DE08u;
    {
        const bool branch_taken_0x16de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16de08) {
            ctx->pc = 0x16DE18u;
            goto label_16de18;
        }
    }
    ctx->pc = 0x16DE10u;
    // 0x16de10: 0xc05b3d6  jal         func_16CF58
    ctx->pc = 0x16DE10u;
    SET_GPR_U32(ctx, 31, 0x16DE18u);
    ctx->pc = 0x16DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE10u;
            // 0x16de14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF58u;
    if (runtime->hasFunction(0x16CF58u)) {
        auto targetFn = runtime->lookupFunction(0x16CF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE18u; }
        if (ctx->pc != 0x16DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF58_0x16cf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE18u; }
        if (ctx->pc != 0x16DE18u) { return; }
    }
    ctx->pc = 0x16DE18u;
label_16de18:
    // 0x16de18: 0xc05b518  jal         func_16D460
    ctx->pc = 0x16DE18u;
    SET_GPR_U32(ctx, 31, 0x16DE20u);
    ctx->pc = 0x16D460u;
    if (runtime->hasFunction(0x16D460u)) {
        auto targetFn = runtime->lookupFunction(0x16D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        if (ctx->pc != 0x16DE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D460_0x16d460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE20u; }
        if (ctx->pc != 0x16DE20u) { return; }
    }
    ctx->pc = 0x16DE20u;
label_16de20:
    // 0x16de20: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16de20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16de24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16de28: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x16DE28u;
    {
        const bool branch_taken_0x16de28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x16DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE28u;
            // 0x16de2c: 0x2470aae0  addiu       $s0, $v1, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de28) {
            ctx->pc = 0x16DE60u;
            goto label_16de60;
        }
    }
    ctx->pc = 0x16DE30u;
    // 0x16de30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16de34: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16DE34u;
    SET_GPR_U32(ctx, 31, 0x16DE3Cu);
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE3Cu; }
        if (ctx->pc != 0x16DE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE3Cu; }
        if (ctx->pc != 0x16DE3Cu) { return; }
    }
    ctx->pc = 0x16DE3Cu;
label_16de3c:
    // 0x16de3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16de40: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16DE40u;
    {
        const bool branch_taken_0x16de40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16de40) {
            ctx->pc = 0x16DE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE40u;
            // 0x16de44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DE64u;
            goto label_16de64;
        }
    }
    ctx->pc = 0x16DE48u;
    // 0x16de48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16de4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16de4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16de50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16de50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16de54: 0x805b3d6  j           func_16CF58
    ctx->pc = 0x16DE54u;
    ctx->pc = 0x16DE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE54u;
            // 0x16de58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF58u;
    if (runtime->hasFunction(0x16CF58u)) {
        auto targetFn = runtime->lookupFunction(0x16CF58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016CF58_0x16cf58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16DE5Cu;
    // 0x16de5c: 0x0  nop
    ctx->pc = 0x16de5cu;
    // NOP
label_16de60:
    // 0x16de60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16de60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16de64:
    // 0x16de64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16de64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16de68: 0x3e00008  jr          $ra
    ctx->pc = 0x16DE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE68u;
            // 0x16de6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DE70u;
}
