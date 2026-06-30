#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC0F8
// Address: 0x1bc0f8 - 0x1bc138
void sub_001BC0F8_0x1bc0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC0F8_0x1bc0f8");
#endif

    switch (ctx->pc) {
        case 0x1bc110u: goto label_1bc110;
        default: break;
    }

    ctx->pc = 0x1bc0f8u;

    // 0x1bc0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc0fc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc104: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bc108: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BC108u;
    SET_GPR_U32(ctx, 31, 0x1BC110u);
    ctx->pc = 0x1BC10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC108u;
            // 0x1bc10c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC110u; }
        if (ctx->pc != 0x1BC110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC110u; }
        if (ctx->pc != 0x1BC110u) { return; }
    }
    ctx->pc = 0x1BC110u;
label_1bc110:
    // 0x1bc110: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc114: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC114u;
    {
        const bool branch_taken_0x1bc114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc114) {
            ctx->pc = 0x1BC118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC114u;
            // 0x1bc118: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC12Cu;
            goto label_1bc12c;
        }
    }
    ctx->pc = 0x1BC11Cu;
    // 0x1bc11c: 0x90630021  lbu         $v1, 0x21($v1)
    ctx->pc = 0x1bc11cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x1bc120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc124: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc12c:
    // 0x1bc12c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc130: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC130u;
            // 0x1bc134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC138u;
}
