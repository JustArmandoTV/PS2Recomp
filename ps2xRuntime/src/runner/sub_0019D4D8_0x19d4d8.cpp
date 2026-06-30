#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D4D8
// Address: 0x19d4d8 - 0x19d5a8
void sub_0019D4D8_0x19d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D4D8_0x19d4d8");
#endif

    switch (ctx->pc) {
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d508u: goto label_19d508;
        default: break;
    }

    ctx->pc = 0x19d4d8u;

    // 0x19d4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4D8u;
            // 0x19d4dc: 0x8c82004c  lw          $v0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D4E0u;
    // 0x19d4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4E0u;
            // 0x19d4e4: 0x8c82043c  lw          $v0, 0x43C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1084)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D4E8u;
label_19d4e8:
    // 0x19d4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d4f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19d4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d500: 0xc068b1c  jal         func_1A2C70
    ctx->pc = 0x19D500u;
    SET_GPR_U32(ctx, 31, 0x19D508u);
    ctx->pc = 0x19D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D500u;
            // 0x19d504: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C70u;
    if (runtime->hasFunction(0x1A2C70u)) {
        auto targetFn = runtime->lookupFunction(0x1A2C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D508u; }
        if (ctx->pc != 0x19D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C70_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D508u; }
        if (ctx->pc != 0x19D508u) { return; }
    }
    ctx->pc = 0x19D508u;
label_19d508:
    // 0x19d508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d50c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d51c: 0x806821e  j           func_1A0878
    ctx->pc = 0x19D51Cu;
    ctx->pc = 0x19D520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D51Cu;
            // 0x19d520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0878u;
    {
        auto targetFn = runtime->lookupFunction(0x1A0878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D524u;
    // 0x19d524: 0x0  nop
    ctx->pc = 0x19d524u;
    // NOP
    // 0x19d528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d530: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x19d530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19d534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d538: 0x8068b26  j           func_1A2C98
    ctx->pc = 0x19D538u;
    ctx->pc = 0x19D53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D538u;
            // 0x19d53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    {
        auto targetFn = runtime->lookupFunction(0x1A2C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D540u;
    // 0x19d540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d54c: 0x8067556  j           func_19D558
    ctx->pc = 0x19D54Cu;
    ctx->pc = 0x19D550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D54Cu;
            // 0x19d550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D558u;
    goto label_19d558;
    ctx->pc = 0x19D554u;
    // 0x19d554: 0x0  nop
    ctx->pc = 0x19d554u;
    // NOP
label_19d558:
    // 0x19d558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d560: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x19d560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19d564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d568: 0x8068ad4  j           func_1A2B50
    ctx->pc = 0x19D568u;
    ctx->pc = 0x19D56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D568u;
            // 0x19d56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B50u;
    {
        auto targetFn = runtime->lookupFunction(0x1A2B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D570u;
    // 0x19d570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d578: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x19d578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19d57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d580: 0x8068ade  j           func_1A2B78
    ctx->pc = 0x19D580u;
    ctx->pc = 0x19D584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D580u;
            // 0x19d584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B78u;
    {
        auto targetFn = runtime->lookupFunction(0x1A2B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D588u;
    // 0x19d588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d58c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19d58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d594: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x19d598: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19d59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d5a0: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19D5A0u;
    ctx->pc = 0x19D5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5A0u;
            // 0x19d5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D5A8u;
}
