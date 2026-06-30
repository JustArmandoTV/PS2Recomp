#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168418
// Address: 0x168418 - 0x168470
void sub_00168418_0x168418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168418_0x168418");
#endif

    switch (ctx->pc) {
        case 0x16843cu: goto label_16843c;
        case 0x168458u: goto label_168458;
        default: break;
    }

    ctx->pc = 0x168418u;

    // 0x168418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16841c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168424: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x168424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x168428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16842c: 0x24843388  addiu       $a0, $a0, 0x3388
    ctx->pc = 0x16842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13192));
    // 0x168430: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x168430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168434: 0xc05e7c4  jal         func_179F10
    ctx->pc = 0x168434u;
    SET_GPR_U32(ctx, 31, 0x16843Cu);
    ctx->pc = 0x168438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168434u;
            // 0x168438: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179F10u;
    if (runtime->hasFunction(0x179F10u)) {
        auto targetFn = runtime->lookupFunction(0x179F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16843Cu; }
        if (ctx->pc != 0x16843Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179F10_0x179f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16843Cu; }
        if (ctx->pc != 0x16843Cu) { return; }
    }
    ctx->pc = 0x16843Cu;
label_16843c:
    // 0x16843c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16843Cu;
    {
        const bool branch_taken_0x16843c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x168440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16843Cu;
            // 0x168440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16843c) {
            ctx->pc = 0x168450u;
            goto label_168450;
        }
    }
    ctx->pc = 0x168444u;
    // 0x168444: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168444u;
    {
        const bool branch_taken_0x168444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168444u;
            // 0x168448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168444) {
            ctx->pc = 0x16845Cu;
            goto label_16845c;
        }
    }
    ctx->pc = 0x16844Cu;
    // 0x16844c: 0x0  nop
    ctx->pc = 0x16844cu;
    // NOP
label_168450:
    // 0x168450: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x168450u;
    SET_GPR_U32(ctx, 31, 0x168458u);
    ctx->pc = 0x168454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168450u;
            // 0x168454: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168458u; }
        if (ctx->pc != 0x168458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168458u; }
        if (ctx->pc != 0x168458u) { return; }
    }
    ctx->pc = 0x168458u;
label_168458:
    // 0x168458: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x168458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16845c:
    // 0x16845c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16845cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168460: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x168460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168464: 0x3e00008  jr          $ra
    ctx->pc = 0x168464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168464u;
            // 0x168468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16846Cu;
    // 0x16846c: 0x0  nop
    ctx->pc = 0x16846cu;
    // NOP
}
