#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC208
// Address: 0x1bc208 - 0x1bc248
void sub_001BC208_0x1bc208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC208_0x1bc208");
#endif

    switch (ctx->pc) {
        case 0x1bc220u: goto label_1bc220;
        default: break;
    }

    ctx->pc = 0x1bc208u;

    // 0x1bc208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc20c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bc20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc214: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bc218: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BC218u;
    SET_GPR_U32(ctx, 31, 0x1BC220u);
    ctx->pc = 0x1BC21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC218u;
            // 0x1bc21c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC220u; }
        if (ctx->pc != 0x1BC220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC220u; }
        if (ctx->pc != 0x1BC220u) { return; }
    }
    ctx->pc = 0x1BC220u;
label_1bc220:
    // 0x1bc220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc224: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC224u;
    {
        const bool branch_taken_0x1bc224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc224) {
            ctx->pc = 0x1BC228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC224u;
            // 0x1bc228: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC23Cu;
            goto label_1bc23c;
        }
    }
    ctx->pc = 0x1BC22Cu;
    // 0x1bc22c: 0x90630024  lbu         $v1, 0x24($v1)
    ctx->pc = 0x1bc22cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1bc230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc234: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc23c:
    // 0x1bc23c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc240: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC240u;
            // 0x1bc244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC248u;
}
