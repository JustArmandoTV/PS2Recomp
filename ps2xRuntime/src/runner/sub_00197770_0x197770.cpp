#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197770
// Address: 0x197770 - 0x1977c0
void sub_00197770_0x197770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197770_0x197770");
#endif

    switch (ctx->pc) {
        case 0x1977acu: goto label_1977ac;
        default: break;
    }

    ctx->pc = 0x197770u;

    // 0x197770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19777c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19777Cu;
    {
        const bool branch_taken_0x19777c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x197780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19777Cu;
            // 0x197780: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19777c) {
            ctx->pc = 0x1977B0u;
            goto label_1977b0;
        }
    }
    ctx->pc = 0x197784u;
    // 0x197784: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x197784u;
    {
        const bool branch_taken_0x197784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197784u;
            // 0x197788: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197784) {
            ctx->pc = 0x1977B0u;
            goto label_1977b0;
        }
    }
    ctx->pc = 0x19778Cu;
    // 0x19778c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197790: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x197790u;
    {
        const bool branch_taken_0x197790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x197794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197790u;
            // 0x197794: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197790) {
            ctx->pc = 0x1977B0u;
            goto label_1977b0;
        }
    }
    ctx->pc = 0x197798u;
    // 0x197798: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197798u;
    {
        const bool branch_taken_0x197798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197798u;
            // 0x19779c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197798) {
            ctx->pc = 0x1977B0u;
            goto label_1977b0;
        }
    }
    ctx->pc = 0x1977A0u;
    // 0x1977a0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1977a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1977a4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1977A4u;
    SET_GPR_U32(ctx, 31, 0x1977ACu);
    ctx->pc = 0x1977A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1977A4u;
            // 0x1977a8: 0x248484d0  addiu       $a0, $a0, -0x7B30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977ACu; }
        if (ctx->pc != 0x1977ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1977ACu; }
        if (ctx->pc != 0x1977ACu) { return; }
    }
    ctx->pc = 0x1977ACu;
label_1977ac:
    // 0x1977ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1977b0:
    // 0x1977b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1977b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1977b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1977b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1977B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1977BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1977B8u;
            // 0x1977bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1977C0u;
}
