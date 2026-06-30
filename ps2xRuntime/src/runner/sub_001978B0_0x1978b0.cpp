#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001978B0
// Address: 0x1978b0 - 0x197908
void sub_001978B0_0x1978b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001978B0_0x1978b0");
#endif

    switch (ctx->pc) {
        case 0x1978d0u: goto label_1978d0;
        case 0x1978dcu: goto label_1978dc;
        default: break;
    }

    ctx->pc = 0x1978b0u;

    // 0x1978b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1978b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1978b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1978b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1978b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1978b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1978bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1978c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1978c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1978c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1978c8: 0xc0679fe  jal         func_19E7F8
    ctx->pc = 0x1978C8u;
    SET_GPR_U32(ctx, 31, 0x1978D0u);
    ctx->pc = 0x1978CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978C8u;
            // 0x1978cc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E7F8u;
    if (runtime->hasFunction(0x19E7F8u)) {
        auto targetFn = runtime->lookupFunction(0x19E7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978D0u; }
        if (ctx->pc != 0x1978D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E7F8_0x19e7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978D0u; }
        if (ctx->pc != 0x1978D0u) { return; }
    }
    ctx->pc = 0x1978D0u;
label_1978d0:
    // 0x1978d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1978d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978d4: 0xc067cf8  jal         func_19F3E0
    ctx->pc = 0x1978D4u;
    SET_GPR_U32(ctx, 31, 0x1978DCu);
    ctx->pc = 0x1978D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978D4u;
            // 0x1978d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3E0u;
    if (runtime->hasFunction(0x19F3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978DCu; }
        if (ctx->pc != 0x1978DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3E0_0x19f3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978DCu; }
        if (ctx->pc != 0x1978DCu) { return; }
    }
    ctx->pc = 0x1978DCu;
label_1978dc:
    // 0x1978dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1978dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1978e0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1978e4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1978e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1978e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1978e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1978ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1978ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1978f0: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x1978f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x1978f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1978f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1978f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1978f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1978fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197900: 0x3e00008  jr          $ra
    ctx->pc = 0x197900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197900u;
            // 0x197904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197908u;
}
