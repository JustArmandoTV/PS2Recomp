#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0900
// Address: 0x1c0900 - 0x1c0970
void sub_001C0900_0x1c0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0900_0x1c0900");
#endif

    switch (ctx->pc) {
        case 0x1c092cu: goto label_1c092c;
        case 0x1c093cu: goto label_1c093c;
        case 0x1c0960u: goto label_1c0960;
        default: break;
    }

    ctx->pc = 0x1c0900u;

label_1c0900:
    // 0x1c0900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c090c: 0x805e52c  j           func_1794B0
    ctx->pc = 0x1C090Cu;
    ctx->pc = 0x1C0910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C090Cu;
            // 0x1c0910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1794B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1794B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C0914u;
    // 0x1c0914: 0x0  nop
    ctx->pc = 0x1c0914u;
    // NOP
    // 0x1c0918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c091c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c0924: 0xc05e86a  jal         func_17A1A8
    ctx->pc = 0x1C0924u;
    SET_GPR_U32(ctx, 31, 0x1C092Cu);
    ctx->pc = 0x1C0928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0924u;
            // 0x1c0928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A1A8u;
    if (runtime->hasFunction(0x17A1A8u)) {
        auto targetFn = runtime->lookupFunction(0x17A1A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C092Cu; }
        if (ctx->pc != 0x1C092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A1A8_0x17a1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C092Cu; }
        if (ctx->pc != 0x1C092Cu) { return; }
    }
    ctx->pc = 0x1C092Cu;
label_1c092c:
    // 0x1c092c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C092Cu;
    {
        const bool branch_taken_0x1c092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C092Cu;
            // 0x1c0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c092c) {
            ctx->pc = 0x1C093Cu;
            goto label_1c093c;
        }
    }
    ctx->pc = 0x1C0934u;
    // 0x1c0934: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1C0934u;
    SET_GPR_U32(ctx, 31, 0x1C093Cu);
    ctx->pc = 0x1C0900u;
    goto label_1c0900;
    ctx->pc = 0x1C093Cu;
label_1c093c:
    // 0x1c093c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c093cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0940: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0944: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0944u;
            // 0x1c0948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C094Cu;
    // 0x1c094c: 0x0  nop
    ctx->pc = 0x1c094cu;
    // NOP
    // 0x1c0950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0958: 0xc05e3bc  jal         func_178EF0
    ctx->pc = 0x1C0958u;
    SET_GPR_U32(ctx, 31, 0x1C0960u);
    ctx->pc = 0x178EF0u;
    if (runtime->hasFunction(0x178EF0u)) {
        auto targetFn = runtime->lookupFunction(0x178EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0960u; }
        if (ctx->pc != 0x1C0960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178EF0_0x178ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0960u; }
        if (ctx->pc != 0x1C0960u) { return; }
    }
    ctx->pc = 0x1C0960u;
label_1c0960:
    // 0x1c0960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0964: 0x80723aa  j           func_1C8EA8
    ctx->pc = 0x1C0964u;
    ctx->pc = 0x1C0968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0964u;
            // 0x1c0968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8EA8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C8EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C096Cu;
    // 0x1c096c: 0x0  nop
    ctx->pc = 0x1c096cu;
    // NOP
}
