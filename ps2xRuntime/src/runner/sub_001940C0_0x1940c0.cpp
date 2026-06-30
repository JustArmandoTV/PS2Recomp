#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001940C0
// Address: 0x1940c0 - 0x194120
void sub_001940C0_0x1940c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001940C0_0x1940c0");
#endif

    switch (ctx->pc) {
        case 0x1940dcu: goto label_1940dc;
        default: break;
    }

    ctx->pc = 0x1940c0u;

    // 0x1940c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1940c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1940c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1940c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1940c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1940c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1940ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1940d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1940d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1940d4: 0xc06599a  jal         func_196668
    ctx->pc = 0x1940D4u;
    SET_GPR_U32(ctx, 31, 0x1940DCu);
    ctx->pc = 0x1940D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1940D4u;
            // 0x1940d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940DCu; }
        if (ctx->pc != 0x1940DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940DCu; }
        if (ctx->pc != 0x1940DCu) { return; }
    }
    ctx->pc = 0x1940DCu;
label_1940dc:
    // 0x1940dc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1940dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1940e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1940E0u;
    {
        const bool branch_taken_0x1940e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940E0u;
            // 0x1940e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940e0) {
            ctx->pc = 0x194100u;
            goto label_194100;
        }
    }
    ctx->pc = 0x1940E8u;
    // 0x1940e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1940e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1940ec: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x1940ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
    // 0x1940f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1940f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1940f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1940f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1940f8: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x1940F8u;
    ctx->pc = 0x1940FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1940F8u;
            // 0x1940fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x194100u;
label_194100:
    // 0x194100: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x194100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x194104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x194104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194108: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x194108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x19410c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x194110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x194114: 0x3e00008  jr          $ra
    ctx->pc = 0x194114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194114u;
            // 0x194118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19411Cu;
    // 0x19411c: 0x0  nop
    ctx->pc = 0x19411cu;
    // NOP
}
